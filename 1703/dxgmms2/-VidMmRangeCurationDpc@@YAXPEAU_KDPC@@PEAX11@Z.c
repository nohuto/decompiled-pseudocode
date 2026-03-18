/*
 * XREFs of ?VidMmRangeCurationDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00122D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmRangeCurationDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange((volatile __int32 *)DeferredContext + 347, 1) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 1352), DelayedWorkQueue);
}
