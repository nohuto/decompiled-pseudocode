/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x14003C8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
