/*
 * XREFs of ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18006DA38
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
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

void __fastcall SingleViewExperienceTelemetry::Hide::StartActivity(
        SingleViewExperienceTelemetry::Hide *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  __int64 v8; // rdi
  const struct _TlgProvider_t *v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  int v13; // r10d
  const GUID *v14; // rax
  TraceLoggingHProvider v15; // r10
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-B1h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-A9h] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-A1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-91h] BYREF
  LPVOID *v20; // [rsp+70h] [rbp-71h]
  int v21; // [rsp+78h] [rbp-69h]
  int v22; // [rsp+7Ch] [rbp-65h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+90h] [rbp-51h] BYREF
  int *v25; // [rsp+A0h] [rbp-41h]
  int v26; // [rsp+A8h] [rbp-39h]
  int v27; // [rsp+ACh] [rbp-35h]
  void **v28; // [rsp+B0h] [rbp-31h]
  int v29; // [rsp+B8h] [rbp-29h]
  int v30; // [rsp+BCh] [rbp-25h]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+C0h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+E0h] [rbp-1h] BYREF
  int v33; // [rsp+158h] [rbp+77h] BYREF

  v33 = a4;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = *((_QWORD *)this + 6);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(v9, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_QWORD *)(v8 + 8) = 0LL;
  v10 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  SRWLock = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
    && fPending )
  {
    SRWLock = (PSRWLOCK)qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
  if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v22 = 0;
    LODWORD(Context[0]) = CurrentThreadId;
    v21 = 4;
    v20 = Context;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateWsz(&v24, a3);
    v27 = 0;
    v30 = 0;
    v28 = &a5;
    v25 = &v33;
    v26 = v13;
    v29 = 8;
    v14 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(Ptr, &unk_18039EDF4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v14, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::Hide *)((char *)this + 8));
  if ( v33 != 1 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(
           &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
           0,
           (PBOOL)Context,
           (LPVOID *)&SRWLock)
      && LODWORD(Context[0]) )
    {
      SRWLock = (PSRWLOCK)qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    if ( *(_DWORD *)SRWLock[1].Ptr > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x400000000000uLL) )
      {
        TlgCreateWsz(&v32, a3);
        TlgWrite(v15, &unk_18039EDCA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &v31);
      }
    }
  }
}
