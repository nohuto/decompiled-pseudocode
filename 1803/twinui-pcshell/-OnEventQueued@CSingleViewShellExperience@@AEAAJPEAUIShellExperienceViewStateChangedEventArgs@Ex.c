/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006A7C0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006B1D0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019194 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180019230 (-ReportStopActivity@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800192F8 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800686F0 (-OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTR.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180077510 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007BAD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008E914 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_18008E914.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800922A4 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1800922A4.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnEventQueued(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v5; // r15
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  const WCHAR *v14; // rbx
  const WCHAR *v15; // rdi
  const WCHAR *v16; // r15
  int v17; // eax
  TwinUI::Cortana::ShellExperienceView *v18; // rcx
  int (*v19)(CStartExperienceManager *__hidden, struct CSingleViewShellExperience *, HSTRING, struct Windows::Foundation::Collections::IPropertySet *); // rax
  int v20; // eax
  struct Windows::Foundation::Collections::IPropertySet *v21; // rcx
  volatile signed __int32 *v22; // rdx
  const GUID *v24; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v26; // rax
  signed __int64 v27; // rax
  TraceLoggingHProvider v28; // r10
  char v29; // di
  int v30; // eax
  __int64 v31; // rdx
  void *v32; // rsi
  HANDLE v33; // rax
  HANDLE v34; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v37; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v39; // [rsp+44h] [rbp-BCh] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v41; // [rsp+4Ch] [rbp-B4h] BYREF
  WINBOOL v42; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v44; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v45; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v46; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v47[8]; // [rsp+78h] [rbp-88h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+80h] [rbp-80h] BYREF
  void **v49; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h]
  DWORD v52; // [rsp+B0h] [rbp-50h]
  int *v53; // [rsp+B8h] [rbp-48h]
  int *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h] BYREF
  char v56; // [rsp+CCh] [rbp-34h]
  _BYTE v57[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v58; // [rsp+F0h] [rbp-10h] BYREF
  const char *v59; // [rsp+F8h] [rbp-8h]
  LPVOID v60; // [rsp+100h] [rbp+0h]
  char v61; // [rsp+108h] [rbp+8h]
  __int64 v62; // [rsp+110h] [rbp+10h]
  _BYTE v63[144]; // [rsp+118h] [rbp+18h] BYREF
  LPVOID lpMem; // [rsp+1A8h] [rbp+A8h]
  __int64 v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]
  void *v67; // [rsp+1C0h] [rbp+C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp+D0h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+210h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR v73; // [rsp+220h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+250h] [rbp+150h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  v50[0] = 0LL;
  v50[1] = &v49;
  v51 = 0LL;
  v52 = 0;
  v53 = &v58;
  v54 = &v55;
  v55 = 0;
  v56 = 0;
  v61 = 0;
  v58 = 0;
  v59 = "OnEventQueued";
  v60 = 0LL;
  v62 = 1LL;
  lpMem = 0LL;
  memset_0(v63, 0, sizeof(v63));
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v49 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  v6 = v54;
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
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  else
    *((_QWORD *)v6 + 1) = 0LL;
  *v6 = 1;
  v44 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v39, &v44) && v39 )
  {
    v44 = qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v44 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v70 = 4LL;
    TlgCreateWsz(&pDesc, v5);
    TlgCreateWsz(&v72, StringRawBuffer);
    v24 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v49);
    TlgWrite(v7, &unk_18039F013, (LPCGUID)(v54 + 2), v24, 5u, &pData);
  }
  if ( !v52 )
  {
    v8 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_51;
    v9 = GetCurrentThreadId();
    v10 = (signed __int64 *)(v8 + 8 * (v9 % 0xA));
    v11 = *v10;
    if ( *v10 )
    {
      while ( *(_DWORD *)(v11 + 8) != (_DWORD)v9 )
      {
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_47;
      }
      goto LABEL_17;
    }
LABEL_47:
    ProcessHeap = GetProcessHeap();
    v26 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v11 = (signed __int64)v26;
    if ( v26 )
    {
      *(_QWORD *)v26 = 0LL;
      v26[2] = v9;
      *((_QWORD *)v26 + 2) = 0LL;
      _m_prefetchw(v10);
      do
      {
        v27 = *v10;
        *(_QWORD *)(v11 + 16) = *v10;
      }
      while ( v27 != _InterlockedCompareExchange64(v10, v11, v27) );
    }
    else
    {
LABEL_51:
      v11 = 0LL;
    }
LABEL_17:
    v50[0] = v11;
    if ( v11 )
    {
      v51 = *(_QWORD *)v11;
      *(_QWORD *)v11 = v50;
      v52 = GetCurrentThreadId();
    }
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &string);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26E,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12,
      cData);
  }
  else
  {
    v14 = WindowsGetStringRawBuffer(string, 0LL);
    v15 = WindowsGetStringRawBuffer(this[2], 0LL);
    v16 = WindowsGetStringRawBuffer(this[1], 0LL);
    v45 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v41, &v45) && v41 )
    {
      v45 = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    if ( **((_DWORD **)v45 + 1) > 5u )
    {
      TlgCreateWsz(&v74, v16);
      TlgCreateWsz(&v75, v15);
      TlgCreateWsz(&v76, v14);
      TlgWrite(v28, &unk_18039F3CE, 0LL, 0LL, 5u, &v73);
    }
    v37 = 0LL;
    v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a2 + 72LL))(
            a2,
            &v37);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x273,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v17,
        cData);
    }
    else
    {
      v18 = (TwinUI::Cortana::ShellExperienceView *)this[11];
      v19 = *(int (**)(CStartExperienceManager *__hidden, struct CSingleViewShellExperience *, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 88LL);
      if ( (char *)v19 == (char *)TwinUI::Cortana::ShellExperienceView::OnEventQueued )
      {
        v20 = TwinUI::Cortana::ShellExperienceView::OnEventQueued(
                v18,
                (struct CSingleViewShellExperience *)this,
                string,
                v37);
      }
      else if ( v19 == CActionCenterExperienceManager::OnEventQueued )
      {
        v20 = CActionCenterExperienceManager::OnEventQueued(v18, (struct CSingleViewShellExperience *)this, string, v37);
      }
      else if ( v19 == CStartExperienceManager::OnEventQueued )
      {
        v20 = CStartExperienceManager::OnEventQueued(v18, (struct CSingleViewShellExperience *)this, string, v37);
      }
      else
      {
        v20 = ((__int64 (__fastcall *)(TwinUI::Cortana::ShellExperienceView *, HSTRING *, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))v19)(
                v18,
                this,
                string,
                v37);
      }
      v13 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x274,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v20,
          cData);
      }
      else
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v49);
        v13 = 0;
      }
    }
    v21 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  v49 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  v22 = (volatile signed __int32 *)v67;
  if ( !v67 )
    goto LABEL_33;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v49,
    SRWLock);
  v22 = (volatile signed __int32 *)v67;
  if ( v67 && *(_DWORD *)v67 == 1 )
  {
    v29 = 1;
  }
  else
  {
    v29 = 0;
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v67);
    v22 = (volatile signed __int32 *)v67;
  }
  if ( SRWLock[0] )
  {
    ReleaseSRWLockExclusive(SRWLock[0]);
    v22 = (volatile signed __int32 *)v67;
  }
  if ( v29 )
  {
LABEL_33:
    if ( *v54 == 1 )
    {
      v30 = v54[21];
      v31 = 2147942974LL;
      if ( v30 < 0 )
        v31 = (unsigned int)v30;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v54,
        v31,
        v47);
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((SingleViewExperienceTelemetry::Reactivate *)&v49);
      v22 = (volatile signed __int32 *)v67;
    }
  }
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22, 0xFFFFFFFF) == 1 )
    {
      v32 = v67;
      if ( v67 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v67 + 8);
        operator delete(v32, (const struct std::nothrow_t *)0x100);
      }
    }
    v67 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v33 = GetProcessHeap();
      HeapFree(v33, 0, lpMem);
    }
    lpMem = 0LL;
    v65 = 0LL;
  }
  if ( v61 )
  {
    v34 = GetProcessHeap();
    HeapFree(v34, 0, v60);
    v61 = 0;
  }
  v60 = 0LL;
  if ( v55 == 1 )
  {
    v55 = 2;
    v46 = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v42, &v46) && v42 )
    {
      v46 = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v46 + 1), v57);
  }
  v55 = 3;
  if ( v52 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v50);
  return v13;
}
