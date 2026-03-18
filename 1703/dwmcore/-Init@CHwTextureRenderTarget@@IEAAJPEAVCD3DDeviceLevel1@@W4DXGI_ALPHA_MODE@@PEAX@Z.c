/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18019BD0C
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18019BF68 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180023B5C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180049500 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18004D014 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800C4FBC (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        __int64 **a2,
        enum DXGI_ALPHA_MODE a3,
        void *a4)
{
  int v7; // eax
  int v8; // ebx
  enum DXGI_FORMAT Format; // ecx
  int v10; // eax
  int inited; // eax
  int v12; // eax
  _BYTE v14[16]; // [rsp+40h] [rbp-78h] BYREF
  struct D3D11_TEXTURE2D_DESC v15; // [rsp+50h] [rbp-68h] BYREF

  v7 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v15, (__int64)a2, a2, a4, 0, 0, this + 26);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1BBu);
  }
  else
  {
    Format = v15.Format;
    *((_DWORD *)this + 2) = v15.Width;
    *((_DWORD *)this + 3) = v15.Height;
    v10 = PixelFormatInfoFromDXGIFormatAndAlphaMode(Format, a3, (struct PixelFormatInfo *)v14);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1C2u);
    }
    else
    {
      inited = CHwTextureRenderTarget::InitTargetSurface(this, (const struct PixelFormatInfo *)v14);
      v8 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1C4u);
      }
      else
      {
        v12 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1C6u);
        else
          this[29] = (struct CD3DVidMemOnlyTexture *)a4;
      }
    }
  }
  if ( v8 < 0 )
    ReleaseInterface<CD3DVidMemOnlyTexture>(this + 21);
  return (unsigned int)v8;
}
