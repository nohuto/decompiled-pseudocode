/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18008FD08
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180079534 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18008CDD4 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18008FDD4 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x1800C0CCC (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID3D11Texture2D *a4)
{
  signed int v7; // eax
  unsigned int v8; // ebx
  enum DXGI_FORMAT v9; // ecx
  signed int v10; // eax
  signed int inited; // eax
  signed int v12; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v15[12]; // [rsp+40h] [rbp-68h] BYREF

  v7 = CD3DVidMemOnlyTexture::CreateFromTexture(a4, 0, 0, a2, (struct CD3DVidMemOnlyTexture **)this + 28);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1C1u);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1C9u);
    goto LABEL_10;
  }
  inited = CHwTextureRenderTarget::InitTargetSurface(this, (const struct PixelFormatInfo *)v14);
  v8 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x1CAu);
    goto LABEL_10;
  }
  v12 = CBaseRenderTarget::Init(this);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1CCu);
LABEL_10:
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 23);
  }
  return v8;
}
