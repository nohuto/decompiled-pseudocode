/*
 * XREFs of sub_18010E460 @ 0x18010E460
 * Callers:
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18010E460(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
