/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x14011BE80
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
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
