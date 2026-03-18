/*
 * XREFs of memcmp_0 @ 0x1800D5390
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180020A00 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180020BB4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BA7E8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BAB58 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800C6B44 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800CBF38 (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180140410 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x180148964 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NXZ @ 0x18015214C (-UpdateHDRMetaData@COverlayContext@@AEAA_NXZ.c)
 *     ?IsForWhitePixelOptimization@CDrawListPrimitiveBuilder@@CA_NAEBVMatrix3x3@@@Z @ 0x18015C33C (-IsForWhitePixelOptimization@CDrawListPrimitiveBuilder@@CA_NAEBVMatrix3x3@@@Z.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x18017D87C (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18017EE28 (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180187D50 (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
