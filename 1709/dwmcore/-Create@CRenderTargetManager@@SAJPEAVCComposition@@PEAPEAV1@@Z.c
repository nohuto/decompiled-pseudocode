/*
 * XREFs of ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180130918
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1801306A4 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CRenderTargetManager **a2)
{
  unsigned int v4; // ebx
  CRenderTargetManager *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  struct CRenderTargetManager *v8; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CRenderTargetManager *)WPF::ProcessHeapImpl::AllocClear(0x98uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = CRenderTargetManager::CRenderTargetManager(v5, a1, v6, v7);
  if ( v8 )
  {
    *a2 = v8;
    (**(void (__fastcall ***)(struct CRenderTargetManager *))v8)(v8);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x4Cu);
  }
  return v4;
}
