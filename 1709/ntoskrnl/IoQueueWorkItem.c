/*
 * XREFs of IoQueueWorkItem @ 0x1400219E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x14002346C (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x14002358C (IopQueueWorkItemProlog.c)
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
