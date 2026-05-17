/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x180025D40
 * Callers:
 *     sub_180025A28 @ 0x180025A28 (sub_180025A28.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
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
