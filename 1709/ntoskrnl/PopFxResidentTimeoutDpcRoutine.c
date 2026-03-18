/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x14012BE60
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x14001ADF4 (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x14002197C (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx((ULONG_PTR)&PopFxResidentWorkItem, 1u, -1);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
