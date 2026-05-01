/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80
 * Callers:
 *     _lambda_05ef3d001510803ebef5a2ea2d6a24c1_::operator() @ 0x180004EF0 (_lambda_05ef3d001510803ebef5a2ea2d6a24c1_--operator().c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18001BB50 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18001BEA0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18002A770 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002DE18 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18002DED0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18002E450 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_323d14d606b14d2939124d398e1f4aa2___::Run @ 0x18003BD80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_323d14d606b14d2939124d398e1f4aa2___--Run.c)
 *     _lambda_8eff1308be2899feafc2459a76dc307b_::operator() @ 0x18008828C (_lambda_8eff1308be2899feafc2459a76dc307b_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b79c7714d956adb4f9412b6016faa448___::Run @ 0x18008F320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b79c7714d956adb4f9412b6016faa448___--Run.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1800F0290 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x1800F4A7C (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18013A77C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     _lambda_74326b6c5464fd33f98787e73af58621_::operator() @ 0x18013AA18 (_lambda_74326b6c5464fd33f98787e73af58621_--operator().c)
 *     _lambda_ea68e4127058bb6a1a7a73048de55176_::operator() @ 0x18013AB2C (_lambda_ea68e4127058bb6a1a7a73048de55176_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x18013BC40 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18013C2E0 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18013D160 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@UEAAJH@Z @ 0x180142DA0 (-SetCanTab@CApplicationViewBase@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B0C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBa.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?ReportStopActivity@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180017D88 (-ReportStopActivity@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x1800190E4 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z @ 0x180024FB0 (-RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002BD10 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationView2@@UIA.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180095244 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800F991C (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1Completer@?$static_lazy@VCAppManagerLogging@@@details@wil@@QEAA@XZ @ 0x1801049D0 (--1Completer@-$static_lazy@VCAppManagerLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18013C3FC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        CWinRTApplicationView *a1,
        volatile signed __int64 *a2,
        WINBOOL a3,
        void *a4)
{
  void *v4; // r15
  unsigned int v5; // r14d
  CWinRTApplicationView *v7; // r12
  __int64 (__fastcall *v8)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  __int64 v9; // r8
  void (__fastcall *v10)(CWinRTApplicationView *); // r11
  void (__fastcall *v11)(CWinRTApplicationView *); // r11
  int CanCastTo; // eax
  CWinRTApplicationView *v13; // r8
  __int64 v14; // r8
  int v15; // r10d
  void (__fastcall *v16)(CWinRTApplicationView *); // rax
  CWinRTApplicationView *v17; // rcx
  __int64 (__fastcall *v18)(CWinRTApplicationView *, LPVOID *); // rax
  int ViewId; // eax
  int *v20; // rbx
  const struct _TlgProvider_t *v21; // rbx
  const GUID *v22; // rax
  CWinRTApplicationView *v23; // rcx
  int CallbackArray; // eax
  unsigned int v25; // ebx
  __int64 (__fastcall *v26)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v28)(RTL_SRWLOCK *, char); // rax
  int v29; // eax
  RTL_SRWLOCK *v30; // rdi
  void (__fastcall *v31)(struct IUnknown *, struct IUnknown *, int); // rax
  RTL_SRWLOCK *v32; // rbx
  RTL_SRWLOCK *v33; // rdi
  int v34; // eax
  char *Ptr; // rdx
  CWinRTApplicationView **v36; // r8
  RTL_SRWLOCK *v37; // rbx
  RTL_SRWLOCK *v38; // r15
  int v39; // edi
  char *v40; // r12
  char *v41; // r14
  int v42; // eax
  unsigned int (__fastcall *v43)(__int64); // rax
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  __int64 v46; // rbx
  DWORD v47; // edi
  signed __int64 *v48; // rbx
  signed __int64 v49; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v51; // rax
  signed __int64 v52; // rax
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  char *v55; // rax
  char *v56; // rdi
  LPVOID *v57; // rbx
  HANDLE v58; // rax
  void *v59; // r14
  void *v60; // rbx
  int v61; // eax
  char v62; // r14
  volatile signed __int32 *v63; // rcx
  RTL_SRWLOCK *v64; // rsi
  void *v65; // rdi
  int v66; // eax
  __int64 v67; // rdx
  void *v68; // rdi
  HANDLE v69; // rax
  HANDLE v70; // rax
  _QWORD *v71; // rdx
  _QWORD *v72; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  CWinRTApplicationView *v75; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v76; // [rsp+38h] [rbp-C8h] BYREF
  CWinRTApplicationView *v77; // [rsp+40h] [rbp-C0h] BYREF
  CWinRTApplicationView *v78; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v79; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR pwsz; // [rsp+58h] [rbp-A8h] BYREF
  CApplicationViewBase *v81; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v82; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL v84; // [rsp+74h] [rbp-8Ch] BYREF
  DWORD CurrentThreadId; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v86; // [rsp+7Ch] [rbp-84h] BYREF
  BOOL v87; // [rsp+80h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v89; // [rsp+90h] [rbp-70h] BYREF
  struct IObjectArray *v90; // [rsp+98h] [rbp-68h] BYREF
  struct IUnknown **v91; // [rsp+A0h] [rbp-60h] BYREF
  PSRWLOCK SRWLock; // [rsp+A8h] [rbp-58h] BYREF
  struct IUnknown *v93; // [rsp+B0h] [rbp-50h]
  CWinRTApplicationView **v94; // [rsp+B8h] [rbp-48h]
  union _RTL_RUN_ONCE *v95; // [rsp+C0h] [rbp-40h] BYREF
  int v96; // [rsp+C8h] [rbp-38h]
  volatile signed __int64 *v97; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v98; // [rsp+D8h] [rbp-28h]
  void *v99; // [rsp+E0h] [rbp-20h]
  struct IObjectArray *v100; // [rsp+E8h] [rbp-18h]
  void **v101; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v102[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v103; // [rsp+108h] [rbp+8h]
  DWORD v104; // [rsp+110h] [rbp+10h]
  _DWORD *v105; // [rsp+118h] [rbp+18h]
  int *v106; // [rsp+120h] [rbp+20h]
  int v107; // [rsp+128h] [rbp+28h] BYREF
  char v108; // [rsp+12Ch] [rbp+2Ch]
  int v109; // [rsp+150h] [rbp+50h]
  __int128 v110; // [rsp+158h] [rbp+58h]
  char v111; // [rsp+168h] [rbp+68h]
  __int64 v112; // [rsp+170h] [rbp+70h]
  char v113[144]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v114; // [rsp+208h] [rbp+108h]
  __int64 v115; // [rsp+210h] [rbp+110h]
  __int64 v116; // [rsp+218h] [rbp+118h]
  void *v117[8]; // [rsp+220h] [rbp+120h] BYREF
  void **v118; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v119[2]; // [rsp+268h] [rbp+168h] BYREF
  __int64 v120; // [rsp+278h] [rbp+178h]
  int v121; // [rsp+280h] [rbp+180h]
  int *v122; // [rsp+288h] [rbp+188h]
  int *v123; // [rsp+290h] [rbp+190h]
  int v124; // [rsp+298h] [rbp+198h] BYREF
  char v125; // [rsp+29Ch] [rbp+19Ch]
  _OWORD v126[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v127; // [rsp+2C0h] [rbp+1C0h] BYREF
  const char *v128; // [rsp+2C8h] [rbp+1C8h]
  LPVOID v129; // [rsp+2D0h] [rbp+1D0h]
  char v130; // [rsp+2D8h] [rbp+1D8h]
  __int64 v131; // [rsp+2E0h] [rbp+1E0h]
  _BYTE v132[144]; // [rsp+2E8h] [rbp+1E8h] BYREF
  LPVOID lpMem; // [rsp+378h] [rbp+278h]
  __int64 v134; // [rsp+380h] [rbp+280h]
  __int64 v135; // [rsp+388h] [rbp+288h]
  void *v136; // [rsp+390h] [rbp+290h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3A0h] [rbp+2A0h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+3C0h] [rbp+2C0h]
  __int64 v139; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned int *v141; // [rsp+3E0h] [rbp+2E0h]
  __int64 v142; // [rsp+3E8h] [rbp+2E8h]
  BOOL *v143; // [rsp+3F0h] [rbp+2F0h]
  __int64 v144; // [rsp+3F8h] [rbp+2F8h]
  wil::details::in1diag3 *retaddr; // [rsp+448h] [rbp+348h]

  v117[1] = (void *)-2LL;
  v4 = a4;
  v79 = a4;
  v5 = a3;
  v76 = a3;
  v7 = a1;
  v77 = a1;
  v119[0] = 0LL;
  v119[1] = &v118;
  v120 = 0LL;
  v121 = 0;
  v122 = &v127;
  v123 = &v124;
  v124 = 0;
  v125 = 0;
  v130 = 0;
  v127 = 0;
  v128 = "RaiseApplicationViewChange";
  v129 = 0LL;
  v131 = 1LL;
  lpMem = 0LL;
  memset_0(v132, 0, sizeof(v132));
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v118 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v75 = 0LL;
  v8 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))a2;
  if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
  {
    v75 = 0LL;
    if ( InlineIsEqualGUID(&GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(&GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v75 = (CWinRTApplicationView *)a2;
      v16 = *(void (__fastcall **)(CWinRTApplicationView *))(v9 + 8);
      v17 = (CWinRTApplicationView *)a2;
      if ( v16 == v10 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)a2);
        goto LABEL_23;
      }
      goto LABEL_17;
    }
    if ( InlineIsEqualGUID(&GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f) )
    {
      v75 = (CWinRTApplicationView *)a2;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                    (__int64)(a2 + 1),
                    (int *)&GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
                    &v75);
      if ( CanCastTo == -2147467262 )
      {
        if ( InlineIsEqualGUID(&GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          v75 = v13;
LABEL_14:
          v16 = *(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v75 + 8LL);
          if ( v16 == v11 )
          {
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef((__int64)v75);
            goto LABEL_23;
          }
          v17 = v75;
LABEL_17:
          v16(v17);
          goto LABEL_23;
        }
        if ( InlineIsEqualGUID(&GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387) )
        {
          v75 = (CWinRTApplicationView *)v14;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (Microsoft::WRL::FtmBase *)(v14 + 8),
                        &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
                        (void **)&v75);
          if ( CanCastTo == v15 )
            CanCastTo = v15;
        }
      }
    }
    if ( CanCastTo >= 0 )
      goto LABEL_14;
  }
  else if ( v8 == CWin32ApplicationView::QueryInterface )
  {
    CWin32ApplicationView::QueryInterface(
      (CWin32ApplicationView *)a2,
      &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
      (void **)&v75);
  }
  else
  {
    v8((CWin32ApplicationView *)a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, (void **)&v75);
  }
LABEL_23:
  pwsz = 0LL;
  v18 = *(__int64 (__fastcall **)(CWinRTApplicationView *, LPVOID *))(*(_QWORD *)v75 + 24LL);
  if ( v18 == CWinRTApplicationView::GetViewId )
  {
    ViewId = CWinRTApplicationView::GetViewId(v75, (LPVOID *)&pwsz);
  }
  else if ( (char *)v18 == (char *)CWin32ApplicationView::GetViewId )
  {
    ViewId = CWin32ApplicationView::GetViewId(v75, (unsigned __int16 **)&pwsz);
  }
  else
  {
    ViewId = v18(v75, (LPVOID *)&pwsz);
  }
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v118,
      &SRWLock);
    v20 = v123;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    if ( **((_DWORD **)Context + 1) <= 5u )
      *((_QWORD *)v20 + 1) = 0LL;
    else
      EventActivityIdControl(3u, (LPGUID)(v20 + 2));
    *v20 = 1;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v89 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v84, &v89) && v84 )
    {
      v89 = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    v21 = (const struct _TlgProvider_t *)*((_QWORD *)v89 + 1);
    if ( *(_DWORD *)v21 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v139 = 4LL;
      TlgCreateWsz(&pDesc, pwsz);
      v86 = v5;
      v141 = &v86;
      v142 = 4LL;
      v87 = v4 != 0LL;
      v143 = &v87;
      v144 = 4LL;
      v22 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v118);
      TlgWrite(v21, &unk_180389A4A, (LPCGUID)(v123 + 2), v22, 6u, &pData);
    }
    if ( !v121 )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v119);
  }
  if ( pwsz )
    CoTaskMemFree((LPVOID)pwsz);
  v23 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v90 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((CWinRTApplicationView *)((char *)v7 + 96), &v90);
  v25 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      cData);
    goto LABEL_148;
  }
  if ( v5 == 7 )
  {
    v81 = 0LL;
    v26 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))a2;
    if ( (char *)v26 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                    (char *)a2,
                    &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
                    &v81);
    }
    else if ( v26 == CWin32ApplicationView::QueryInterface )
    {
      Interface = CWin32ApplicationView::QueryInterface(
                    (CWin32ApplicationView *)a2,
                    &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
                    (void **)&v81);
    }
    else
    {
      Interface = v26((CWin32ApplicationView *)a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, (void **)&v81);
    }
    if ( Interface >= 0 )
    {
      v28 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, char))(*(_QWORD *)v81 + 40LL);
      v29 = v28 == CApplicationViewBase::RefreshEnterpriseId
          ? CApplicationViewBase::RefreshEnterpriseId((RTL_SRWLOCK *)v81, 0)
          : v28((RTL_SRWLOCK *)v81, 0);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x249,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v29,
          cData);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v81);
  }
  v30 = (RTL_SRWLOCK *)*((_QWORD *)v7 + 56);
  v31 = (void (__fastcall *)(struct IUnknown *, struct IUnknown *, int))*((_QWORD *)v30->Ptr + 5);
  if ( v31 == ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v32 = v30 + 23;
        v94 = (CWinRTApplicationView **)&v30[23];
        AcquireSRWLockExclusive(v30 + 23);
        v77 = (CWinRTApplicationView *)a2;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v77);
        v33 = v30 + 24;
        v34 = 0;
        Ptr = (char *)v33[1].Ptr;
        if ( Ptr != v33[3].Ptr
          || (v34 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      v33,
                      Ptr + 1),
              v34 >= 0) )
        {
          v36 = (CWinRTApplicationView **)((char *)v33->Ptr + 8 * (__int64)v33[1].Ptr++);
          if ( v36 )
          {
            *v36 = 0LL;
            if ( v36 != &v77 )
            {
              *v36 = (CWinRTApplicationView *)a2;
              v77 = 0LL;
            }
          }
        }
        if ( v34 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFC,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
            (const char *)(unsigned int)v34,
            cData);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v77);
        if ( v32 )
          ReleaseSRWLockExclusive(v32);
      }
    }
    else
    {
      v37 = v30 + 23;
      v117[2] = &v30[23];
      AcquireSRWLockExclusive(v30 + 23);
      v93 = (struct IUnknown *)a2;
      v117[3] = 0LL;
      v38 = v30 + 24;
      v39 = 0;
      v40 = 0LL;
      v41 = 0LL;
      if ( v38[1].Ptr )
      {
        v94 = &v78;
        v91 = &v82;
        while ( 1 )
        {
          v78 = 0LL;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v78);
          v82 = (struct IUnknown *)*((_QWORD *)v38->Ptr + (_QWORD)v41);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v82);
          LOBYTE(v39) = (unsigned int)SHIsSameObject(v82, v93) == 0;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v82);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v78);
          if ( !v39 )
            break;
          ++v41;
          v39 = 0;
          if ( v41 >= v38[1].Ptr )
            goto LABEL_79;
        }
        v40 = v41;
        v42 = 0;
      }
      else
      {
LABEL_79:
        v42 = -2147319765;
      }
      if ( v42 >= 0 && v40 != (char *)-1LL )
        CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(v38);
      if ( v37 )
        ReleaseSRWLockExclusive(v37);
      v5 = v76;
      v4 = v79;
      v7 = v77;
    }
  }
  else
  {
    v31(*((struct IUnknown **)v7 + 56), (struct IUnknown *)a2, v5);
  }
  v117[4] = (void *)a2;
  v43 = *(unsigned int (__fastcall **)(__int64))(*a2 + 8);
  if ( v43 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
  {
    v44 = *((_QWORD *)a2 + 24);
    while ( v44 >= 0 )
    {
      if ( (_DWORD)v44 != 0x7FFFFFFF )
      {
        v45 = v44;
        v44 = _InterlockedCompareExchange64(a2 + 24, v44 + 1, v44);
        if ( v45 != v44 )
          continue;
      }
      goto LABEL_98;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v44 + 16));
  }
  else if ( v43 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef((__int64)a2);
  }
  else
  {
    v43((__int64)a2);
  }
