/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x1800168CC
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800248F8 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180023B5C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180049500 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18004D014 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID3D11Texture2D *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  enum DXGI_FORMAT v9; // ecx
  int v10; // eax
  int inited; // eax
  int v12; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v15[12]; // [rsp+40h] [rbp-68h] BYREF

  v7 = CD3DVidMemOnlyTexture::CreateFromTexture(a4, 0, 0, 0, a2, this + 26);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1E8u);
    goto LABEL_10;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a4->lpVtbl->GetDesc)(a4, v15);
  v9 = v15[4];
  *((_DWORD *)this + 2) = v15[0];
  *((_DWORD *)this + 3) = v15[1];
  v10 = PixelFormatInfoFromDXGIFormatAndAlphaMode(v9, a3, (struct PixelFormatInfo *)v14);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1F0u);
    goto LABEL_10;
  }
  inited = CHwTextureRenderTarget::InitTargetSurface(
             (CHwTextureRenderTarget *)this,
             (const struct PixelFormatInfo *)v14);
  v8 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1F1u);
    goto LABEL_10;
  }
  v12 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1F3u);
LABEL_10:
    ReleaseInterface<CD3DVidMemOnlyTexture>(this + 21);
  }
  return v8;
}
