/*
 * XREFs of ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60
 * Callers:
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x1800059D0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18001A604 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18001E458 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18001EFC4 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18001F7D0 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180025000 (-Release@CHolographicInteropTaskQueue@@UEAAKXZ.c)
 *     ?Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ @ 0x180025270 (-Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18002E1BC (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180034C3C (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x180034CC8 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180040CE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x180042324 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180045378 (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARG.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180056EE4 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180067410 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?Release@CRenderingTechnique@@UEAAKXZ @ 0x180071A40 (-Release@CRenderingTechnique@@UEAAKXZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800898AC (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180089D0C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18008B040 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180094A78 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800978F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009B8F0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18009BF00 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800AD784 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1800B5C90 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800BF658 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 *     ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800BF768 (-Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1E10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C3D28 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C6C24 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800C78B0 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z @ 0x1800C9100 (-Optimize@-$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C9B1C (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800C9BDC (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x1800CC080 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x1800CC1F0 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800CC840 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CCA10 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x1800CD908 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800CDC60 (--_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800CDE4C (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ??$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1800CE214 (--$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800D5FCC (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800D7F68 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800D84E8 (--1CD2DContext@@UEAA@XZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800D9358 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800D9874 (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x1800DA270 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18013F4D8 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180143580 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18014A004 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014AA6C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x180152314 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015A828 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18016CDC4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180171848 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x18017C7C0 (--_GCSuperWetInkScribble@@UEAAPEAXI@Z.c)
 *     ?Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStrokeRenderState@@PEAVCGenericInkTipPointSource@@IPEAUIDCompositionDirectInkFactoryPartner@@PEAPEAV1@@Z @ 0x18017C91C (-Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStro.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A88B4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B0650 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1801D87C0 (-BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801DDF80 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1801DE390 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801E7B44 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801E80F8 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x1801EE294 (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 *     ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE6A8 (-CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801F0700 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801F450C (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1801FBBB8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ @ 0x180218834 (-InternalRelease@-$ComPtr@VCWARPCallbackRenderer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18021B438 (-Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1802224B0 (-Release@CMesh2DEffect@@UEAAKXZ.c)
 * Callees:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180071BF0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x180073160 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180073F00 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009B8F0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18009BF00 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBase::Release(CMILRefCountBase *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CBrushRenderingEffect *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(CBrushRenderingEffect *__hidden, unsigned int))(*(_QWORD *)this + 16LL);
    if ( v3 == CHWDrawListEntry::`scalar deleting destructor' )
    {
      CHWDrawListEntry::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CCommonRenderingEffect::`scalar deleting destructor' )
    {
      CCommonRenderingEffect::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CPrimitiveGroupDrawListGenerator::`scalar deleting destructor' )
    {
      CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CDrawListCache::`scalar deleting destructor' )
    {
      CDrawListCache::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CBrushRenderingEffect::`vector deleting destructor' )
    {
      CBrushRenderingEffect::`vector deleting destructor'(this, 1u);
    }
    else
    {
      v3(this, 1u);
    }
  }
  return v1;
}
