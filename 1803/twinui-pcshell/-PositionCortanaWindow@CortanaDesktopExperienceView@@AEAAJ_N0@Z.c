/*
 * XREFs of ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350
 * Callers:
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064984 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180185DC0 (-InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x180185E20 (-InputHostShowing@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE.c)
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180186880 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180186D50 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004FF50 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180061AA8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180062EB8 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180063038 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x18006324C (-ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z @ 0x180063344 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800644CC (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064768 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x180073DDC (-Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z.c)
 *     ?StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800740C0 (-StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800754A0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180085E80 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180086490 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA-AW4wil_.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086548 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CAX_N.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180089B74 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     InitDPI @ 0x18008F21C (InitDPI.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F9F70 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1800F9F70.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18015F668 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag__ea_18015F668.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@@Z @ 0x180185B84 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180185E7C (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180186E74 (-ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CortanaDesktopExperienceView::PositionCortanaWindow(
        CortanaDesktopExperienceView *this,
        char a2,
        bool a3)
{
  int v4; // r13d
  int v5; // esi
  int *v6; // rbx
  __int64 v7; // rbx
  const GUID *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  HMONITOR v11; // r14
  int MonitorInformation; // eax
  CortanaFlightingHelpers *v13; // rcx
  HMONITOR v14; // r8
  unsigned int v15; // ebx
  bool v16; // r12
  int v17; // eax
  __m128i v18; // xmm6
  int StartSize; // eax
  int v20; // esi
  int v21; // r15d
  int v22; // ebx
  int v23; // r12d
  int v24; // eax
  int v25; // ecx
  int v26; // r15d
  int v27; // ebx
  unsigned int v28; // r12d
  int v29; // ebx
  HMONITOR v30; // r8
  bool v31; // r15
  int IsTraySearchBoxVisible; // eax
  __int64 v33; // rcx
  bool v34; // dl
  int v35; // eax
  int v36; // eax
  wil::details::in1diag3 *v37; // rcx
  int v38; // ebx
  struct tagRECT *v39; // rax
  bool v40; // al
  int v41; // eax
  __int64 v42; // rax
  bool v43; // dl
  wil::details_abi *v44; // rcx
  struct wil_details_RecordUsageResult *v45; // r9
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v47; // r8
  int v48; // eax
  unsigned int v49; // eax
  int v50; // ecx
  __int64 v51; // rbx
  __int64 (__fastcall *v52)(__int64, int *); // rax
  int v53; // eax
  __int64 v54; // rcx
  double v56; // xmm1_8
  HMONITOR v57; // r8
  int v58; // eax
  unsigned int DefaultCortanaWidthWithoutGutter; // eax
  HMONITOR v60; // r8
  unsigned int v61; // eax
  HMONITOR v62; // r8
  int v63; // esi
  int v64; // ebx
  int v65; // r11d
  int v66; // ebx
  char v67; // di
  int v68; // eax
  __int64 v69; // rdx
  void (__fastcall *v70)(CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *__hidden); // rax
  void *v71; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v73; // rax
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  int UserDataCounta; // [rsp+28h] [rbp-E0h]
  const enum wil_VariantReportingKind *v76; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v77; // [rsp+48h] [rbp-C0h]
  bool v78[4]; // [rsp+58h] [rbp-B0h] BYREF
  bool v79[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  _DWORD v80[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v81; // [rsp+68h] [rbp-A0h]
  __int64 v82; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v83; // [rsp+78h] [rbp-90h] BYREF
  int v84; // [rsp+7Ch] [rbp-8Ch]
  WINBOOL fPending; // [rsp+80h] [rbp-88h] BYREF
  WINBOOL v86; // [rsp+84h] [rbp-84h] BYREF
  DWORD CurrentThreadId; // [rsp+88h] [rbp-80h] BYREF
  int v88; // [rsp+90h] [rbp-78h] BYREF
  int v89; // [rsp+98h] [rbp-70h] BYREF
  int v90; // [rsp+A0h] [rbp-68h] BYREF
  int v91; // [rsp+A4h] [rbp-64h] BYREF
  int v92; // [rsp+A8h] [rbp-60h] BYREF
  int v93; // [rsp+ACh] [rbp-5Ch] BYREF
  WINBOOL v94; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID v97; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v98; // [rsp+D0h] [rbp-38h] BYREF
  char v99[4]; // [rsp+DCh] [rbp-2Ch] BYREF
  char v100[4]; // [rsp+E0h] [rbp-28h] BYREF
  char v101[4]; // [rsp+E4h] [rbp-24h] BYREF
  char v102[4]; // [rsp+E8h] [rbp-20h] BYREF
  char v103[4]; // [rsp+ECh] [rbp-1Ch] BYREF
  char v104[8]; // [rsp+F0h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+F8h] [rbp-10h] BYREF
  char v106[4]; // [rsp+100h] [rbp-8h] BYREF
  float v107; // [rsp+104h] [rbp-4h]
  PSRWLOCK v108; // [rsp+108h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v110[2]; // [rsp+120h] [rbp+18h] BYREF
  void **v111; // [rsp+130h] [rbp+28h] BYREF
  struct wil::details_abi::ThreadLocalData *v112; // [rsp+138h] [rbp+30h]
  int v113; // [rsp+140h] [rbp+38h]
  int v114; // [rsp+144h] [rbp+3Ch]
  _QWORD *v115; // [rsp+148h] [rbp+40h]
  int v116; // [rsp+150h] [rbp+48h]
  __int128 v117; // [rsp+158h] [rbp+50h] BYREF
  __int128 v118; // [rsp+168h] [rbp+60h]
  __int64 v119; // [rsp+178h] [rbp+70h]
  int v120; // [rsp+180h] [rbp+78h]
  _QWORD v121[2]; // [rsp+188h] [rbp+80h] BYREF
  struct tagRECT v122; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v123[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int16 v124; // [rsp+1C0h] [rbp+B8h]
  _OWORD v125[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v126; // [rsp+1E8h] [rbp+E0h]
  int v127; // [rsp+1F0h] [rbp+E8h]
  __int64 v128; // [rsp+1F8h] [rbp+F0h]
  __m128i v129; // [rsp+208h] [rbp+100h]
  struct tagRECT v130; // [rsp+218h] [rbp+110h] BYREF
  struct tagRECT v131; // [rsp+228h] [rbp+120h] BYREF
  struct tagRECT v132; // [rsp+238h] [rbp+130h] BYREF
  char v133[16]; // [rsp+248h] [rbp+140h] BYREF
  char v134[32]; // [rsp+258h] [rbp+150h] BYREF
  RECT rcSrc2; // [rsp+278h] [rbp+170h] BYREF
  struct tagRECT rcDst; // [rsp+288h] [rbp+180h] BYREF
  struct tagRECT v137; // [rsp+298h] [rbp+190h] BYREF
  struct tagRECT v138; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v139; // [rsp+2B8h] [rbp+1B0h] BYREF
  RECT rc; // [rsp+2C8h] [rbp+1C0h] BYREF
  RECT rcSrc1; // [rsp+2D8h] [rbp+1D0h] BYREF
  _QWORD v142[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v143; // [rsp+2F8h] [rbp+1F0h]
  int v144; // [rsp+2FCh] [rbp+1F4h]
  __int128 v145; // [rsp+300h] [rbp+1F8h] BYREF
  __int64 v146; // [rsp+310h] [rbp+208h]
  void **v147; // [rsp+318h] [rbp+210h] BYREF
  _QWORD v148[3]; // [rsp+320h] [rbp+218h] BYREF
  int v149; // [rsp+338h] [rbp+230h]
  int *v150; // [rsp+340h] [rbp+238h]
  int *v151; // [rsp+348h] [rbp+240h]
  int v152; // [rsp+350h] [rbp+248h] BYREF
  char v153; // [rsp+354h] [rbp+24Ch]
  char v154[32]; // [rsp+358h] [rbp+250h] BYREF
  int v155; // [rsp+378h] [rbp+270h] BYREF
  const char *v156; // [rsp+380h] [rbp+278h]
  LPVOID v157; // [rsp+388h] [rbp+280h]
  char v158; // [rsp+390h] [rbp+288h]
  __int64 v159; // [rsp+398h] [rbp+290h]
  char v160[144]; // [rsp+3A0h] [rbp+298h] BYREF
  LPVOID lpMem; // [rsp+430h] [rbp+328h]
  __int64 v162; // [rsp+438h] [rbp+330h]
  __int64 v163; // [rsp+440h] [rbp+338h]
  void *v164; // [rsp+448h] [rbp+340h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+458h] [rbp+350h] BYREF
  void *v166; // [rsp+468h] [rbp+360h]
  int v167; // [rsp+470h] [rbp+368h]
  int v168; // [rsp+474h] [rbp+36Ch]
  DWORD *p_CurrentThreadId; // [rsp+478h] [rbp+370h]
  __int64 v170; // [rsp+480h] [rbp+378h]
  int *v171; // [rsp+488h] [rbp+380h]
  __int64 v172; // [rsp+490h] [rbp+388h]
  int *v173; // [rsp+498h] [rbp+390h]
  __int64 v174; // [rsp+4A0h] [rbp+398h]
  wil::details::in1diag3 *retaddr; // [rsp+500h] [rbp+3F8h]
  char v176; // [rsp+510h] [rbp+408h] BYREF

  v176 = a2;
  v128 = -2LL;
  v78[3] = a3;
  v4 = (int)*((float *)this + 47);
  v5 = (int)*((float *)this + 48);
  v147 = &wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v148[0] = 0LL;
  v148[1] = &v147;
  v148[2] = 0LL;
  v149 = 0;
  v150 = &v155;
  v151 = &v152;
  v152 = 0;
  v153 = 0;
  v158 = 0;
  v155 = 0;
  v156 = "CortanaExperienceManager_PositionCortanaWindow";
  v157 = 0LL;
  v159 = 1LL;
  lpMem = 0LL;
  memset_0(v160, 0, sizeof(v160));
  v162 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  v147 = &CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::`vftable';
  v89 = v5;
  v88 = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v147,
    &SRWLock);
  v6 = v151;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v6 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  *v6 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v97 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v86, &v97) && v86 )
  {
    v97 = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  v7 = *((_QWORD *)v97 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v170 = 4LL;
    v171 = &v88;
    v172 = 4LL;
    v173 = &v89;
    v174 = 4LL;
    v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v147);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803911AB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v166 = &unk_1803911B6;
    v167 = 89;
    v168 = 1;
    EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, (LPCGUID)(v151 + 2), v8, 5u, &UserData);
  }
  if ( !v149 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v148);
  *((_BYTE *)this + 200) = 0;
  v9 = *((float *)this + 43);
  rc.left = (int)v9;
  v10 = *((float *)this + 44);
  rc.top = (int)v10;
  rc.right = (int)(float)(v9 + *((float *)this + 45));
  rc.bottom = (int)(float)(v10 + *((float *)this + 46));
  v11 = MonitorFromRect(&rc, 0);
  if ( v11 )
  {
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           this,
                           v11,
                           &v137,
                           &v138,
                           &v122,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v80,
                           v79);
    v15 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation,
        UserDataCounta);
    }
    else
    {
      v78[1] = 0;
      v16 = 0;
      v78[0] = 0;
      rcSrc2 = v138;
      v17 = *((_DWORD *)this + 33);
      v18 = (__m128i)v122;
      switch ( v17 )
      {
        case 5:
          wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::ReportUsageToService();
          break;
        case 3:
          rcSrc2 = v137;
          v78[0] = 1;
          break;
        case 4:
          rcSrc2.left = 0;
          if ( v137.right - v137.left <= v137.bottom - v137.top )
            v56 = DOUBLE_1_0;
          else
            v56 = DOUBLE_0_5;
          rcSrc2.right = (int)((double)(v137.right - v137.left) * v56);
          rcSrc2.top = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x24, (int)v11, v14);
          v58 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x55, (int)v11, v57);
          rcSrc2.bottom = rcSrc2.top + v58;
          v78[0] = 1;
          break;
        case 6:
          if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v13) )
          {
            rcSrc2.left = v138.left + (v138.right - v138.left) / 2 - v4 / 2;
            rcSrc2.top = v138.top + (v138.bottom - v138.top) / 2 - v5 / 2;
            rcSrc2.right = v4 / 2 + v138.left + (v138.right - v138.left) / 2;
            rcSrc2.bottom = v138.top + (v138.bottom - v138.top) / 2 + v5 / 2;
            v176 = 0;
          }
          break;
        default:
          if ( *((_BYTE *)this + 240) )
          {
            rcSrc2.left = v137.left - (int)((double)(v137.right - v137.left) * -0.5 + (double)v4 * 0.5);
            rcSrc2.right = rcSrc2.left + v4;
            rcSrc2.top = v137.top - (int)((double)(v137.bottom - v137.top) * -0.5 + (double)v5 * 0.5);
            rcSrc2.bottom = rcSrc2.top + v5;
          }
          else if ( v80[0] != -1 )
          {
            v78[2] = 1;
            StartSize = CortanaDesktopExperienceView::GetStartSize(this, (struct Windows::Foundation::Size *)v106);
            v15 = StartSize;
            if ( StartSize < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x984,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                (const char *)(unsigned int)StartSize,
                UserDataCounta);
              goto LABEL_84;
            }
            v20 = (int)v107;
            if ( (unsigned int)(*((_DWORD *)this + 33) - 3) <= 1 )
            {
              v21 = 0;
            }
            else if ( *((_BYTE *)this + 205) )
            {
              v21 = 56;
            }
            else
            {
              v21 = 48;
            }
            ((void (*)(void))InitDPI)();
            v22 = nNumerator;
            if ( (int)GetDpiForMonitor(v11, 0LL, &v90, v99) >= 0 )
              v22 = v90;
            v23 = MulDiv(v21, v22, 96);
            v24 = 0;
            v25 = *((_DWORD *)this + 33);
            if ( v25 )
            {
              if ( v25 == 1 )
              {
                DefaultCortanaWidthWithoutGutter = GetDefaultCortanaWidthWithoutGutter(&v137);
                if ( v4 <= (int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                  (ExperienceManagerUtils *)DefaultCortanaWidthWithoutGutter,
                                  (int)v11,
                                  v60) )
                {
                  v61 = GetDefaultCortanaWidthWithoutGutter(&v137);
                  v24 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v61, (int)v11, v62);
                }
                else
                {
                  v24 = v4;
                }
              }
              else if ( v25 == 2 )
              {
                v24 = v138.right - v23 - v138.left;
                v20 = v138.bottom - v138.top;
              }
              else if ( v25 <= 2 || v25 > 6 )
              {
                v15 = -2147467259;
                goto LABEL_84;
              }
            }
            else
            {
              v26 = 320;
              if ( v137.right - v137.left >= 1196 )
                v26 = 344;
              ((void (*)(void))InitDPI)();
              v27 = nNumerator;
              if ( (int)GetDpiForMonitor(v11, 0LL, &v91, v100) >= 0 )
                v27 = v91;
              v24 = MulDiv(v26, v27, 96);
            }
            v28 = v24 + v23;
            ((void (*)(void))InitDPI)();
            v29 = nNumerator;
            if ( (int)GetDpiForMonitor(v11, 0LL, &v92, v101) >= 0 )
              v29 = v92;
            if ( v20 <= MulDiv(480, v29, 96) )
              v20 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x1E0, (int)v11, v30);
            v31 = *((_DWORD *)this + 33) == 1 && *((_DWORD *)this + 34) == 6 && v80[0] == 3;
            IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, v11, &v78[1]);
            v15 = IsTraySearchBoxVisible;
            if ( IsTraySearchBoxVisible < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x9B4,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                (const char *)(unsigned int)IsTraySearchBoxVisible,
                UserDataCounta);
              goto LABEL_84;
            }
            if ( v78[1] || v31 )
            {
              v34 = 1;
              v33 = (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4)));
              v20 += v33;
            }
            else
            {
              v34 = 0;
            }
            v78[0] = v34;
            v129 = v18;
            UserDataCounta = v20;
            rcSrc2 = *(RECT *)CortanaDesktopExperienceView::ComputeCortanaWindowRect(v33, v133, v80[0], v28);
            v16 = v78[2];
          }
          break;
      }
      v139 = 0LL;
      v35 = CortanaDesktopExperienceView::EnsureInputHostManager(this);
      v15 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9CB,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v35,
          UserDataCounta);
      }
      else
      {
        v36 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, char *))(**((_QWORD **)this + 15) + 40LL))(
                *((_QWORD *)this + 15),
                &v139,
                v102);
        v37 = retaddr;
        if ( v36 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9CC,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v36,
            UserDataCounta);
        InitDPI(v37);
        v38 = nNumerator;
        if ( (int)GetDpiForMonitor(v11, 0LL, &v93, v104) >= 0 )
          v38 = v93;
        MulDiv(40, v38, 96);
        if ( (int)v139 < SDWORD2(v139) )
        {
          v63 = DWORD1(v139);
          v64 = HIDWORD(v139);
          if ( SDWORD1(v139) < SHIDWORD(v139)
            && Geometry::CRect::Intersects((Geometry::CRect *)&v139, &rcSrc2)
            && v137.bottom - v64 <= v65 )
          {
            v66 = v63 - rcSrc2.bottom;
            OffsetRect(&rcSrc2, 0, v63 - rcSrc2.bottom);
            OffsetRect(&rc, 0, v66);
          }
        }
        if ( v78[0] )
          v39 = &v137;
        else
          v39 = &v138;
        rcSrc1 = *v39;
        *(_QWORD *)&rcDst.left = 0LL;
        *(_QWORD *)&rcDst.right = 0LL;
        IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
        v40 = rcDst.top == rcSrc1.top && rcDst.bottom == rcSrc1.bottom;
        *((_BYTE *)this + 200) = v40;
        v41 = *((_DWORD *)this + 33);
        if ( v41 != 6 && v41 != 3 )
        {
          v121[0] = &v176;
          v121[1] = this;
          v123[0] = retaddr;
          v123[1] = "pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp";
          v123[2] = 0LL;
          v124 = 2537;
          if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
            wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetCachedFeatureEnabledState();
          v80[1] = 0;
          LOBYTE(v81) = 3;
          v83 = 0;
          LOWORD(v84) = v81;
          LODWORD(v82) = 3;
          v42 = wil_details_RecordUsageInPropertyCache(
                  (__int64)v134,
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
                  2,
                  0,
                  1u);
          v145 = *(_OWORD *)v42;
          v146 = *(_QWORD *)(v42 + 16);
          if ( g_wil_details_recordFeatureUsage )
          {
            if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
              wil::details::RecordFeatureUsageCallback(
                (wil::details *)0xB188BC,
                (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
                (union wil_details_FeaturePropertyCache *)&v145,
                v45);
            else
              g_wil_details_recordFeatureUsage(
                0xB188BCu,
                (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
                (struct wil_details_RecordUsageResult *)&v145);
            v44 = (wil::details_abi *)`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data;
            if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
            {
              v142[0] = 0LL;
              v143 = 0;
              v142[1] = 2LL;
              v144 = (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
              ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(11634876LL, 0LL, v142);
            }
          }
          if ( !(_DWORD)v146 && g_wil_details_pfnFeatureLoggingHook )
          {
            LOBYTE(v76) = 0;
            if ( (char *)g_wil_details_pfnFeatureLoggingHook == (char *)wil::details::FeatureLoggingHook )
              wil::details::FeatureLoggingHook(
                (wil::details *)0xB188BC,
                (unsigned int)&v83,
                0LL,
                (const struct FEATURE_ERROR *)1,
                (__int64)&v82,
                0LL,
                v76,
                1,
                v77);
            else
              g_wil_details_pfnFeatureLoggingHook(
                0xB188BCu,
                (const struct FEATURE_LOGGED_TRAITS *)&v83,
                0LL,
                1,
                (const enum wil_ReportingKind *)&v82,
                0LL,
                0,
                1uLL);
          }
          v110[0] = off_180323618;
          v110[1] = v121;
          v111 = &wil::details::FeatureFunctorHost::`vftable';
          LOBYTE(v44) = 1;
          ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v44, v43);
          v112 = ThreadLocalDataCache;
          if ( ThreadLocalDataCache )
          {
            v114 = *((_DWORD *)ThreadLocalDataCache + 4);
            v113 = **((_DWORD **)ThreadLocalDataCache + 1);
            *((_DWORD *)ThreadLocalDataCache + 4) = v113;
            v18 = (__m128i)v122;
          }
          v115 = v123;
          v116 = 11634876;
          wil::details::RunFunctor((wil::details *)v110, (struct wil::details::IFunctor *)&v111, v47);
          if ( v112 )
            *((_DWORD *)v112 + 4) = v114;
        }
        if ( v176 )
        {
          if ( v16 )
          {
            v130 = rc;
            v131 = (struct tagRECT)v18;
            v132 = rcDst;
            v48 = CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
                    this,
                    &v132,
                    &v131,
                    &v130,
                    v78[0],
                    *((_BYTE *)this + 128) == 0,
                    v11);
            v15 = v48;
            if ( v48 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA04,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                (const char *)(unsigned int)v48,
                UserDataCounta);
              goto LABEL_84;
            }
          }
          else
          {
            CortanaDesktopExperienceView::ResetCortanaWindowRegion(this);
          }
        }
        v49 = *((_DWORD *)this + 34);
        if ( v49 > 9 || (v50 = 582, !_bittest(&v50, v49)) || *((_BYTE *)this + 209) )
          CortanaDesktopExperienceView::ShowBorder(this, 0LL);
        if ( *((_BYTE *)this + 201) || v78[3] )
          CortanaDesktopExperienceView::ShowBorder(this, &rcDst);
        CortanaDesktopExperienceView::GetViewWrapper((__int64)this, &v95);
        v51 = v95;
        if ( !v95 )
          goto LABEL_81;
        memset_0(&v117, 0, 0x2CuLL);
        LODWORD(v117) = rcDst.right - rcDst.left;
        DWORD1(v117) = rcDst.bottom - rcDst.top;
        *(_QWORD *)&v118 = *(_QWORD *)&rcDst.left;
        LODWORD(v119) = 0;
        v125[0] = v117;
        v125[1] = v118;
        v126 = v119;
        v127 = v120;
        v52 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v51 + 440LL);
        v53 = v52 == ViewWrapperBase::ChangeBounds
            ? ViewWrapperBase::ChangeBounds(v51, (int *)v125)
            : v52(v51, (int *)v125);
        v15 = v53;
        if ( v53 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA26,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v53,
            UserDataCounta);
        }
        else
        {
LABEL_81:
          CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
            (CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)&v147,
            rcDst.left,
            rcDst.top,
            rcDst.right,
            rcDst.bottom);
          v15 = 0;
        }
        v54 = v95;
        if ( v95 )
        {
          v95 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
  }
  else
  {
    v15 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x935,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL,
      UserDataCount);
  }
LABEL_84:
  v147 = &CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::`vftable';
  if ( !v164 )
    goto LABEL_85;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v147,
    &v108);
  if ( v164 && *(_DWORD *)v164 == 1 )
  {
    v67 = 1;
  }
  else
  {
    v67 = 0;
    wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v164);
  }
  if ( v108 )
    ReleaseSRWLockExclusive(v108);
  if ( v67 )
  {
LABEL_85:
    if ( *v151 == 1 )
    {
      v68 = v151[21];
      v69 = 2147942974LL;
      if ( v68 < 0 )
        v69 = (unsigned int)v68;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v151,
        v69,
        v103);
      v70 = (void (__fastcall *)(CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *__hidden))v147[1];
      if ( v70 == CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StopActivity )
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StopActivity((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)&v147);
      else
        v70((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)&v147);
    }
  }
  if ( v164 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v164, 0xFFFFFFFF) == 1 )
    {
      v71 = v164;
      if ( v164 )
      {
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v164 + 8);
        operator delete(v71, (const struct std::nothrow_t *)0x100);
      }
    }
    v164 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    lpMem = 0LL;
    v162 = 0LL;
  }
  if ( v158 )
  {
    v73 = GetProcessHeap();
    HeapFree(v73, 0, v157);
    v158 = 0;
  }
  v157 = 0LL;
  if ( v152 == 1 )
  {
    v152 = 2;
    v98 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v94, &v98) && v94 )
    {
      v98 = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v98 + 1), v154);
  }
  v152 = 3;
  if ( v149 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v148);
  return v15;
}
