/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096CE0
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18003D90C (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800BFC70 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *a1, const struct D2D_SIZE_F *a2, __m128 *a3)
{
  signed int ShapeData; // eax
  signed int v5; // ebx
  CRegionShape *v6; // rcx
  __int64 (__fastcall *v7)(CRegionShape *, __m128 *, __int64); // rax
  signed int TightBounds; // eax
  CRegionShape *v10; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h]

  v10 = 0LL;
  v11 = 0;
  ShapeData = CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v10);
  v5 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0x26u);
    goto LABEL_18;
  }
  v6 = v10;
  v5 = -2003292412;
  if ( v10 )
  {
    v7 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, __int64))(*(_QWORD *)v10 + 32LL);
    if ( v7 == CRegionShape::GetTightBounds )
      TightBounds = CRegionShape::GetTightBounds(v10, a3, 0LL);
    else
      TightBounds = v7(v10, a3, 0LL);
    v5 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TightBounds, 0x102u);
    v6 = v10;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x27u);
LABEL_18:
    v6 = v10;
  }
  if ( v5 == -2003304438 )
  {
    v5 = 0;
    v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a3 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v11 && v6 )
    (**(void (__fastcall ***)(CRegionShape *, __int64))v6)(v6, 1LL);
  return (unsigned int)v5;
}
