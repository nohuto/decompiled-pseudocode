/*
 * XREFs of ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180074854
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180065F90 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800751A8 (-zInternalStart@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v4; // rax
  __int64 v5; // r8
  REGHANDLE v6; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  DWORD v8; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  DWORD *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0;
    v8 = CurrentThreadId;
    v15 = &v8;
    v16 = 4;
    v4 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    EventDescriptor.Keyword = 0LL;
    v5 = *((_QWORD *)this + 6);
    UserData.Ptr = *(_QWORD *)(v2 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180390BE5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 260;
    v6 = *(_QWORD *)(v2 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v12 = &unk_180390BF0;
    UserData.Reserved = 2;
    v13 = 66;
    v14 = 1;
    EventWriteTransfer(v6, &EventDescriptor, (LPCGUID)(v5 + 8), v4, 3u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)((char *)this + 8));
}
