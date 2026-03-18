/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180021778
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801EB298 (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1800215E4 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180021D54 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  int PixelFormatColorSpace; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 128);
  *((_DWORD *)this + 44) = (unsigned int)HasAlphaChannel((enum DXGI_FORMAT)*((_DWORD *)this + 36)) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(
                            (enum DXGI_FORMAT)*((_DWORD *)this + 36),
                            (enum DXGI_COLOR_SPACE_TYPE *)this + 45);
  v9 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v12 = 108;
    goto LABEL_10;
  }
  v10 = *((_DWORD *)this + 34);
  *((_DWORD *)this + 46) = v10;
  if ( (unsigned int)(v10 - 1) > 0x1F )
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x71u);
    return v9;
  }
  *((_DWORD *)this + 43) = a4;
  if ( a4 >= *((_DWORD *)this + 35) )
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x77u);
    return v9;
  }
  PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
  v9 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v12 = 125;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PixelFormatColorSpace, v12);
  }
  return v9;
}
