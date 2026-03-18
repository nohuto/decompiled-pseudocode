/*
 * XREFs of Normalization__PageLookup @ 0x1406EE9D4
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14023F9A8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14023FB08 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14023FE80 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
