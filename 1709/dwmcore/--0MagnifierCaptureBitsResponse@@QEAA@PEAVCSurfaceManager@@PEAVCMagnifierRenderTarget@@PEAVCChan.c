/*
 * XREFs of ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18014A178
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18007FDF8 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
        MagnifierCaptureBitsResponse *this,
        struct CSurfaceManager *a2,
        struct CMagnifierRenderTarget *a3,
        struct CChannelContext *a4,
        const struct WICRect *a5,
        unsigned __int64 a6)
{
  CaptureBitsResponse::CaptureBitsResponse(
    this,
    a2,
    a4,
    (struct IRenderTargetResource *)(((unsigned __int64)a3 + 64) & -(__int64)(a3 != 0LL)),
    0LL,
    1.0,
    a5,
    DXGI_FORMAT_B8G8R8A8_UNORM,
    0LL);
  *((_QWORD *)this + 18) = a3;
  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  if ( a3 )
    CMILCOMBase::InternalAddRef(a3);
  *((_QWORD *)this + 19) = a6;
  return this;
}
