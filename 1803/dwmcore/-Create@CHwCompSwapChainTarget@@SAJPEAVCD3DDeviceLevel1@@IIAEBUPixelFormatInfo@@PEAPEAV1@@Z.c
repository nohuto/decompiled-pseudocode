/*
 * XREFs of ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1801E4558
 * Callers:
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C58C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x1801E440C (--0CHwCompSwapChainTarget@@IEAA@XZ.c)
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z @ 0x1801E47A8 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Create(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        struct CHwCompSwapChainTarget **a5)
{
  CHwCompSwapChainTarget *v9; // rax
  CHwCompSwapChainTarget *v10; // rax
  CHwCompSwapChainTarget *v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (CHwCompSwapChainTarget *)WPF::ProcessHeapImpl::AllocClear(0xE8uLL);
  if ( !v9 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v10 = CHwCompSwapChainTarget::CHwCompSwapChainTarget(v9);
  v11 = v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v10 + 8LL))(v10);
    v13 = CHwCompSwapChainTarget::Init(v11, a1, a2, a3, a4);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1Bu);
      (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v12;
}
