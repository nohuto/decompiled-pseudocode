/*
 * XREFs of KdAcquireDebuggerLock @ 0x14023E5C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 */

void __fastcall KdAcquireDebuggerLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KdDebuggerLock);
}
