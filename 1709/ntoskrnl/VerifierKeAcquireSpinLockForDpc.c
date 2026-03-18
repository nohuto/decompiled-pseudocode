/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x1407B2580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeAcquireSpinLockForDpc)();
}
