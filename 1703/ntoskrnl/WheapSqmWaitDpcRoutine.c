/*
 * XREFs of WheapSqmWaitDpcRoutine @ 0x1402611C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WheapSqmWaitDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&WheapSqmWaitWorkQueueItem, DelayedWorkQueue);
}
