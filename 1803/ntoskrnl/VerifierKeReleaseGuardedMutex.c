/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x14081F930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutex)();
}
