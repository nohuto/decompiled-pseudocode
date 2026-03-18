/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1400CC610
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140041E6C (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x140079CB0 (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx((ULONG_PTR)&PopFxResidentWorkItem, 1u, -1);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
