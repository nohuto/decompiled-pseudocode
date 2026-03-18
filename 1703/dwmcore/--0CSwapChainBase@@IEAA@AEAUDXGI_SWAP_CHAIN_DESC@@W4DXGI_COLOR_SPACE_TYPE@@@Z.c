/*
 * XREFs of ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003F52C
 * Callers:
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N@Z @ 0x18003F024 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_.c)
 *     ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@@Z @ 0x1800CEBA0 (--0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Tex.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18004C004 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CSwapChainBase *__fastcall CSwapChainBase::CSwapChainBase(
        CSwapChainBase *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // r10d

  CD3DResource::CD3DResource(this, 0);
  *(_OWORD *)(v4 + 128) = *(_OWORD *)v3;
  *(_OWORD *)(v4 + 144) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(v4 + 160) = *(_OWORD *)(v3 + 32);
  *(_OWORD *)(v4 + 176) = *(_OWORD *)(v3 + 48);
  *(_QWORD *)(v4 + 192) = *(_QWORD *)(v3 + 64);
  *(_DWORD *)(v4 + 200) = v5;
  *(_QWORD *)(v4 + 232) = 0LL;
  *(_QWORD *)(v4 + 240) = 0LL;
  *(_QWORD *)(v4 + 248) = 0LL;
  *(_DWORD *)(v4 + 256) = 0;
  *(_QWORD *)(v4 + 264) = 0LL;
  *(_QWORD *)(v4 + 272) = 0LL;
  *(_QWORD *)(v4 + 280) = 0LL;
  *(_DWORD *)(v4 + 288) = 0;
  *(_QWORD *)(v4 + 208) = 0LL;
  *(_QWORD *)(v4 + 224) = 0LL;
  *(_QWORD *)(v4 + 216) = 0LL;
  return (CSwapChainBase *)v4;
}
