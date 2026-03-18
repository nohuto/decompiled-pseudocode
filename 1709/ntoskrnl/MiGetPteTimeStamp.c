/*
 * XREFs of MiGetPteTimeStamp @ 0x14017C6B8
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MI_IS_RESET_PTE @ 0x14005BFC0 (MI_IS_RESET_PTE.c)
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiClearNonPagedPtes @ 0x1400BC1C0 (MiClearNonPagedPtes.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiConvertContiguousPages @ 0x1400CA4C4 (MiConvertContiguousPages.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiLargeFreePageToMdl @ 0x14012630C (MiLargeFreePageToMdl.c)
 *     MiRemoveSpecialPoolRange @ 0x140220644 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiAddToReservationCluster @ 0x140223F60 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MiGetPageForWriteCluster @ 0x140226540 (MiGetPageForWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140226D60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiAddColdPagesToHotRanges @ 0x14022A2C8 (MiAddColdPagesToHotRanges.c)
 *     MiReleaseLargePteMappings @ 0x14022BEB8 (MiReleaseLargePteMappings.c)
 *     MiClearPageFileHash @ 0x140231C5C (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiFreeReservationRun @ 0x1404448E0 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteTimeStamp(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3) >> 32;
}
