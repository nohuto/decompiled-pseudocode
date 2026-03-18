/*
 * XREFs of ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x1801442A8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEBVOverlayPlaneInfo@1@@Z @ 0x180141588 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEBV-$DynArray@PEAVOverlayPlaneInfo@COverlayContex.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::RectContainsRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  return a1->left <= a2->left && a1->top <= a2->top && a1->right >= a2->right && a1->bottom >= a2->bottom;
}
