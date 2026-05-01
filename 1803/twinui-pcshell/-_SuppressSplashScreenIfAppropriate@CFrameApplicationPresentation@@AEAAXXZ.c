/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800130C4
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800148B0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000E120 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??0?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18000E15C (--0-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000FA94 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FCBC (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x180012ECC (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1800F9780 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18010730C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18011CFF0 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180136FFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllAp.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180137054 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenW.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(CFrameApplicationPresentation *this)
{
  char *v2; // rsi
  CTaskWindow *v3; // rcx
  HWND (__fastcall *v4)(CTaskWindow *__hidden); // rax
  HWND NativeWindow; // rax
  int v6; // r14d
  int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // ebx
  const WCHAR *v10; // rdi
  int *v11; // rbx
  const struct _TlgProvider_t *v12; // rcx
  RTL_SRWLOCK *v13; // rcx
  const struct _TlgProvider_t *v14; // rbx
  char *v15; // rax
  int *v16; // rax
  char *v17; // rax
  int *v18; // rax
  DWORD CurrentThreadId; // eax
  const GUID *v20; // rax
  void *v21; // rbx
  HANDLE ProcessHeap; // rax
  void *v23; // rbx
  HANDLE v24; // rax
  HANDLE v25; // rax
  void *v26; // rbx
  HANDLE v27; // rax
  HANDLE v28; // rax
  __int16 v29; // [rsp+3Ch] [rbp-CCh]
  WINBOOL fPending; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL v31; // [rsp+44h] [rbp-C4h] BYREF
  DWORD v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-B0h] BYREF
  WINBOOL v35; // [rsp+60h] [rbp-A8h] BYREF
  WINBOOL v36; // [rsp+64h] [rbp-A4h] BYREF
  WINBOOL v37; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h]
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v41; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v42; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v43; // [rsp+90h] [rbp-78h] BYREF
  LPVOID v44; // [rsp+98h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-60h] BYREF
  void **v47; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v48[3]; // [rsp+C0h] [rbp-48h] BYREF
  int v49; // [rsp+D8h] [rbp-30h]
  int *v50; // [rsp+E0h] [rbp-28h]
  int *v51; // [rsp+E8h] [rbp-20h]
  int v52; // [rsp+F0h] [rbp-18h] BYREF
  char v53; // [rsp+F4h] [rbp-14h]
  char v54[32]; // [rsp+F8h] [rbp-10h] BYREF
  int v55; // [rsp+118h] [rbp+10h] BYREF
  const char *v56; // [rsp+120h] [rbp+18h]
  LPVOID v57; // [rsp+128h] [rbp+20h]
  char v58; // [rsp+130h] [rbp+28h]
  __int64 v59; // [rsp+138h] [rbp+30h]
  char v60[144]; // [rsp+140h] [rbp+38h] BYREF
  LPVOID v61; // [rsp+1D0h] [rbp+C8h]
  __int64 v62; // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]
  void *v64; // [rsp+1E8h] [rbp+E0h]
  void **v65; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v66[3]; // [rsp+200h] [rbp+F8h] BYREF
  int v67; // [rsp+218h] [rbp+110h]
  int *v68; // [rsp+220h] [rbp+118h]
  int *v69; // [rsp+228h] [rbp+120h]
  int v70; // [rsp+230h] [rbp+128h] BYREF
  char v71[48]; // [rsp+238h] [rbp+130h] BYREF
  LPVOID v72; // [rsp+268h] [rbp+160h]
  char v73; // [rsp+270h] [rbp+168h]
  LPVOID v74; // [rsp+310h] [rbp+208h]
  __int64 v75; // [rsp+318h] [rbp+210h]
  void *v76; // [rsp+328h] [rbp+220h]
  void **v77; // [rsp+338h] [rbp+230h] BYREF
  _QWORD v78[3]; // [rsp+340h] [rbp+238h] BYREF
  int v79; // [rsp+358h] [rbp+250h]
  int *v80; // [rsp+360h] [rbp+258h]
  int *v81; // [rsp+368h] [rbp+260h]
  int v82; // [rsp+370h] [rbp+268h] BYREF
  char v83[48]; // [rsp+378h] [rbp+270h] BYREF
  LPVOID lpMem; // [rsp+3A8h] [rbp+2A0h]
  char v85; // [rsp+3B0h] [rbp+2A8h]
  char v86[24]; // [rsp+450h] [rbp+348h] BYREF
  void *v87; // [rsp+468h] [rbp+360h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+478h] [rbp+370h] BYREF
  DWORD *v89; // [rsp+498h] [rbp+390h]
  __int64 v90; // [rsp+4A0h] [rbp+398h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 *v92; // [rsp+4B8h] [rbp+3B0h]
  __int64 v93; // [rsp+4C0h] [rbp+3B8h]
  int *v94; // [rsp+4C8h] [rbp+3C0h]
  __int64 v95; // [rsp+4D0h] [rbp+3C8h]
  unsigned int *v96; // [rsp+4D8h] [rbp+3D0h]
  __int64 v97; // [rsp+4E0h] [rbp+3D8h]
  wil::details::in1diag3 *retaddr; // [rsp+520h] [rbp+418h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
  v38 = 0;
  LOBYTE(v29) = 3;
  LOWORD(v39) = v29;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
    783899LL,
    &v38,
    1LL);
  v2 = (char *)this + 208;
  if ( *((_DWORD *)this + 52) == 1 && *((_BYTE *)this + 540) && !*((_DWORD *)this + 53) )
  {
    if ( !*((_BYTE *)this + 541) )
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsageToService();
    v3 = (CTaskWindow *)**((_QWORD **)this + 13);
    if ( v3
      && ((v4 = *(HWND (__fastcall **)(CTaskWindow *__hidden))(*(_QWORD *)v3 + 32LL), v4 != CTaskWindow::GetNativeWindow)
        ? (NativeWindow = (HWND)((__int64 (*)(void))v4)())
        : (NativeWindow = CTaskWindow::GetNativeWindow(v3)),
          NativeWindow) )
    {
      v6 = 2;
    }
    else
    {
      if ( !*((_BYTE *)this + 541) )
      {
        wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::ReportUsageToService();
        goto LABEL_100;
      }
      v6 = 3;
    }
    v7 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)this + 16);
      v9 = dword_180435F68;
      v10 = (const WCHAR *)*((_QWORD *)this + 68);
      v48[1] = &v47;
      *((_DWORD *)v2 + 1) = 1;
      v50 = &v55;
      v51 = &v52;
      v56 = "SplashScreenSuppressed";
      v48[0] = 0LL;
      v48[2] = 0LL;
      v49 = 0;
      v52 = 0;
      v53 = 0;
      v58 = 0;
      v55 = 0;
      v57 = 0LL;
      v59 = 1LL;
      v61 = 0LL;
      memset_0(v60, 0, sizeof(v60));
      v64 = 0LL;
      v62 = 0LL;
      v63 = 0LL;
      v34 = v9;
      v47 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      v33 = v6;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        (__int64)&v47,
        &SRWLock);
      v11 = v51;
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
      v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(v12, 0x400000000000uLL) )
        EventActivityIdControl(3u, (LPGUID)(v11 + 2));
      else
        *((_QWORD *)v11 + 1) = 0LL;
      v13 = SRWLock;
      *v11 = 1;
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      v41 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v31, &v41) && v31 )
      {
        v41 = qword_180438670;
        qword_180438670[0] = &LockScreenServiceLogging::`vftable';
        qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
      }
      v14 = (const struct _TlgProvider_t *)*((_QWORD *)v41 + 1);
      if ( *(_DWORD *)v14 > 5u
        && (*((_QWORD *)v14 + 2) & 0x400000000000LL) != 0
        && (*((_QWORD *)v14 + 3) & 0x400000000000LL) == *((_QWORD *)v14 + 3) )
      {
        CurrentThreadId = GetCurrentThreadId();
        v90 = 4LL;
        v32 = CurrentThreadId;
        v89 = &v32;
        TlgCreateWsz(&pDesc, v10);
        v46 = v8;
        v92 = &v46;
        v94 = &v33;
        v96 = &v34;
        v93 = 8LL;
        v95 = 4LL;
        v97 = 4LL;
        v20 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v47);
        TlgWrite(v14, &unk_180388F4E, (LPCGUID)(v51 + 2), v20, 7u, &pData);
      }
      if ( !v49 )
        wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v48);
      v66[0] = 0LL;
      v66[1] = &v65;
      v65 = &wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
      v66[2] = 0LL;
      v67 = 0;
      v68 = 0LL;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v70,
        (__int64)&v52);
      v15 = (char *)v64;
      v76 = v64;
      v64 = 0LL;
      if ( v76 )
        v16 = (int *)(v15 + 8);
      else
        v16 = &v70;
      v69 = v16;
      v68 = v16 + 10;
      v51 = &v52;
      if ( v49 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v48);
      v77 = &wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
      v65 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      v78[1] = &v77;
      v78[0] = 0LL;
      v78[2] = 0LL;
      v79 = 0;
      v80 = 0LL;
      if ( *((_DWORD *)v2 + 10) )
        wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v78);
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v82,
        (__int64)(v2 + 64));
      v87 = (void *)*((_QWORD *)v2 + 39);
      v17 = (char *)v87;
      *((_QWORD *)v2 + 39) = 0LL;
      if ( v17 )
        v18 = (int *)(v17 + 8);
      else
        v18 = &v82;
      v81 = v18;
      v80 = v18 + 10;
      *((_QWORD *)v2 + 7) = v2 + 64;
      if ( *((_DWORD *)v2 + 10) )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(v2 + 16));
      v77 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
        (__int64)(v2 + 8),
        (__int64)&v65);
      v77 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v77);
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v87, 0xFFFFFFFF) == 1 )
        {
          v21 = v87;
          if ( v87 )
          {
            wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v87 + 2);
            operator delete(v21, (const struct std::nothrow_t *)0x100);
          }
        }
        v87 = 0LL;
      }
      wil::details::shared_buffer::reset((wil::details::shared_buffer *)v86);
      if ( v85 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
        v85 = 0;
      }
      lpMem = 0LL;
      if ( v82 == 1 )
      {
        v82 = 2;
        v42 = 0LL;
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v35, &v42) && v35 )
        {
          v42 = qword_180438670;
          qword_180438670[0] = &LockScreenServiceLogging::`vftable';
          qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
        }
        _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)v42 + 1), v83);
      }
      v82 = 3;
      if ( v79 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v78);
      v65 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v65);
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v76, 0xFFFFFFFF) == 1 )
        {
          v23 = v76;
          if ( v76 )
          {
            wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v76 + 2);
            operator delete(v23, (const struct std::nothrow_t *)0x100);
          }
        }
        v76 = 0LL;
      }
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v74, 0xFFFFFFFF) == 1 )
        {
          v24 = GetProcessHeap();
          HeapFree(v24, 0, v74);
        }
        v74 = 0LL;
        v75 = 0LL;
      }
      if ( v73 )
      {
        v25 = GetProcessHeap();
        HeapFree(v25, 0, v72);
        v73 = 0;
      }
      v72 = 0LL;
      if ( v70 == 1 )
      {
        v70 = 2;
        v43 = 0LL;
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v36, &v43) && v36 )
        {
          v43 = qword_180438670;
          qword_180438670[0] = &LockScreenServiceLogging::`vftable';
          qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
        }
        _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)v43 + 1), v71);
      }
      v70 = 3;
      if ( v67 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v66);
      v47 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v47);
      if ( v64 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v64) )
        {
          v26 = v64;
          if ( v64 )
          {
            wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v64 + 2);
            operator delete(v26, (const struct std::nothrow_t *)0x100);
          }
        }
        v64 = 0LL;
      }
      if ( v61 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v61) )
        {
          v27 = GetProcessHeap();
          HeapFree(v27, 0, v61);
        }
        v61 = 0LL;
        v62 = 0LL;
      }
      if ( v58 )
      {
        v28 = GetProcessHeap();
        HeapFree(v28, 0, v57);
        v58 = 0;
      }
      v57 = 0LL;
      if ( v52 == 1 )
      {
        v52 = 2;
        v44 = 0LL;
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v37, &v44) && v37 )
        {
          v44 = qword_180438670;
          qword_180438670[0] = &LockScreenServiceLogging::`vftable';
          qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
        }
        _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)v44 + 1), v54);
      }
      v52 = 3;
      if ( v49 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v48);
      return;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x671,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v7,
      3);
LABEL_100:
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 208, 0LL);
  }
}
