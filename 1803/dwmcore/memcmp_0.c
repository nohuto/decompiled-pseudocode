/*
 * XREFs of memcmp_0 @ 0x1800DD3F5
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180015DAC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?SetData@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAXAEBULightPSConstantBuffer@@@Z @ 0x180017DA4 (-SetData@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAXAEBULightPSConstantBuffer@@@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B220 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x18002B360 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180049404 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180051938 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180057E50 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180079B3C (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009CD20 (-SetAnimatedProperty@CSpriteVisualContent@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B7414 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800B8BE0 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800D0254 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800D038C (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18013FA18 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18013FF90 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x18014B520 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18015AE68 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180165298 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x180172BB8 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180199590 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18019DD14 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B309C (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801B81B8 (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801BA964 (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     IsSolidColorSurface @ 0x1801C6618 (IsSolidColorSurface.c)
 *     ?SetData@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAXAEBV?$array@M$07@std@@@Z @ 0x18021BC40 (-SetData@-$CTypedConstantBuffer@V-$array@M$07@std@@@@QEAAXAEBV-$array@M$07@std@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
