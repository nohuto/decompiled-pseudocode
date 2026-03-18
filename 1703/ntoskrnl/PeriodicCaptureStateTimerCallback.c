/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x140711EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2, NormalWorkQueue);
}
