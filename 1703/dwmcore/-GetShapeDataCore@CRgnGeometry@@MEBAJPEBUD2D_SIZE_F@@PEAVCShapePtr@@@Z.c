/*
 * XREFs of ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800582B0
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006F2DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CRgnGeometry::GetShapeDataCore(
        CRgnGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v4; // edi
  _QWORD *v6; // rbx
  __int64 v7; // rdx

  v4 = 0;
  v6 = operator new(0x10uLL);
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = &CRegionShape::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 14);
    if ( v7 )
      CRegionShape::BuildFromRects(v6, v7, *((_DWORD *)this + 26) >> 4);
    else
      ReleaseInterface<ID2D1Geometry>(v6 + 1);
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v6;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29u);
  }
  return v4;
}
