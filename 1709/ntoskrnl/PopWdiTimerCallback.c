/*
 * XREFs of PopWdiTimerCallback @ 0x140248650
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem(&PopWdiTimerWorker, DelayedWorkQueue);
}
