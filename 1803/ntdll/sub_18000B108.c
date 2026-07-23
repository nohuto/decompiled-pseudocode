/*
 * XREFs of sub_18000B108 @ 0x18000B108
 * Callers:
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 * Callees:
 *     sub_18000B168 @ 0x18000B168 (sub_18000B168.c)
 *     sub_18000D2E0 @ 0x18000D2E0 (sub_18000D2E0.c)
 */

__int64 __fastcall sub_18000B108(__int64 a1, __int64 a2, void *a3)
{
  _DWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx

  v4 = (_DWORD *)((__int64 (*)(void))sub_18000B168)();
  result = sub_18000D2E0(a3);
  v6 = 0LL;
  if ( result )
  {
    if ( *v4 == *(_DWORD *)sub_18000B168(result, 0LL) )
      return (__int64)v4;
    return v6;
  }
  return result;
}
