/*
 * XREFs of ?StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x18008E378
 * Callers:
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180057030 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRemoved::StartActivity(
        ViewManagerInteropTraceLogging::OnRemoved *this,
        void *a2)
{
  __int64 v3; // rdi
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  __int64 v8; // r8
  REGHANDLE v9; // rcx
  ULONG UserDataCount; // r10d
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  WINBOOL v12; // [rsp+3Ch] [rbp-45h] BYREF
  DWORD v13; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v15; // [rsp+50h] [rbp-31h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-9h] BYREF
  void *v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  DWORD *v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  void **v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+B0h] [rbp+2Fh]
  int v27; // [rsp+B4h] [rbp+33h]
  void *v28; // [rsp+F0h] [rbp+6Fh] BYREF

  v28 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v3 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  v4 = SRWLock;
  *(_DWORD *)v3 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v15 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v12, &v15) && v12 )
  {
    v15 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v5 = *((_QWORD *)v15 + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v24 = 0;
    v27 = 0;
    v13 = CurrentThreadId;
    v22 = &v13;
    v25 = &v28;
    v23 = 4;
    v26 = 8;
    v7 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    EventDescriptor.Keyword = 0LL;
    v8 = *((_QWORD *)this + 6);
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180395A8C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    v9 = *(_QWORD *)(v5 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_180395A97;
    UserData.Reserved = 2;
    v20 = 43;
    v21 = 1;
    EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v8 + 8), v7, UserDataCount, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::OnRemoved *)((char *)this + 8));
}
