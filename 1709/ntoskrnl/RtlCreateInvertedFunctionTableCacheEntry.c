/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x140848628
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x1408481FC (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x140015BA4 (RtlRemoveInvertedFunctionTable.c)
 *     RtlpxLookupFunctionTable @ 0x1400D58A0 (RtlpxLookupFunctionTable.c)
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
  if ( a1 >= *(&xmmword_140418020 + 1) && a1 < *(&xmmword_140418020 + 1) + (unsigned int)qword_140418030 )
  {
    v5 = (PVOID)xmmword_140418020;
    v8 = *(_OWORD *)&xmmword_140418020;
    v9 = qword_140418030;
  }
  else
  {
    v5 = RtlpxLookupFunctionTable(a1, (__int64 *)&v8);
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
  xmmword_140418020 = (ULONG_PTR)v5;
  HIDWORD(qword_140418030) = v3;
  *(&xmmword_140418020 + 1) = v6;
  LODWORD(qword_140418030) = a2;
  return RtlRemoveInvertedFunctionTable(a1);
}
