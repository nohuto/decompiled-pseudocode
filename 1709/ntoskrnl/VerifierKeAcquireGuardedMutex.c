/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x1407B24B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutex)();
}
