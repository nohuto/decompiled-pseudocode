/*
 * XREFs of ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180165F40
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180166CA8 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 */

__int64 __fastcall COverlayContext::FindLowestPriorityOverlayCandidateIndex(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // esi

  LODWORD(v1) = -1;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v1 = 0LL;
    for ( i = 1; i < *(_DWORD *)(a1 + 24); ++i )
    {
      if ( !COverlayContext::IsHigherProprity(
              *(const struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)a1 + 8LL * i),
              *(const struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)a1 + 8 * v1)) )
        v1 = i;
    }
  }
  return (unsigned int)v1;
}
