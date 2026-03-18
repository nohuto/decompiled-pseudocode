/*
 * XREFs of RtlLookupFunctionTable @ 0x1400CF450
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1401928C8 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14087C364 (CcInitializeBcbProfiler.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14012EDA0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(ULONG_PTR a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 >= *(&xmmword_140463020 + 1) && a1 < *(&xmmword_140463020 + 1) + (unsigned int)qword_140463030 )
  {
    result = xmmword_140463020;
    v6 = *(_OWORD *)&xmmword_140463020;
    v7 = qword_140463030;
  }
  else
  {
    result = RtlpxLookupFunctionTable(a1, &v6);
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
