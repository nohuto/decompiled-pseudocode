/*
 * XREFs of ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IW4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_NPEAPEAV1@@Z @ 0x1800C9828
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

__int64 __fastcall CDWMSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM *a2,
        __int64 a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct _LUID a5,
        unsigned int a6,
        bool a7,
        struct CDWMSwapChain **a8)
{
  int v11; // eax
  int v12; // ebx
  CDWMSwapChain *v13; // rcx
  struct CDWMSwapChain *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-89h]
  struct _LUID v17; // [rsp+30h] [rbp-79h]
  struct IDXGISwapChainDWM1 *v18; // [rsp+50h] [rbp-59h] BYREF
  struct IDXGIOutput *v19; // [rsp+58h] [rbp-51h] BYREF
  DXGI_SWAP_CHAIN_DESC v20; // [rsp+60h] [rbp-49h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+3Fh]

  v19 = 0LL;
  v18 = 0LL;
  *a8 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, DXGI_SWAP_CHAIN_DESC *))(*(_QWORD *)a2 + 80LL))(a2, &v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = 58;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, struct IDXGIOutput **))(*(_QWORD *)a2 + 104LL))(
            a2,
            &v19);
    v12 = v11;
    if ( v11 < 0 )
    {
      v16 = 62;
    }
    else
    {
      (**(void (__fastcall ***)(struct IDXGISwapChainDWM *, GUID *, struct IDXGISwapChainDWM1 **))a2)(
        a2,
        &GUID_8f0f30db_446a_4282_9fa2_28f75c1f39ad,
        &v18);
      v13 = (CDWMSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x270uLL);
      if ( !v13 )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      v14 = CDWMSwapChain::CDWMSwapChain(v13, a2, v18, v19, &v20, a4, v17, a6, a7);
      *a8 = v14;
      if ( !v14 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x51u);
        goto LABEL_6;
      }
      (**(void (__fastcall ***)(struct CDWMSwapChain *))v14)(v14);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a8 + 248LL))(*a8, a1);
      v12 = v11;
      if ( v11 >= 0 )
        goto LABEL_6;
      v16 = 87;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v16);
LABEL_6:
  ReleaseInterface<IBitmapLock>(&v19);
  if ( v18 )
  {
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( v12 < 0 && *a8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a8 + 8LL))(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)v12;
}
