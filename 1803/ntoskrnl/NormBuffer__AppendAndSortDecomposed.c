/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x14028DC9C
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x14028E128 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14028E19C (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x14028DD00 (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x14028DE24 (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14028E258 (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x140789524 (Normalization__GetCharacterInfo.c)
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
