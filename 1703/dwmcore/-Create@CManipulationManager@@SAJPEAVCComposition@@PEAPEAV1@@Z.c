/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CBA50
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x18004E6B4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18004E854 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, struct CManipulationManager **a2)
{
  CManipulationManager *v4; // rax
  CManipulationManager *v5; // rax
  CManipulationManager *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CManipulationManager *)WPF::ProcessHeapImpl::AllocClear(0x190uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5 = CManipulationManager::CManipulationManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = CManipulationManager::Initialize(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x22u);
      (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  return v8;
}
