/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x180016B20
 * Callers:
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 */

NTSTATUS __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *ThreadInformation)
{
  NTSTATUS result; // eax

  if ( !ThreadInformation )
    return -1073741811;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *ThreadInformation )
    return 0;
  result = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *ThreadInformation;
  return result;
}
