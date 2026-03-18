/*
 * XREFs of ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N@Z @ 0x18003F024
 * Callers:
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IW4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_NPEAPEAV1@@Z @ 0x1800C9828 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IW4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IW4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x18019DA24 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IW4DXGI_COLOR_SPAC.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003F52C (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::CDWMSwapChain(
        CDWMSwapChain *this,
        struct IDXGISwapChainDWM *a2,
        struct IDXGISwapChainDWM1 *a3,
        struct IDXGIOutput *a4,
        struct DXGI_SWAP_CHAIN_DESC *a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        struct _LUID a7,
        unsigned int a8,
        bool a9)
{
  __int64 v12; // r11
  __int64 v13; // rdi
  _BYTE v15[88]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h]

  CSwapChainBase::CSwapChainBase(this, a5, a6);
  *((_QWORD *)this + 37) = v12;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 82) = a8;
  *((_BYTE *)this + 457) = a9;
  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *((_QWORD *)this + 38) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 39) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct IDXGIOutput *))a4->lpVtbl->AddRef)(a4);
  v13 = *((_QWORD *)this + 39);
  if ( v13 )
  {
    memset_0(v15, 0, 0x60uLL);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 56LL))(v13, v15);
    *((_QWORD *)this + 42) = v16;
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 39))(
      *((_QWORD *)this + 39),
      &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
      (char *)this + 320);
  }
  *((_DWORD *)this + 152) = -1;
  return this;
}
