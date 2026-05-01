/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20
 * Callers:
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004361C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180003D68 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180013690 (-SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 *     ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x1800136D0 (-SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 *     ?SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z @ 0x180013720 (-SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z.c)
 *     ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50 (-GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00 (-GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C7B0 (-GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005D358 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005D748 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005DC0C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18009DED8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800F952C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1Completer@?$static_lazy@VCAppManagerLogging@@@details@wil@@QEAA@XZ @ 0x1801049D0 (--1Completer@-$static_lazy@VCAppManagerLogging@@@details@wil@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18012C7B0 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18012ED8C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x180130308 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x180131A64 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180132004 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     WPP_SF_SdL @ 0x1801327F0 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x1801329A8 (WPP_SF_Sdq.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CImmersiveApp::SetViewPosition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 v12; // r12
  const WCHAR *v13; // rbx
  int *v14; // rsi
  __int64 v15; // rsi
  const WCHAR *v16; // rcx
  __int64 v17; // rax
  const GUID *v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  signed __int64 *v21; // rbx
  signed __int64 v22; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v24; // rax
  signed __int64 v25; // rax
  int v26; // eax
  int v27; // ecx
  bool v28; // r13
  __int64 *v29; // rax
  __int64 v30; // rcx
  CFrameApplicationPresentation *v31; // rcx
  __int64 (__fastcall *v32)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  __int64 (__fastcall *v34)(CApplicationFrameWrapper *, HWND *); // rax
  int v35; // eax
  struct IApplicationFrameProxy *v36; // rcx
  struct IApplicationPresentationLayer *v37; // rdx
  unsigned int v38; // esi
  unsigned __int8 v39; // r13
  struct IUnknown *v40; // rdx
  char v41; // r14
  bool v42; // si
  struct tagSIZE v43; // rdx
  struct tagSIZE v44; // r8
  CFrameApplicationPresentation *v45; // rcx
  void (*v46)(void); // rax
  CFrameApplicationPresentation *v47; // rcx
  struct tagSIZE v48; // r8
  struct tagSIZE v49; // rdx
  __int64 (__fastcall *v50)(CFrameApplicationPresentation *, struct tagSIZE, struct tagSIZE); // rax
  __int16 v51; // ax
  __int16 v52; // cx
  unsigned int v53; // r15d
  bool v54; // al
  void (__fastcall *v55)(CImmersiveApp *__hidden, struct IImmersiveMonitor **); // rax
  struct IUnknown *v56; // rbx
  struct IUnknown *v57; // rax
  PSRWLOCK v58; // r13
  PVOID Ptr; // rcx
  struct IUnknown **v60; // r14
  struct IUnknown **v61; // r12
  bool v62; // si
  bool v63; // zf
  unsigned int v64; // ebx
  struct IUnknown *v65; // rdx
  __int64 v66; // r14
  bool IsApplicationWindowGhost; // al
  __int64 v68; // rcx
  PSRWLOCK v69; // rbx
  char *v70; // rdx
  _DWORD *v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // rsi
  int updated; // ebx
  char v76; // si
  PSRWLOCK v77; // rbx
  char *v78; // rdx
  _DWORD *v79; // rdx
  int v80; // eax
  __int64 v81; // rdx
  char *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r13
  int v85; // eax
  int v86; // ecx
  char v87; // si
  __int64 v88; // rcx
  void (*v89)(void); // rax
  int v90; // edx
  int v91; // r8d
  __int64 v92; // rbx
  char v93; // al
  int v94; // r8d
  bool v95; // dl
  char *v96; // rax
  struct IUnknown *v97; // rcx
  volatile signed __int32 *v98; // rdx
  char v99; // bl
  int v100; // eax
  __int64 v101; // rdx
  void *v102; // rbx
  HANDLE v103; // rax
  HANDLE v104; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  char v107; // [rsp+30h] [rbp-D0h]
  char v108; // [rsp+31h] [rbp-CFh]
  _OWORD *v109; // [rsp+38h] [rbp-C8h]
  __int16 v110; // [rsp+40h] [rbp-C0h]
  unsigned int v111; // [rsp+44h] [rbp-BCh]
  struct IApplicationFrameProxy *v112; // [rsp+48h] [rbp-B8h] BYREF
  struct IUnknown *v113; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v114; // [rsp+58h] [rbp-A8h]
  struct IUnknown *v115; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL v117; // [rsp+6Ch] [rbp-94h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL v119; // [rsp+74h] [rbp-8Ch] BYREF
  LPVOID v120; // [rsp+78h] [rbp-88h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v122; // [rsp+88h] [rbp-78h] BYREF
  __int64 v123; // [rsp+90h] [rbp-70h] BYREF
  __int64 v124; // [rsp+98h] [rbp-68h] BYREF
  __int64 v125; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v126; // [rsp+A8h] [rbp-58h] BYREF
  HWND hWnd; // [rsp+B0h] [rbp-50h] BYREF
  struct IUnknown **v128; // [rsp+B8h] [rbp-48h]
  _DWORD v129[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v130; // [rsp+C8h] [rbp-38h]
  char v131; // [rsp+D0h] [rbp-30h]
  char v132; // [rsp+D1h] [rbp-2Fh]
  _BYTE v133[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v134; // [rsp+E0h] [rbp-20h]
  __int64 v135; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v136; // [rsp+F0h] [rbp-10h]
  PVOID v137; // [rsp+F8h] [rbp-8h]
  struct IUnknown *v138; // [rsp+100h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+108h] [rbp+8h] BYREF
  __m128i v140; // [rsp+110h] [rbp+10h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+120h] [rbp+20h] BYREF
  union _RTL_RUN_ONCE *v142; // [rsp+130h] [rbp+30h] BYREF
  int v143; // [rsp+138h] [rbp+38h]
  __int64 v144; // [rsp+140h] [rbp+40h]
  void **v145; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v146[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v147; // [rsp+168h] [rbp+68h]
  DWORD v148; // [rsp+170h] [rbp+70h]
  int *v149; // [rsp+178h] [rbp+78h]
  int *v150; // [rsp+180h] [rbp+80h]
  int v151; // [rsp+188h] [rbp+88h] BYREF
  char v152; // [rsp+18Ch] [rbp+8Ch]
  _BYTE v153[32]; // [rsp+190h] [rbp+90h] BYREF
  int v154; // [rsp+1B0h] [rbp+B0h] BYREF
  const char *v155; // [rsp+1B8h] [rbp+B8h]
  LPVOID v156; // [rsp+1C0h] [rbp+C0h]
  char v157; // [rsp+1C8h] [rbp+C8h]
  __int64 v158; // [rsp+1D0h] [rbp+D0h]
  _BYTE v159[144]; // [rsp+1D8h] [rbp+D8h] BYREF
  LPVOID lpMem; // [rsp+268h] [rbp+168h]
  __int64 v161; // [rsp+270h] [rbp+170h]
  __int64 v162; // [rsp+278h] [rbp+178h]
  void *v163; // [rsp+280h] [rbp+180h] BYREF
  RECT rcSrc; // [rsp+290h] [rbp+190h] BYREF
  _OWORD v165[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v166; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v167[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v168; // [rsp+2D8h] [rbp+1D8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+320h] [rbp+220h] BYREF
  void *v170; // [rsp+330h] [rbp+230h]
  int v171; // [rsp+338h] [rbp+238h]
  int v172; // [rsp+33Ch] [rbp+23Ch]
  DWORD *p_CurrentThreadId; // [rsp+340h] [rbp+240h]
  __int64 v174; // [rsp+348h] [rbp+248h]
  const WCHAR *v175; // [rsp+350h] [rbp+250h]
  int v176; // [rsp+358h] [rbp+258h]
  int v177; // [rsp+35Ch] [rbp+25Ch]
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v144 = -2LL;
  v109 = (_OWORD *)a3;
  v114 = a2;
  v12 = a1;
  v136 = a1;
  v146[0] = 0LL;
  v146[1] = &v145;
  v147 = 0LL;
  v148 = 0;
  v149 = &v154;
  v150 = &v151;
  v151 = 0;
  v152 = 0;
  v157 = 0;
  v154 = 0;
  v155 = "SetViewPosition";
  v156 = 0LL;
  v158 = 1LL;
  lpMem = 0LL;
  memset_0(v159, 0, sizeof(v159));
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v145 = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  v13 = *(const WCHAR **)(v12 + 432);
  v14 = v150;
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
    *((_QWORD *)v14 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v14 + 2));
  *v14 = 1;
  v122 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v117, &v122) && v117 )
  {
    v122 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v15 = *((_QWORD *)v122 + 1);
  if ( *(_DWORD *)v15 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v174 = 4LL;
    v16 = &word_18035ABCC;
    LODWORD(v17) = 0;
    if ( v13 )
    {
      v16 = v13;
      v17 = -1LL;
      do
        ++v17;
      while ( v13[v17] );
    }
    v175 = v16;
    v176 = 2 * v17 + 2;
    v177 = 0;
    v18 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v145);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388BE1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v15 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v170 = &unk_180388BEC;
    v171 = 50;
    v172 = 1;
    EventWriteTransfer(*(_QWORD *)(v15 + 32), &EventDescriptor, (LPCGUID)(v150 + 2), v18, 4u, &UserData);
  }
  if ( !v148 )
  {
    v19 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_24;
    v20 = GetCurrentThreadId();
    v21 = (signed __int64 *)(v19 + 8 * (v20 % 0xA));
    v22 = *v21;
    if ( *v21 )
    {
      while ( *(_DWORD *)(v22 + 8) != (_DWORD)v20 )
      {
        v22 = *(_QWORD *)(v22 + 16);
        if ( !v22 )
          goto LABEL_20;
      }
      goto LABEL_25;
    }
LABEL_20:
    ProcessHeap = GetProcessHeap();
    v24 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v22 = (signed __int64)v24;
    if ( v24 )
    {
      *(_QWORD *)v24 = 0LL;
      v24[2] = v20;
      *((_QWORD *)v24 + 2) = 0LL;
      _m_prefetchw(v21);
      do
      {
        v25 = *v21;
        *(_QWORD *)(v22 + 16) = *v21;
      }
      while ( v25 != _InterlockedCompareExchange64(v21, v22, v25) );
    }
    else
    {
LABEL_24:
      v22 = 0LL;
    }
LABEL_25:
    v146[0] = v22;
    if ( v22 )
    {
      v147 = *(_QWORD *)v22;
      *(_QWORD *)v22 = v146;
      v148 = GetCurrentThreadId();
    }
  }
  if ( a3 )
  {
    v140 = *(__m128i *)a3;
    v165[0] = v140;
    v165[1] = *(_OWORD *)(a3 + 16);
    v166 = *(_QWORD *)(a3 + 32);
    v26 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 344LL))(v12, v167);
    v27 = _mm_cvtsi128_si32(_mm_srli_si128(v140, 8));
    if ( v26 >= 0 )
      v27 = v168;
    DWORD2(v165[0]) = v27;
    v109 = v165;
  }
  if ( (a5 & 0xFFFFF000) != 0
    || (a5 & 0x48) == 0x48
    || (a5 & 0x600) == 0x600
    || (a5 & 0x180) == 0x180
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (a5 & 2) == 0 )
  {
    v38 = -2147024809;
    goto LABEL_259;
  }
  v28 = (*(_BYTE *)(v12 + 576) || (*(_BYTE *)(v12 + 424) & 1) == 0 && (*(_DWORD *)(v12 + 424) & 8) == 0)
     && (a5 & 3) != 0;
  v134 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v29 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v126);
    a4 = *v29;
    *v29 = 0LL;
    v135 = 0LL;
    v134 = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v135);
    v30 = v126;
    if ( v126 )
    {
      v126 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(
        v30,
        0LL);
    }
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  if ( a9 == 2 || !v28 )
  {
    if ( (a5 & 1) != 0 )
    {
      v31 = *(CFrameApplicationPresentation **)(v12 + 288);
      *(_DWORD *)(v12 + 472) &= ~a9;
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        v112 = 0LL;
        v32 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v31 + 128LL);
        if ( v32 == CFrameApplicationPresentation::GetFrame )
          Frame = CFrameApplicationPresentation::GetFrame(v31, &v112);
        else
          Frame = v32(v31, &v112);
        if ( Frame >= 0 )
        {
          v34 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, HWND *))(*(_QWORD *)v112 + 24LL);
          v35 = v34 == CApplicationFrameWrapper::GetFrameWindow
              ? CApplicationFrameWrapper::GetFrameWindow(v112, &hWnd)
              : v34(v112, &hWnd);
          if ( v35 >= 0 )
            SetPropW(hWnd, *(LPCWSTR *)(v12 + 480), (HANDLE)*(unsigned int *)(v12 + 472));
        }
        v36 = v112;
        if ( v112 )
        {
          v112 = 0LL;
          (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    else if ( (a5 & 2) != 0 )
    {
      v37 = *(struct IApplicationPresentationLayer **)(v12 + 288);
      *(_DWORD *)(v12 + 472) |= a9;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(v12 + 472), v37);
    }
  }
  v38 = v28 ? 0x8007139F : 0;
  v111 = v38;
  if ( !v28 )
  {
    if ( !*(_BYTE *)(v12 + 336) || *(_BYTE *)(v12 + 337) )
    {
      v39 = 0;
      if ( (a5 & 2) != 0 )
      {
        v108 = 1;
        if ( a9 )
          goto LABEL_79;
      }
    }
    else
    {
      v39 = 1;
    }
    v108 = 0;
LABEL_79:
    if ( a6 != 1 )
      goto LABEL_84;
    v40 = (struct IUnknown *)v12;
    if ( v12 == 112 )
      v40 = 0LL;
    if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
           v40) )
    {
LABEL_84:
      v41 = 0;
    }
    else
    {
      v41 = 1;
    }
    v42 = *(_DWORD *)(v12 + 676) != *(_DWORD *)(v12 + 660)
       || *(_DWORD *)(v12 + 680) != *(_DWORD *)(v12 + 664)
       || *(_DWORD *)(v12 + 684) != *(_DWORD *)(v12 + 668)
       || *(_DWORD *)(v12 + 688) != *(_DWORD *)(v12 + 672)
       || *(_DWORD *)(v12 + 708) != *(_DWORD *)(v12 + 692)
       || *(_DWORD *)(v12 + 712) != *(_DWORD *)(v12 + 696)
       || *(_DWORD *)(v12 + 716) != *(_DWORD *)(v12 + 700)
       || *(_DWORD *)(v12 + 720) != *(_DWORD *)(v12 + 704);
    v43 = *(struct tagSIZE *)(v12 + 660);
    *(struct tagSIZE *)(v12 + 676) = v43;
    v44 = *(struct tagSIZE *)(v12 + 668);
    *(struct tagSIZE *)(v12 + 684) = v44;
    *(_QWORD *)(v12 + 708) = *(_QWORD *)(v12 + 692);
    *(_QWORD *)(v12 + 716) = *(_QWORD *)(v12 + 700);
    if ( v42 )
    {
      v45 = *(CFrameApplicationPresentation **)(v12 + 288);
      v46 = *(void (**)(void))(*(_QWORD *)v45 + 264LL);
      if ( (char *)v46 == (char *)CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical )
        CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(v45, v43, v44);
      else
        v46();
      v47 = *(CFrameApplicationPresentation **)(v12 + 288);
      v48 = *(struct tagSIZE *)(v12 + 700);
      v49 = *(struct tagSIZE *)(v12 + 692);
      v50 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v47 + 272LL);
      if ( v50 == CFrameApplicationPresentation::SetSizeConstraintOverridesLogical )
        CFrameApplicationPresentation::SetSizeConstraintOverridesLogical(v47, v49, v48);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v50)(v47, v49, v48);
    }
    v51 = a5 & (v39 - 3);
    if ( ((unsigned __int8)a5 & (unsigned __int8)(v39 - 3) & 1) != 0 && *(_DWORD *)(v12 + 472) )
      v51 &= ~1u;
    if ( v39 )
    {
      if ( (v51 & 2) != 0 )
      {
LABEL_110:
        v52 = v51 & 0xFFFB;
        if ( !v41 )
          v52 = v51;
        v110 = v52;
        v53 = 0;
        if ( (v52 & 0x40) != 0 )
        {
          v53 = 8;
          goto LABEL_133;
        }
        if ( v42 )
        {
          v53 = 17;
          goto LABEL_133;
        }
        if ( v114 || v109 )
        {
          if ( v41 )
            goto LABEL_132;
          if ( (v52 & 1) != 0 )
          {
            v53 = 1;
            goto LABEL_133;
          }
          v54 = v39 && (v52 & 2) != 0 && v109 && (*((_BYTE *)v109 + 36) & 2) != 0;
          if ( (v52 & 8) != 0 || v54 || (v53 = 1, !v39) )
LABEL_132:
            v53 = 2;
        }
        else if ( v41 )
        {
          v53 = 4;
        }
LABEL_133:
        v115 = 0LL;
        v55 = *(void (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 464LL);
        if ( v55 == CImmersiveApp::GetMonitorInternal )
          CImmersiveApp::GetMonitorInternal((CImmersiveApp *)v12, (struct IImmersiveMonitor **)&v115);
        else
          v55((CImmersiveApp *)v12, (struct IImmersiveMonitor **)&v115);
        if ( (v53 & 1) == 0 )
          goto LABEL_153;
        v56 = (struct IUnknown *)v12;
        if ( v12 == 112 )
          v56 = 0LL;
        v57 = v115;
        v138 = v115;
        v58 = CApplicationManagerUtility::g_pIAMGlobals;
        Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        v137 = Ptr;
        if ( v56 )
        {
          v128 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
          v60 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
          if ( v60 != v128 )
          {
            v140.m128i_i64[0] = (__int64)&v113;
            v61 = v128;
            do
            {
              v113 = *v60;
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v113);
              v62 = (unsigned int)SHIsSameObject(v56, v113) != 0;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v113);
              if ( v62 )
                break;
              ++v60;
            }
            while ( v60 != v61 );
            v12 = v136;
            Ptr = v137;
          }
          if ( v60 != v58[8].Ptr )
            goto LABEL_153;
          v57 = v138;
        }
        if ( Ptr )
        {
          v63 = *((_DWORD *)v58[1].Ptr + (_QWORD)Ptr - 1) == 1;
        }
        else
        {
          if ( !LODWORD(v58[5].Ptr) || !(unsigned int)SHIsSameObject(v57, (struct IUnknown *)v58[6].Ptr) )
          {
            if ( HIDWORD(v58[5].Ptr) == 1 )
              goto LABEL_153;
            goto LABEL_164;
          }
          v63 = LODWORD(v58[5].Ptr) == 1;
        }
        if ( v63 )
        {
LABEL_153:
          v107 = 0;
          goto LABEL_154;
        }
LABEL_164:
        v107 = 1;
        v69 = CApplicationManagerUtility::g_pIAMGlobals;
        v70 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        if ( v70 != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
          || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                    &CApplicationManagerUtility::g_pIAMGlobals[1],
                    v70 + 1) >= 0 )
        {
          v71 = (char *)v69[1].Ptr + 4 * (__int64)v69[2].Ptr++;
          if ( v71 )
            *v71 = 1;
        }
LABEL_154:
        if ( *(_QWORD *)(v12 + 312) && (v110 & 1) != 0 )
        {
          v64 = 0;
          if ( a6 == 1 )
          {
            v65 = (struct IUnknown *)v12;
            if ( v12 == 112 )
              v65 = 0LL;
            if ( !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                    (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                    v65) )
              v64 = 2;
          }
          v66 = v12 + 152;
          IsApplicationWindowGhost = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152));
          v68 = v12 + 152;
          if ( IsApplicationWindowGhost )
            CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v68, v64);
          else
            CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v68, 0LL, v64);
        }
        else
        {
          v66 = v12 + 152;
        }
        if ( a8 )
        {
          v72 = *(_QWORD *)(v12 + 288);
          v129[0] = *(_DWORD *)a8;
          v129[1] = *(_DWORD *)(a8 + 4);
          v73 = *(_QWORD *)(a8 + 8);
          v130 = v73;
          if ( v73 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
          v131 = *(_BYTE *)(a8 + 16);
          v132 = *(_BYTE *)(a8 + 17);
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v72 + 136LL))(v72, v129);
        }
        v74 = v12 - 112;
        if ( a4 )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v74 + 400) + 144LL))(*(_QWORD *)(v74 + 400), a4);
        if ( (v110 & 3) == 0 )
          goto LABEL_206;
        if ( (v110 & 1) == 0 )
        {
          v85 = 0;
          if ( (v110 & 4) != 0 )
          {
            LOBYTE(v85) = v107 != 0;
            ++v85;
          }
          CImmersiveApp::_SetPos_HideApplication(v12 - 112, v114, v109, v53, v85);
          goto LABEL_205;
        }
        updated = 0;
        if ( v114 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 400) + 104LL))(*(_QWORD *)(v74 + 400));
        }
        else if ( (v53 & 0x10) != 0 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 400) + 288LL))(*(_QWORD *)(v74 + 400));
        }
        if ( (v53 & 3) != 0 )
        {
          updated = CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(v74 + 264, v109, v53);
        }
        else if ( (v53 & 4) == 0 )
        {
          LOBYTE(updated) = (unsigned int)CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v74 + 264) == 1;
        }
        v123 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 464LL))(v12, &v123);
        if ( v107 && updated == 1 )
        {
          v76 = 1;
          v77 = CApplicationManagerUtility::g_pIAMGlobals;
          v78 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
          if ( v78 != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
            || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                      &CApplicationManagerUtility::g_pIAMGlobals[1],
                      v78 + 1) >= 0 )
          {
            v79 = (char *)v77[1].Ptr + 4 * (__int64)v77[2].Ptr++;
            if ( v79 )
              *v79 = 2;
          }
        }
        else
        {
          v76 = 0;
        }
        *(_BYTE *)(v12 + 336) = 1;
        v80 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152));
        if ( v80 >= 0 )
        {
          v80 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 288) + 72LL))(*(_QWORD *)(v12 + 288));
          if ( v80 >= 0 )
          {
LABEL_198:
            CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(v12 - 112));
            GetSystemTimeAsFileTime((LPFILETIME)(v12 + 548));
            if ( v76 )
            {
              v82 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              if ( v82 )
                CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v82 - 1;
              CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152),
                9LL);
              CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                (CImmersiveApp::CImmersiveWindowCollection *)(v12 + 152),
                10LL);
            }
            v83 = v123;
            if ( v123 )
            {
              v123 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
            }
            v74 = v12 - 112;
