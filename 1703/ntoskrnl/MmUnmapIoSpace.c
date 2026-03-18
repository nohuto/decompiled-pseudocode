/*
 * XREFs of MmUnmapIoSpace @ 0x1401238F0
 * Callers:
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x140140494 (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x140165E80 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x14040BD00 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x14055CA4C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x140687628 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x140707068 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407071AC (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407072A0 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140707490 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x140707744 (WmipParseSysIdTable.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMappingHasIoTracker @ 0x140123A48 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiUnmapLargePages @ 0x140221B04 (MiUnmapLargePages.c)
 *     MiRemovePteTracker @ 0x140225B70 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v4; // rbx
  int HasIoTracker; // ebp
  int v6; // r14d
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  SIZE_T v9; // r11
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r10

  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_1403E310C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(BaseAddress);
  v6 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)BaseAddress);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(BaseAddress, v4);
  v7 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  if ( v6 )
  {
    if ( (NumberOfBytes & 0x1FFFFF) != 0 )
      goto LABEL_17;
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v6;
    }
    while ( v6 );
    v9 = NumberOfBytes >> 21;
    if ( !HasIoTracker )
    {
      v10 = 0;
      if ( (_DWORD)v9 )
      {
        v10 = NumberOfBytes >> 21;
        v11 = (unsigned int)v9;
        do
        {
          *(_QWORD *)v7 = v8;
          if ( (unsigned int)MiPteInShadowRange(v7) )
            MiWritePteShadow(v12);
          v7 = v13 + 8;
          --v11;
        }
        while ( v11 );
      }
      v7 -= 8LL * v10;
    }
    if ( (unsigned int)MiInsertCachedPte((__int64)&qword_14036D0A0, (_QWORD *)v7, v9) != 1 )
LABEL_17:
      MiUnmapLargePages(BaseAddress, NumberOfBytes, 9LL);
  }
  else
  {
    MiReleasePtes(
      (__int64)&qword_14036D0A0,
      (_QWORD *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      v4);
  }
}
