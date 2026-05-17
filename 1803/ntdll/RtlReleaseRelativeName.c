/*
 * XREFs of RtlReleaseRelativeName @ 0x18002E200
 * Callers:
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      ZwClose(*(_QWORD *)(v1 + 8));
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
