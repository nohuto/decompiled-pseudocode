/*
 * XREFs of ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180069C38
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180069600 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006ABC8 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180307DF4 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019194 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x180053F30 (-remove_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJUEventRegistrationToken@@@.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006E21C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18006E32C (-ReportStopActivity@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgRefle.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006EB4C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006ECF0 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1801035C4 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(CSingleViewShellExperience *this)
{
  __int64 v2; // rbx
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v4; // rsi
  int *v5; // rbx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 CurrentThreadId; // rsi
  unsigned __int64 v10; // rbx
  signed __int64 i; // rcx
  int v12; // eax
  struct EventRegistrationToken v13; // rdx
  __int64 (__fastcall *v14)(RTL_SRWLOCK *, struct EventRegistrationToken); // rax
  int v15; // eax
  ViewWrapperBase *v16; // rcx
  volatile signed __int32 *v17; // rdx
  const GUID *v18; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v20; // rax
  signed __int64 v21; // rax
  char v22; // bl
  __int64 v23; // rdx
  void *v24; // rbx
  HANDLE v25; // rax
  HANDLE v26; // rax
  int cData; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  ViewWrapperBase *v29; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v31; // [rsp+4Ch] [rbp-BCh] BYREF
  WINBOOL v32[2]; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v34; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v35; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+78h] [rbp-90h] BYREF
  void **v38; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-68h]
  DWORD v41; // [rsp+A8h] [rbp-60h]
  int *v42; // [rsp+B0h] [rbp-58h]
  int *v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+C0h] [rbp-48h] BYREF
  char v45; // [rsp+C4h] [rbp-44h]
  _BYTE v46[32]; // [rsp+C8h] [rbp-40h] BYREF
  int v47; // [rsp+E8h] [rbp-20h] BYREF
  const char *v48; // [rsp+F0h] [rbp-18h]
  LPVOID v49; // [rsp+F8h] [rbp-10h]
  char v50; // [rsp+100h] [rbp-8h]
  __int64 v51; // [rsp+108h] [rbp+0h]
  _BYTE v52[144]; // [rsp+110h] [rbp+8h] BYREF
  LPVOID lpMem; // [rsp+1A0h] [rbp+98h]
  __int64 v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  void *v56; // [rsp+1B8h] [rbp+B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  WINBOOL *v58; // [rsp+1E8h] [rbp+E0h]
  __int64 v59; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v62; // [rsp+218h] [rbp+110h]
  __int64 v63; // [rsp+220h] [rbp+118h]
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v2 = *((_QWORD *)this + 15);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v4 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  v39[0] = 0LL;
  v39[1] = &v38;
  v40 = 0LL;
  v41 = 0;
  v42 = &v47;
  v43 = &v44;
  v44 = 0;
  v45 = 0;
  v50 = 0;
  v47 = 0;
  v48 = "CancelWaitForWindowReadyForPresentation";
  v49 = 0LL;
  v51 = 1LL;
  lpMem = 0LL;
  memset_0(v52, 0, sizeof(v52));
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v38 = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  LOBYTE(v28) = v2 != 0;
  v5 = v43;
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
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(v6, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v5 + 2));
  else
    *((_QWORD *)v5 + 1) = 0LL;
  *v5 = 1;
  v34 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v31, &v34) && v31 )
  {
    v34 = qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v34 + 1);
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v34 + 1), 0x200000000000uLL) )
  {
    v32[0] = GetCurrentThreadId();
    v58 = v32;
    v59 = 4LL;
    TlgCreateWsz(&pDesc, v4);
    TlgCreateWsz(&v61, StringRawBuffer);
    v62 = &v28;
    v63 = 1LL;
    v18 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v38);
    TlgWrite(v7, &unk_18039EF40, (LPCGUID)(v43 + 2), v18, 6u, &pData);
  }
  if ( !v41 )
  {
    v8 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_45;
    CurrentThreadId = GetCurrentThreadId();
    v10 = CurrentThreadId % 0xA;
    for ( i = *(_QWORD *)(v8 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)CurrentThreadId )
        goto LABEL_17;
    }
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v20;
    if ( v20 )
    {
      *(_QWORD *)v20 = 0LL;
      v20[2] = CurrentThreadId;
      *((_QWORD *)v20 + 2) = 0LL;
      _m_prefetchw((const void *)(v8 + 8 * v10));
      do
      {
        v21 = *(_QWORD *)(v8 + 8 * v10);
        *(_QWORD *)(i + 16) = v21;
      }
      while ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v10), i, v21) );
    }
    else
    {
LABEL_45:
      i = 0LL;
    }
LABEL_17:
    v39[0] = i;
    if ( i )
    {
      v40 = *(_QWORD *)i;
      *(_QWORD *)i = v39;
      v41 = GetCurrentThreadId();
    }
  }
  if ( *((_QWORD *)this + 15) )
  {
    v29 = 0LL;
    v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))this + 3))(
            *((_QWORD *)this + 3),
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v29);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x397,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v12,
        cData);
    }
    else
    {
      v13.value = *((_QWORD *)this + 15);
      v14 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct EventRegistrationToken))(*(_QWORD *)v29 + 88LL);
      if ( v14 == ViewWrapperBase::remove_ClientWindowReadyForPresentationChanged )
        v15 = ViewWrapperBase::remove_ClientWindowReadyForPresentationChanged((RTL_SRWLOCK *)v29, v13);
      else
        v15 = ((__int64 (__fastcall *)(ViewWrapperBase *, __int64))v14)(v29, v13.value);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x399,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v15,
          cData);
      *((_QWORD *)this + 15) = 0LL;
    }
    v16 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v38);
  v38 = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  v17 = (volatile signed __int32 *)v56;
  if ( !v56 )
    goto LABEL_29;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v38,
    SRWLock);
  v17 = (volatile signed __int32 *)v56;
  if ( v56 && *(_DWORD *)v56 == 1 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 0;
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v56);
    v17 = (volatile signed __int32 *)v56;
  }
  if ( SRWLock[0] )
  {
    ReleaseSRWLockExclusive(SRWLock[0]);
    v17 = (volatile signed __int32 *)v56;
  }
  if ( v22 )
  {
LABEL_29:
    if ( *v43 == 1 )
    {
      v23 = 2147942974LL;
      if ( v43[21] < 0 )
        v23 = (unsigned int)v43[21];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v43,
        v23,
        &v36);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(&v38);
      v17 = (volatile signed __int32 *)v56;
    }
  }
  if ( v17 )
  {
    if ( !_InterlockedDecrement(v17) )
    {
      v24 = v56;
      if ( v56 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v56 + 8);
        operator delete(v24, (const struct std::nothrow_t *)0x100);
      }
    }
    v56 = 0LL;
  }
  if ( lpMem )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)lpMem) )
    {
      v25 = GetProcessHeap();
      HeapFree(v25, 0, lpMem);
    }
    lpMem = 0LL;
    v54 = 0LL;
  }
  if ( v50 )
  {
    v26 = GetProcessHeap();
    HeapFree(v26, 0, v49);
    v50 = 0;
  }
  v49 = 0LL;
  if ( v44 == 1 )
  {
    v44 = 2;
    v35 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v32[1], &v35) && v32[1] )
    {
      v35 = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)v35 + 1), v46);
  }
  v44 = 3;
  if ( v41 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v39);
}
