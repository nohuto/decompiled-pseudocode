/*
 * XREFs of MmUnmapIoSpace @ 0x14013D150
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x1401658A8 (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x1401842C0 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x140477654 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x14058A404 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140651BE4 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x140717B9C (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1407A2D14 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407A2E58 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A2F4C (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A313C (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1407A33F0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1407CAFD4 (WheapClearPoison.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x140110DA0 (MiMappingHasIoTracker.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiUnmapLargePages @ 0x140268FF4 (MiUnmapLargePages.c)
 *     MiRemovePteTracker @ 0x14026D0BC (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v4; // rbx
  unsigned int HasIoTracker; // r14d
  int v6; // esi
  unsigned __int64 v7; // rdi
  SIZE_T v8; // rsi
  __int64 DemandZeroPte; // rbx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v16; // [rsp+24h] [rbp-F4h]
  int v17; // [rsp+28h] [rbp-F0h]
  int v18; // [rsp+2Ch] [rbp-ECh]
  __int64 v19; // [rsp+30h] [rbp-E8h]
  __int64 v20; // [rsp+38h] [rbp-E0h]

  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_14044B16C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker((unsigned __int64)BaseAddress);
  v6 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)BaseAddress);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes((unsigned __int64)BaseAddress, v4);
  v7 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v6 )
  {
    MiReleasePtes(
      (__int64)&qword_1403CC5E0,
      (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      (unsigned int)v4);
    return;
  }
  if ( (NumberOfBytes & 0x1FFFFF) != 0 )
    goto LABEL_18;
  do
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v8 = NumberOfBytes >> 21;
  v17 = 20;
  if ( !HasIoTracker )
  {
    DemandZeroPte = MiMakeDemandZeroPte(24LL);
    if ( (_DWORD)v8 )
    {
      HasIoTracker = NumberOfBytes >> 21;
      v10 = (unsigned int)v8;
      do
      {
        *(_QWORD *)v7 = DemandZeroPte;
        if ( MiPteInShadowRange(v7) )
          MiWritePteShadow(v11, DemandZeroPte, v12);
        MiInsertLargeTbFlushEntry((__int64)&v15, 1u, v7);
        v7 += 8LL;
        --v10;
      }
      while ( v10 );
    }
    v7 -= 8LL * HasIoTracker;
  }
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_1403CC5E0, v7, v8) != 1 )
  {
    MiFlushTbList((__int64)&v15, v13, v14);
LABEL_18:
    MiUnmapLargePages(BaseAddress, NumberOfBytes, 9LL);
  }
}
