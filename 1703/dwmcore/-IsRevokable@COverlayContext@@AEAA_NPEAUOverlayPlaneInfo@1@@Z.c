/*
 * XREFs of ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151974
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180070CA0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151368 (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x18015156C (-IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsRevokable(COverlayContext *this, struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // di

  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 104LL))(*((_QWORD *)a2 + 2))
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 112LL))(*((_QWORD *)a2 + 2))
    || *((_BYTE *)a2 + 168)
    || *((_BYTE *)a2 + 169)
    || COverlayContext::IsFullscreen(this, a2) && *((_BYTE *)a2 + 171) )
  {
    return 0;
  }
  return v4;
}
