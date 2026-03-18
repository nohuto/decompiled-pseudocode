/*
 * XREFs of IoQueueWorkItem @ 0x1400C4120
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x14008F718 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x14008FB9C (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v5; // rax

  IoWorkItem->Type = 0;
  v5 = IopQueueWorkItemProlog((__int64)IoWorkItem, (__int64)WorkerRoutine, (__int64)Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
