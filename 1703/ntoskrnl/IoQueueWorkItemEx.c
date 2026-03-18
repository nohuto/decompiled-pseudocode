/*
 * XREFs of IoQueueWorkItemEx @ 0x1401019D0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14004BEAC (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  __int64 *v5; // rax

  v5 = (__int64 *)IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
