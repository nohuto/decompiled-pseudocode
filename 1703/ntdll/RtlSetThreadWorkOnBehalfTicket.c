/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x180016B20
 * Callers:
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(void **a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( NtCurrentTeb()->SystemReserved1[53] == *a1 )
    return 0LL;
  result = ZwSetInformationThread(-2LL, 44LL, a1);
  if ( (int)result >= 0 )
    NtCurrentTeb()->SystemReserved1[53] = *a1;
  return result;
}
