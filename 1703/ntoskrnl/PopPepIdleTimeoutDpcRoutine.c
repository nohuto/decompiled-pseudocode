/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x14022E740
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x14022E24C (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
