/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140035AA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
  {
    LOBYTE(v1) = 1;
    return PopFxArmResidentTimer(v1);
  }
  return result;
}
