/*
 * XREFs of ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003B160 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IntersectRenderedWindowNodes@CDrawingContext@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B1AC (-IntersectRenderedWindowNodes@CDrawingContext@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18013D62C (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18014E320 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180178EAC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplaySet::NeedsDesktopMoves(CDisplaySet *this)
{
  unsigned int v1; // r9d
  char v2; // dl
  unsigned int v3; // r8d
  __int64 v4; // r10
  _BYTE *v5; // rcx

  v1 = *((_DWORD *)this + 18);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 6);
    while ( 1 )
    {
      v5 = *(_BYTE **)(v4 + 8LL * v3);
      if ( v5[309] || v5[308] || v5[208] )
        break;
      if ( ++v3 >= v1 )
        return v2;
    }
    return 1;
  }
  return v2;
}
