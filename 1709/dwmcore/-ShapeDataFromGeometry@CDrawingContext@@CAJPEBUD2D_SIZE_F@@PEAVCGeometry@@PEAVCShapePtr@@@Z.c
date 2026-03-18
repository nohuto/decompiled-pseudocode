/*
 * XREFs of ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800BFC70
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096CE0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *this,
        CRegionShape **a3)
{
  signed int BoundsSafe; // eax
  unsigned int v7; // ebx
  signed int ShapeData; // eax
  __m128 v10; // [rsp+30h] [rbp-38h] BYREF

  CShapePtr::Release(a3);
  BoundsSafe = CGeometry::GetBoundsSafe(this, a1, &v10);
  v7 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BoundsSafe, 0xD45u);
  }
  else if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v10.m128_f32) )
  {
    ShapeData = CGeometry::GetShapeData(this, a1, (struct CShapePtr *)a3);
    v7 = ShapeData;
    if ( ShapeData < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0xD4Cu);
  }
  return v7;
}
