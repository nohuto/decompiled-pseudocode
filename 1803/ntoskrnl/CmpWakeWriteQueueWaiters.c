/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x14049A7E4
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140633408 (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall CmpWakeWriteQueueWaiters(struct _KEVENT *a1, LONG a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  LONG result; // eax

  if ( a1 )
  {
    do
    {
      Flink = a1[1].Header.WaitListHead.Flink;
      a1[1].Header.LockNV = a2;
      result = KeSetEvent(a1, 0, 0);
      a1 = (struct _KEVENT *)Flink;
    }
    while ( Flink );
  }
  return result;
}
