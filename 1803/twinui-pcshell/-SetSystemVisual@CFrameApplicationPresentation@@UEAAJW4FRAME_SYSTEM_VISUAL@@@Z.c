/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950
 * Callers:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 * Callees:
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18000DE54 (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x18000DF88 (-TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA-AV12@XZ.c)
 *     ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x18000DFBC (--1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18000E15C (--0-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x18000E8F0 (-StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800106C4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___ @ 0x180012350 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___.c)
 *     ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x1800148E0 (-GetPresentedWindow@CFrameApplicationPresentation@@UEBA-AV-$ComPtr@UITaskWindow@@@WRL@Microsoft@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800869BC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DA28 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800F7D0C (--4-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F7E84 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800F7E84.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1800F9780 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1801035C4 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_Ld @ 0x180132694 (WPP_SF_Ld.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(_DWORD *a1, unsigned int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rsi
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64, __int64); // rax
  char v12; // al
  char v13; // r13
  char v14; // r12
  unsigned int *v15; // r14
  __int64 *(__fastcall *v16)(__int64, __int64 *); // rax
  __int64 *PresentedWindow; // rax
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 *(__fastcall *v22)(__int64, __int64 *); // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 *Local; // rcx
  int *v26; // rax
  int *v27; // rbx
  int *v28; // rsi
  int *v29; // rcx
  char v30; // bl
  volatile signed __int32 *v31; // rdx
  CFramePresentationTelemetry::SplashScreenSuppressed *v33; // rax
  const GUID *v34; // rax
  void *v35; // r15
  void *v36; // rdi
  int v37; // eax
  __int64 v38; // rdx
  void (__fastcall *v39)(CFramePresentationTelemetry::SetSystemVisual *); // rax
  void *v40; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v42; // rax
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v45; // [rsp+3Ch] [rbp-C4h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL v49; // [rsp+54h] [rbp-ACh] BYREF
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v51; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-80h] BYREF
  char v56[8]; // [rsp+88h] [rbp-78h] BYREF
  PSRWLOCK v57; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v58[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h]
  unsigned int v60; // [rsp+B0h] [rbp-50h] BYREF
  char v61; // [rsp+B4h] [rbp-4Ch]
  char v62; // [rsp+B5h] [rbp-4Bh]
  _DWORD *v63; // [rsp+B8h] [rbp-48h]
  void **v64; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v65[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-28h]
  DWORD v67; // [rsp+E0h] [rbp-20h]
  int *v68; // [rsp+E8h] [rbp-18h]
  int *v69; // [rsp+F0h] [rbp-10h]
  int v70; // [rsp+F8h] [rbp-8h] BYREF
  char v71; // [rsp+FCh] [rbp-4h]
  int v72; // [rsp+120h] [rbp+20h]
  __int128 v73; // [rsp+128h] [rbp+28h]
  char v74; // [rsp+138h] [rbp+38h]
  __int64 v75; // [rsp+140h] [rbp+40h]
  char v76[144]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  __int64 v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  void *v80[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  void **v81; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v82[3]; // [rsp+208h] [rbp+108h] BYREF
  int v83; // [rsp+220h] [rbp+120h]
  int *v84; // [rsp+228h] [rbp+128h]
  int *v85; // [rsp+230h] [rbp+130h]
  int v86; // [rsp+238h] [rbp+138h] BYREF
  char v87; // [rsp+23Ch] [rbp+13Ch]
  char v88[32]; // [rsp+240h] [rbp+140h] BYREF
  int v89; // [rsp+260h] [rbp+160h] BYREF
  const char *v90; // [rsp+268h] [rbp+168h]
  LPVOID v91; // [rsp+270h] [rbp+170h]
  char v92; // [rsp+278h] [rbp+178h]
  __int64 v93; // [rsp+280h] [rbp+180h]
  char v94[144]; // [rsp+288h] [rbp+188h] BYREF
  LPVOID lpMem; // [rsp+318h] [rbp+218h]
  __int64 v96; // [rsp+320h] [rbp+220h]
  __int64 v97; // [rsp+328h] [rbp+228h]
  void *v98[2]; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v99[40]; // [rsp+340h] [rbp+240h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+480h] [rbp+380h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+4A0h] [rbp+3A0h]
  __int64 v102; // [rsp+4A8h] [rbp+3A8h]
  int *v103; // [rsp+4B0h] [rbp+3B0h]
  __int64 v104; // [rsp+4B8h] [rbp+3B8h]
  _QWORD *v105; // [rsp+4C0h] [rbp+3C0h]
  __int64 v106; // [rsp+4C8h] [rbp+3C8h]
  unsigned int *v107; // [rsp+4D0h] [rbp+3D0h]
  __int64 v108; // [rsp+4D8h] [rbp+3D8h]

  v80[1] = (void *)-2LL;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids, a2);
  v4 = (__int64 *)*((_QWORD *)a1 + 14);
  v82[0] = 0LL;
  v82[1] = &v81;
  v82[2] = 0LL;
  v83 = 0;
  v84 = &v89;
  v85 = &v86;
  v86 = 0;
  v87 = 0;
  v92 = 0;
  v89 = 0;
  v90 = "SetSystemVisual";
  v91 = 0LL;
  v93 = 1LL;
  lpMem = 0LL;
  memset_0(v94, 0, sizeof(v94));
  v96 = 0LL;
  v97 = 0LL;
  v98[0] = 0LL;
  v81 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  v5 = *v4;
  v47 = a1[12];
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v81,
    &v57);
  v6 = v85;
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
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(v7, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  else
    *((_QWORD *)v6 + 1) = 0LL;
  *v6 = 1;
  if ( v57 )
    ReleaseSRWLockExclusive(v57);
  v51 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v45, &v51) && v45 )
  {
    v51 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)v51 + 1);
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v102 = 4LL;
    v103 = &v47;
    v104 = 4LL;
    v58[0] = v5;
    v105 = v58;
    v106 = 8LL;
    v48 = a2;
    v107 = &v48;
    v108 = 4LL;
    v34 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v81);
    TlgWrite(v8, &unk_180388E49, (LPCGUID)(v85 + 2), v34, 6u, &pData);
  }
  if ( !v83 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v82);
  v9 = **((_QWORD **)a1 + 13);
  if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 16);
    v11 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 208LL);
    if ( (char *)v11 == (char *)CTaskWindow::SetPresentationState )
      CTaskWindow::SetPresentationState(v9, v10, 3LL);
    else
      v11(v9, v10, 3LL);
  }
  if ( a1[53] != 1 || a2 == 1 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( *((_BYTE *)a1 + 52) )
    {
      v13 = 1;
      goto LABEL_77;
    }
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_23:
    v14 = 0;
    goto LABEL_24;
  }
