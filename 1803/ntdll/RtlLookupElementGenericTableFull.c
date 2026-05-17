/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800EFE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180066960 (RtlSplay.c)
 *     sub_180066B64 @ 0x180066B64 (sub_180066B64.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax

  v7 = sub_180066B64(a1, a2, a3);
  *a4 = v7;
  if ( v7 != 1 )
    return 0LL;
  *a1 = (__int64)RtlSplay((_QWORD *)*a3);
  return *a3 + 40LL;
}
