/*
 * XREFs of ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x180034810
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180161B40 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 */

bool __fastcall CComposition::IsTextureMemoryHeatMapEnabled(CComposition *this)
{
  char v1; // r9

  v1 = 0;
  if ( *((_DWORD *)this + 298) )
    return *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() == 2;
  return v1;
}
