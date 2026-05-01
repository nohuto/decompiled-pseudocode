/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___ @ 0x180012700 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x1800190E4 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x18004BED0 (-ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800F7DAC (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsP_ea_1800F7DAC.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_qd @ 0x180112400 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct ITaskWindow *a2)
{
  struct ITaskWindow *v4; // rdi
  char v5; // r12
  char v6; // di
  HWND (__fastcall *v7)(CTaskWindow *__hidden); // rax
  HWND NativeWindow; // rax
  HWND v9; // r15
  HWND *v10; // r14
  HWND v12; // r14
  int *v13; // rdi
  __int64 v14; // rdi
  const GUID *v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  signed __int64 *v18; // r14
  signed __int64 v19; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v21; // rax
  signed __int64 v22; // rax
  CImmersiveApp *v23; // rcx
  void (__fastcall *v24)(CImmersiveApp *__hidden); // rax
  __int64 v25; // rdx
  void (__fastcall *v26)(struct ITaskWindow *, __int64, __int64); // rax
  __int64 v27; // rcx
  __int64 v28; // r14
  DWORD v29; // edi
  signed __int64 *v30; // r14
  signed __int64 v31; // rcx
  char *v32; // rax
  char *v33; // rdi
  char *v34; // r14
  char v35; // bl
  volatile signed __int32 *v36; // rdx
  int v37; // edi
  __int64 v38; // rax
  HANDLE v39; // rax
  _DWORD *v40; // rax
  signed __int64 v41; // rax
  HANDLE v42; // rax
  void *v43; // r15
  void *v44; // rdi
  void *v45; // rdi
  int v46; // eax
  __int64 v47; // rdx
  void *v48; // rbx
  HANDLE v49; // rax
  HANDLE v50; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v52; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v59; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v60; // [rsp+70h] [rbp-90h] BYREF
  char v61[8]; // [rsp+78h] [rbp-88h] BYREF
  HWND v62; // [rsp+80h] [rbp-80h] BYREF
  HWND v63; // [rsp+88h] [rbp-78h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v66[2]; // [rsp+A8h] [rbp-58h] BYREF
  void **v67; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v68[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h]
  DWORD v70; // [rsp+D8h] [rbp-28h]
  _DWORD *v71; // [rsp+E0h] [rbp-20h]
  int *v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+F0h] [rbp-10h] BYREF
  char v74; // [rsp+F4h] [rbp-Ch]
  int v75; // [rsp+118h] [rbp+18h]
  __int128 v76; // [rsp+120h] [rbp+20h]
  char v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  char v79[144]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  __int64 v82; // [rsp+1E0h] [rbp+E0h]
  void *v83[5]; // [rsp+1E8h] [rbp+E8h] BYREF
  void **v84; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v85[2]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v86; // [rsp+228h] [rbp+128h]
  DWORD v87; // [rsp+230h] [rbp+130h]
  int *v88; // [rsp+238h] [rbp+138h]
  int *v89; // [rsp+240h] [rbp+140h]
  int v90; // [rsp+248h] [rbp+148h] BYREF
  char v91; // [rsp+24Ch] [rbp+14Ch]
  _OWORD v92[2]; // [rsp+250h] [rbp+150h] BYREF
  int v93; // [rsp+270h] [rbp+170h] BYREF
  const char *v94; // [rsp+278h] [rbp+178h]
  LPVOID v95; // [rsp+280h] [rbp+180h]
  char v96; // [rsp+288h] [rbp+188h]
  __int64 v97; // [rsp+290h] [rbp+190h]
  _BYTE v98[144]; // [rsp+298h] [rbp+198h] BYREF
  LPVOID lpMem; // [rsp+328h] [rbp+228h]
  __int64 v100; // [rsp+330h] [rbp+230h]
  __int64 v101; // [rsp+338h] [rbp+238h]
  void *v102; // [rsp+340h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+350h] [rbp+250h] BYREF
  void *v104; // [rsp+360h] [rbp+260h]
  int v105; // [rsp+368h] [rbp+268h]
  int v106; // [rsp+36Ch] [rbp+26Ch]
  DWORD *p_CurrentThreadId; // [rsp+370h] [rbp+270h]
  __int64 v108; // [rsp+378h] [rbp+278h]
  int *v109; // [rsp+380h] [rbp+280h]
  __int64 v110; // [rsp+388h] [rbp+288h]
  HWND *v111; // [rsp+390h] [rbp+290h]
  __int64 v112; // [rsp+398h] [rbp+298h]
  HWND *v113; // [rsp+3A0h] [rbp+2A0h]
  __int64 v114; // [rsp+3A8h] [rbp+2A8h]

  v83[1] = (void *)-2LL;
  v4 = (struct ITaskWindow *)**((_QWORD **)this + 13);
  if ( !a2 || !v4 )
  {
LABEL_72:
    v6 = 0;
    v5 = 0;
    goto LABEL_5;
  }
  if ( a2 != v4 )
  {
    v57 = 0LL;
    v56 = 0LL;
    if ( (**(int (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))a2)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v57) >= 0 )
    {
      v37 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))v4)(
              v4,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v56);
      if ( v37 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      if ( v37 >= 0 && v57 == v56 )
      {
        v5 = 1;
        v6 = 1;
        goto LABEL_5;
      }
    }
    goto LABEL_72;
  }
  v5 = 1;
  v6 = 1;
