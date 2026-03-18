/*
 * XREFs of RawScanDeletedList @ 0x140422BA8
 * Callers:
 *     RawMountVolume @ 0x140421790 (RawMountVolume.c)
 *     RawShutdown @ 0x1406E4FF0 (RawShutdown.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExTryToAcquireFastMutex @ 0x140022150 (ExTryToAcquireFastMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x14023A99C (RawCheckForDeleteVolume.c)
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
