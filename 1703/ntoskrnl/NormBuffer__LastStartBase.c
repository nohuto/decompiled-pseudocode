/*
 * XREFs of NormBuffer__LastStartBase @ 0x14023FB90
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x14023FBC0 (NormBuffer__LastStartBasePair.c)
 *     Normalization__NormalizeCharacter @ 0x1406EE17C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1406ED5DC (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a1 + 96) = Normalization__GetFirstDecomposedCharPlane0(
                             *(_QWORD *)(a1 + 112),
                             *(unsigned int *)(a1 + 88));
  return *(unsigned int *)(a1 + 96);
}
