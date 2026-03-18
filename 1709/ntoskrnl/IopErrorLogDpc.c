/*
 * XREFs of IopErrorLogDpc @ 0x1401FC370
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IopErrorLogDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( Dpc )
    ExFreePoolWithTag(Dpc, 0);
  IopErrorLogWorkItem.Parameter = 0LL;
  IopErrorLogWorkItem.List.Flink = 0LL;
  IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
  ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
}
