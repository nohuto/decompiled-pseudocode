/*
 * XREFs of ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180144750
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066FC4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18011BC30 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180142220 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180143720 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(COverlayContext::OverlayPlaneInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 177) )
  {
    if ( *((_BYTE *)this + 179) )
      return *((_BYTE *)this + 181) == 0;
  }
  return result;
}
