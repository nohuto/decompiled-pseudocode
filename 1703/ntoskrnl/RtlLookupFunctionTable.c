/*
 * XREFs of RtlLookupFunctionTable @ 0x140035EE0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140173EEC (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400E4B40 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(ULONG_PTR a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_1403F7020 + 1) || a1 >= *(&xmmword_1403F7020 + 1) + (unsigned int)qword_1403F7030 )
  {
    result = RtlpxLookupFunctionTable(a1, &v6);
  }
  else
  {
    result = xmmword_1403F7020;
    v6 = *(_OWORD *)&xmmword_1403F7020;
    v7 = qword_1403F7030;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
