/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x180044430 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50 (-GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?GetSystemVisual@CFrameApplicationPresentation@@UEBA?AW4FRAME_SYSTEM_VISUAL@@XZ @ 0x180014940 (-GetSystemVisual@CFrameApplicationPresentation@@UEBA-AW4FRAME_SYSTEM_VISUAL@@XZ.c)
 *     ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00 (-GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x18012DEAC (-GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, HWND *a3)
{
  const WCHAR *v6; // rbx
  int *v7; // rdi
  __int64 v8; // rdi
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  const GUID *v11; // rax
  ULONG UserDataCount; // r10d
  __int64 v13; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v15; // rbx
  signed __int64 i; // rcx
  __int64 v17; // rcx
  __int64 (*v18)(void); // rax
  int SystemVisual; // eax
  __int64 NativeWindow; // rax
  CTaskWindow *v21; // rcx
  __int64 (*v22)(void); // rax
  CFrameApplicationPresentation *v23; // rcx
  __int64 (__fastcall *v24)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  unsigned int v26; // ebx
  __int64 (__fastcall *v27)(CApplicationFrameWrapper *, HWND *); // rax
  unsigned int FrameWindow; // eax
  struct IApplicationFrameProxy *v29; // rcx
  volatile signed __int32 *v30; // rdx
  HANDLE ProcessHeap; // rax
  _DWORD *v33; // rax
  signed __int64 v34; // rax
  char v35; // di
  __int64 v36; // rdx
  void *v37; // rdi
  HANDLE v38; // rax
  HANDLE v39; // rax
  struct IApplicationFrameProxy *v40; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL v42; // [rsp+44h] [rbp-C4h] BYREF
  WINBOOL v43[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v45; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h]
  void **v51; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v52[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h]
  DWORD v54; // [rsp+B8h] [rbp-50h]
  int *v55; // [rsp+C0h] [rbp-48h]
  int *v56; // [rsp+C8h] [rbp-40h]
  int v57; // [rsp+D0h] [rbp-38h] BYREF
  char v58; // [rsp+D4h] [rbp-34h]
  _BYTE v59[32]; // [rsp+D8h] [rbp-30h] BYREF
  int v60; // [rsp+F8h] [rbp-10h] BYREF
  const char *v61; // [rsp+100h] [rbp-8h]
  LPVOID v62; // [rsp+108h] [rbp+0h]
  char v63; // [rsp+110h] [rbp+8h]
  __int64 v64; // [rsp+118h] [rbp+10h]
  _BYTE v65[144]; // [rsp+120h] [rbp+18h] BYREF
  LPVOID lpMem; // [rsp+1B0h] [rbp+A8h]
  __int64 v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  void *v69; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1D8h] [rbp+D0h] BYREF
  void *v71; // [rsp+1E8h] [rbp+E0h]
  int v72; // [rsp+1F0h] [rbp+E8h]
  int v73; // [rsp+1F4h] [rbp+ECh]
  WINBOOL *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  const WCHAR *v76; // [rsp+208h] [rbp+100h]
  int v77; // [rsp+210h] [rbp+108h]
  int v78; // [rsp+214h] [rbp+10Ch]

  v50 = -2LL;
  v52[0] = 0LL;
  v52[1] = &v51;
  v53 = 0LL;
  v54 = 0;
  v55 = &v60;
  v56 = &v57;
  v57 = 0;
  v58 = 0;
  v63 = 0;
  v60 = 0;
  v61 = "GetWindowAndPrepareForActivation";
  v62 = 0LL;
  v64 = 1LL;
  lpMem = 0LL;
  memset_0(v65, 0, sizeof(v65));
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v51 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  v6 = *(const WCHAR **)(a1 + 432);
  v7 = v56;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v7 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 2));
  *v7 = 1;
  v45 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v42, &v45) && v42 )
  {
    v45 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v8 = *((_QWORD *)v45 + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v43[0] = GetCurrentThreadId();
    v74 = v43;
    v75 = 4LL;
    v9 = &word_18035ABCC;
    LODWORD(v10) = 0;
    if ( v6 )
    {
      v9 = v6;
      v10 = -1LL;
      do
        ++v10;
      while ( v6[v10] );
    }
    v76 = v9;
    v77 = 2 * v10 + 2;
    v78 = 0;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v51);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388B4F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v71 = &unk_180388B5A;
    v72 = 67;
    v73 = 1;
    EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, (LPCGUID)(v56 + 2), v11, UserDataCount, &UserData);
  }
  if ( !v54 )
  {
    v13 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_57;
    CurrentThreadId = GetCurrentThreadId();
    v15 = CurrentThreadId % 0xAuLL;
    for ( i = *(_QWORD *)(v13 + 8 * v15); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == CurrentThreadId )
        goto LABEL_21;
    }
    ProcessHeap = GetProcessHeap();
    v33 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v33;
    if ( v33 )
    {
      *(_QWORD *)v33 = 0LL;
      v33[2] = CurrentThreadId;
      *((_QWORD *)v33 + 2) = 0LL;
      _m_prefetchw((const void *)(v13 + 8 * v15));
      do
      {
        v34 = *(_QWORD *)(v13 + 8 * v15);
        *(_QWORD *)(i + 16) = v34;
      }
      while ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v15), i, v34) );
    }
    else
    {
LABEL_57:
      i = 0LL;
    }
