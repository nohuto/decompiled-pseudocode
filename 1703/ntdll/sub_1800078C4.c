/*
 * XREFs of sub_1800078C4 @ 0x1800078C4
 * Callers:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_1800078C4(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax

  v1 = *(void **)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
