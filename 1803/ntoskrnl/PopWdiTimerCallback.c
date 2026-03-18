/*
 * XREFs of PopWdiTimerCallback @ 0x14027E750
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem(&PopWdiTimerWorker, DelayedWorkQueue);
}
