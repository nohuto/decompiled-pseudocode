/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18000DDC8
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18000DD28 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000DE94 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18007842C (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800C28BC (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID3D11Texture2D *a4)
{
  int inited; // ebx
  enum DXGI_FORMAT v8; // ecx
  unsigned int v10; // eax
  _BYTE v11[16]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v12[12]; // [rsp+40h] [rbp-68h] BYREF

  inited = CD3DVidMemOnlyTexture::CreateFromTexture(a4, 0, 0, a2, this + 31);
  if ( inited < 0 )
  {
    v10 = 463;
    goto LABEL_10;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a4->lpVtbl->GetDesc)(a4, v12);
  v8 = v12[4];
  *((_DWORD *)this + 2) = v12[0];
  *((_DWORD *)this + 3) = v12[1];
  inited = PixelFormatInfoFromDXGIFormatAndAlphaMode(v8, a3, (struct PixelFormatInfo *)v11);
  if ( inited < 0 )
  {
    v10 = 471;
    goto LABEL_10;
  }
  inited = CHwTextureRenderTarget::InitTargetSurface(
             (CHwTextureRenderTarget *)this,
             (const struct PixelFormatInfo *)v11);
  if ( inited < 0 )
  {
    v10 = 472;
    goto LABEL_10;
  }
  inited = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
  if ( inited < 0 )
  {
    v10 = 474;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, v10);
    ReleaseInterface<CD3DSurface>(this + 25);
  }
  return (unsigned int)inited;
}
