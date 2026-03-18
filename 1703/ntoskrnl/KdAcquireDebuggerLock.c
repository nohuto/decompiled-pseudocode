/*
 * XREFs of KdAcquireDebuggerLock @ 0x1401FB7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KdAcquireDebuggerLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KdDebuggerLock);
}
