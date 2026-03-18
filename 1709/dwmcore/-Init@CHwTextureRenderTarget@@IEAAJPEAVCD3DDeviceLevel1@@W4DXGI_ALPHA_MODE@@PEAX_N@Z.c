/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x1801AD268
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1801AD4C4 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18008CDD4 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18008FDD4 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x1800C0CCC (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801B7AA0 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        void *a4,
        bool a5)
{
  signed int v8; // eax
  int v9; // ebx
  DXGI_FORMAT Format; // ecx
  signed int v11; // eax
  signed int inited; // eax
  signed int v13; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-78h] BYREF
  struct D3D11_TEXTURE2D_DESC v16; // [rsp+40h] [rbp-68h] BYREF

  v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v16, a2, a4, a5, 0, (struct CD3DVidMemOnlyTexture **)this + 28);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x195u);
  }
  else
  {
    Format = v16.Format;
    *((_DWORD *)this + 2) = v16.Width;
    *((_DWORD *)this + 3) = v16.Height;
    v11 = PixelFormatInfoFromDXGIFormatAndAlphaMode(Format, a3, (struct PixelFormatInfo *)v15);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x19Cu);
    }
    else
    {
      inited = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, (const struct PixelFormatInfo *)v15);
      v9 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x19Eu);
      }
      else
      {
        v13 = CBaseRenderTarget::Init(this);
        v9 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1A0u);
        else
          *((_QWORD *)this + 31) = a4;
      }
    }
  }
  if ( v9 < 0 )
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 23);
  return (unsigned int)v9;
}
