/*
 * XREFs of ?CsExitInitiatedReleaseComponentReferences@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0027F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsExitInitiatedReleaseComponentReferences(
        struct _KDPC *Dpc,
        struct _WORK_QUEUE_ITEM *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(DeferredContext + 44, CriticalWorkQueue);
}
