/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x140597ECC
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BEE7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall CmpWakeWriteQueueWaiters(struct _KEVENT *a1, LONG a2)
{
  struct _KEVENT *Flink; // rbx
  LONG result; // eax

  if ( a1 )
  {
    do
    {
      Flink = (struct _KEVENT *)a1[1].Header.WaitListHead.Flink;
      a1[1].Header.LockNV = a2;
      result = KeSetEvent(a1, 0, 0);
      a1 = Flink;
    }
    while ( Flink );
  }
  return result;
}
