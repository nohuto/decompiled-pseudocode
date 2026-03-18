/*
 * XREFs of VerifierKeAcquireSpinLockForDpc @ 0x14081F730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeAcquireSpinLockForDpc)();
}
