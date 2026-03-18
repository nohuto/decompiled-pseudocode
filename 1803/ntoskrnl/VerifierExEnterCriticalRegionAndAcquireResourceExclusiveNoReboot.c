/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x14082CBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot()
{
  return ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceExclusive)();
}
