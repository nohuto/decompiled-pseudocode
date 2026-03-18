/*
 * XREFs of ?GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z @ 0x180165654
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetImageSourceForRender(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IImageSource **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CRenderTargetImageSource *v7; // rax
  __int64 v8; // rcx
  struct CRenderTargetImageSource *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v4 = CCachedVisualImage::EnsureRenderTargetBitmap((__int64)this, *(_QWORD *)a2, *((_DWORD *)a2 + 2), &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5FEu);
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v10);
    v6 = CRenderTargetImageSource::Create(*(struct IRenderTarget **)(v11 + 120), 1, &v10);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x602u);
    }
    else
    {
      v7 = v10;
      v10 = 0LL;
      *a3 = v7;
    }
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v10);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v5;
}
