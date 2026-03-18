/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01D3908
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C00A236C (_SetMagnificationInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  const struct tagRECT *v1; // rcx

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v1 + 1) )
    return 1LL;
  UserSetLastError(87LL);
  return 0LL;
}
