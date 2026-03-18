/*
 * XREFs of ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180025488 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800254CC (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180073C54 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18012E434 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 *     ?ProcessSegmentCountUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTCOUNTUPDATE@@@Z @ 0x18012E704 (-ProcessSegmentCountUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTCO.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801500EC (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180151CA0 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x180151DE0 (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180152254 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A40A8 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     <none>
 */

FastRegion::CRegion *__fastcall FastRegion::CRegion::CRegion(FastRegion::CRegion *this, const struct tagRECT *a2)
{
  _DWORD *v2; // r8
  LONG right; // r10d
  LONG left; // r11d
  LONG bottom; // ebx
  LONG top; // eax

  v2 = (_DWORD *)((char *)this + 8);
  *(_QWORD *)this = (char *)this + 8;
  right = a2->right;
  left = a2->left;
  bottom = a2->bottom;
  top = a2->top;
  if ( a2->left >= right || top >= bottom )
  {
    *v2 = 0;
  }
  else
  {
    *v2 = 2;
    *((_DWORD *)this + 3) = left;
    *((_DWORD *)this + 4) = right;
    *((_DWORD *)this + 5) = top;
    *((_DWORD *)this + 6) = 16;
    *((_DWORD *)this + 9) = left;
    *((_DWORD *)this + 10) = right;
    *((_DWORD *)this + 7) = bottom;
    *((_DWORD *)this + 8) = 16;
  }
  return this;
}
