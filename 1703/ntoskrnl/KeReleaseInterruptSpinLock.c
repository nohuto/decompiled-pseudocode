/*
 * XREFs of KeReleaseInterruptSpinLock @ 0x1400277B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall KeReleaseInterruptSpinLock(PKINTERRUPT Interrupt, KIRQL OldIrql)
{
  if ( !Interrupt->SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  KxReleaseSpinLock(Interrupt->ActualLock);
  __writecr8(OldIrql);
}
