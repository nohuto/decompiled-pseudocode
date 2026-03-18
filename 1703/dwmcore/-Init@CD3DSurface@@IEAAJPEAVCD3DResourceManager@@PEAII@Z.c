/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180073110
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800C54B8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18004D2D4 (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x180072FD0 (-GetResourceSize@CD3DSurface@@MEBAIXZ.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180073514 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18007C0CC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C69E0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx
  enum DXGI_FORMAT v9; // ecx
  enum DXGI_FORMAT v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // edi
  __int64 (__fastcall *v13)(enum DXGI_FORMAT *); // rax
  int ResourceSize; // eax
  struct CD3DResourceManager **v15; // rdx
  struct CD3DResourceManager *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int *v19; // r8
  __int64 v20; // rdi
  int v21; // eax
  unsigned int v22; // ebx
  struct CD3DResourceManager **v24; // r8
  struct CD3DResourceManager *v25; // rdx
  unsigned int v26; // [rsp+20h] [rbp-30h]
  int v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+34h] [rbp-1Ch]
  int v29; // [rsp+3Ch] [rbp-14h]
  int v30; // [rsp+40h] [rbp-10h]
  struct IDXGIResource *v31; // [rsp+80h] [rbp+30h] BYREF
  char v32; // [rsp+98h] [rbp+48h] BYREF

  v6 = *((_QWORD *)this + 17);
  v31 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 80LL))(v6, (char *)this + 148);
  if ( a4 >= *((_DWORD *)this + 40) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD5u);
    goto LABEL_25;
  }
  v9 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 36) = a4;
  *((_DWORD *)this + 48) = (unsigned int)HasAlphaChannel(v9) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v10, (enum DXGI_COLOR_SPACE_TYPE *)this + 49);
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v26 = 232;
    goto LABEL_36;
  }
  v13 = *(__int64 (__fastcall **)(enum DXGI_FORMAT *))(*(_QWORD *)this + 48LL);
  if ( v13 == CD3DSurface::GetResourceSize )
    ResourceSize = CD3DSurface::GetResourceSize((enum DXGI_FORMAT *)this);
  else
    ResourceSize = v13((enum DXGI_FORMAT *)this);
  *((_DWORD *)this + 18) = ResourceSize;
  *((_BYTE *)this + 77) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    v24 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 11);
    v25 = (CD3DSurface *)((char *)this + 32);
    if ( *v24 != (struct CD3DResourceManager *)((char *)a2 + 80) )
      __fastfail(3u);
    *(_QWORD *)v25 = (char *)a2 + 80;
    *((_QWORD *)this + 5) = v24;
    *v24 = v25;
    *((_QWORD *)a2 + 11) = v25;
    CD3DResourceManager::Use(a2, this);
  }
  else
  {
    v15 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
    v16 = (CD3DSurface *)((char *)this + 32);
    if ( *v15 != (struct CD3DResourceManager *)((char *)a2 + 32) )
      __fastfail(3u);
    *(_QWORD *)v16 = (char *)a2 + 32;
    *((_QWORD *)this + 5) = v15;
    *v15 = v16;
    *((_QWORD *)a2 + 5) = v16;
  }
  if ( *((_BYTE *)this + 76) )
    ++*((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 24) += *((_DWORD *)this + 18);
  v17 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v17 )
    *((_DWORD *)a2 + 25) = v17;
  *((_QWORD *)this + 2) = a2;
  if ( !a3 )
  {
    PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v31);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v26 = 246;
    }
    else
    {
      PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, char *))v31->lpVtbl->GetUsage)(v31, &v32);
      v12 = PixelFormatColorSpace;
      if ( PixelFormatColorSpace >= 0 )
      {
        a3 = &v32;
        goto LABEL_16;
      }
      v26 = 248;
    }
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v26);
    goto LABEL_25;
  }
LABEL_16:
  if ( (*((_BYTE *)this + 180) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v18 = *((_DWORD *)this + 40);
    if ( v18 > 1 )
    {
      v27 = *((_DWORD *)this + 41);
      v29 = *((_DWORD *)this + 36);
      v28 = 5LL;
      v30 = 1;
    }
    v19 = &v27;
    if ( v18 <= 1 )
      v19 = 0LL;
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 128LL);
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, char *))(**(_QWORD **)(v20 + 640) + 72LL))(
            *(_QWORD *)(v20 + 640),
            *((_QWORD *)this + 17),
            v19,
            (char *)this + 200);
    v22 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x62Au);
    PixelFormatColorSpace = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v20, v22, 0LL);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v26 = 272;
      goto LABEL_36;
    }
  }
LABEL_25:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v31);
  return v12;
}
