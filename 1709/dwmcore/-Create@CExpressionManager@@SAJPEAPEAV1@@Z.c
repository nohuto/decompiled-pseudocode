/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180155E60
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180155CBC (--0CExpressionManager@@AEAA@XZ.c)
 *     ?PreInitClass@Time@@SAJXZ @ 0x180183530 (-PreInitClass@Time@@SAJXZ.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  volatile signed __int32 *v4; // rax
  bool v5; // zf
  signed int inited; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)WPF::ProcessHeapImpl::AllocClear(0x188uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v4 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v5 = byte_180272A1C == 0;
    *a1 = (struct CExpressionManager *)v4;
    if ( v5 )
    {
      byte_180272A1C = 1;
      inited = Time::PreInitClass();
      v2 = inited;
      if ( inited < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x26u);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Bu);
  }
  return v2;
}
