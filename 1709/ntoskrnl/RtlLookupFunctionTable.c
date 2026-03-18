/*
 * XREFs of RtlLookupFunctionTable @ 0x14012B9A0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1401687E8 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400D58A0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_140418020 + 1) || a1 >= *(&xmmword_140418020 + 1) + (unsigned int)qword_140418030 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64 *)&v6);
  }
  else
  {
    result = (PVOID)xmmword_140418020;
    v6 = *(_OWORD *)&xmmword_140418020;
    v7 = qword_140418030;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
