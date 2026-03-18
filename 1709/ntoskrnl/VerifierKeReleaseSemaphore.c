/*
 * XREFs of VerifierKeReleaseSemaphore @ 0x1407B9710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReleaseSemaphore)();
}
