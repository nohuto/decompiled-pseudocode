/*
 * XREFs of ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800BDAEC
 * Callers:
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x1800278E4 (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOU.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x1800671AC (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x18007CC20 (-HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 *     ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180129890 (-SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z.c)
 *     ?HasRealizationContextChanged@CLinearGradientLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x180146FD0 (-HasRealizationContextChanged@CLinearGradientLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
