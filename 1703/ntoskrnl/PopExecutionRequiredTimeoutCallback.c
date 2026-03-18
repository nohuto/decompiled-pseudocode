/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x1402275C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopCheckExecutionRequiredWorker, DelayedWorkQueue);
}
