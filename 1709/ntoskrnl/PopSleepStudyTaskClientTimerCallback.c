/*
 * XREFs of PopSleepStudyTaskClientTimerCallback @ 0x1402478C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void PopSleepStudyTaskClientTimerCallback()
{
  ExQueueWorkItem(&PopSleepStudyTaskClientTimerWorkItem, DelayedWorkQueue);
}
