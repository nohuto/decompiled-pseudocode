/*
 * XREFs of ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18006F984
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019194 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v10; // rbx
  const struct _TlgProvider_t *v11; // rcx
  RTL_SRWLOCK *v12; // rcx
  const struct _TlgProvider_t *Ptr; // rbx
  DWORD CurrentThreadId; // eax
  int v15; // r10d
  const GUID *v16; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-B1h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-A9h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+40h] [rbp-A1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-91h] BYREF
  LPVOID *p_Context; // [rsp+70h] [rbp-71h]
  int v22; // [rsp+78h] [rbp-69h]
  int v23; // [rsp+7Ch] [rbp-65h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-51h] BYREF
  int *v26; // [rsp+A0h] [rbp-41h]
  int v27; // [rsp+A8h] [rbp-39h]
  int v28; // [rsp+ACh] [rbp-35h]
  bool *v29; // [rsp+B0h] [rbp-31h]
  int v30; // [rsp+B8h] [rbp-29h]
  int v31; // [rsp+BCh] [rbp-25h]
  bool *v32; // [rsp+C0h] [rbp-21h]
  int v33; // [rsp+C8h] [rbp-19h]
  int v34; // [rsp+CCh] [rbp-15h]
  bool *v35; // [rsp+D0h] [rbp-11h]
  int v36; // [rsp+D8h] [rbp-9h]
  int v37; // [rsp+DCh] [rbp-5h]
  int v38; // [rsp+148h] [rbp+67h] BYREF

  v38 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v10 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(v11, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v10 + 8));
  else
    *(_QWORD *)(v10 + 8) = 0LL;
  v12 = SRWLock[0];
  *(_DWORD *)v10 = 1;
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  SRWLock[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)SRWLock)
    && fPending )
  {
    SRWLock[0] = (PSRWLOCK)qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  Ptr = (const struct _TlgProvider_t *)SRWLock[0][1].Ptr;
  if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[0][1].Ptr, 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v23 = 0;
    LODWORD(Context) = CurrentThreadId;
    v22 = 4;
    p_Context = &Context;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateWsz(&v25, a3);
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v29 = &a5;
    v32 = &a6;
    v35 = &a7;
    v26 = &v38;
    v27 = v15;
    v30 = 1;
    v33 = 1;
    v36 = 1;
    v16 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(Ptr, &unk_18039EE8E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v16, 9u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)((char *)this + 8));
}
