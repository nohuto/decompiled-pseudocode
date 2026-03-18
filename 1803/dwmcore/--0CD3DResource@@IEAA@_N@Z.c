/*
 * XREFs of ??0CD3DResource@@IEAA@_N@Z @ 0x180021A80
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18001F4A4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002123C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x18002184C (--0CD3DTexture@@IEAA@_N@Z.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x180043424 (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ??0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C0390 (--0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x1800CC24C (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     <none>
 */

CD3DResource *__fastcall CD3DResource::CD3DResource(CD3DResource *this, char a2)
{
  CD3DResource *result; // rax

  *((_BYTE *)this + 68) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CMILPoolResource::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  result = this;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 69) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return result;
}