LABEL_98:
  v117[5] = v4;
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
  v97 = a2;
  (*(void (__fastcall **)(volatile signed __int64 *))(*a2 + 8))(a2);
  v98 = v5;
  v99 = v4;
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
  v100 = v90;
  if ( v90 )
    ((void (__fastcall *)(struct IObjectArray *))v90->lpVtbl->AddRef)(v90);
  v101 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v102[0] = 0LL;
  v102[1] = &v101;
  v103 = 0LL;
  v104 = 0;
  v105 = 0LL;
  v46 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_113;
  v47 = GetCurrentThreadId();
  v48 = (signed __int64 *)(v46 + 8 * (v47 % 0xAuLL));
  v49 = *v48;
  if ( *v48 )
  {
    while ( *(_DWORD *)(v49 + 8) != v47 )
    {
      v49 = *(_QWORD *)(v49 + 16);
      if ( !v49 )
        goto LABEL_108;
    }
    goto LABEL_114;
  }
LABEL_108:
  ProcessHeap = GetProcessHeap();
  v51 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v49 = (signed __int64)v51;
  if ( v51 )
  {
    *(_QWORD *)v51 = 0LL;
    v51[2] = v47;
    *((_QWORD *)v51 + 2) = 0LL;
    _m_prefetchw(v48);
    do
    {
      v52 = *v48;
      *(_QWORD *)(v49 + 16) = *v48;
    }
    while ( v52 != _InterlockedCompareExchange64(v48, v49, v52) );
  }
  else
  {
LABEL_113:
    v49 = 0LL;
  }
