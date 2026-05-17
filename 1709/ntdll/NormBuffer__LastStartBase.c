/*
 * XREFs of NormBuffer__LastStartBase @ 0x1800F8F38
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080920 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__LastStartBasePair @ 0x1800F8F60 (NormBuffer__LastStartBasePair.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1800F9674 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a1 + 96) = Normalization__GetFirstDecomposedCharPlane0(
                             *(_QWORD *)(a1 + 112),
                             *(unsigned int *)(a1 + 88));
  return *(unsigned int *)(a1 + 96);
}
