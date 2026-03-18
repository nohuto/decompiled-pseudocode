/*
 * XREFs of ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18014A72C
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180130F30 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800AFBF0 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
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
    CBitmapOfDeviceBitmaps::AddRef(a3);
  *((_QWORD *)this + 19) = a6;
  return this;
}
