/*
 * XREFs of KeAcquireSpinLockRaiseToSynch @ 0x1401FEBE0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

KIRQL __stdcall KeAcquireSpinLockRaiseToSynch(PKSPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}
