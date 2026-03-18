/*
 * XREFs of ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IW4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x18019DA24
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N@Z @ 0x18003F024 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChainDDA::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct _LUID a5,
        unsigned int a6,
        struct CDWMSwapChainDDA **a7)
{
  int v10; // eax
  int v11; // ebx
  CDWMSwapChain *v12; // rax
  CDWMSwapChain *v13; // rbx
  int v14; // eax
  struct _LUID v16; // [rsp+30h] [rbp-A8h]
  struct IDXGISwapChainDWM *v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h] BYREF
  struct DXGI_SWAP_CHAIN_DESC v19; // [rsp+60h] [rbp-78h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v18 = 0LL;
  v17 = 0LL;
  *a7 = 0LL;
  (**(void (__fastcall ***)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM **))a2)(
    a2,
    &GUID_f69f223b_45d3_4aa0_98c8_c40c2b231029,
    &v17);
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, struct DXGI_SWAP_CHAIN_DESC *))(*(_QWORD *)v17 + 80LL))(
          v17,
          &v19);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Bu);
  }
  else
  {
    v12 = (CDWMSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x270uLL);
    v13 = v12;
    if ( !v12 )
    {
      ModuleFailFastForHRESULT(-2147024882, retaddr);
      __debugbreak();
    }
    CDWMSwapChain::CDWMSwapChain(v12, v17, a2, 0LL, &v19, a4, v16, a6, 1);
    *(_QWORD *)v13 = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
    *((_QWORD *)v13 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
    *a7 = v13;
    (**(void (__fastcall ***)(CDWMSwapChain *))v13)(v13);
    *((_QWORD *)*a7 + 77) = *((_QWORD *)a1 + 16);
    v14 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a7 + 248LL))(*a7, a1);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Du);
  }
  ReleaseInterface<IBitmapLock>(&v18);
  ReleaseInterface<IBitmapLock>((__int64 *)&v17);
  if ( v11 < 0 && *a7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a7 + 8LL))(*a7);
    *a7 = 0LL;
  }
  return (unsigned int)v11;
}
