/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140016CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(struct _FAST_MUTEX *a1)
{
  ExReleaseFastMutexUnsafe(a1);
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
