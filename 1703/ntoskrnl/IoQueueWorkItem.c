/*
 * XREFs of IoQueueWorkItem @ 0x14002F880
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14004BEAC (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  IoWorkItem->Type = 0;
  v4 = IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItemFromIo(v4);
}
