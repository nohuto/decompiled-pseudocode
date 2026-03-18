/*
 * XREFs of PopSleepStudyTaskClientTimerCallback @ 0x14027DC70
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void PopSleepStudyTaskClientTimerCallback()
{
  ExQueueWorkItem(&PopSleepStudyTaskClientTimerWorkItem, DelayedWorkQueue);
}
