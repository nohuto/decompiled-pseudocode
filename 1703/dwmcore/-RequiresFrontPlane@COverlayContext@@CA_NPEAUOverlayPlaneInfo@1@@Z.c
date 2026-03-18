/*
 * XREFs of ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151FA8
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800716A8 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C83C0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x180131DDC (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18014FA70 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180150374 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180151648 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall COverlayContext::RequiresFrontPlane(struct COverlayContext::OverlayPlaneInfo *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)a1 + 169) )
  {
    if ( *((_BYTE *)a1 + 171) )
      return *((_BYTE *)a1 + 173) == 0;
  }
  return result;
}
