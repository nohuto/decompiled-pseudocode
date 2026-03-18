/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800CBEF0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180064C48 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18002D7C0 (--0CExpressionManager@@AEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  volatile signed __int32 *v4; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)WPF::ProcessHeapImpl::AllocClear(0x188uLL);
  if ( !v3 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v4 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    *a1 = (struct CExpressionManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v2;
}
