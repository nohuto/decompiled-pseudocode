/*
 * XREFs of ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800CB5BC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1800B5ED8 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800B62E0 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::Create(struct CComposition *a1, struct CSurfaceManager **a2, void **a3, void **a4)
{
  CSurfaceManager *v8; // rax
  CSurfaceManager *v9; // rax
  CSurfaceManager *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v8 = (CSurfaceManager *)WPF::ProcessHeapImpl::AllocClear(0x2A0uLL);
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v9 = CSurfaceManager::CSurfaceManager(v8, a1);
  v10 = v9;
  if ( v9 )
  {
    (**(void (__fastcall ***)(CSurfaceManager *))v9)(v9);
    v11 = CSurfaceManager::Initialize(v10, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x21u);
      (*(void (__fastcall **)(CSurfaceManager *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      *a2 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v12;
}
