/*
 * XREFs of ??0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C0390
 * Callers:
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x18007D5B4 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
 *     ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1800D8D50 (--0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPA.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180021A80 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CSwapChainBase *__fastcall CSwapChainBase::CSwapChainBase(
        CSwapChainBase *this,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // r10d
  __int64 v6; // rdx
  CSwapChainBase *result; // rax

  CD3DResource::CD3DResource(this, 0);
  *(_OWORD *)(v4 + 120) = *(_OWORD *)v3;
  *(_OWORD *)(v4 + 136) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(v4 + 152) = *(_OWORD *)(v3 + 32);
  *(_OWORD *)(v4 + 168) = *(_OWORD *)(v3 + 48);
  *(_QWORD *)(v4 + 184) = *(_QWORD *)(v3 + 64);
  *(_DWORD *)(v4 + 192) = v5;
  *(_QWORD *)(v4 + 200) = v4 + 208;
  *(_DWORD *)(v4 + 208) = v6;
  *(_QWORD *)(v4 + 272) = v4 + 280;
  *(_DWORD *)(v4 + 280) = v6;
  result = (CSwapChainBase *)v4;
  *(_QWORD *)(v4 + 344) = v6;
  *(_QWORD *)(v4 + 352) = v6;
  *(_QWORD *)(v4 + 360) = v6;
  *(_DWORD *)(v4 + 368) = v6;
  *(_QWORD *)(v4 + 384) = v6;
  *(_QWORD *)(v4 + 392) = v6;
  *(_QWORD *)(v4 + 400) = v6;
  *(_DWORD *)(v4 + 408) = v6;
  *(_QWORD *)(v4 + 416) = v6;
  return result;
}
