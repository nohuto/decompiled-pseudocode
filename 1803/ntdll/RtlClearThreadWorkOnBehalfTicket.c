/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x18006B870
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 */

__int64 RtlClearThreadWorkOnBehalfTicket()
{
  __int64 result; // rax
  void *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !NtCurrentTeb()->SystemReserved1[53] )
    return 0LL;
  result = ZwSetInformationThread(-2LL, 44LL, &v1);
  if ( (int)result >= 0 )
    NtCurrentTeb()->SystemReserved1[53] = v1;
  return result;
}
