/*
 * XREFs of ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801EADA4
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180075470 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x18007D5B4 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChainDDA::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
        struct _LUID a4,
        unsigned int a5,
        struct CDWMSwapChainDDA **a6)
{
  enum DXGI_COLOR_SPACE_TYPE v8; // ebp
  int v9; // ebx
  CDWMSwapChain *v10; // rbx
  unsigned int v11; // eax
  struct _LUID v13; // [rsp+28h] [rbp-B0h]
  struct DXGI_SWAP_CHAIN_DESC v14; // [rsp+50h] [rbp-88h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+0h]

  v8 = (int)a3;
  *a6 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, struct DXGI_SWAP_CHAIN_DESC *, __int64, struct _LUID))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v14,
         a3,
         a4);
  if ( v9 < 0 )
  {
    v11 = 26;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11);
    if ( *a6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a6 + 8LL))(*a6);
      *a6 = 0LL;
    }
    return (unsigned int)v9;
  }
  v10 = (CDWMSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x2F0uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CDWMSwapChain::CDWMSwapChain(v10, a2, 0LL, &v14, v8, v13, a5, 1, 0);
  *(_QWORD *)v10 = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v10 + 3) = &CDWMSwapChainDDA::`vftable'{for `IDeviceResource'};
  *a6 = v10;
  (**(void (__fastcall ***)(CDWMSwapChain *))v10)(v10);
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a6 + 280LL))(*a6, a1);
  if ( v9 < 0 )
  {
    v11 = 40;
    goto LABEL_7;
  }
  return (unsigned int)v9;
}
