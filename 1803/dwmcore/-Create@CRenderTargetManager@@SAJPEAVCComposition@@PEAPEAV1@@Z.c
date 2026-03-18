/*
 * XREFs of ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9E14
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x18005F130 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CRenderTargetManager **a2)
{
  unsigned int v4; // ebx
  CRenderTargetManager *v5; // rax
  struct CRenderTargetManager *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CRenderTargetManager *)WPF::ProcessHeapImpl::AllocClear(0x78uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CRenderTargetManager::CRenderTargetManager(v5, a1);
  if ( v6 )
  {
    *a2 = v6;
    (**(void (__fastcall ***)(struct CRenderTargetManager *))v6)(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Bu);
  }
  return v4;
}
