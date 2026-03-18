/*
 * XREFs of ObpProcessRemoveObjectDpcWorker @ 0x140226A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ObpProcessRemoveObjectDpcWorker()
{
  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
}
