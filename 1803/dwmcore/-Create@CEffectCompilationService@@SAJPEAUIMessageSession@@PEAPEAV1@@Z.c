/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C9B1C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x180035444 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  unsigned int v5; // ebx
  CEffectCompilationService *v6; // rax
  CEffectCompilationService *v7; // rsi
  HANDLE EventW; // rax
  signed int v9; // edi
  int v10; // r9d
  signed int LastError; // eax
  unsigned int v13; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CEffectCompilationService *)WPF::ProcessHeapImpl::AllocClear(0xE0uLL);
  v5 = 0;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CEffectCompilationService::CEffectCompilationService(v4, a1);
  v7 = v6;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Au);
    return v5;
  }
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v7 + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 < 0 )
    {
      v10 = v9;
      v13 = 49;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
      v5 = v9;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x4Du);
      goto LABEL_6;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(CEffectCompilationService *), CEffectCompilationService *))(**((_QWORD **)v7 + 2) + 264LL))(
         *((_QWORD *)v7 + 2),
         *((_QWORD *)v7 + 3),
         lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_,
         v7);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 58;
    goto LABEL_15;
  }
  *a2 = v7;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
LABEL_6:
  CMILRefCountBase::Release(v7);
  return v5;
}
