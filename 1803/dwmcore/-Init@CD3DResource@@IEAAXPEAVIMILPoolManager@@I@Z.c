/*
 * XREFs of ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x180021AD4
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18001F4A4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002123C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1800215E4 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180043258 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C0340 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x1800CC24C (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DResource::Init(CD3DResource *this, struct IMILPoolManager *a2, int a3)
{
  struct IMILPoolManager *v3; // rax
  struct IMILPoolManager **v4; // r9
  unsigned int v5; // eax

  *((_DWORD *)this + 16) = a3;
  v3 = (CD3DResource *)((char *)this + 32);
  *((_BYTE *)this + 69) = 1;
  v4 = (struct IMILPoolManager **)*((_QWORD *)a2 + 5);
  if ( *v4 != (struct IMILPoolManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v3 = (char *)a2 + 32;
  *((_QWORD *)this + 5) = v4;
  *v4 = v3;
  *((_QWORD *)a2 + 5) = v3;
  if ( *((_BYTE *)this + 68) )
    ++*((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v5 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v5 )
    *((_DWORD *)a2 + 13) = v5;
  *((_QWORD *)this + 2) = a2;
}
