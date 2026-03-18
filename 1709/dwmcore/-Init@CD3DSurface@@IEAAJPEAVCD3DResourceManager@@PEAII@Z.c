/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18002E158
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180082404 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180021E04 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18002D948 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x18002DF00 (-GetResourceSize@CD3DSurface@@MEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800823B4 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx
  enum DXGI_FORMAT v9; // ecx
  enum DXGI_FORMAT v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(CD3DSurface *); // rax
  int ResourceSize; // eax
  struct CD3DResourceManager *v15; // rax
  struct CD3DResourceManager **v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edx
  int *v19; // r8
  __int64 v20; // rsi
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // ecx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v24; // r8
  unsigned int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+34h] [rbp-1Ch]
  int v29; // [rsp+3Ch] [rbp-14h]
  int v30; // [rsp+40h] [rbp-10h]
  int v31; // [rsp+44h] [rbp-Ch]
  struct IDXGIResource *v32; // [rsp+80h] [rbp+30h] BYREF
  char v33; // [rsp+98h] [rbp+48h] BYREF

  v6 = *((_QWORD *)this + 16);
  v32 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 80LL))(v6, (char *)this + 140);
  if ( a4 >= *((_DWORD *)this + 38) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xD9u);
    goto LABEL_29;
  }
  v9 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 34) = a4;
  *((_DWORD *)this + 46) = (unsigned int)HasAlphaChannel(v9) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v10, (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v26 = 236;
    goto LABEL_38;
  }
  v13 = *(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 48LL);
  if ( v13 == CD3DSurface::GetResourceSize )
    ResourceSize = CD3DSurface::GetResourceSize(this);
  else
    ResourceSize = v13(this);
  *((_DWORD *)this + 16) = ResourceSize;
  *((_BYTE *)this + 69) = 1;
  v15 = (CD3DSurface *)((char *)this + 32);
  v16 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
  if ( *v16 != (struct CD3DResourceManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v15 = (char *)a2 + 32;
  *((_QWORD *)this + 5) = v16;
  *v16 = v15;
  *((_QWORD *)a2 + 5) = v15;
  if ( *((_BYTE *)this + 68) )
    ++*((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v17 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v17 )
    *((_DWORD *)a2 + 13) = v17;
  *((_QWORD *)this + 2) = a2;
  if ( !a3 )
  {
    PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v32);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v26 = 250;
    }
    else
    {
      PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, char *))v32->lpVtbl->GetUsage)(v32, &v33);
      v12 = PixelFormatColorSpace;
      if ( PixelFormatColorSpace >= 0 )
      {
        a3 = &v33;
        goto LABEL_14;
      }
      v26 = 252;
    }
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PixelFormatColorSpace, v26);
    goto LABEL_29;
  }
LABEL_14:
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v18 = *((_DWORD *)this + 38);
    if ( v18 > 1 )
    {
      v27 = *((_DWORD *)this + 39);
      v29 = *((_DWORD *)this + 34);
      v28 = 5LL;
      v30 = 1;
    }
    v19 = &v27;
    if ( v18 <= 1 )
      v19 = 0LL;
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, char *))(**(_QWORD **)(v20 + 648) + 72LL))(
            *(_QWORD *)(v20 + 648),
            *((_QWORD *)this + 16),
            v19,
            (char *)this + 192);
    v22 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x5D7u);
    PixelFormatColorSpace = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v20, v22, 0);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v26 = 276;
      goto LABEL_38;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v23 = *((_DWORD *)this + 38);
    if ( v23 > 1 )
    {
      v27 = *((_DWORD *)this + 39);
      v29 = *((_DWORD *)this + 37);
      v30 = *((_DWORD *)this + 34);
      v28 = 5LL;
      v31 = 1;
    }
    v24 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v27;
    if ( v23 <= 1 )
      v24 = 0LL;
    PixelFormatColorSpace = CD3DDeviceLevel1::CreateShaderResourceView(
                              *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v24,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v26 = 299;
      goto LABEL_38;
    }
  }
LABEL_29:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v32);
  return v12;
}
