/*
 * XREFs of sub_18007D0E0 @ 0x18007D0E0
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

__int64 sub_18007D0E0()
{
  __int64 result; // rax
  _DWORD v1[262]; // [rsp+20h] [rbp-418h] BYREF

  dword_18015D050 = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap);
  result = ZwQuerySystemInformation(55LL, v1, 1032LL);
  if ( (int)result >= 0 )
    return 3221225701LL;
  return result;
}
