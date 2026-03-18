/*
 * XREFs of ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18000DD28
 * Callers:
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x18000CE70 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DDDE0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DF5DC (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 * Callees:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18000DDC8 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180078864 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x1800C6200 (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CreateFromTexture(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        __int64 a3,
        struct ID3D11Texture2D *a4,
        CHwTextureRenderTarget **a5)
{
  void *v9; // rax
  CHwTextureRenderTarget *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  *a5 = 0LL;
  v9 = CHwTextureRenderTarget::operator new((unsigned __int64)a1);
  if ( v9 )
    v10 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget(v9, a2);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = CHwTextureRenderTarget::Init(v10, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA7u);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA4u);
  }
  return v12;
}
