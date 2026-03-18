/*
 * XREFs of ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180167810
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18013E7E0 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180164AC8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180166CA8 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
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
