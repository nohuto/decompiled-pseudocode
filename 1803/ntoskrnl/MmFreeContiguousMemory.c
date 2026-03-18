/*
 * XREFs of MmFreeContiguousMemory @ 0x1400C9790
 * Callers:
 *     HvlpFreeOverlayPages @ 0x140144CF0 (HvlpFreeOverlayPages.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1402272C4 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140234FC0 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x14081BBFC (ViReleaseDmaAdapter.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140813B18 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int v2; // r10d
  SIZE_T v3; // rsi
  SIZE_T v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+10h]
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h]
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  if ( (((unsigned int)MiGetSystemRegionType(BaseAddress) - 5) & 0xFFFFFFF7) != 0 )
  {
    MiFillPteHierarchy((unsigned __int64)BaseAddress, v6);
    v2 = 4;
    do
      v9 = MI_READ_PTE_LOCK_FREE(v6[v2 - 1]);
    while ( (v9 & 0x80u) == 0LL && v2 );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExFreeLargePool((ULONG_PTR)BaseAddress);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || v7 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, v7);
    v3 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v3 = NumberOfBytes + 4096;
    v4 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v3);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v4);
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9);
    MiFreeContiguousPages(&MiSystemPartition, (v5 >> 12) & 0xFFFFFFFFFLL, v4);
  }
  else
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
}
