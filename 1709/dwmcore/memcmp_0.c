/*
 * XREFs of memcmp_0 @ 0x1800C5D80
 * Callers:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180004010 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x18000433C (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18004D4E0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180078078 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18007AC48 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x180087384 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetData@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAXAEBULightPSConstantBuffer@@@Z @ 0x1800B83D8 (-SetData@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAXAEBULightPSConstantBuffer@@@Z.c)
 *     ?SetData@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAXAEBULightVSConstantBuffer@@@Z @ 0x1800B8508 (-SetData@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAXAEBULightVSConstantBuffer@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18011B0A4 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18011CCE8 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180129890 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801389A8 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180141638 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z @ 0x180144B28 (-UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x1801497F8 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180170880 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x18018457C (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x180185FFC (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     IsSolidColorTexture @ 0x18018EA74 (IsSolidColorTexture.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
