/*
 * XREFs of VerifierKeReleaseSemaphore @ 0x1408269F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReleaseSemaphore)();
}
