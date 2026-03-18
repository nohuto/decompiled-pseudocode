/*
 * XREFs of VerifierKeReleaseInterruptSpinLock @ 0x1407B27C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeReleaseInterruptSpinLock)();
}
