/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90
 * Callers:
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1800092E4 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCMILMatrix@@.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800095A0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180017568 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001BEA0 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x18005FB64 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180150DB8 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180156750 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z @ 0x18015D1F0 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180162750 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x18016FDD0 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcDeviceTransformDelta@CResampleLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180176C50 (-CalcDeviceTransformDelta@CResampleLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?CalculateCasterUVs@CProjectedShadow@@AEBA?AVMatrix3x3@@PEAVCDrawingContext@@@Z @ 0x1801B3F3C (-CalculateCasterUVs@CProjectedShadow@@AEBA-AVMatrix3x3@@PEAVCDrawingContext@@@Z.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1801C73BC (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801DED94 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1801FB7C4 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180215B00 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3)
{
  float v3; // xmm3_4
  float v5; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4

  v3 = *((float *)this + 3);
  v5 = *((float *)this + 7);
  v7 = *((float *)this + 11);
  v8 = v3;
  *((_BYTE *)this + 64) &= 0xFCu;
  v9 = (float)(v3 * a3) + *((float *)this + 1);
  *(float *)this = (float)(v8 * a2) + *(float *)this;
  v10 = (float)(v5 * a2) + *((float *)this + 4);
  *((float *)this + 1) = v9;
  v11 = (float)(v5 * a3) + *((float *)this + 5);
  *((float *)this + 4) = v10;
  *((float *)this + 5) = v11;
  v12 = *((float *)this + 15);
  v13 = (float)(v7 * a2) + *((float *)this + 8);
  v14 = (float)(v7 * a3) + *((float *)this + 9);
  *((float *)this + 8) = v13;
  v15 = (float)(v12 * a2) + *((float *)this + 12);
  *((float *)this + 9) = v14;
  v16 = (float)(v12 * a3) + *((float *)this + 13);
  *((float *)this + 12) = v15;
  *((float *)this + 13) = v16;
}