LABEL_77:
  if ( a1[134] != 1 )
    goto LABEL_23;
  v14 = 1;
LABEL_24:
  v15 = a1 + 52;
  v58[1] = a1;
  v59 = 0LL;
  v16 = *(__int64 *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 56LL);
  if ( v16 == CFrameApplicationPresentation::GetPresentedWindow )
    PresentedWindow = CFrameApplicationPresentation::GetPresentedWindow((__int64)a1, &v52);
  else
    PresentedWindow = v16((__int64)a1, &v52);
  v19 = 0LL;
  v54 = 0LL;
  v20 = 0LL;
  if ( &v54 != PresentedWindow )
  {
    v54 = *PresentedWindow;
    v19 = v54;
    *PresentedWindow = 0LL;
    v20 = v19;
  }
  v59 = v19;
  v21 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( a2 != *v15 )
  {
    *((_BYTE *)a1 + 528) = 0;
    if ( a1[53] == 1 )
    {
      v33 = (CFramePresentationTelemetry::SplashScreenSuppressed *)CFramePresentationTelemetry::SplashScreenSuppressed::TransferToCurrentThread(
                                                                     (__int64)(a1 + 54),
                                                                     v99,
                                                                     v18);
      CFramePresentationTelemetry::SplashScreenSuppressed::Stop(v33, 1);
      CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)v99);
    }
    a1[53] = 0;
  }
  *v15 = a2;
  v22 = *(__int64 *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 56LL);
  if ( v22 == CFrameApplicationPresentation::GetPresentedWindow )
    CFrameApplicationPresentation::GetPresentedWindow((__int64)a1, &v43);
  else
    v22((__int64)a1, &v43);
  v24 = v43;
  if ( v43 != v20 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 71) + 520LL))(*((_QWORD *)a1 + 71));
    v24 = v43;
  }
  if ( v24 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( a2 == 1 && *((_BYTE *)a1 + 52) && a1[53] != 1 )
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 52, 0LL);
  v60 = a2;
  v61 = v13;
  v62 = v14;
  v63 = a1;
  v64 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v65[0] = 0LL;
  v65[1] = &v64;
  v66 = 0LL;
  v67 = 0;
  v68 = 0LL;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    LOBYTE(v24) = 1;
    Local = (__int64 *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                         v23,
                         v24);
  }
  else
  {
    Local = 0LL;
  }
  v65[0] = Local;
  if ( Local )
  {
    v66 = *Local;
    *Local = (__int64)v65;
    v67 = GetCurrentThreadId();
  }
  v69 = &v70;
  v70 = 0;
  v71 = 0;
  v74 = 0;
  v72 = 0;
  v73 = 0LL;
  v75 = 1LL;
  v77 = 0LL;
  memset_0(v76, 0, sizeof(v76));
  v78 = 0LL;
  v79 = 0LL;
  v80[0] = 0LL;
  if ( v67 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v65);
  if ( v98[0] )
  {
    v69 = v85;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v80,
      v98);
    goto LABEL_91;
  }
  v26 = (int *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v27 = v26;
  if ( !v26 )
  {
LABEL_91:
    v29 = v69;
    goto LABEL_55;
  }
  *v26 = 1;
  v28 = v26 + 2;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(v26 + 2),
    (__int64)&v86);
  if ( v80[0] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v80[0], 0xFFFFFFFF) == 1 )
    {
      v35 = v80[0];
      if ( v80[0] )
      {
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v80[0] + 8);
        operator delete(v35, (const struct std::nothrow_t *)0x100);
      }
    }
  }
  v80[0] = v27;
  v69 = v28;
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v98);
  v98[0] = v80[0];
  if ( v80[0] )
    _InterlockedIncrement((volatile signed __int32 *)v80[0]);
  v29 = v69;
  v85 = v69;
  v84 = v69 + 10;
