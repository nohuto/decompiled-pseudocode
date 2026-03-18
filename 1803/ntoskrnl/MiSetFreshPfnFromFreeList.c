/*
 * XREFs of MiSetFreshPfnFromFreeList @ 0x140265454
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiGetPageSlist @ 0x1400AA3F0 (MiGetPageSlist.c)
 *     MiSlistGetFreePage @ 0x1400B82CC (MiSlistGetFreePage.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013A78C (MiCreateUltraThreadContextHelper.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MiReuseStandbyPage @ 0x140266478 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiSetFreshPfnFromFreeList(__int64 a1)
{
  return MiSetOriginalPtePfnFromFreeList(a1 + 16);
}
