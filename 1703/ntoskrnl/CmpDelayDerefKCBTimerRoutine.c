/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x140035630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
