/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01DFCF0
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C01231AC (_SetMagnificationInputTransform.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  __int64 v1; // rdx
  const struct tagRECT *v2; // rcx

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v2 + 1) )
    return 1LL;
  UserSetLastError(87LL, v1);
  return 0LL;
}