LABEL_114:
  v102[0] = v49;
  if ( v49 )
  {
    v103 = *(_QWORD *)v49;
    *(_QWORD *)v49 = v102;
    v104 = GetCurrentThreadId();
  }
  v106 = &v107;
  v107 = 0;
  v108 = 0;
  v111 = 0;
  v109 = 0;
  v110 = 0LL;
  v112 = 1LL;
  v114 = 0LL;
  memset_0(v113, 0, sizeof(v113));
  v115 = 0LL;
  v116 = 0LL;
  v117[0] = 0LL;
  if ( v104 )
  {
    if ( v104 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        cData);
    v104 = 0;
    v53 = (_QWORD *)v102[0];
    if ( *(_QWORD *)v102[0] )
    {
      v54 = *(_QWORD **)v102[0];
      while ( v54 != v102 )
      {
        v53 = v54 + 2;
        v102[0] = v54 + 2;
        v54 = (_QWORD *)v54[2];
        if ( !v54 )
          goto LABEL_125;
      }
      *v53 = v103;
    }
LABEL_125:
    v102[0] = 0LL;
  }
  if ( v136 )
  {
    v106 = v123;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v117,
      &v136);
  }
  else
  {
    v55 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v56 = v55;
    if ( v55 )
    {
      *(_DWORD *)v55 = 1;
      v57 = (LPVOID *)(v55 + 8);
      *((_DWORD *)v55 + 2) = 0;
      v55[12] = 0;
      *((_DWORD *)v55 + 2) = v124;
      v55[12] = v125;
      *((_OWORD *)v55 + 1) = v126[0];
      *((_OWORD *)v55 + 2) = v126[1];
      v124 = 0;
      v125 = 0;
      *((_QWORD *)v55 + 6) = 0LL;
      *((_QWORD *)v55 + 7) = 0LL;
      *((_QWORD *)v55 + 8) = 0LL;
      *((_QWORD *)v55 + 9) = 0LL;
      *((_DWORD *)v55 + 12) = v127;
      *((_QWORD *)v55 + 7) = v128;
      if ( v55[72] )
      {
        v58 = GetProcessHeap();
        HeapFree(v58, 0, v57[7]);
        *((_BYTE *)v57 + 64) = 0;
      }
      v57[7] = 0LL;
      v57[7] = v129;
      v129 = 0LL;
      *((_BYTE *)v57 + 64) = v130;
      v130 = 0;
      v57[9] = (LPVOID)v131;
      wil::StoredFailureInfo::StoredFailureInfo((__int64)(v57 + 10), (__int64)v132);
      v57[30] = 0LL;
      if ( v117[0] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v117[0], 0xFFFFFFFF) == 1 )
        {
          v59 = v117[0];
          if ( v117[0] )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v117[0] + 8);
            operator delete(v59, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      v117[0] = v56;
      v106 = (int *)v57;
      if ( v136 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v136, 0xFFFFFFFF) == 1 )
        {
          v60 = v136;
          if ( v136 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v136 + 8);
            operator delete(v60, (const struct std::nothrow_t *)0x100);
          }
        }
        v56 = (char *)v117[0];
      }
      v136 = v56;
      if ( v56 )
        _InterlockedIncrement((volatile signed __int32 *)v56);
      v123 = v106;
      v122 = v106 + 10;
    }
  }
  v105 = v106 + 10;
  v101 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v61 = NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
          *((NotificationDispatcher **)v7 + 65),
          &v97);
  v25 = v61;
  if ( v61 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x264,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v61,
      cData);
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  (*(void (__fastcall **)(volatile signed __int64 *))(*a2 + 16))(a2);
LABEL_148:
  if ( v90 )
    ((void (__fastcall *)(struct IObjectArray *))v90->lpVtbl->Release)(v90);
  v118 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v62 = 1;
  v63 = (volatile signed __int32 *)v136;
  if ( !v136 )
    goto LABEL_161;
  v64 = (RTL_SRWLOCK *)((char *)v136 + 248);
  AcquireSRWLockExclusive((PSRWLOCK)v136 + 31);
  v63 = (volatile signed __int32 *)v136;
  if ( !v136 || *(_DWORD *)v136 != 1 )
  {
    v62 = 0;
    if ( v136 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v136, 0xFFFFFFFF) == 1 )
      {
        v65 = v136;
        if ( v136 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v136 + 8);
          operator delete(v65, (const struct std::nothrow_t *)0x100);
        }
      }
      v63 = 0LL;
      v136 = 0LL;
    }
  }
  if ( v64 )
  {
    ReleaseSRWLockExclusive(v64);
    v63 = (volatile signed __int32 *)v136;
  }
  if ( v62 )
  {
LABEL_161:
    if ( *v123 == 1 )
    {
      v66 = v123[21];
      v67 = 2147942974LL;
      if ( v66 < 0 )
        v67 = (unsigned int)v66;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v123,
        v67,
        &v91);
      wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v118);
      v63 = (volatile signed __int32 *)v136;
    }
  }
  if ( v63 )
  {
    if ( _InterlockedExchangeAdd(v63, 0xFFFFFFFF) == 1 )
    {
      v68 = v136;
      if ( v136 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v136 + 8);
        operator delete(v68, (const struct std::nothrow_t *)0x100);
      }
    }
    v136 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v69 = GetProcessHeap();
      HeapFree(v69, 0, lpMem);
    }
    lpMem = 0LL;
    v134 = 0LL;
  }
  if ( v130 )
  {
    v70 = GetProcessHeap();
    HeapFree(v70, 0, v129);
    v130 = 0;
  }
  v129 = 0LL;
  if ( v124 == 1 )
  {
    v124 = 2;
    v79 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v76, &v79) && v76 )
    {
      v95 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
      v79 = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      v96 = 0;
      wil::details::static_lazy<CAppManagerLogging>::Completer::~Completer(&v95);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v79 + 1), v126);
  }
  v124 = 3;
  if ( v121 )
  {
    if ( v121 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        cData);
    v121 = 0;
    v71 = (_QWORD *)v119[0];
    v72 = *(_QWORD **)v119[0];
    if ( *(_QWORD *)v119[0] )
    {
      while ( v72 != v119 )
      {
        v71 = v72 + 2;
        v119[0] = v72 + 2;
        v72 = (_QWORD *)v72[2];
        if ( !v72 )
          return v25;
      }
      *v71 = v120;
    }
  }
  return v25;
}
