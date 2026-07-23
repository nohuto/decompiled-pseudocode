/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x18006F5E0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 */

NTSTATUS RtlClearThreadWorkOnBehalfTicket()
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  ThreadInformation = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = ThreadInformation;
  return result;
}
