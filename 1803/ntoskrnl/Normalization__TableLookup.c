/*
 * XREFs of Normalization__TableLookup @ 0x14078A950
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14028DDA0 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14028DEF0 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14028E258 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)(((unsigned __int64)a3 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
}
