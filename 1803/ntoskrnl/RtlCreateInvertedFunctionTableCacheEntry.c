/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x14089E270
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x14089DE40 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14012EDA0 (RtlpxLookupFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140160774 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall RtlCreateInvertedFunctionTableCacheEntry(ULONG_PTR a1, int a2)
{
  int v3; // edi
  PVOID v5; // rax
  ULONG_PTR v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  ULONG_PTR v10; // [rsp+50h] [rbp+8h]

  v3 = 0;
  if ( a1 >= *(&xmmword_140463020 + 1) && a1 < *(&xmmword_140463020 + 1) + (unsigned int)qword_140463030 )
  {
    v5 = (PVOID)xmmword_140463020;
    v8 = *(_OWORD *)&xmmword_140463020;
    v9 = qword_140463030;
  }
  else
  {
    v5 = RtlpxLookupFunctionTable(a1, (unsigned __int64)&v8);
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v8 + 1);
    v3 = HIDWORD(v9);
  }
  else
  {
    v6 = v10;
  }
  xmmword_140463020 = (ULONG_PTR)v5;
  HIDWORD(qword_140463030) = v3;
  *(&xmmword_140463020 + 1) = v6;
  LODWORD(qword_140463030) = a2;
  return RtlRemoveInvertedFunctionTable(a1);
}
