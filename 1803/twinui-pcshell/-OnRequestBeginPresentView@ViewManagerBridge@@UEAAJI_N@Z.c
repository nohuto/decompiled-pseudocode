/*
 * XREFs of ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180058840
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1800363D0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestBeginPresentView(
        RTL_SRWLOCK **this,
        unsigned int a2,
        unsigned __int8 a3)
{
  int *v6; // rbx
  __int64 v7; // rbx
  const GUID *v8; // rax
  void *v10; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v12; // rax
  unsigned __int8 v13; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v15; // [rsp+3Ch] [rbp-C4h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v18; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v20; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v21; // [rsp+68h] [rbp-98h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h]
  void **v25; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[3]; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+B0h] [rbp-50h]
  int *v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h] BYREF
  char v31; // [rsp+CCh] [rbp-34h]
  char v32[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v33; // [rsp+F0h] [rbp-10h] BYREF
  const char *v34; // [rsp+F8h] [rbp-8h]
  LPVOID v35; // [rsp+100h] [rbp+0h]
  char v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  char v38[144]; // [rsp+118h] [rbp+18h] BYREF
  LPVOID lpMem; // [rsp+1A8h] [rbp+A8h]
  __int64 v40; // [rsp+1B0h] [rbp+B0h]
  __int64 v41; // [rsp+1B8h] [rbp+B8h]
  void *v42; // [rsp+1C0h] [rbp+C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1D0h] [rbp+D0h] BYREF
  void *v44; // [rsp+1E0h] [rbp+E0h]
  int v45; // [rsp+1E8h] [rbp+E8h]
  int v46; // [rsp+1ECh] [rbp+ECh]
  DWORD *p_CurrentThreadId; // [rsp+1F0h] [rbp+F0h]
  __int64 v48; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v49; // [rsp+200h] [rbp+100h]
  __int64 v50; // [rsp+208h] [rbp+108h]
  char *v51; // [rsp+210h] [rbp+110h]
  __int64 v52; // [rsp+218h] [rbp+118h]

  v24 = -2LL;
  v26[0] = 0LL;
  v26[1] = &v25;
  v26[2] = 0LL;
  v27 = 0;
  v28 = &v33;
  v29 = &v30;
  v30 = 0;
  v31 = 0;
  v36 = 0;
  v33 = 0;
  v34 = "OnRequestBeginPresentView";
  v35 = 0LL;
  v37 = 1LL;
  lpMem = 0LL;
  memset_0(v38, 0, sizeof(v38));
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v25 = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  v13 = a3;
  v17 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v25,
    &SRWLock);
  v6 = v29;
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
    *((_QWORD *)v6 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  *v6 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v20 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v15, &v20) && v15 )
  {
    v20 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v7 = *((_QWORD *)v20 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v48 = 4LL;
    v49 = &v17;
    v50 = 4LL;
    v51 = (char *)&v13;
    v52 = 1LL;
    v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v25);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803956BB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v44 = &unk_1803956C6;
    v45 = 79;
    v46 = 1;
    EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, (LPCGUID)(v29 + 2), v8, 5u, &UserData);
  }
  if ( !v27 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v26);
  ViewEventDispatcher::ViewVisibilityChanged(this[6], 0, a2, a3);
  (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, _QWORD))this[9]->Ptr + 17))(this[9], a2, a3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v25);
  v25 = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v25);
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v42, 0xFFFFFFFF) == 1 )
    {
      v10 = v42;
      if ( v42 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v42 + 8);
        operator delete(v10, (const struct std::nothrow_t *)0x100);
      }
    }
    v42 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v40 = 0LL;
  }
  if ( v36 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v35);
    v36 = 0;
  }
  v35 = 0LL;
  if ( v30 == 1 )
  {
    v30 = 2;
    v21 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v18, &v21) && v18 )
    {
      v21 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v21 + 1), v32);
  }
  v30 = 3;
  if ( v27 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
  return 0LL;
}
