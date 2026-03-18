/*
 * XREFs of ?Release@CHwDisplayRenderTarget@@UEAAKXZ @ 0x1800463A0
 * Callers:
 *     ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x18000BB28 (-GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z.c)
 *     ?Release@CHwDisplayRenderTarget@@WKA@EAAKXZ @ 0x1800DE3C0 (-Release@CHwDisplayRenderTarget@@WKA@EAAKXZ.c)
 *     ?Release@CHwDisplayRenderTarget@@WNI@EAAKXZ @ 0x1800DE3D0 (-Release@CHwDisplayRenderTarget@@WNI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Release(CHwDisplayRenderTarget *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 160);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
