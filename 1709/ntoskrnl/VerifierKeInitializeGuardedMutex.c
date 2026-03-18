/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x1407B2660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeGuardedMutex)();
}
