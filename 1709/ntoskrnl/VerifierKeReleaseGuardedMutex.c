/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x1407B2780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutex)();
}
