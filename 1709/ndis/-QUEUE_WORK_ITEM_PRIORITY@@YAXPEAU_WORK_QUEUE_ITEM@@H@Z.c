/*
 * XREFs of ?QUEUE_WORK_ITEM_PRIORITY@@YAXPEAU_WORK_QUEUE_ITEM@@H@Z @ 0x1C0042110
 * Callers:
 *     ndisWatchdogTimeoutDpc @ 0x1C0079D30 (ndisWatchdogTimeoutDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall QUEUE_WORK_ITEM_PRIORITY(struct _WORK_QUEUE_ITEM *a1, int a2)
{
  ExQueueWorkItem(a1, (WORK_QUEUE_TYPE)(a2 + 32));
}
