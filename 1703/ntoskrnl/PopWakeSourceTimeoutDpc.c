/*
 * XREFs of PopWakeSourceTimeoutDpc @ 0x14013DF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopWakeSourceTimeoutDpc(
        struct _WORK_QUEUE_ITEM *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  Dpc->List.Flink = 0LL;
  Dpc->WorkerRoutine = (void (__fastcall *)(void *))PopWakeSourceTimeoutWorker;
  Dpc->Parameter = &Dpc[-2].WorkerRoutine;
  ExQueueWorkItem(Dpc, DelayedWorkQueue);
}
