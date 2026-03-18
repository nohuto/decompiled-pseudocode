/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x1401FEB90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 */

void __stdcall KeReleaseSpinLockForDpc(PKSPIN_LOCK SpinLock, KIRQL OldIrql)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KxReleaseSpinLock(SpinLock);
    __writecr8(OldIrql);
  }
  else
  {
    KxReleaseSpinLock(SpinLock);
  }
}
