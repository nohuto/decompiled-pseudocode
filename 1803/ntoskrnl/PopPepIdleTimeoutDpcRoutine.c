/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402797F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140041E6C (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402790BC (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx((ULONG_PTR)&PopPepIdleWorkItem, 1u, -1) )
    PopPepArmIdleTimer(1);
}
