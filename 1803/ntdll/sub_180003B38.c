/*
 * XREFs of sub_180003B38 @ 0x180003B38
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180003B38(__int64 a1)
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
