/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1402784F0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x140761620 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
