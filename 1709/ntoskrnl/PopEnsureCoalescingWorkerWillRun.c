/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x140240F60
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1406FA190 (PopCoalescingNotify.c)
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
