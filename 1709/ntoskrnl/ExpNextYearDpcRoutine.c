/*
 * XREFs of ExpNextYearDpcRoutine @ 0x140283B50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(
        struct _KDPC *Dpc,
        volatile signed __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement(DeferredContext) == 1 )
    ExQueueWorkItem(&ExpNextYearWorkItem, DelayedWorkQueue);
}
