/*
 * XREFs of PfSnTracingStateDpcRoutine @ 0x1400D2C90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PfSnTracingStateDpcRoutine(
        struct _KDPC *Dpc,
        struct _WORK_QUEUE_ITEM *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(DeferredContext + 4, DelayedWorkQueue);
}
