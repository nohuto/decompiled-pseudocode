/*
 * XREFs of PopUserShutdownDelayDpcCallback @ 0x140278CB0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PopUserShutdownDelayDpcCallback(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&PopUserShutdown, 1) )
    ExQueueWorkItem(&PopUserShutdownDelayWorker, DelayedWorkQueue);
}
