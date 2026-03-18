/*
 * XREFs of ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800248F8
 * Callers:
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800270B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180135BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180196310 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 * Callees:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x1800168CC (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800498D8 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x1800C69B8 (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CreateFromTexture(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        __int64 a3,
        struct ID3D11Texture2D *a4,
        struct CD3DVidMemOnlyTexture ***a5)
{
  void *v9; // rax
  struct CD3DVidMemOnlyTexture **v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  *a5 = 0LL;
  v9 = CHwTextureRenderTarget::operator new((unsigned __int64)a1);
  if ( v9 )
    v10 = (struct CD3DVidMemOnlyTexture **)CHwTextureRenderTarget::CHwTextureRenderTarget(v9, a2);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v10 + 1))(v10);
    v11 = CHwTextureRenderTarget::Init(v10, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA6u);
      (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v10 + 2))(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA3u);
  }
  return v12;
}
