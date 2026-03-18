/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x1401686F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&ExpDebuggerWorkItem, DelayedWorkQueue);
}
