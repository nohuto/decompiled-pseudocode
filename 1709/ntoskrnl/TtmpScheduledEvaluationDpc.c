/*
 * XREFs of TtmpScheduledEvaluationDpc @ 0x14024D780
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall TtmpScheduledEvaluationDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchange((volatile __int32 *)DeferredContext + 60, 1) )
    ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 208), DelayedWorkQueue);
}