LABEL_205:
            LOBYTE(v53) = 0;
LABEL_206:
            if ( v108 && *(_BYTE *)(v66 + 184) )
            {
              *(_BYTE *)(v66 + 184) = 0;
              CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)v66);
            }
            if ( (v110 & 0x800) != 0 )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 600LL))(v12, 0LL);
            v84 = v114;
            if ( (v53 & 3) != 0 )
            {
              if ( v114 )
              {
                (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v74 + 400) + 104LL))(
                  *(_QWORD *)(v74 + 400),
                  v114);
              }
              else if ( (v53 & 0x10) != 0 )
              {
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v74 + 400) + 288LL))(*(_QWORD *)(v74 + 400));
              }
              if ( (*(int (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)(v74 + 400) + 120LL))(
                     *(_QWORD *)(v74 + 400),
                     &rcSrc) >= 0 )
                CopyRect((LPRECT)(v74 + 280), &rcSrc);
              if ( v109 )
              {
                *(_OWORD *)(v74 + 332) = *v109;
                *(_OWORD *)(v74 + 348) = v109[1];
                *(_QWORD *)(v74 + 364) = *((_QWORD *)v109 + 4);
              }
              v86 = 2;
              if ( *(_QWORD *)(v74 + 424) && (v53 & 1) != 0 )
                v86 = CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v74 + 264) == 1;
              v87 = v107;
              if ( v107 && v86 == 1 )
              {
                v124 = 0LL;
                Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v124);
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 464LL))(v12, &v124);
                CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                  (CImmersiveApp::CImmersiveWindowCollection *)v66,
                  9LL);
                CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                  (CImmersiveApp::CImmersiveWindowCollection *)v66,
                  10LL);
                Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v124);
              }
            }
            else
            {
              v87 = v107;
            }
            if ( (v53 & 8) != 0 )
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 288) + 104LL))(*(_QWORD *)(v12 + 288), v84);
            if ( a10 )
            {
              v88 = *(_QWORD *)(v12 + 288);
              v89 = *(void (**)(void))(*(_QWORD *)v88 + 224LL);
              if ( (char *)v89 == (char *)CFrameApplicationPresentation::SetBand )
                CFrameApplicationPresentation::SetBand(v88, a10);
              else
                v89();
            }
            if ( (*(_BYTE *)(v12 + 424) & 1) != 0
              && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 288) + 48LL))(*(_QWORD *)(v12 + 288)) )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_SdL(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  v90,
                  v91,
                  *(_QWORD *)(*(_QWORD *)(v66 + 144) + 544LL),
                  *(_DWORD *)(*(_QWORD *)(v66 + 144) + 552LL),
                  *(_DWORD *)(v66 + 196));
                if ( *(_QWORD *)(v66 + 160) )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(v66 + 152) + 240LL))(**(_QWORD **)(v66 + 152))
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    v92 = *(_QWORD *)(v66 + 144);
                    v93 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(v66 + 152) + 32LL))(**(_QWORD **)(v66 + 152));
                    WPP_SF_Sdq(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      29,
                      v94,
                      *(_QWORD *)(v92 + 544),
                      *(_DWORD *)(v92 + 552),
                      v93);
                  }
                }
              }
              if ( !*(_DWORD *)(v66 + 196)
                && *(_QWORD *)(v66 + 160)
                && (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(v66 + 152) + 240LL))(**(_QWORD **)(v66 + 152))
                && *(_DWORD *)(*(_QWORD *)(v66 + 232) + 152LL) != 1 )
              {
                CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
                  (CImmersiveApp::CImmersiveWindowCollection *)v66,
                  v95);
              }
            }
            if ( v87 )
            {
              v125 = 0LL;
              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v125);
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 464LL))(v12, &v125);
              v96 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
              if ( v96 )
                CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v96 - 1;
              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v125);
            }
            v97 = v115;
            if ( v115 )
            {
              v115 = 0LL;
              ((void (__fastcall *)(struct IUnknown *))v97->lpVtbl->Release)(v97);
            }
            v38 = v111;
            goto LABEL_257;
          }
          v81 = 7121LL;
        }
        else
        {
          v81 = 7118LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v81,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v80,
          UserDataCount);
        goto LABEL_198;
      }
    }
    else if ( (v51 & 1) == 0 )
    {
      goto LABEL_110;
    }
    v51 &= 0xFFF3u;
    goto LABEL_110;
  }
