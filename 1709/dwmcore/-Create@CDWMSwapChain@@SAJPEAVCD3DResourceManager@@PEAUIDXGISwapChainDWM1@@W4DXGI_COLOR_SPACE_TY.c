/*
 * XREFs of ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1801B0184
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

__int64 __fastcall CDWMSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
        struct _LUID a4,
        unsigned int a5,
        bool a6,
        bool a7,
        struct CDWMSwapChain **a8)
{
  enum DXGI_COLOR_SPACE_TYPE v10; // ebp
  signed int v11; // eax
  int v12; // ebx
  CDWMSwapChain *v13; // rcx
  struct CDWMSwapChain *v14; // rax
  enum DXGI_COLOR_SPACE_TYPE v16; // [rsp+20h] [rbp-C8h]
  struct _LUID v17; // [rsp+28h] [rbp-C0h]
  struct IDXGIOutput *v18; // [rsp+50h] [rbp-98h] BYREF
  DXGI_SWAP_CHAIN_DESC v19; // [rsp+60h] [rbp-88h] BYREF
  const void *retaddr; // [rsp+E8h] [rbp+0h]

  v18 = 0LL;
  v10 = (int)a3;
  *a8 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, DXGI_SWAP_CHAIN_DESC *, __int64, struct _LUID))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v19,
          a3,
          a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020|0x20;
    goto LABEL_11;
  }
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, struct IDXGIOutput **))(*(_QWORD *)a2 + 104LL))(
          a2,
          &v18);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020|0x20;
    goto LABEL_11;
  }
  v13 = (CDWMSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x2F0uLL);
  if ( !v13 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v14 = CDWMSwapChain::CDWMSwapChain(v13, a2, v18, &v19, v10, v17, a5, a6, a7);
  *a8 = v14;
  if ( !v14 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x39u);
    goto LABEL_12;
  }
  (**(void (__fastcall ***)(struct CDWMSwapChain *))v14)(v14);
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a8 + 256LL))(*a8, a1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020|DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601|0x20;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v16);
  }
LABEL_12:
  if ( v18 )
  {
    ((void (__fastcall *)(struct IDXGIOutput *))v18->lpVtbl->Release)(v18);
    v18 = 0LL;
  }
  if ( v12 < 0 && *a8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a8 + 8LL))(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)v12;
}
