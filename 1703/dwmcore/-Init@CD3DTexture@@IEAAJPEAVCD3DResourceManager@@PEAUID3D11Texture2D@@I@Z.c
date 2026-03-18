/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180045B84
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18019DEB8 (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x180045A74 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C69E0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  enum DXGI_FORMAT v8; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 136);
  *((_DWORD *)this + 46) = (unsigned int)HasAlphaChannel((enum DXGI_FORMAT)*((_DWORD *)this + 38)) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 110;
    goto LABEL_10;
  }
  v11 = *((_DWORD *)this + 36);
  *((_DWORD *)this + 48) = v11;
  if ( (unsigned int)(v11 - 1) > 0x1F )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x73u);
    return v10;
  }
  *((_DWORD *)this + 45) = a4;
  if ( a4 >= *((_DWORD *)this + 37) )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x79u);
    return v10;
  }
  PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 127;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v13);
  }
  return v10;
}
