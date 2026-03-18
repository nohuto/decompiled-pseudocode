/*
 * XREFs of ?DxgkpVSyncPhaseTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000AF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkpVSyncPhaseTimerDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange((volatile __int32 *)DeferredContext + 946, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 3720), DelayedWorkQueue);
}