LABEL_21:
    v52[0] = i;
    if ( i )
    {
      v53 = *(_QWORD *)i;
      *(_QWORD *)i = v52;
      v54 = GetCurrentThreadId();
    }
  }
  *a3 = 0LL;
  if ( !*(_BYTE *)(a1 + 576) && ((*(_BYTE *)(a1 + 424) & 1) != 0 || (*(_DWORD *)(a1 + 424) & 8) != 0) )
  {
    if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
    {
      v26 = -2147023598;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 288);
      v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 48LL);
      if ( (char *)v18 == (char *)CFrameApplicationPresentation::GetSystemVisual )
        SystemVisual = CFrameApplicationPresentation::GetSystemVisual(v17);
      else
        SystemVisual = v18();
      if ( SystemVisual )
      {
        NativeWindow = 0LL;
        if ( *(_QWORD *)(a1 + 312) )
        {
          v21 = **(CTaskWindow ***)(a1 + 304);
          v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 32LL);
          if ( (char *)v22 == (char *)CTaskWindow::GetNativeWindow )
            NativeWindow = CTaskWindow::GetNativeWindow(v21);
          else
            NativeWindow = v22();
        }
        *a3 = (HWND)NativeWindow;
      }
      else
      {
        if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 152)) )
        {
          v26 = -2147024891;
          goto LABEL_42;
        }
        CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 152);
      }
      v40 = 0LL;
      v23 = *(CFrameApplicationPresentation **)(a1 + 288);
      v24 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v23 + 128LL);
      if ( v24 == CFrameApplicationPresentation::GetFrame )
        Frame = CFrameApplicationPresentation::GetFrame(v23, &v40);
      else
        Frame = v24(v23, &v40);
      v26 = Frame;
      if ( Frame >= 0 )
      {
        v27 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, HWND *))(*(_QWORD *)v40 + 24LL);
        if ( v27 == CApplicationFrameWrapper::GetFrameWindow )
          FrameWindow = CApplicationFrameWrapper::GetFrameWindow(v40, a3);
        else
          FrameWindow = v27(v40, a3);
        v26 = FrameWindow;
      }
      v29 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
  }
  else
  {
    v26 = -2147019873;
  }
LABEL_42:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v51, v26);
  v51 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  v30 = (volatile signed __int32 *)v69;
  if ( !v69 )
    goto LABEL_43;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v51,
    &SRWLock);
  v30 = (volatile signed __int32 *)v69;
  if ( v69 && *(_DWORD *)v69 == 1 )
  {
    v35 = 1;
  }
  else
  {
    v35 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v69);
    v30 = (volatile signed __int32 *)v69;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v30 = (volatile signed __int32 *)v69;
  }
  if ( v35 )
  {
LABEL_43:
    if ( *v56 == 1 )
    {
      v36 = 2147942974LL;
      if ( v56[21] < 0 )
        v36 = (unsigned int)v56[21];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v56,
        v36,
        &v47);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v51);
      v30 = (volatile signed __int32 *)v69;
    }
  }
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30, 0xFFFFFFFF) == 1 )
    {
      v37 = v69;
      if ( v69 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v69 + 8);
        operator delete(v37, (const struct std::nothrow_t *)0x100);
      }
    }
    v69 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v38 = GetProcessHeap();
      HeapFree(v38, 0, lpMem);
    }
    lpMem = 0LL;
    v67 = 0LL;
  }
  if ( v63 )
  {
    v39 = GetProcessHeap();
    HeapFree(v39, 0, v62);
    v63 = 0;
  }
  v62 = 0LL;
  if ( v57 == 1 )
  {
    v57 = 2;
    v46 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v43[1], &v46) && v43[1] )
    {
      v46 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v46 + 1), v59);
  }
  v57 = 3;
  if ( v54 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v52);
  return v26;
}
