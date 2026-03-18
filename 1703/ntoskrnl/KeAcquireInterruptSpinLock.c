/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x140025EB0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int8 SynchronizeIrql; // cl
  KIRQL CurrentIrql; // bl

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  KxAcquireSpinLock(Interrupt->ActualLock);
  return CurrentIrql;
}
