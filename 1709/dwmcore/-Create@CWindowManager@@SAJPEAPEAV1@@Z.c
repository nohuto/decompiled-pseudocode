/*
 * XREFs of ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x180130578
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CWindowManager@@QEAA@XZ @ 0x1801302B0 (--0CWindowManager@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowManager::Create(struct CWindowManager **a1)
{
  unsigned int v2; // ebx
  CWindowManager *v3; // rax
  volatile signed __int32 *v4; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CWindowManager *)WPF::ProcessHeapImpl::AllocClear(0x78uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v4 = (volatile signed __int32 *)CWindowManager::CWindowManager(v3);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    *a1 = (struct CWindowManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x36u);
  }
  return v2;
}
