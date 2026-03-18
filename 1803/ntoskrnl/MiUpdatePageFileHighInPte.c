/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1401A6710
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiConvertContiguousPages @ 0x14004D90C (MiConvertContiguousPages.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiDrainZeroLookasides @ 0x1400B1B20 (MiDrainZeroLookasides.c)
 *     MiClearPageFileHash @ 0x1400C7EC8 (MiClearPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 *     MiLargePageFreeToZero @ 0x1401235B0 (MiLargePageFreeToZero.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiDeleteNonPagedPoolPte @ 0x140137420 (MiDeleteNonPagedPoolPte.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiEnableNewPfns @ 0x140252650 (MiEnableNewPfns.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14025C410 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiClearPfnSlist @ 0x140264F24 (MiClearPfnSlist.c)
 *     MiSetPfnSlist @ 0x1402654E0 (MiSetPfnSlist.c)
 *     MiFreeReservationRun @ 0x1405927B8 (MiFreeReservationRun.c)
 *     MiInitializeBlankPfns @ 0x14089A430 (MiInitializeBlankPfns.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
    v2 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
