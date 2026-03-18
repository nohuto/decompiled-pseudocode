/*
 * XREFs of ?DesktopPlaneSplitEnabled@COverlayContext@@AEBA_NXZ @ 0x18011BBF8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::DesktopPlaneSplitEnabled(COverlayContext *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 1172) )
  {
    if ( *((_DWORD *)this + 35) > 2u )
      return *((_DWORD *)this + 36) > 2u;
  }
  return result;
}
