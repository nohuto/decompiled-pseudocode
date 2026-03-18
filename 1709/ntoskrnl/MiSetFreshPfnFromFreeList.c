/*
 * XREFs of MiSetFreshPfnFromFreeList @ 0x14022A964
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiSlistGetFreePage @ 0x1400C807C (MiSlistGetFreePage.c)
 *     MiSwapStackPageNoDpc @ 0x1400CE7A0 (MiSwapStackPageNoDpc.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400CF880 (MiCreateUltraThreadContextHelper.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MiReuseStandbyPage @ 0x14022B5FC (MiReuseStandbyPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiSetFreshPfnFromFreeList(__int64 a1)
{
  return MiSetOriginalPtePfnFromFreeList(a1 + 16);
}