LABEL_55:
  v68 = v29 + 10;
  v64 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___(a1, (int *)&v60);
  v81 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  v30 = 1;
  v31 = (volatile signed __int32 *)v98[0];
  if ( !v98[0] )
    goto LABEL_97;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v81,
    &SRWLock);
  v31 = (volatile signed __int32 *)v98[0];
  if ( !v98[0] || *(_DWORD *)v98[0] != 1 )
  {
    v30 = 0;
    if ( v98[0] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v98[0], 0xFFFFFFFF) == 1 )
      {
        v36 = v98[0];
        if ( v98[0] )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98[0] + 8);
          operator delete(v36, (const struct std::nothrow_t *)0x100);
        }
      }
      v31 = 0LL;
      v98[0] = 0LL;
    }
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v31 = (volatile signed __int32 *)v98[0];
  }
  if ( v30 )
  {
LABEL_97:
    if ( *v85 == 1 )
    {
      v37 = v85[21];
      v38 = 2147942974LL;
      if ( v37 < 0 )
        v38 = (unsigned int)v37;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v85,
        v38,
        v56);
      v39 = (void (__fastcall *)(CFramePresentationTelemetry::SetSystemVisual *))v81[1];
      if ( v39 == CFramePresentationTelemetry::SetSystemVisual::StopActivity )
        CFramePresentationTelemetry::SetSystemVisual::StopActivity((CFramePresentationTelemetry::SetSystemVisual *)&v81);
      else
        v39((CFramePresentationTelemetry::SetSystemVisual *)&v81);
      v31 = (volatile signed __int32 *)v98[0];
    }
  }
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 1 )
    {
      v40 = v98[0];
      if ( v98[0] )
      {
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98[0] + 8);
        operator delete(v40, (const struct std::nothrow_t *)0x100);
      }
    }
    v98[0] = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v96 = 0LL;
  }
  if ( v92 )
  {
    v42 = GetProcessHeap();
    HeapFree(v42, 0, v91);
    v92 = 0;
  }
  v91 = 0LL;
  if ( v86 == 1 )
  {
    v86 = 2;
    v53 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v49, &v53) && v49 )
    {
      v53 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)v53 + 1), v88);
  }
  v86 = 3;
  if ( v83 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v82);
  return 0LL;
}
