/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x14023F8AC
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x14023FD4C (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14023FDC4 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x14023F910 (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x14023FA34 (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14023FE80 (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x1406ED59C (Normalization__GetCharacterInfo.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  Normalization__GetCharacterInfo(a1[14], a2, &v8, &v9);
  LOBYTE(v4) = v8;
  NormBuffer__SortBeforeSameClass(a1, v4);
  v6 = a1[13];
  if ( v6 != a1[5] )
    return NormBuffer__Insert(a1, v3);
  LOBYTE(v5) = v9;
  LOBYTE(v6) = v8;
  return NormBuffer__AppendEx(a1, v3, v6, v5);
}
