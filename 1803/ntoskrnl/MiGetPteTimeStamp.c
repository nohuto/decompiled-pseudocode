/*
 * XREFs of MiGetPteTimeStamp @ 0x1401A650C
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiFlushTbAsNeeded @ 0x140025F90 (MiFlushTbAsNeeded.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiConvertContiguousPages @ 0x14004D90C (MiConvertContiguousPages.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x140053CF0 (MI_IS_RESET_PTE.c)
 *     MiFindPageFileWriteCluster @ 0x14009C6F0 (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiClearPageFileHash @ 0x1400C7EC8 (MiClearPageFileHash.c)
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiDeleteNonPagedPoolPte @ 0x140137420 (MiDeleteNonPagedPoolPte.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiPurgePartitionStandby @ 0x14014FB3C (MiPurgePartitionStandby.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140150850 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x1401509A0 (MiAddToReservationCluster.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiRemoveSpecialPoolRange @ 0x14025C410 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14025FE80 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiAddColdPagesToHotRanges @ 0x140264C70 (MiAddColdPagesToHotRanges.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiFreeReservationRun @ 0x1405927B8 (MiFreeReservationRun.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiGetPteTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32;
}
