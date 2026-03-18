/*
 * XREFs of ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096A10
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034D74 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
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
      CRegionShape::BuildFromRects((__int64)v6, v7, *((_DWORD *)this + 26) >> 4);
    else
      ReleaseInterface<IBitmapLock>(v6 + 1);
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v6;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x29u);
  }
  return v4;
}
