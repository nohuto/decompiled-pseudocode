/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1404A1E30
 * Callers:
 *     PfpPrefetchSharedStart @ 0x140490DA4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1404925DC (PfpPrefetchSharedCleanup.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x1404A1840 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  LOBYTE(CurrentThread[1].Queue) = Queue ^ (Queue ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (Queue & 0x40) != 0;
}
