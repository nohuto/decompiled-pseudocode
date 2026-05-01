/*
 * XREFs of ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180005340 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800051EC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??_E?$CDelayedOperation@V_lambda_c784fe341da5436104ad3e4e13eefb9b_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180005310 (--_E-$CDelayedOperation@V_lambda_c784fe341da5436104ad3e4e13eefb9b_@@@CDelayIAMOperations@@UEAAPE.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180005340 (CDelayIAMOperations--CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___--operator().c)
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180005BD0 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180006FD0 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x180007620 (-HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ??_G?$CDelayedOperation@V_lambda_b1e4bdca0075c456ca4a487c57ae0709_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180008200 (--_G-$CDelayedOperation@V_lambda_b1e4bdca0075c456ca4a487c57ae0709_@@@CDelayIAMOperations@@UEAAPE.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___::operator() @ 0x180008270 (CDelayIAMOperations--CDelayedOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___--operator().c)
 *     ??_G?$CDelayedOperation@V_lambda_408d293201316df79a8620e012e4c791_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180008320 (--_G-$CDelayedOperation@V_lambda_408d293201316df79a8620e012e4c791_@@@CDelayIAMOperations@@UEAAPE.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator() @ 0x1800083A0 (CDelayIAMOperations--CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___--operator().c)
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180008AB0 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18000B110 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18000B260 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003C194 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18003D1C4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18003D2A4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18003D358 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800413D0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180041B8C (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?GetHostId@CImmersiveApp@@UEAAJPEA_K@Z @ 0x18004BCF0 (-GetHostId@CImmersiveApp@@UEAAJPEA_K@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180088810 (-Release@-$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ.c)
 *     ?HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x18008A780 (-HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800900A4 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800F0B70 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1Completer@?$static_lazy@VCAppManagerLogging@@@details@wil@@QEAA@XZ @ 0x1801049D0 (--1Completer@-$static_lazy@VCAppManagerLogging@@@details@wil@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x18010ED28 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x18010FBD8 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18010FDD0 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180110020 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x18011039C (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180110470 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?IsWindowOfType@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_ZBAND_TYPE@1@@Z @ 0x1801127D4 (-IsWindowOfType@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_ZBAND_TYPE@1@@Z.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180112B20 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CApplicationManager::OnShellHookMessage(CApplicationManager *this, unsigned __int64 a2, HWND a3)
{
  CApplicationManager *v5; // r12
  char *v6; // r13
  char *v7; // r14
  int v8; // edi
  int v9; // eax
  int ApartmentId; // r15d
  int *v11; // rbx
  __int64 v12; // rbx
  const GUID *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  LPVOID *v16; // rdi
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  struct HINSTANCE__ *v19; // r8
  HWND v20; // rbx
  CClassicWindowManager *v21; // rcx
  __int64 (__fastcall *v22)(CClassicWindowManager *, HWND); // rax
  HWND v23; // rdx
  char v24; // al
  CCharmsWindowManager *v25; // rcx
  _DWORD *v26; // rbx
  unsigned __int64 v27; // rdi
  unsigned __int64 i; // rsi
  volatile signed __int32 *v29; // rdx
  struct IImmersiveApplication *v30; // rcx
  HWND v32; // rdi
  HWND v33; // rbx
  bool v34; // r12
  __int64 *v35; // r10
  __int64 v36; // rax
  _BOOL8 (__fastcall *v37)(CClassicWindowManager *, HWND, struct IImmersiveMonitor *); // rax
  CClassicWindowManager *v38; // rcx
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  struct IImmersiveMonitor *v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r12
  __int64 v45; // rbx
  int v46; // edi
  __int64 (__fastcall *v47)(__int64, HWND *, __int64); // rax
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rbx
  int v52; // eax
  int (__fastcall ***v53)(_QWORD, GUID *, _QWORD); // rcx
  int (__fastcall ***v54)(_QWORD, _QWORD, _QWORD); // rdi
  HWND v55; // r12
  __int64 (__fastcall *v56)(CImmersiveApp *__hidden, unsigned __int64 *); // rax
  int v57; // eax
  __int64 v58; // r9
  unsigned int v59; // r11d
  unsigned int v60; // r8d
  unsigned int v61; // r8d
  unsigned int v62; // r8d
  unsigned int v63; // r8d
  unsigned int v64; // r8d
  unsigned int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // r8
  int v68; // eax
  __int64 v69; // rax
  unsigned int v70; // eax
  __int64 (__fastcall *v71)(void *); // rax
  CImmersiveApp *v72; // rcx
  CRotationManagerSync *v73; // rcx
  void (__fastcall *v74)(CRotationManagerSync *, HWND, int, __int64); // rax
  int (__fastcall ***v75)(_QWORD, _QWORD, _QWORD); // rcx
  int v76; // ebx
  __int64 v77; // r12
  _QWORD *v78; // rdi
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 *v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // r8
  void (__fastcall *v84)(_QWORD *); // rax
  _QWORD *(__fastcall *v85)(_QWORD *, char); // rax
  _QWORD *v86; // r10
  bool (__fastcall *v87)(_QWORD *, CClassicWindow *, __int64, int, __int64); // rax
  HWND ForegroundWindow; // rax
  HANDLE ProcessHeap; // rax
  signed __int64 v90; // rax
  __int64 v91; // rdx
  struct CDelayIAMOperations::COperation *v92; // rax
  struct CDelayIAMOperations::COperation *v93; // rbx
  HWND v94; // rdx
  int IsWindowServiceSupported; // eax
  bool v96; // bl
  struct CDelayIAMOperations::COperation *v97; // r12
  char v98; // bl
  int v99; // eax
  __int64 v100; // rdx
  void *v101; // rbx
  HANDLE v102; // rax
  HANDLE v103; // rax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  bool v105; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v106; // [rsp+38h] [rbp-C8h] BYREF
  struct IImmersiveMonitor *v107; // [rsp+40h] [rbp-C0h] BYREF
  int (__fastcall ***v108)(_QWORD, GUID *, CImmersiveApp **); // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v109; // [rsp+50h] [rbp-B0h] BYREF
  HWND hWnd; // [rsp+58h] [rbp-A8h]
  unsigned int v111; // [rsp+60h] [rbp-A0h]
  char v112; // [rsp+64h] [rbp-9Ch]
  char v113; // [rsp+65h] [rbp-9Bh]
  unsigned int v114; // [rsp+68h] [rbp-98h]
  char v115; // [rsp+6Ch] [rbp-94h]
  LPVOID pv[2]; // [rsp+70h] [rbp-90h]
  CImmersiveApp *v117; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveMonitor *v118; // [rsp+88h] [rbp-78h] BYREF
  struct IImmersiveApplication *v119; // [rsp+90h] [rbp-70h] BYREF
  __int64 v120; // [rsp+98h] [rbp-68h] BYREF
  __int64 v121; // [rsp+A0h] [rbp-60h] BYREF
  void (__fastcall ***v122)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v123; // [rsp+B0h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+B4h] [rbp-4Ch] BYREF
  WINBOOL v125; // [rsp+B8h] [rbp-48h] BYREF
  DWORD CurrentThreadId; // [rsp+BCh] [rbp-44h] BYREF
  WINBOOL v127; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v128; // [rsp+C8h] [rbp-38h] BYREF
  HWND v129; // [rsp+D0h] [rbp-30h]
  LPVOID Context; // [rsp+D8h] [rbp-28h] BYREF
  LPVOID v131; // [rsp+E0h] [rbp-20h] BYREF
  HWND v132; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v133; // [rsp+F0h] [rbp-10h]
  HWND v134; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v135; // [rsp+100h] [rbp+0h]
  _QWORD *v136; // [rsp+108h] [rbp+8h]
  CApplicationManager *v137; // [rsp+110h] [rbp+10h]
  PSRWLOCK SRWLock; // [rsp+118h] [rbp+18h] BYREF
  char v139[8]; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+128h] [rbp+28h] BYREF
  HWND v141; // [rsp+138h] [rbp+38h] BYREF
  __int64 v142; // [rsp+140h] [rbp+40h] BYREF
  _DWORD *v143; // [rsp+148h] [rbp+48h]
  unsigned __int64 v144; // [rsp+150h] [rbp+50h]
  __int64 v145; // [rsp+158h] [rbp+58h]
  __int64 v146; // [rsp+160h] [rbp+60h]
  unsigned __int64 v147; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v148[2]; // [rsp+170h] [rbp+70h] BYREF
  union _RTL_RUN_ONCE *v149; // [rsp+180h] [rbp+80h] BYREF
  int v150; // [rsp+188h] [rbp+88h]
  HWND v151; // [rsp+190h] [rbp+90h] BYREF
  int v152; // [rsp+198h] [rbp+98h]
  __int64 v153; // [rsp+1A0h] [rbp+A0h]
  __int64 v154; // [rsp+1A8h] [rbp+A8h]
  __int64 v155; // [rsp+1B0h] [rbp+B0h]
  char *v156; // [rsp+1B8h] [rbp+B8h]
  int v157; // [rsp+1C0h] [rbp+C0h]
  __int64 v158; // [rsp+1C8h] [rbp+C8h]
  GUID iid; // [rsp+1D0h] [rbp+D0h] BYREF
  void **v160; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v161[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v162; // [rsp+1F8h] [rbp+F8h]
  DWORD v163; // [rsp+200h] [rbp+100h]
  int *v164; // [rsp+208h] [rbp+108h]
  int *v165; // [rsp+210h] [rbp+110h]
  int v166; // [rsp+218h] [rbp+118h] BYREF
  char v167; // [rsp+21Ch] [rbp+11Ch]
  char v168[32]; // [rsp+220h] [rbp+120h] BYREF
  int v169; // [rsp+240h] [rbp+140h] BYREF
  const char *v170; // [rsp+248h] [rbp+148h]
  LPVOID v171; // [rsp+250h] [rbp+150h]
  char v172; // [rsp+258h] [rbp+158h]
  __int64 v173; // [rsp+260h] [rbp+160h]
  char v174[144]; // [rsp+268h] [rbp+168h] BYREF
  LPVOID lpMem; // [rsp+2F8h] [rbp+1F8h]
  __int64 v176; // [rsp+300h] [rbp+200h]
  __int64 v177; // [rsp+308h] [rbp+208h]
  void *v178; // [rsp+310h] [rbp+210h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+320h] [rbp+220h] BYREF
  void *v180; // [rsp+330h] [rbp+230h]
  int v181; // [rsp+338h] [rbp+238h]
  int v182; // [rsp+33Ch] [rbp+23Ch]
  DWORD *p_CurrentThreadId; // [rsp+340h] [rbp+240h]
  __int64 v184; // [rsp+348h] [rbp+248h]
  unsigned __int64 *v185; // [rsp+350h] [rbp+250h]
  __int64 v186; // [rsp+358h] [rbp+258h]
  HWND *v187; // [rsp+360h] [rbp+260h]
  __int64 v188; // [rsp+368h] [rbp+268h]
  WCHAR Buffer[40]; // [rsp+370h] [rbp+270h] BYREF
  WCHAR Filename[264]; // [rsp+3C0h] [rbp+2C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+618h] [rbp+518h]

  v158 = -2LL;
  v5 = this;
  v137 = this;
  v6 = (char *)this - 160;
  if ( this == (CApplicationManager *)160 )
    v7 = 0LL;
  else
    v7 = (char *)this + 224;
  v156 = v7;
  v8 = *((_DWORD *)v7 + 11);
  if ( v8 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_179;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v8 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v9 != 1 )
          goto LABEL_6;
        goto LABEL_173;
      }
LABEL_179:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_173:
  if ( *((_DWORD *)v7 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v123);
    if ( ApartmentId >= 0 && v123 != *((_DWORD *)v7 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        UserDataCount);
      goto LABEL_8;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v7) )
    ApartmentId = 0;
LABEL_8:
  v157 = ApartmentId;
  v109 = a2;
  hWnd = a3;
  v111 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  *(_OWORD *)pv = 0LL;
  if ( a2 <= 0x22 && ((unsigned int)a2 < 0x15 || (unsigned int)a2 >= 0x1A) )
  {
    if ( (_DWORD)a2 != 20 )
    {
      switch ( (int)a2 )
      {
        case 17:
        case 18:
        case 19:
        case 26:
        case 29:
        case 32:
        case 34:
          break;
        default:
          goto LABEL_64;
      }
    }
    v112 = 0;
  }
  else
  {
LABEL_64:
    v112 = 1;
  }
  v119 = 0LL;
  v105 = a2 - 65534 <= 1;
  v161[0] = 0LL;
  v161[1] = &v160;
  v162 = 0LL;
  v163 = 0;
  v164 = &v169;
  v165 = &v166;
  v166 = 0;
  v167 = 0;
  v172 = 0;
  v169 = 0;
  v170 = "OnShellHookMessage";
  v171 = 0LL;
  v173 = 1LL;
  lpMem = 0LL;
  memset_0(v174, 0, sizeof(v174));
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0LL;
  v160 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v147 = a2;
  v11 = v165;
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
    *((_QWORD *)v11 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v11 + 2));
  *v11 = 1;
  v131 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v125, &v131) && v125 )
  {
    v131 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v12 = *((_QWORD *)v131 + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v184 = 4LL;
    v185 = &v147;
    v186 = 8LL;
    v134 = a3;
    v187 = &v134;
    v188 = 8LL;
    v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v160);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180385E23 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v12 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v180 = &unk_180385E2E;
    v181 = 62;
    v182 = 1;
    EventWriteTransfer(*(_QWORD *)(v12 + 32), &EventDescriptor, (LPCGUID)(v165 + 2), v13, 5u, &UserData);
  }
  if ( !v163 )
  {
    v14 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_184;
    v15 = GetCurrentThreadId();
    v16 = (LPVOID *)(v14 + 8 * (v15 % 0xA));
    v17 = *v16;
    if ( *v16 )
    {
      while ( *((_DWORD *)v17 + 2) != (_DWORD)v15 )
      {
        v17 = (_QWORD *)v17[2];
        if ( !v17 )
          goto LABEL_180;
      }
      goto LABEL_28;
    }
LABEL_180:
    ProcessHeap = GetProcessHeap();
    v17 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( v17 )
    {
      *v17 = 0LL;
      *((_DWORD *)v17 + 2) = v15;
      v17[2] = 0LL;
      _m_prefetchw(v16);
      do
      {
        v90 = (signed __int64)*v16;
        v17[2] = *v16;
      }
      while ( v90 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, (signed __int64)v17, v90) );
    }
    else
    {
LABEL_184:
      v17 = 0LL;
    }
LABEL_28:
    v161[0] = v17;
    if ( v17 )
    {
      v162 = *v17;
      *v17 = v161;
      v163 = GetCurrentThreadId();
    }
  }
  if ( v105
    || !(unsigned __int8)CApplicationManager::_AnalyzeShellNotification(
                           (CApplicationManager *)v6,
                           (struct CApplicationManager::HSHELL_DATA *)&v109) )
  {
    goto LABEL_43;
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = v109;
  if ( v109 > 0x22 )
    goto LABEL_42;
  if ( (_DWORD)v109 == 20 )
  {
    CApplicationManager::_HandleMonitorChanged(
      (CApplicationManager *)v6,
      (const struct CApplicationManager::HSHELL_DATA *)&v109);
    goto LABEL_42;
  }
  if ( (_DWORD)v109 == 17 )
  {
    if ( v111 == 1 )
    {
      v118 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v118);
      CApplicationManager::_MonitorFromWindow((CApplicationManager *)v6, hWnd, &v118);
      v86 = (_QWORD *)*((_QWORD *)v6 + 66);
      v87 = *(bool (__fastcall **)(_QWORD *, CClassicWindow *, __int64, int, __int64))(*v86 + 24LL);
      if ( v87 == CClassicWindowManager::HandleCreation )
        CClassicWindowManager::HandleCreation(v86, (CClassicWindow *)hWnd, v114, 1, (__int64)v118);
      else
        v87(v86, (CClassicWindow *)hWnd, v114, 1, (__int64)v118);
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow == hWnd )
      {
        v148[0] = v6;
        v148[1] = ForegroundWindow;
        CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(*((int **)v6 + 99), (HWND)v148);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v118);
    }
    else if ( v111 != 2 )
    {
      (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)v6 + 73) + 24LL))(*((_QWORD *)v6 + 73), hWnd);
    }
    goto LABEL_42;
  }
  v19 = &_ImageBase;
  switch ( (int)v109 )
  {
    case 18:
      v20 = hWnd;
      v21 = (CClassicWindowManager *)*((_QWORD *)v6 + 66);
      v22 = *(__int64 (__fastcall **)(CClassicWindowManager *, HWND))(*(_QWORD *)v21 + 72LL);
      v23 = hWnd;
      if ( v22 != CClassicWindowManager::HandleDestruction )
        goto LABEL_205;
      v24 = CClassicWindowManager::HandleDestruction(v21, hWnd);
      goto LABEL_38;
    case 19:
    case 23:
      v108 = 0LL;
      if ( v111 != 2 )
        goto LABEL_121;
      v129 = hWnd;
      v108 = 0LL;
      v153 = 0LL;
      v43 = 0LL;
      v135 = 0LL;
      v44 = 0LL;
      if ( !*((_QWORD *)v6 + 79) )
        goto LABEL_190;
      v154 = 0LL;
      break;
    case 21:
      if ( v111 - 2 > 1 )
        goto LABEL_70;
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
        (CApplicationManager *)v6,
        (const struct CApplicationManager::HSHELL_DATA *const)&v109,
        a3);
      goto LABEL_42;
    case 22:
      v20 = hWnd;
      v21 = (CClassicWindowManager *)*((_QWORD *)v6 + 66);
      v22 = *(__int64 (__fastcall **)(CClassicWindowManager *, HWND))(*(_QWORD *)v21 + 64LL);
      v23 = hWnd;
      if ( v22 == CClassicWindowManager::HandleHide )
        v24 = CClassicWindowManager::HandleHide(v21, hWnd);
      else
LABEL_205:
        v24 = ((__int64 (__fastcall *)(CClassicWindowManager *, HWND, struct HINSTANCE__ *))v22)(v21, v23, &_ImageBase);
LABEL_38:
      if ( !v24 )
      {
        v25 = (CCharmsWindowManager *)*((_QWORD *)v6 + 73);
        if ( *(bool (__fastcall **)(CCharmsWindowManager *__hidden, HWND))(*(_QWORD *)v25 + 32LL) == CCharmsWindowManager::HandleDestruction )
          CCharmsWindowManager::HandleDestruction(v25, v20);
        else
          (*(void (__fastcall **)(CCharmsWindowManager *, HWND))(*(_QWORD *)v25 + 32LL))(v25, v20);
      }
      goto LABEL_42;
    case 24:
LABEL_70:
      v32 = hWnd;
      v33 = hWnd;
      if ( pv[1] )
        v33 = (HWND)pv[1];
      v34 = v109 == 21;
      LODWORD(v129) = v114;
      v107 = 0LL;
      if ( GetShellWindow() != v33
        && !(unsigned int)GetPropW(v33, L"MultimonitorActivationException")
        && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 93) + 24LL))(*((_QWORD *)v6 + 93)) != v33 )
      {
        (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, struct IImmersiveMonitor **))(**((_QWORD **)v6 + 69) + 88LL))(
          *((_QWORD *)v6 + 69),
          v33,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &v107);
      }
      v35 = (__int64 *)*((_QWORD *)v6 + 66);
      v36 = *v35;
      if ( v34 )
      {
        v39 = (*(__int64 (__fastcall **)(__int64 *, HWND, _QWORD, _QWORD, struct IImmersiveMonitor *))(v36 + 24))(
                v35,
                v32,
                (unsigned int)v129,
                0LL,
                v107);
        v41 = 3LL;
      }
      else
      {
        v37 = *(_BOOL8 (__fastcall **)(CClassicWindowManager *, HWND, struct IImmersiveMonitor *))(v36 + 32);
        v38 = (CClassicWindowManager *)*((_QWORD *)v6 + 66);
        if ( v37 == CClassicWindowManager::HandleMonitorMove )
          v39 = CClassicWindowManager::HandleMonitorMove(v38, v32, v107);
        else
          v39 = v37(v38, v32, v107);
        v41 = 2LL;
      }
      v42 = v107;
      if ( v39 && v107 )
      {
        CApplicationManager::_TryPresentDesktopExperience((CApplicationManager *)v6, v32, v41, v107);
        v42 = v107;
      }
      if ( v42 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *, __int64, __int64))(*(_QWORD *)v42 + 16LL))(v42, v40, v41);
      }
      goto LABEL_42;
    case 25:
    case 28:
      CApplicationManager::_HandleWindowBecameOwned(
        (CApplicationManager *)v6,
        a3,
        (const struct CApplicationManager::HSHELL_DATA *const)&v109);
      goto LABEL_42;
    case 26:
    case 29:
      CApplicationManager::_HandleWindowBecameUnowned(
        (CApplicationManager *)v6,
        (const struct CApplicationManager::HSHELL_DATA *const)&v109);
      goto LABEL_42;
    case 27:
    case 30:
      CApplicationManager::_HandleWindowChangedOwner(
        (CApplicationManager *)v6,
        (const struct CApplicationManager::HSHELL_DATA *const)&v109,
        a3);
      goto LABEL_42;
    case 32:
      v122 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v122);
      v151 = hWnd;
      v152 = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                  (__int64)v6,
                  (int)&v151,
                  &v122,
                  0LL) >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v119);
        (**v122)(v122, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v119);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v122);
      goto LABEL_42;
    case 34:
      if ( v111 == 2 )
        CApplicationManager::_HandleApplicationRequestActivation(
          (CApplicationManager *)v6,
          (const struct CApplicationManager::HSHELL_DATA *const)&v109);
      goto LABEL_42;
    default:
      goto LABEL_42;
  }
  do
  {
    v45 = *(_QWORD *)(*((_QWORD *)v6 + 78) + 8 * v44);
    v155 = v45;
    if ( v45 )
      (*(void (__fastcall **)(__int64, unsigned __int64, struct HINSTANCE__ *))(*(_QWORD *)v45 + 8LL))(v45, v18, v19);
    v46 = -1;
    v120 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v45)(
           v45,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v120) >= 0 )
    {
      v132 = v129;
      v133 = 0LL;
      v47 = *(__int64 (__fastcall **)(__int64, HWND *, __int64))(*(_QWORD *)v120 + 296LL);
      if ( (char *)v47 == (char *)CImmersiveApp::MatchByWindow )
        v48 = CImmersiveApp::MatchByWindow(v120, &v132, 2LL);
      else
        v48 = v47(v120, &v132, 2LL);
      v46 = -1;
      if ( v48 )
        v46 = 0;
      v49 = v133;
      if ( v133 )
      {
        v133 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
    v50 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    if ( !v46 )
    {
      v43 = v44;
      v51 = 0LL;
      v52 = 0;
      goto LABEL_98;
    }
    ++v44;
  }
  while ( v44 < *((_QWORD *)v6 + 79) );
  v43 = v135;
LABEL_190:
  v52 = -2147319765;
  v51 = 0LL;
LABEL_98:
  if ( v52 < 0 )
    goto LABEL_121;
  v53 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)v6 + 78) + 8 * v43);
  if ( (**v53)(v53, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v108) < 0 )
    goto LABEL_121;
  v54 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v108;
  v55 = hWnd;
  v106 = -1LL;
  v117 = 0LL;
  if ( (**v108)(v108, &GUID_068fc85a_d4d0_45b0_ab39_311de750a277, &v117) < 0 )
    goto LABEL_119;
  v56 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, unsigned __int64 *))(*(_QWORD *)v117 + 24LL);
  v57 = v56 == CImmersiveApp::GetHostId ? CImmersiveApp::GetHostId(v117, &v106) : v56(v117, &v106);
  if ( v57 < 0 )
    goto LABEL_119;
  v136 = 0LL;
  v58 = *((_QWORD *)v6 + 110);
  if ( !v58 )
    goto LABEL_116;
  v59 = *((_DWORD *)v6 + 217);
  v60 = (BYTE1(v106)
       + ((((unsigned __int8)v106 + 694790345) ^ 0x12B9B0A5u) >> 2)
       + 2080 * (((unsigned __int8)v106 + 694790345) ^ 0x12B9B0A5)) ^ ((unsigned __int8)v106 + 694790345) ^ 0x12B9B0A5;
  v61 = (BYTE2(v106) + (v60 >> 2) + 2080 * v60) ^ v60;
  v62 = (BYTE3(v106) + (v61 >> 2) + 2080 * v61) ^ v61;
  v63 = (BYTE4(v106) + (v62 >> 2) + 2080 * v62) ^ v62;
  v64 = (BYTE5(v106) + (v63 >> 2) + 2080 * v63) ^ v63;
  v65 = (BYTE6(v106) + (v64 >> 2) + 2080 * v64) ^ v64;
  v66 = ((v65 ^ (HIBYTE(v106) + (v65 >> 2) + 2080 * v65)) & 0x7FFFFFFF) % v59;
  v67 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    v68 = *(_DWORD *)(v58 + 24 * v66);
    if ( v68 != 2 )
      break;
    if ( (_DWORD)v67 == -1 )
    {
      v67 = (unsigned int)v66;
      goto LABEL_194;
    }
LABEL_108:
    if ( v68 == 1 && *(_QWORD *)(v58 + 24 * v66 + 8) == v106 )
      goto LABEL_110;
LABEL_194:
    v66 = ((int)v66 + 1) % v59;
  }
  if ( v68 )
    goto LABEL_108;
  if ( (_DWORD)v67 != -1 )
    v66 = (unsigned int)v67;
LABEL_110:
  if ( *(_DWORD *)(v58 + 24 * v66) == 1 )
  {
    v69 = *(_QWORD *)(v58 + 24 * v66 + 16);
    if ( v69 )
    {
      v51 = *(_QWORD **)(v58 + 24 * v66 + 16);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v69 + 8LL))(v51, v66, v67);
      v136 = v51;
    }
    if ( !v51[3] )
    {
      v70 = (unsigned int)GetPropW(v55, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
      if ( v70 )
      {
        if ( v70 != 1 )
          goto LABEL_116;
      }
      else
      {
        if ( (unsigned __int8)CApplicationManagerUtility::ValidateWindowProcess(v55, 2LL) )
          goto LABEL_116;
        SetPropW(v55, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
      }
      v121 = 0LL;
      v141 = v55;
      v142 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v121);
      ((int (__fastcall **)(_QWORD, HWND *, __int64 *))*v54)[38](v54, &v141, &v121);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v142);
      v91 = v121;
      v51[3] = v55;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v51 + 2, v91);
      if ( !*((_BYTE *)v51 + 36) )
        *((_BYTE *)v51 + 32) = (unsigned int)GetPropW(v55, L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      *((_BYTE *)v51 + 33) = GetPropW(v55, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v121);
    }
  }
LABEL_116:
  if ( v51 )
  {
    v71 = *(__int64 (__fastcall **)(void *))(*v51 + 16LL);
    if ( v71 == CRefCountedObject<PER_APPLICATION_DATA>::Release )
      CRefCountedObject<PER_APPLICATION_DATA>::Release(v51);
    else
      v71(v51);
  }
LABEL_119:
  v72 = v117;
  if ( v117 )
  {
    v117 = 0LL;
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v72 + 16LL))(v72);
  }
LABEL_121:
  v73 = (CRotationManagerSync *)*((_QWORD *)v6 + 67);
  v74 = *(void (__fastcall **)(CRotationManagerSync *, HWND, int, __int64))(*(_QWORD *)v73 + 24LL);
  if ( v74 == CRotationManagerSync::SetLogicalForegroundProcess )
    CRotationManagerSync::SetLogicalForegroundProcess(v73, hWnd, v111, (__int64)v108);
  else
    v74(v73, hWnd, v111, (__int64)v108);
  CApplicationManager::_HandleActivation2((__int64)v6, (__int64)&v109, 1);
  v75 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v108;
  if ( v108 )
  {
    v108 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v75)[2])(v75);
  }
LABEL_42:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v137;
LABEL_43:
  if ( v109 >= 0x20 )
  {
    if ( v109 == 32 )
    {
      CApplicationManager::_HandleCloseRequested(
        (CApplicationManager *)v6,
        (const struct CApplicationManager::HSHELL_DATA *)&v109,
        v119);
    }
    else
    {
      if ( v109 == 65534 )
      {
        v76 = 1026;
      }
      else
      {
        if ( v109 != 0xFFFF )
          goto LABEL_44;
        v76 = 1025;
      }
      if ( CApplicationManager::_uMsgWindowServiceRegister == v76
        || CApplicationManager::_uMsgWindowServiceUnregister == v76 )
      {
        if ( GlobalGetAtomNameW((ATOM)a3, Buffer, 40) )
        {
          if ( IIDFromString(Buffer, &iid) >= 0 )
          {
            if ( (unsigned __int8)CApplicationManagerUtility::IsWindowOfType(0LL) )
            {
              if ( !CApplicationManagerUtility::IsOwnedWindow(0LL, v94) )
              {
                IsWindowServiceSupported = CoreIsWindowServiceSupported(0LL, &iid);
                v96 = CApplicationManager::_uMsgWindowServiceRegister == v76;
                if ( IsWindowServiceSupported >= 0 == v96 )
                {
                  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                  CApplicationManager::_WindowServiceAvailabilityChanged(
                    (CApplicationManager *)((char *)v5 - 160),
                    0LL,
                    &iid,
                    v96);
                  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                }
              }
            }
          }
        }
      }
      else if ( v76 == 1025 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v92 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)v5 + 79), (int)a3);
        v93 = v92;
        if ( v92 )
        {
          (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v92 + 8LL))(v92);
          (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v93)(v93, 1LL);
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      else
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v77 = *((_QWORD *)v5 + 79);
        v78 = 0LL;
        v79 = *(_QWORD *)(v77 + 32);
        v80 = 0LL;
        if ( v79 )
        {
          v81 = *(__int64 **)(v77 + 24);
          while ( 1 )
          {
            v82 = *v81;
            if ( *(_DWORD *)(*v81 + 8) == (_DWORD)a3 )
              break;
            ++v80;
            ++v81;
            if ( v80 >= v79 )
              goto LABEL_145;
          }
          v83 = *(_QWORD *)(v77 + 32);
          if ( v80 < v79 )
          {
            if ( v80 != v79 - 1 )
            {
              memmove(v81, v81 + 1, 8 * (v83 - v80) - 8);
              v83 = *(_QWORD *)(v77 + 32);
            }
            *(_QWORD *)(v77 + 32) = v83 - 1;
          }
          if ( *(_DWORD *)(v82 + 12) != 5 )
            --*(_DWORD *)(v77 + 56);
          v78 = (_QWORD *)v82;
        }
LABEL_145:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v78 )
        {
          v84 = *(void (__fastcall **)(_QWORD *))(*v78 + 8LL);
          if ( (char *)v84 == (char *)CDelayIAMOperations::CDelayedOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___::operator() )
          {
            CDelayIAMOperations::CDelayedOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___::operator()((__int64)v78);
          }
          else if ( (char *)v84 == (char *)CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() )
          {
            CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator()((__int64)v78);
          }
          else if ( (char *)v84 == (char *)CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator() )
          {
            CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator()((__int64)v78);
          }
          else
          {
            v84(v78);
          }
          v85 = *(_QWORD *(__fastcall **)(_QWORD *, char))*v78;
          if ( v85 == CDelayIAMOperations::CDelayedOperation<_lambda_b1e4bdca0075c456ca4a487c57ae0709_>::`scalar deleting destructor' )
          {
            CDelayIAMOperations::CDelayedOperation<_lambda_b1e4bdca0075c456ca4a487c57ae0709_>::`scalar deleting destructor'(
              v78,
              1);
          }
          else if ( v85 == CDelayIAMOperations::CDelayedOperation<_lambda_c784fe341da5436104ad3e4e13eefb9b_>::`vector deleting destructor' )
          {
            CDelayIAMOperations::CDelayedOperation<_lambda_c784fe341da5436104ad3e4e13eefb9b_>::`vector deleting destructor'(
              v78,
              1);
          }
          else if ( v85 == CDelayIAMOperations::CDelayedOperation<_lambda_408d293201316df79a8620e012e4c791_>::`scalar deleting destructor' )
          {
            CDelayIAMOperations::CDelayedOperation<_lambda_408d293201316df79a8620e012e4c791_>::`scalar deleting destructor'(
              v78,
              1);
          }
          else
          {
            v85(v78, 1);
          }
        }
      }
    }
  }
LABEL_44:
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v26 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v27 = *((_QWORD *)v6 + 105);
  if ( v27 )
  {
    v26 = (_DWORD *)*((_QWORD *)v6 + 104);
    v143 = v26;
    v145 = *((_QWORD *)v6 + 106);
    v144 = v27;
    v146 = *((_QWORD *)v6 + 107);
    *((_QWORD *)v6 + 104) = 0LL;
    *((_QWORD *)v6 + 106) = 0LL;
    *((_QWORD *)v6 + 105) = 0LL;
    *((_QWORD *)v6 + 107) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v27; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v97 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)v6 + 99), v26[i]);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v97 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v97 + 8LL))(v97);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v97)(v97, 1LL);
    }
  }
  if ( v26 )
    CoTaskMemFree(v26);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v160, 0);
  v160 = &IamTraceLogging::OnShellHookMessage::`vftable';
  v29 = (volatile signed __int32 *)v178;
  if ( !v178 )
    goto LABEL_50;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v160,
    &SRWLock);
  v29 = (volatile signed __int32 *)v178;
  if ( v178 && *(_DWORD *)v178 == 1 )
  {
    v98 = 1;
  }
  else
  {
    v98 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v178);
    v29 = (volatile signed __int32 *)v178;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v29 = (volatile signed __int32 *)v178;
  }
  if ( v98 )
  {
LABEL_50:
    if ( *v165 == 1 )
    {
      v99 = v165[21];
      v100 = 2147942974LL;
      if ( v99 < 0 )
        v100 = (unsigned int)v99;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v165,
        v100,
        v139);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v160);
      v29 = (volatile signed __int32 *)v178;
    }
  }
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29, 0xFFFFFFFF) == 1 )
    {
      v101 = v178;
      if ( v178 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v178 + 8);
        operator delete(v101, (const struct std::nothrow_t *)0x100);
      }
    }
    v178 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v102 = GetProcessHeap();
      HeapFree(v102, 0, lpMem);
    }
    lpMem = 0LL;
    v176 = 0LL;
  }
  if ( v172 )
  {
    v103 = GetProcessHeap();
    HeapFree(v103, 0, v171);
    v172 = 0;
  }
  v171 = 0LL;
  if ( v166 == 1 )
  {
    v166 = 2;
    v128 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v127, &v128) && v127 )
    {
      v149 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      v128 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v150 = 0;
      wil::details::static_lazy<CAppManagerLogging>::Completer::~Completer(&v149);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v128 + 1), v168);
  }
  v166 = 3;
  if ( v163 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v161);
  v30 = v119;
  if ( v119 )
  {
    v119 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  CoTaskMemFree(pv[0]);
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v7);
  return 0LL;
}
