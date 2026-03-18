/*
 * XREFs of ??0CD3DPhysicalSwapChainBuffer@@AEAA@XZ @ 0x1801A8B9C
 * Callers:
 *     ?Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801A8CD0 (-Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800928BC (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DPhysicalSwapChainBuffer *__fastcall CD3DPhysicalSwapChainBuffer::CD3DPhysicalSwapChainBuffer(
        CD3DPhysicalSwapChainBuffer *this)
{
  __int64 v1; // rcx
  CD3DPhysicalSwapChainBuffer *result; // rax

  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)v1 = &CD3DPhysicalSwapChainBuffer::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v1 + 24) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_QWORD *)(v1 + 152) = 0LL;
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_QWORD *)(v1 + 192) = 0LL;
  result = (CD3DPhysicalSwapChainBuffer *)v1;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_BYTE *)(v1 + 208) = 0;
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_WORD *)(v1 + 224) = 0;
  return result;
}
