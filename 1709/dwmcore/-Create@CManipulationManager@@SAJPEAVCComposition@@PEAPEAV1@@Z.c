/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180195D60
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1801954E4 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180195F28 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, struct CManipulationManager **a2)
{
  CManipulationManager *v4; // rax
  CManipulationManager *v5; // rax
  CManipulationManager *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CManipulationManager *)WPF::ProcessHeapImpl::AllocClear(0x190uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CManipulationManager::CManipulationManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = CManipulationManager::Initialize(v6);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x20u);
    }
    else
    {
      *a2 = v6;
      v6 = 0LL;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Du);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  return v7;
}
