/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x14000EC30
 * Callers:
 *     <none>
 * Callees:
 *     PopPepArmIdleTimer @ 0x14000C2FC (PopPepArmIdleTimer.c)
 *     ExQueueWorkItemEx @ 0x14002197C (ExQueueWorkItemEx.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1LL, 0xFFFFFFFFLL) )
    PopPepArmIdleTimer(1);
}
