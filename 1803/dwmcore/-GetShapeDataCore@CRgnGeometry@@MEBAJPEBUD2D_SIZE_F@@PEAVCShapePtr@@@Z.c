/*
 * XREFs of ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002AC40
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006F99C (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063D14 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 */

__int64 __fastcall CRgnGeometry::GetShapeDataCore(
        CRgnGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  unsigned int v4; // edi
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx

  v4 = 0;
  v6 = (__int64 *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = (__int64)&CRegionShape::`vftable';
    v6[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 18);
    if ( v8 )
      CRegionShape::BuildFromRects(v7, v8, *((_DWORD *)this + 34) >> 4);
    else
      ReleaseInterface<ID2D1Geometry>(v7 + 2);
    CShapePtr::Release(a3);
    *a3 = (CRectanglesShape *)v7;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x29u);
  }
  return v4;
}
