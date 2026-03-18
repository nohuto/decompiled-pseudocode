/*
 * XREFs of ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180035270
 * Callers:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x180097F14 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18009B468 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::IsRectangles(CRectanglesShape *this, unsigned int *a2)
{
  if ( a2 )
    *a2 = *((_DWORD *)this + 8);
  return 1;
}
