/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870
 * Callers:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800115E8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015C90 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180017DC0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800202C4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800269F8 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180026A68 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180026AD4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800276E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x18002AF50 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18002CFB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x18002D6C0 (--1CAnimation@@UEAA@XZ.c)
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ??_GCBackdropRegion@@UEAAPEAXI@Z @ 0x180030B50 (--_GCBackdropRegion@@UEAAPEAXI@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180031C44 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x1800355D0 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180036460 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003B568 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800462D0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005CD64 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180060C98 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180066F10 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F4C (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F88 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?NotifyListeners@CWeakReferenceBase@@AEAAXXZ @ 0x18006B4FC (-NotifyListeners@CWeakReferenceBase@@AEAAXXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18006E544 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x180076A68 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180082BC4 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180083C30 (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18008A6CC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18008D224 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180099410 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18009B68C (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18009C498 (--1CWindowNode@@MEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009EDDC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC (--1CBaseExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A5118 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800B1318 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1800B6370 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800BBF4C (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800BE1D4 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800BE210 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18011A048 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18011A694 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18011B990 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x18011D1D4 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18011DBD8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x180125DF0 (--1CFrameInfo@@QEAA@XZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180130EF8 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801311C0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180135E48 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013715C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013782C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x18013E498 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180144C4C (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x180147514 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x18014758C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180147CF4 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?ResetToStart@ClipPlaneIterator@@AEAAXXZ @ 0x18014AB3C (-ResetToStart@ClipPlaneIterator@@AEAAXXZ.c)
 *     ?BeginFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801518B0 (-BeginFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180151AA0 (-EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180157BCC (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180164F84 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180165BAC (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180165C70 (-Reset@CFlipChain@@IEAAXXZ.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180165CC0 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x180175B84 (--1CScalar@@MEAA@XZ.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801766E0 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180177B00 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180178340 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1801789D4 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1801798FC (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180179B54 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18017E634 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18017F494 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLe.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180188B30 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1801B331C (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1801C26B4 (--1CHolographicClient@@MEAA@XZ.c)
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x1801C61B0 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v2; // r10
  void *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // r9d
  LPVOID v8; // rax

  v2 = *(void **)a1;
  v4 = *(void **)(a1 + 8);
  if ( v2 != v4 )
  {
    v5 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v5 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v4, v2, (unsigned int)v5);
        if ( *(_QWORD *)a1 )
          HeapFree(WPF::g_processHeap, 0, *(LPVOID *)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v6 = *(_DWORD *)(a1 + 16);
        goto LABEL_8;
      }
      v7 = a2 * *(_DWORD *)(a1 + 24);
      if ( v2 )
      {
        v8 = HeapReAlloc(WPF::g_processHeap, 0, v2, (unsigned int)v5);
        if ( v8 )
        {
LABEL_15:
          *(_QWORD *)a1 = v8;
          v6 = *(_DWORD *)(a1 + 24);
LABEL_8:
          *(_DWORD *)(a1 + 20) = v6;
        }
      }
      else
      {
        if ( !(_DWORD)v5 )
          v7 = 1;
        v8 = HeapAlloc(WPF::g_processHeap, 0, v7);
        if ( v8 )
          goto LABEL_15;
      }
    }
  }
}
