/*
 * XREFs of VerifierKeEnterGuardedRegion @ 0x14081F7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterGuardedRegion)();
}
