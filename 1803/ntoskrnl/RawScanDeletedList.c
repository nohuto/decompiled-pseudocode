/*
 * XREFs of RawScanDeletedList @ 0x1404953E0
 * Callers:
 *     RawMountVolume @ 0x140495738 (RawMountVolume.c)
 *     RawShutdown @ 0x140780C10 (RawShutdown.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExTryToAcquireFastMutex @ 0x14007C620 (ExTryToAcquireFastMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x14014D70C (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    ExAcquireFastMutex(&RawGlobalLock);
    v0 = (__int64 *)RawDismountedQueue;
    while ( v0 != &RawDismountedQueue )
    {
      v1 = v0 - 20;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)v1 + 4) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)v1 + 4);
      }
    }
    KeReleaseGuardedMutex(&RawGlobalLock);
  }
}
