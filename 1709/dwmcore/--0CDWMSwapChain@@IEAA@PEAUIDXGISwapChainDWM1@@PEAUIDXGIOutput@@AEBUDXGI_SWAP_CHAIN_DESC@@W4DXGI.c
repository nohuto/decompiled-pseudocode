/*
 * XREFs of ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x1801AF9D0
 * Callers:
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1801B0184 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801B21C8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE.c)
 * Callees:
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x18007843C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B2654 (--0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::CDWMSwapChain(
        CDWMSwapChain *this,
        struct IDXGISwapChainDWM1 *a2,
        struct IDXGIOutput *a3,
        const struct DXGI_SWAP_CHAIN_DESC *a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        struct _LUID a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  __int64 v11; // r11
  __int64 v12; // rsi
  _BYTE v14[88]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+78h] [rbp-30h]

  CSwapChainBase::CSwapChainBase(this, a4, a5);
  *((_QWORD *)this + 52) = v11;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 110) = a7;
  *((_BYTE *)this + 578) = a8;
  *((_BYTE *)this + 583) = a9;
  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>((_QWORD *)this + 53, (__int64)a3);
  v12 = *((_QWORD *)this + 53);
  if ( v12 )
  {
    memset_0(v14, 0, 0x60uLL);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 56LL))(v12, v14);
    *((_QWORD *)this + 56) = v15;
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 53))(
      *((_QWORD *)this + 53),
      &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
      (char *)this + 432);
  }
  *((_DWORD *)this + 184) = -1;
  return this;
}
