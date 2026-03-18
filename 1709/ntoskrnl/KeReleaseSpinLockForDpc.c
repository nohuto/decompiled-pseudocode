/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x140204F20
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
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
