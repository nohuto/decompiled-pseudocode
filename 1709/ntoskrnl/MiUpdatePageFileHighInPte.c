/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14017C90C
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiDrainZeroLookasides @ 0x140031040 (MiDrainZeroLookasides.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiClearNonPagedPtes @ 0x1400BC1C0 (MiClearNonPagedPtes.c)
 *     MiConvertContiguousPages @ 0x1400CA4C4 (MiConvertContiguousPages.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiLargePageFreeToZero @ 0x14010FA20 (MiLargePageFreeToZero.c)
 *     MiLargeFreePageToMdl @ 0x14012630C (MiLargeFreePageToMdl.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140220644 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearPfnSlist @ 0x14022A478 (MiClearPfnSlist.c)
 *     MiSetPfnSlist @ 0x14022A9D4 (MiSetPfnSlist.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     MiClearPageFileHash @ 0x140231C5C (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiFreeReservationRun @ 0x1404448E0 (MiFreeReservationRun.c)
 *     MiInitializeBlankPfns @ 0x14082AE10 (MiInitializeBlankPfns.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
    v2 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
