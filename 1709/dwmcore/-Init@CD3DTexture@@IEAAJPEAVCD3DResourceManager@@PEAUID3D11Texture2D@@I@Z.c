/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180082270
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801B257C (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x180082094 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800823B4 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  enum DXGI_FORMAT v8; // ecx
  signed int PixelFormatColorSpace; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 128);
  *((_DWORD *)this + 44) = (unsigned int)HasAlphaChannel((enum DXGI_FORMAT)*((_DWORD *)this + 36)) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (enum DXGI_COLOR_SPACE_TYPE *)this + 45);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 108;
    goto LABEL_10;
  }
  v11 = *((_DWORD *)this + 34);
  *((_DWORD *)this + 46) = v11;
  if ( (unsigned int)(v11 - 1) > 0x1F )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x71u);
    return v10;
  }
  *((_DWORD *)this + 43) = a4;
  if ( a4 >= *((_DWORD *)this + 35) )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x77u);
    return v10;
  }
  PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 125;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PixelFormatColorSpace, v13);
  }
  return v10;
}
