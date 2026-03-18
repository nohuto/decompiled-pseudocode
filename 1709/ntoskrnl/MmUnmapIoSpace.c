/*
 * XREFs of MmUnmapIoSpace @ 0x1401186A0
 * Callers:
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14013E9AC (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x140158680 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x140433310 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x140570DF8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405ED510 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x1406B3034 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x140740C54 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140740D98 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140740E8C (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14074107C (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x140741330 (WmipParseSysIdTable.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMappingHasIoTracker @ 0x14011880C (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiUnmapLargePages @ 0x14022E928 (MiUnmapLargePages.c)
 *     MiRemovePteTracker @ 0x140234808 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v4; // rbx
  int HasIoTracker; // ebp
  unsigned __int64 v6; // r9
  int v7; // r14d
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  SIZE_T v10; // r11
  unsigned int v11; // ebx
  __int64 v12; // rbp

  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_14040010C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(BaseAddress);
  v7 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)BaseAddress);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(BaseAddress, v4);
  v8 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  if ( v7 )
  {
    if ( (NumberOfBytes & 0x1FFFFF) != 0 )
      goto LABEL_18;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v7;
    }
    while ( v7 );
    v10 = NumberOfBytes >> 21;
    if ( !HasIoTracker )
    {
      v11 = 0;
      if ( (_DWORD)v10 )
      {
        v11 = NumberOfBytes >> 21;
        v12 = (unsigned int)v10;
        do
        {
          *(_QWORD *)v8 = v9;
          if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v8, v9);
          v8 += 8LL;
          --v12;
        }
        while ( v12 );
      }
      v8 -= 8LL * v11;
    }
    if ( (unsigned int)MiInsertCachedPte((__int64)&qword_140389360, v8, (__int64 *)(unsigned int)v10) != 1 )
LABEL_18:
      MiUnmapLargePages(BaseAddress, NumberOfBytes, 9LL);
  }
  else
  {
    MiReleasePtes(
      (__int64)&qword_140389360,
      (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      v4,
      v6);
  }
}
