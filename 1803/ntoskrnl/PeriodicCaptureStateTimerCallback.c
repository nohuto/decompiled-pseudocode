/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x1407B08C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2, NormalWorkQueue);
}
