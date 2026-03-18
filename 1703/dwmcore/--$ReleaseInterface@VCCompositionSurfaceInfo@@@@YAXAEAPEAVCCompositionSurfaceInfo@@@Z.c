/*
 * XREFs of ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180030FE8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800372E0 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180073580 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800A60A4 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1800AEBE0 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18014A948 (-Restore@CCursorVisual@@QEAAXXZ.c)
 *     ?Show@CCursorVisual@@QEAAXXZ @ 0x18014A9A8 (-Show@CCursorVisual@@QEAAXXZ.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18014D7E0 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180151FC8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CCompositionSurfaceInfo>(CMILCOMBase **a1)
{
  CMILCOMBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILCOMBase::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
