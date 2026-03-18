/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C9CD0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180025FA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18002614C (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, const struct DWM_MMTASK ***a2)
{
  CManipulationManager *v4; // rax
  CManipulationManager *v5; // rax
  const struct DWM_MMTASK **v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CManipulationManager *)WPF::ProcessHeapImpl::AllocClear(0x190uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CManipulationManager::CManipulationManager(v4, a1);
  v6 = (const struct DWM_MMTASK **)v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = CManipulationManager::Initialize(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x24u);
      (*((void (__fastcall **)(const struct DWM_MMTASK **))*v6 + 2))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  return v8;
}
