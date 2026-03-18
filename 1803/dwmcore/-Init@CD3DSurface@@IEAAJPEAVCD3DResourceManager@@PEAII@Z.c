/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180043258
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180021DA4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x180021AD4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180021D54 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180042A70 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800767AC (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx
  int v9; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // edx
  int *v14; // r8
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v19; // r8
  unsigned int v21; // [rsp+20h] [rbp-30h]
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+34h] [rbp-1Ch]
  int v24; // [rsp+3Ch] [rbp-14h]
  int v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+44h] [rbp-Ch]
  struct IDXGIResource *v27; // [rsp+80h] [rbp+30h] BYREF
  char v28; // [rsp+98h] [rbp+48h] BYREF

  v6 = *((_QWORD *)this + 16);
  v27 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 80LL))(v6, (char *)this + 140);
  if ( a4 >= *((_DWORD *)this + 38) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xD9u);
    goto LABEL_22;
  }
  v9 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 34) = a4;
  *((_DWORD *)this + 46) = (unsigned int)HasAlphaChannel(v9) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(*((_DWORD *)this + 39), (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v11 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 236;
    goto LABEL_29;
  }
  v12 = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 48LL))(this);
  CD3DResource::Init(this, a2, v12);
  if ( !a3 )
  {
    PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v27);
    v11 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v21 = 250;
    }
    else
    {
      PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, char *))v27->lpVtbl->GetUsage)(v27, &v28);
      v11 = PixelFormatColorSpace;
      if ( PixelFormatColorSpace >= 0 )
      {
        a3 = &v28;
        goto LABEL_7;
      }
      v21 = 252;
    }
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PixelFormatColorSpace, v21);
    goto LABEL_22;
  }
LABEL_7:
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v13 = *((_DWORD *)this + 38);
    if ( v13 > 1 )
    {
      v22 = *((_DWORD *)this + 39);
      v24 = *((_DWORD *)this + 34);
      v23 = 5LL;
      v25 = 1;
    }
    v14 = &v22;
    if ( v13 <= 1 )
      v14 = 0LL;
    v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, char *))(**(_QWORD **)(v15 + 648) + 72LL))(
            *(_QWORD *)(v15 + 648),
            *((_QWORD *)this + 16),
            v14,
            (char *)this + 192);
    v17 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x5ECu);
    PixelFormatColorSpace = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v15, v17, 0LL);
    v11 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v21 = 276;
      goto LABEL_29;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v18 = *((_DWORD *)this + 38);
    if ( v18 > 1 )
    {
      v22 = *((_DWORD *)this + 39);
      v24 = *((_DWORD *)this + 37);
      v25 = *((_DWORD *)this + 34);
      v23 = 5LL;
      v26 = 1;
    }
    v19 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v22;
    if ( v18 <= 1 )
      v19 = 0LL;
    PixelFormatColorSpace = CD3DDeviceLevel1::CreateShaderResourceView(
                              *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v19,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v11 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v21 = 299;
      goto LABEL_29;
    }
  }
LABEL_22:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v27);
  return v11;
}
