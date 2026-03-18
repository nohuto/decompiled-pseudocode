/*
 * XREFs of ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180003FF0 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019094 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA4C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18008C08C (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180092770 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801A9B5C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180063CE0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CShape::IsAxisAlignedRectangle(CShape *this)
{
  char v1; // bl
  char (__fastcall *v2)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)this + 40LL);
  if ( v2 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(this, &v5);
  }
  else if ( v2 == CRegionShape::IsRectangles )
  {
    IsRectangles = CRegionShape::IsRectangles(this, &v5);
  }
  else
  {
    IsRectangles = v2(this, &v5);
  }
  if ( IsRectangles )
    return v5 == 1;
  return v1;
}
