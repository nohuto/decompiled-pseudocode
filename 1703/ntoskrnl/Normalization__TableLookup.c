/*
 * XREFs of Normalization__TableLookup @ 0x1406EE9EC
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14023F9A8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14023FB08 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14023FE80 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)((a2 & 0x7F) + ((__int64)(a3 - 1) << 7) + *(_QWORD *)(a1 + 40));
}
