/*
 * XREFs of ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18003D90C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096CE0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromGeometry(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        unsigned __int64 a4,
        struct ID2D1Geometry **a5,
        bool *a6)
{
  int BoundsSafe; // eax
  unsigned int v10; // ebx
  int ShapeData; // eax
  __int64 v12; // rdx
  char v13; // al
  CRegionShape *v14; // rcx
  bool v15; // di
  const struct CMILMatrix *v16; // rdx
  __int64 (__fastcall *v17)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  CRegionShape *v20; // [rsp+30h] [rbp-30h] BYREF
  char v21; // [rsp+38h] [rbp-28h]
  float v22[4]; // [rsp+40h] [rbp-20h] BYREF

  *a5 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(a3, a2, v22);
  v10 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsSafe, 0xD6Cu);
    return v10;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v22) )
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xD80u);
    return v10;
  }
  v20 = 0LL;
  v21 = 0;
  ShapeData = CGeometry::GetShapeData(a3, a2, (struct CShapePtr *)&v20);
  v10 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0xD70u);
    goto LABEL_20;
  }
  LOBYTE(v12) = 1;
  v13 = CMILMatrix::Is2DAffine<1>(a4, v12);
  v14 = v20;
  v10 = -2003292412;
  v15 = v13 == 0;
  if ( v20 )
  {
    v16 = (const struct CMILMatrix *)(a4 & -(__int64)(v13 == 0));
    v17 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v20 + 24LL);
    if ( v17 == CRegionShape::GetD2DGeometry )
      D2DGeometry = CRegionShape::GetD2DGeometry(v20, v16, a5);
    else
      D2DGeometry = v17(v20, v16, a5);
    v10 = D2DGeometry;
    if ( D2DGeometry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x12Cu);
    v14 = v20;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xD77u);
LABEL_20:
    CShapePtr::Release((CShapePtr *)&v20);
    return v10;
  }
  if ( a6 )
    *a6 = v15;
  if ( v21 && v14 )
    (**(void (__fastcall ***)(CRegionShape *, __int64))v14)(v14, 1LL);
  return v10;
}
