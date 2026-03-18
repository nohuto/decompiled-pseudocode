/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x140655D30
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1400D2C70 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopEvaluateInputSuppressionAction @ 0x140613CE0 (PopEvaluateInputSuppressionAction.c)
 */

void PopExternalMonitorUpdatedWorker()
{
  if ( PopPlatformAoAc )
  {
    PopAcquirePolicyLock();
    PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
    PopReleasePolicyLock();
    PopEvaluateInputSuppressionAction();
  }
}
