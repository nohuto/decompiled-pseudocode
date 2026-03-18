/*
 * XREFs of ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800192A4
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180019364 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *this,
        struct CShapePtr *a3)
{
  unsigned int v6; // esi
  int ShapeData; // eax
  int v8; // ebp
  int TightBounds; // eax
  char v10; // di
  __int64 v11; // rbx
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  char v14; // [rsp+38h] [rbp-50h]
  char v15[16]; // [rsp+40h] [rbp-48h] BYREF

  CShapePtr::Release(a3);
  v6 = 0;
  v13 = 0LL;
  v14 = 0;
  ShapeData = CGeometry::GetShapeData(this, a1, (struct CShapePtr *)&v13);
  v8 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0xD7Du);
  }
  else
  {
    TightBounds = CShapePtr::GetTightBounds(&v13, v15, 0LL);
    v8 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0xD7Eu);
    }
    else
    {
      v10 = v14;
      v11 = v13;
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v11;
      *((_BYTE *)a3 + 8) = v10;
      v13 = 0LL;
      v14 = 0;
    }
  }
  if ( v8 != -2003304438 )
    v6 = v8;
  CShapePtr::Release((CShapePtr *)&v13);
  return v6;
}
