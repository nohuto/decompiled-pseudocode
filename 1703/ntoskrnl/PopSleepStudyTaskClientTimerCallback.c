/*
 * XREFs of PopSleepStudyTaskClientTimerCallback @ 0x140232690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PopSleepStudyTaskClientTimerCallback()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopSleepStudyTaskClientTimerWorkItem, DelayedWorkQueue);
}