LABEL_257:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_259:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v145, v38);
  v145 = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  v98 = (volatile signed __int32 *)v163;
  if ( !v163 )
    goto LABEL_268;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v145,
    &SRWLock);
  v98 = (volatile signed __int32 *)v163;
  if ( v163 && *(_DWORD *)v163 == 1 )
  {
    v99 = 1;
  }
  else
  {
    v99 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v163);
    v98 = (volatile signed __int32 *)v163;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v98 = (volatile signed __int32 *)v163;
  }
  if ( v99 )
  {
LABEL_268:
    if ( *v150 == 1 )
    {
      v100 = v150[21];
      v101 = 2147942974LL;
      if ( v100 < 0 )
        v101 = (unsigned int)v100;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v150,
        v101,
        v133);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v145);
      v98 = (volatile signed __int32 *)v163;
    }
  }
  if ( v98 )
  {
    if ( _InterlockedExchangeAdd(v98, 0xFFFFFFFF) == 1 )
    {
      v102 = v163;
      if ( v163 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v163 + 8);
        operator delete(v102, (const struct std::nothrow_t *)0x100);
      }
    }
    v163 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v103 = GetProcessHeap();
      HeapFree(v103, 0, lpMem);
    }
    lpMem = 0LL;
    v161 = 0LL;
  }
  if ( v157 )
  {
    v104 = GetProcessHeap();
    HeapFree(v104, 0, v156);
    v157 = 0;
  }
  v156 = 0LL;
  if ( v151 == 1 )
  {
    v151 = 2;
    v120 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v119, &v120) && v119 )
    {
      v142 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      v120 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v143 = 0;
      wil::details::static_lazy<CAppManagerLogging>::Completer::~Completer(&v142);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v120 + 1), v153);
  }
  v151 = 3;
  if ( v148 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v146);
  return v38;
}
