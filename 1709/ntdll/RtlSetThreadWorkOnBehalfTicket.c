/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x18000CF50
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18000CEA0 (TppCleanupGroupMemberCallbackProlog.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a1 )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, a1);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a1;
  return result;
}
