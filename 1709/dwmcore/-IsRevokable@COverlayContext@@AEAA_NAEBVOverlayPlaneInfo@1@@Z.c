/*
 * XREFs of ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180143B20
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801434D8 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801436D0 (-IsFullscreen@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
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
