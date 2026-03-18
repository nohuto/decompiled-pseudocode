/*
 * XREFs of MiSetFreshPfnFromFreeList @ 0x14017D268
 * Callers:
 *     MiSlistGetFreePage @ 0x14001DFF8 (MiSlistGetFreePage.c)
 *     MiSwapStackPageNoDpc @ 0x14002C2E0 (MiSwapStackPageNoDpc.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiRemoveAnyPage @ 0x1400B91F0 (MiRemoveAnyPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MiReuseStandbyPage @ 0x14021FCFC (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetFreshPfnFromFreeList(__int64 a1, __int64 a2, __int64 a3)
{
  return MiSetOriginalPtePfnFromFreeList(a1 + 16, a2, a3);
}
