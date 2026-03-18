/*
 * XREFs of PopWdiTimerCallback @ 0x140233160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopWdiTimerWorker, DelayedWorkQueue);
}
