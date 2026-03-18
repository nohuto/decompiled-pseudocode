/*
 * XREFs of ?IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000C6B0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000A520 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 */

bool __fastcall CPrimitiveGroup::IsDrawListCacheDirty(
        CPrimitiveGroup *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  __int64 v7; // rax
  bool result; // al

  result = 1;
  if ( !CContent::IsDrawListCacheDirty(this, a2, a3, a4, a5) )
  {
    v7 = *((_QWORD *)this + 20);
    if ( v7 )
    {
      if ( *((_QWORD *)a2 + 3) >= *(_QWORD *)(v7 + 32) )
        return 0;
    }
  }
  return result;
}
