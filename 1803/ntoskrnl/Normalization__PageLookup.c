/*
 * XREFs of Normalization__PageLookup @ 0x14078A938
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14028DDA0 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14028DEF0 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14028E258 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
