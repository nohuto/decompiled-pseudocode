/*
 * XREFs of ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801670B4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180166910 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180166B04 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsRevokable(COverlayContext *this, const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // di

  v4 = 1;
  if ( *((_WORD *)a2 + 88)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 112LL))(*((_QWORD *)a2 + 2))
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 120LL))(*((_QWORD *)a2 + 2))
    || COverlayContext::IsFullscreen(this, a2) && *((_BYTE *)a2 + 179) )
  {
    return 0;
  }
  return v4;
}
