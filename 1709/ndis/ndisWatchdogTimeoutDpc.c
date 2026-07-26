/*
 * XREFs of ndisWatchdogTimeoutDpc @ 0x1C0079D30
 * Callers:
 *     <none>
 * Callees:
 *     ?QUEUE_WORK_ITEM_PRIORITY@@YAXPEAU_WORK_QUEUE_ITEM@@H@Z @ 0x1C0042110 (-QUEUE_WORK_ITEM_PRIORITY@@YAXPEAU_WORK_QUEUE_ITEM@@H@Z.c)
 */

void __fastcall ndisWatchdogTimeoutDpc(
        struct _KDPC *Dpc,
        struct _WORK_QUEUE_ITEM *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QUEUE_WORK_ITEM_PRIORITY(DeferredContext + 4, 7);
}
