/*
 * XREFs of ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002A3E0
 * Callers:
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18002BD38 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x18004CD88 (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOU.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007181C (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x18007B990 (-HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 *     ?HasRealizationContextChanged@CLinearGradientLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x180154070 (-HasRealizationContextChanged@CLinearGradientLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 *     ?SetBounds@CCoRenderContent@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801764B0 (-SetBounds@CCoRenderContent@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
