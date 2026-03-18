/*
 * XREFs of ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180050528 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180162730 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180162890 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

struct CShapePtr *__fastcall CWindowNode::GetDxClipShape(__int64 a1, struct CShapePtr *a2)
{
  __int64 v3; // rdi
  void *v4; // rdi

  *(_QWORD *)a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( *(_QWORD *)(a1 + 912) )
  {
    CGeometry::GetShapeData(*(CGeometry **)(a1 + 912), (const struct D2D_SIZE_F *)(a1 + 128), a2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 976);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 16) )
        v4 = *(void **)(v3 + 8);
      else
        v4 = &CRectanglesShape::sc_emptyShape;
      CShapePtr::Release((CRectanglesShape **)a2);
    }
    else
    {
      CShapePtr::Release((CRectanglesShape **)a2);
      v4 = &CRectanglesShape::sc_emptyShape;
    }
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = v4;
  }
  return a2;
}