LABEL_5:
  v7 = *(HWND (__fastcall **)(CTaskWindow *__hidden))(*(_QWORD *)a2 + 32LL);
  if ( v7 == CTaskWindow::GetNativeWindow )
    NativeWindow = CTaskWindow::GetNativeWindow(a2);
  else
    NativeWindow = v7(a2);
  v9 = NativeWindow;
  v10 = (HWND *)*((_QWORD *)this + 14);
  if ( v6 && NativeWindow == *v10 )
    return 0LL;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v38 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids, v38);
    v10 = (HWND *)*((_QWORD *)this + 14);
  }
  v85[0] = 0LL;
  v85[1] = &v84;
  v86 = 0LL;
  v87 = 0;
  v88 = &v93;
  v89 = &v90;
  v90 = 0;
  v91 = 0;
  v96 = 0;
  v93 = 0;
  v94 = "PresentWindow";
  v95 = 0LL;
  v97 = 1LL;
  lpMem = 0LL;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v84 = &CFramePresentationTelemetry::PresentWindow::`vftable';
  v12 = *v10;
  v54 = *((_DWORD *)this + 12);
  v13 = v89;
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
    *((_QWORD *)v13 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v13 + 2));
  *v13 = 1;
  v59 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v52, &v59) && v52 )
  {
    v59 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v14 = *((_QWORD *)v59 + 1);
  if ( *(_DWORD *)v14 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v108 = 4LL;
    v109 = &v54;
    v110 = 4LL;
    v62 = v12;
    v111 = &v62;
    v112 = 8LL;
    v63 = v9;
    v113 = &v63;
    v114 = 8LL;
    v15 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v84);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388EF4 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v14 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v104 = &unk_180388EFF;
    v105 = 78;
    v106 = 1;
    EventWriteTransfer(*(_QWORD *)(v14 + 32), &EventDescriptor, (LPCGUID)(v89 + 2), v15, 6u, &UserData);
  }
  if ( v87 )
    goto LABEL_31;
  v16 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_83;
  v17 = GetCurrentThreadId();
  v18 = (signed __int64 *)(v16 + 8 * (v17 % 0xA));
  v19 = *v18;
  if ( *v18 )
  {
    while ( *(_DWORD *)(v19 + 8) != (_DWORD)v17 )
    {
      v19 = *(_QWORD *)(v19 + 16);
      if ( !v19 )
        goto LABEL_26;
    }
    goto LABEL_29;
  }
LABEL_26:
  ProcessHeap = GetProcessHeap();
  v21 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v19 = (signed __int64)v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = 0LL;
    v21[2] = v17;
    *((_QWORD *)v21 + 2) = 0LL;
    _m_prefetchw(v18);
    do
    {
      v22 = *v18;
      *(_QWORD *)(v19 + 16) = *v18;
    }
    while ( v22 != _InterlockedCompareExchange64(v18, v19, v22) );
  }
  else
  {
LABEL_83:
    v19 = 0LL;
  }
LABEL_29:
  v85[0] = v19;
  if ( v19 )
  {
    v86 = *(_QWORD *)v19;
    *(_QWORD *)v19 = v85;
    v87 = GetCurrentThreadId();
  }
LABEL_31:
  v23 = (CImmersiveApp *)*((_QWORD *)this + 71);
  v24 = *(void (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v23 + 536LL);
  if ( v24 == CImmersiveApp::ReconcileAutorotationPreferences )
    CImmersiveApp::ReconcileAutorotationPreferences(v23);
  else
    v24(v23);
  v25 = *((_QWORD *)this + 16);
  v26 = *(void (__fastcall **)(struct ITaskWindow *, __int64, __int64))(*(_QWORD *)a2 + 208LL);
  if ( (char *)v26 == (char *)CTaskWindow::SetPresentationState )
    CTaskWindow::SetPresentationState(a2, v25, 3LL);
  else
    v26(a2, v25, 3LL);
  v27 = **((_QWORD **)this + 13);
  if ( v27 && !v5 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v27 + 208LL))(v27, *((_QWORD *)this + 16), 1LL);
  v83[2] = a2;
  (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v66[0] = a2;
  (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v66[1] = this;
  v67 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v68[0] = 0LL;
  v68[1] = &v67;
  v69 = 0LL;
  v70 = 0;
  v71 = 0LL;
  v28 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_90;
  v29 = GetCurrentThreadId();
  v30 = (signed __int64 *)(v28 + 8 * (v29 % 0xAuLL));
  v31 = *v30;
  if ( *v30 )
  {
    while ( *(_DWORD *)(v31 + 8) != v29 )
    {
      v31 = *(_QWORD *)(v31 + 16);
      if ( !v31 )
        goto LABEL_86;
    }
    goto LABEL_43;
  }
LABEL_86:
  v39 = GetProcessHeap();
  v40 = HeapAlloc(v39, 0, 0x18uLL);
  v31 = (signed __int64)v40;
  if ( v40 )
  {
    *(_QWORD *)v40 = 0LL;
    v40[2] = v29;
    *((_QWORD *)v40 + 2) = 0LL;
    _m_prefetchw(v30);
    do
    {
      v41 = *v30;
      *(_QWORD *)(v31 + 16) = *v30;
    }
    while ( v41 != _InterlockedCompareExchange64(v30, v31, v41) );
  }
  else
  {
LABEL_90:
    v31 = 0LL;
  }
LABEL_43:
  v68[0] = v31;
  if ( v31 )
  {
    v69 = *(_QWORD *)v31;
    *(_QWORD *)v31 = v68;
    v70 = GetCurrentThreadId();
  }
  v72 = &v73;
  v73 = 0;
  v74 = 0;
  v77 = 0;
  v75 = 0;
  v76 = 0LL;
  v78 = 1LL;
  v80 = 0LL;
  memset_0(v79, 0, sizeof(v79));
  v81 = 0LL;
  v82 = 0LL;
  v83[0] = 0LL;
  if ( v70 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v68);
  if ( v102 )
  {
    v72 = v89;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v83,
      &v102);
  }
  else
  {
    v32 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v33 = v32;
    if ( v32 )
    {
      *(_DWORD *)v32 = 1;
      v34 = v32 + 8;
      *((_DWORD *)v32 + 2) = 0;
      v32[12] = 0;
      *((_DWORD *)v32 + 2) = v90;
      v32[12] = v91;
      *((_OWORD *)v32 + 1) = v92[0];
      *((_OWORD *)v32 + 2) = v92[1];
      v90 = 0;
      v91 = 0;
      memset_0(v32 + 48, 0, 0x20uLL);
      *((_DWORD *)v34 + 10) = v93;
      *((_QWORD *)v34 + 6) = v94;
      if ( v34[64] )
      {
        v42 = GetProcessHeap();
        HeapFree(v42, 0, *((LPVOID *)v34 + 7));
        v34[64] = 0;
      }
      *((_QWORD *)v34 + 7) = 0LL;
      *((_QWORD *)v34 + 7) = v95;
      v95 = 0LL;
      v34[64] = v96;
      v96 = 0;
      *((_QWORD *)v34 + 9) = v97;
      wil::StoredFailureInfo::StoredFailureInfo(v34 + 80, v98);
      *((_QWORD *)v34 + 30) = 0LL;
      if ( v83[0] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v83[0], 0xFFFFFFFF) == 1 )
        {
          v43 = v83[0];
          if ( v83[0] )
          {
            wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v83[0] + 8);
            operator delete(v43, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      v83[0] = v33;
      v72 = (int *)v34;
      if ( v102 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v102, 0xFFFFFFFF) == 1 )
        {
          v44 = v102;
          if ( v102 )
          {
            wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v102 + 8);
            operator delete(v44, (const struct std::nothrow_t *)0x100);
          }
        }
        v33 = (char *)v83[0];
      }
      v102 = v33;
      if ( v33 )
        _InterlockedIncrement((volatile signed __int32 *)v33);
      v89 = v72;
      v88 = v72 + 10;
    }
  }
  v71 = v72 + 10;
  v67 = &CFramePresentationTelemetry::PresentWindow::`vftable';
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___(this, (__int64)v66);
  (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  v84 = &CFramePresentationTelemetry::PresentWindow::`vftable';
  v35 = 1;
  v36 = (volatile signed __int32 *)v102;
  if ( !v102 )
    goto LABEL_101;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v84,
    &SRWLock);
  v36 = (volatile signed __int32 *)v102;
  if ( !v102 || *(_DWORD *)v102 != 1 )
  {
    v35 = 0;
    if ( v102 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v102, 0xFFFFFFFF) == 1 )
      {
        v45 = v102;
        if ( v102 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v102 + 8);
          operator delete(v45, (const struct std::nothrow_t *)0x100);
        }
      }
      v36 = 0LL;
      v102 = 0LL;
    }
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v36 = (volatile signed __int32 *)v102;
  }
  if ( v35 )
  {
LABEL_101:
    if ( *v89 == 1 )
    {
      v46 = v89[21];
      v47 = 2147942974LL;
      if ( v46 < 0 )
        v47 = (unsigned int)v46;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v89,
        v47,
        v61);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v84);
      v36 = (volatile signed __int32 *)v102;
    }
  }
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      v48 = v102;
      if ( v102 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v102 + 8);
        operator delete(v48, (const struct std::nothrow_t *)0x100);
      }
    }
    v102 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v49 = GetProcessHeap();
      HeapFree(v49, 0, lpMem);
    }
    lpMem = 0LL;
    v100 = 0LL;
  }
  if ( v96 )
  {
    v50 = GetProcessHeap();
    HeapFree(v50, 0, v95);
    v96 = 0;
  }
  v95 = 0LL;
  if ( v90 == 1 )
  {
    v90 = 2;
    v60 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v55, &v60) && v55 )
    {
      v60 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v60 + 1), v92);
  }
  v90 = 3;
  if ( v87 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v85);
  return 0LL;
}
