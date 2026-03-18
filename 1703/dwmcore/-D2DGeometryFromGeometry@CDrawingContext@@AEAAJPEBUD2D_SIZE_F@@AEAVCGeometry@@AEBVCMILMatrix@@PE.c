/*
 * XREFs of ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18014BEDC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180006750 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029A4C (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006F1C0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromGeometry(
        CDrawingContext *this,
        struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        unsigned __int64 a4,
        struct ID2D1Geometry **a5,
        bool *a6)
{
  int BoundsSafe; // eax
  unsigned int v10; // ebx
  int ShapeData; // eax
  __int64 v12; // rdx
  bool v13; // bp
  const struct CMILMatrix *v14; // rdx
  __int64 (__fastcall *v15)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  CRectanglesShape *v18; // [rsp+30h] [rbp-58h] BYREF
  char v19; // [rsp+38h] [rbp-50h]
  _BYTE v20[16]; // [rsp+40h] [rbp-48h] BYREF

  *a5 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(a3, a2);
  v10 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsSafe, 0xF3Au);
  }
  else if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v20) )
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xF4Eu);
  }
  else
  {
    v18 = 0LL;
    v19 = 0;
    ShapeData = CGeometry::GetShapeData(a3, a2, (struct CShapePtr *)&v18);
    v10 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0xF3Eu);
    }
    else
    {
      LOBYTE(v12) = 1;
      v13 = (unsigned __int8)CMILMatrix::Is2DAffine<1>(a4, v12) == 0;
      v14 = (const struct CMILMatrix *)(a4 & -(__int64)v13);
      v15 = *(__int64 (__fastcall **)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v18 + 24LL);
      if ( v15 == CRegionShape::GetD2DGeometry )
      {
        D2DGeometry = CRegionShape::GetD2DGeometry(v18, v14, a5);
      }
      else if ( v15 == CRectanglesShape::GetD2DGeometry )
      {
        D2DGeometry = CRectanglesShape::GetD2DGeometry(v18, v14, a5);
      }
      else
      {
        D2DGeometry = v15(v18, v14, a5);
      }
      v10 = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0xF45u);
      }
      else if ( a6 )
      {
        *a6 = v13;
      }
    }
    CShapePtr::Release((CShapePtr *)&v18);
  }
  return v10;
}
