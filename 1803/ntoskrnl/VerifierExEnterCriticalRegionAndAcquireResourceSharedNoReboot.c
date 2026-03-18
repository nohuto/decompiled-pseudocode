/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x14082CC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot()
{
  return ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceShared)();
}
