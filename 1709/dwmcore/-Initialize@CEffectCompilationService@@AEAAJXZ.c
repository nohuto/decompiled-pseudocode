/*
 * XREFs of ?Initialize@CEffectCompilationService@@AEAAJXZ @ 0x180131F84
 * Callers:
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180131ED0 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationService::Initialize(CEffectCompilationService *this)
{
  HANDLE EventW; // rax
  signed int LastError; // eax
  signed int v4; // ebx
  signed int v5; // eax

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 3) = EventW;
  if ( EventW )
    goto LABEL_6;
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  if ( v4 >= 0 )
  {
LABEL_6:
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(CEffectCompilationService *), CEffectCompilationService *))(**((_QWORD **)this + 2) + 264LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3),
           lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_,
           this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x3Au);
    else
      return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x31u);
  }
  return (unsigned int)v4;
}
