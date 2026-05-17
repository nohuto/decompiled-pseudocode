/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F2D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180065CB0 (RtlSplay.c)
 *     sub_180065EBC @ 0x180065EBC (sub_180065EBC.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v7; // eax

  v7 = sub_180065EBC(a1, a2, a3);
  *a4 = v7;
  if ( v7 != 1 )
    return 0LL;
  *a1 = RtlSplay(*a3);
  return *a3 + 40;
}
