/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1800F8C64
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1800F9118 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800F9188 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x180080768 (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x1800F8DD4 (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1800F9284 (NormBuffer__SortBeforeSameClass.c)
 */

char __fastcall NormBuffer__AppendAndSortDecomposed(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // bp

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1[14] + 32LL)) << 7)
                + *(_QWORD *)(a1[14] + 40LL)
                - 128) & 0x3F;
  LOBYTE(a2) = v4;
  NormBuffer__SortBeforeSameClass(a1, a2);
  if ( a1[13] == a1[5] )
    return NormBuffer__AppendEx((__int64)a1, v3, v4);
  else
    return NormBuffer__Insert(a1, v3);
}
