/*
 * XREFs of sub_18008DF80 @ 0x18008DF80
 * Callers:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 *     RtlVirtualUnwind @ 0x1800377A0 (RtlVirtualUnwind.c)
 * Callees:
 *     sub_180032340 @ 0x180032340 (sub_180032340.c)
 *     sub_18008DFE0 @ 0x18008DFE0 (sub_18008DFE0.c)
 */

unsigned int *__fastcall sub_18008DF80(__int64 a1, __int64 a2, char *a3)
{
  _DWORD *v4; // rdi
  unsigned int *result; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)((__int64 (*)(void))sub_18008DFE0)();
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = sub_180032340(a3, (__int64)&v7);
  v6 = 0LL;
  if ( result )
  {
    if ( *v4 == *(_DWORD *)sub_18008DFE0(result, v8) )
      return v4;
    return (unsigned int *)v6;
  }
  return result;
}
