/*
 * XREFs of EtwpQueuePerfMemInfoWorkItem @ 0x140254804
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140254310 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpQueuePerfMemInfoWorkItem(struct _LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x57777445u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpPerfMemInfoWork;
    PoolWithTag[1].List.Flink = a1;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  }
}
