/*
 * XREFs of ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180196310
 * Callers:
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801A3ABC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A5064 (-CreateRenderTarget@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800248F8 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
        struct CD3DDeviceLevel1 *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  struct CD3DVidMemOnlyTexture **v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)v13);
  v9 = CHwTextureRenderTarget::CreateFromTexture(a1, a3, a4, a2, v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4FAu);
  }
  else
  {
    v11 = (**(__int64 (__fastcall ***)(struct CD3DVidMemOnlyTexture **, GUID *, _QWORD *))v13[0])(
            v13[0],
            &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
            a5);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4FCu);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)v13);
  return v10;
}
