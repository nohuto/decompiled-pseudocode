/*
 * XREFs of sub_1800078C4 @ 0x1800078C4
 * Callers:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800078C4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 504) )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
