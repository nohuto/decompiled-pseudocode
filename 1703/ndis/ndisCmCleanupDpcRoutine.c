/*
 * XREFs of ndisCmCleanupDpcRoutine @ 0x1C00677C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&ndisCmWorkItemQueued, 1, 0) )
    ExQueueWorkItem(&ndisCmCleanupWorkItem, DelayedWorkQueue);
}
