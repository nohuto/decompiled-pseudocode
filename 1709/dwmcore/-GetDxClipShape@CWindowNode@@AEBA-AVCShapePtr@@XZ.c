/*
 * XREFs of ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800993B0 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180178CC8 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180178E28 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

struct CShapePtr *__fastcall CWindowNode::GetDxClipShape(__int64 a1, struct CShapePtr *a2)
{
  __int64 v3; // rdi
  void *v4; // rdi

  *(_QWORD *)a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( *(_QWORD *)(a1 + 936) )
  {
    CGeometry::GetShapeData(*(CGeometry **)(a1 + 936), (const struct D2D_SIZE_F *)(a1 + 132), a2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 1000);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 16) )
        v4 = *(void **)(v3 + 8);
      else
        v4 = &CRectanglesShape::sc_emptyShape;
      CShapePtr::Release((CRegionShape **)a2);
    }
    else
    {
      CShapePtr::Release((CRegionShape **)a2);
      v4 = &CRectanglesShape::sc_emptyShape;
    }
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = v4;
  }
  return a2;
}
