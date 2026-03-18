/*
 * XREFs of ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180131560
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1801310EC (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1801316D8 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 */

__int64 __fastcall CSurfaceManager::Create(struct CComposition *a1, struct CSurfaceManager **a2, void **a3, void **a4)
{
  CSurfaceManager *v8; // rax
  CSurfaceManager *v9; // rax
  CSurfaceManager *v10; // rdi
  unsigned int v11; // ebx
  signed int v12; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v8 = (CSurfaceManager *)WPF::ProcessHeapImpl::AllocClear(0x2A0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v9 = CSurfaceManager::CSurfaceManager(v8, a1);
  v10 = v9;
  if ( v9 )
  {
    (**(void (__fastcall ***)(CSurfaceManager *))v9)(v9);
    v12 = CSurfaceManager::Initialize(v10, a3, a4);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x21u);
    }
    else
    {
      *a2 = v10;
      v10 = 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Eu);
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v10);
  return v11;
}
