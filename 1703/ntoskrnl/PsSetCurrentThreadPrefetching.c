/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x14053DF00
 * Callers:
 *     PfpPrefetchSharedCleanup @ 0x140464428 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1404669E8 (PfpPrefetchSharedStart.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14053D960 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14053DA20 (PfSnPopulateReadList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // dl
  BOOLEAN v4; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  v4 = (Queue & 0x40) != 0;
  LOBYTE(CurrentThread[1].Queue) = Queue ^ (Queue ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v4;
}
