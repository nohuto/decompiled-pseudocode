/*
 * XREFs of ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801B21C8
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1801A693C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x1801AF9D0 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
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
  signed int v9; // eax
  unsigned int v10; // ebx
  CDWMSwapChain *v11; // rbx
  signed int v12; // eax
  struct _LUID v14; // [rsp+28h] [rbp-B0h]
  struct DXGI_SWAP_CHAIN_DESC v15; // [rsp+50h] [rbp-88h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+0h]

  v8 = (int)a3;
  *a6 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, struct DXGI_SWAP_CHAIN_DESC *, __int64, struct _LUID))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v15,
         a3,
         a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1Au);
LABEL_7:
    if ( *a6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a6 + 8LL))(*a6);
      *a6 = 0LL;
    }
    return v10;
  }
  v11 = (CDWMSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x2F0uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CDWMSwapChain::CDWMSwapChain(v11, a2, 0LL, &v15, v8, v14, a5, 1, 0);
  *(_QWORD *)v11 = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)v11 + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *a6 = v11;
  (**(void (__fastcall ***)(CDWMSwapChain *))v11)(v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a6 + 256LL))(*a6, a1);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x28u);
    goto LABEL_7;
  }
  return v10;
}
