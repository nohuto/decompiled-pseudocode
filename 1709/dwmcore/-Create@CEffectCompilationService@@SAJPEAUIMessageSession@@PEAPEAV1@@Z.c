/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180131ED0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x180131C40 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Initialize@CEffectCompilationService@@AEAAJXZ @ 0x180131F84 (-Initialize@CEffectCompilationService@@AEAAJXZ.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CEffectCompilationService *)WPF::ProcessHeapImpl::AllocClear(0xE0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = (volatile signed __int32 *)CEffectCompilationService::CEffectCompilationService(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v8 = CEffectCompilationService::Initialize((CEffectCompilationService *)v5);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x4Du);
    }
    else
    {
      *a2 = (struct CEffectCompilationService *)v6;
      _InterlockedIncrement(v6 + 2);
    }
    CMILRefCountBase::Release((CMILRefCountBase *)v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x4Au);
  }
  return v7;
}
