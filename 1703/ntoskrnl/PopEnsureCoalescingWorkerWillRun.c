/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x14022DA00
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1406C95B0 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
