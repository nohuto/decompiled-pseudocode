/*
 * XREFs of ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800902E8 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801A9B5C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::GetDxClipShape(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a1 + 856) )
  {
    CGeometry::GetShapeData(*(CGeometry **)(a1 + 856), (const struct D2D_SIZE_F *)(a1 + 132), (CRectanglesShape **)a2);
  }
  else
  {
    CShapePtr::Release((CRectanglesShape **)a2);
    *(_BYTE *)(a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  return a2;
}
