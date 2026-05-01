/*
 * XREFs of ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x180057FC0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$As@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180003F68 (--$As@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapperInternal@@.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800041E0 (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000428C (-InternalRelease@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTargetView@ViewEventArgsForSelectTargetView@@QEAAJPEAPEAUIViewWrapperInternal@@@Z @ 0x180004628 (-GetTargetView@ViewEventArgsForSelectTargetView@@QEAAJPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatc.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180031F34 (-_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCoun.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z @ 0x180032AA0 (-_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move @ 0x18003A300 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Move.c)
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18003AF78 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?WaitForThreadStart@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x18003AFA0 (-WaitForThreadStart@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180046490 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 *     ?GetViewInstanceId@ViewWrapperBase@@UEAAIXZ @ 0x1800514C0 (-GetViewInstanceId@ViewWrapperBase@@UEAAIXZ.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1800514D0 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?GetHostIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_K@Z @ 0x180055AB0 (-GetHostIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_K@Z.c)
 *     ?GetSplashScreenDismissed@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_N@Z @ 0x180057F20 (-GetSplashScreenDismissed@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_N@Z.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180058C08 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180058DA8 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006D050 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180087388 (-InternalRelease@-$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18008E0E4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ @ 0x18008E560 (-PopFront@TaskList@ComTaskPool@Internal@Windows@@QEAAPEAUTaskData@234@XZ.c)
 *     ?SetUnhandledException@?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x18008FD2C (-SetUnhandledException@-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092008 (--4-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180093A44 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800958A4 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x1800961B0 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJA@AA @ 0x1800A27BC (--_9IPropertyValue@Foundation@Windows@@$BJA@AA.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x1800A480C (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F755C (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD48 (--1-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD50 (--1-$ComPtr@V-$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@QEAA.c)
 *     wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x1800FAE38 (wil--details--ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___--_ScopeExitFn__lambda_a6ab.c)
 *     ??1?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAEC8 (--1-$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180109D90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180149804 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C6CCC (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@P_ea_1801C6CCC.c)
 *     ??_GRefAndObject@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAPEAXI@Z @ 0x1801C9BE4 (--_GRefAndObject@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_P.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801CA8CC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavig.c)
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1801D0CF8 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 *     ?unique@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEBA_NXZ @ 0x1801D10A8 (-unique@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ??0bad_weak_ptr@std@@QEAA@XZ @ 0x1801E16E8 (--0bad_weak_ptr@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=47 #try_helpers=1
void __fastcall ViewEventDispatcher::ViewNavigationRequested(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        struct Windows::Foundation::Collections::IPropertySet *a5)
{
  int *v9; // rbx
  __int64 v10; // rbx
  const GUID *v11; // rax
  __int64 v12; // rbx
  DWORD v13; // esi
  signed __int64 *v14; // rbx
  signed __int64 v15; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  signed __int64 v18; // rax
  _DWORD *v19; // rcx
  unsigned int (__fastcall *v20)(ViewWrapperBase *__hidden); // rax
  int v21; // eax
  unsigned int (__fastcall *v22)(ViewWrapperBase *__hidden); // rdx
  unsigned __int64 v23; // r12
  int v24; // ebx
  int v25; // r15d
  unsigned __int64 v26; // r15
  __int64 (__fastcall ***v27)(_QWORD, GUID *, ViewWrapperBase **); // rcx
  int v28; // eax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rsi
  void (__fastcall ***v34)(_QWORD, GUID *, struct IUnknown **); // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v38; // rsi
  HRESULT v39; // eax
  unsigned __int64 v40; // rbx
  UINT32 v41; // edx
  HRESULT v42; // eax
  HSTRING v43; // r12
  int v44; // ebx
  int v45; // eax
  int v46; // eax
  UAPViewWrapper *v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  HSTRING v50; // rsi
  __int64 v51; // rcx
  HSTRING v52; // rcx
  int v53; // edx
  unsigned int v54; // r8d
  unsigned __int64 v55; // rbx
  UINT32 v56; // edx
  HRESULT v57; // eax
  int v58; // edx
  __int64 v59; // r8
  int v60; // ebx
  bool v61; // al
  unsigned __int64 v62; // rsi
  unsigned __int64 i; // rbx
  _DWORD *v64; // rcx
  __int64 (*v65)(void); // rax
  int v66; // eax
  __int64 (__fastcall ***v67)(_QWORD, GUID *, __int64 *); // rcx
  int v68; // eax
  int v69; // r15d
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // ebx
  int v75; // edi
  int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // edx
  unsigned int v81; // r8d
  int v82; // eax
  __int64 v83; // rcx
  wil::details::in1diag3 *v84; // rcx
  char v85; // r12
  ViewWrapperBase *v86; // r15
  unsigned __int64 v87; // rbx
  UINT32 v88; // edx
  HRESULT v89; // eax
  int v90; // edx
  unsigned int v91; // r8d
  HSTRING v92; // rdi
  HRESULT ViewInstanceId; // ebx
  int v94; // eax
  int v95; // eax
  UAPViewWrapper *v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  char v99; // al
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  const unsigned __int16 *v103; // rax
  int MatchingViewEventRegistration; // eax
  wil::details::in1diag3 *v105; // rcx
  int v106; // eax
  wil::details::in1diag3 *v107; // rcx
  char v108; // di
  ViewWrapperBase *v109; // rax
  int v110; // eax
  const unsigned __int16 *v111; // rax
  int v112; // eax
  ViewWrapperBase *v113; // rcx
  HRESULT v114; // eax
  int v115; // edx
  __int64 v116; // r8
  int v117; // eax
  int v118; // eax
  unsigned int v119; // eax
  struct IUnknown *v120; // r12
  ViewWrapperBase *v121; // rcx
  char *v122; // rbx
  char *v123; // rdi
  _QWORD *v124; // rsi
  void (*v125)(void); // rax
  ViewManagerBridge *v126; // rcx
  __int64 (__fastcall *v127)(ViewManagerBridge *__hidden, struct IUnknown *, bool *); // rax
  int SplashScreenDismissed; // eax
  _QWORD *v129; // rsi
  struct IUnknown *v130; // rcx
  signed __int64 v131; // rax
  signed __int64 v132; // rtt
  __int64 v133; // rcx
  struct IUnknown *v134; // rdx
  ViewManagerBridge *v135; // rcx
  unsigned __int64 *v136; // r8
  __int64 (__fastcall *v137)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned __int64 *); // rax
  __int64 v138; // rdx
  _BYTE *v139; // rbx
  _BYTE *v140; // rax
  _BYTE *v141; // rcx
  _BYTE *v142; // rdx
  _BYTE *v143; // r8
  _BYTE *v144; // r9
  unsigned __int64 v145; // rax
  HSTRING v146; // rcx
  PCNZWCH v147; // r12
  unsigned __int64 v148; // rax
  HSTRING v149; // rcx
  __int64 v150; // r10
  __int64 v151; // rax
  __int64 v152; // rax
  volatile int *v153; // rdx
  signed __int64 v154; // rax
  unsigned int v155; // ecx
  signed __int64 v156; // rtt
  wil::details::in1diag3 *v157; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v158; // rcx
  struct IUnknown *v159; // rcx
  RTL_SRWLOCK *v160; // rsi
  _QWORD *v161; // rcx
  _QWORD *v162; // rdi
  int v163; // eax
  _QWORD *v164; // rbx
  _QWORD *v165; // r12
  UINT32 StringLen; // r15d
  const WCHAR *StringRawBuffer; // rax
  UINT32 v168; // r15d
  const WCHAR *v169; // rax
  __int64 v170; // rax
  _QWORD *v171; // r15
  _QWORD *v172; // rcx
  char v173; // al
  _QWORD *v174; // rcx
  wil::details::in1diag3 *v175; // rcx
  char v176; // r15
  _QWORD *v177; // rdx
  void (__fastcall *v178)(ViewWrapperBase *, _QWORD *, _QWORD); // rax
  ViewWrapperBase *v179; // rbx
  unsigned __int64 j; // r15
  __int64 v181; // r12
  PCWSTR v182; // rax
  void *v183; // r8
  __int64 v184; // r15
  HSTRING *v185; // rcx
  __int64 v186; // rdx
  ViewWrapperBase **v187; // rdx
  HSTRING *v188; // rcx
  int v189; // eax
  HSTRING *v190; // rcx
  wil::details::in1diag3 *v191; // rcx
  ViewWrapperBase *v192; // rbx
  __int64 (__fastcall *v193)(ViewWrapperBase *__hidden, unsigned int); // rax
  RTL_SRWLOCK *v194; // rsi
  __int64 v195; // rcx
  ViewWrapperBase *v196; // r15
  volatile signed __int64 *v197; // rax
  volatile signed __int64 *v198; // rbx
  int v199; // r15d
  volatile int *v200; // rdx
  __int64 v201; // rcx
  LPUNKNOWN v202; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v203; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v204; // rdi
  signed __int64 v205; // rax
  signed __int64 v206; // rtt
  volatile signed __int64 *v207; // r10
  signed __int64 v208; // rax
  unsigned int v209; // ecx
  signed __int64 v210; // rtt
  __int64 v211; // rbx
  int v212; // edi
  int v213; // esi
  __int64 v214; // rcx
  unsigned __int64 v215; // r9
  __int64 v216; // rdx
  int v217; // eax
  volatile int *v218; // rdx
  __int64 v219; // rdi
  __int64 v220; // rdx
  signed __int32 v221; // eax
  HSTRING v222; // rax
  volatile signed __int32 *v223; // rsi
  std::_Ref_count_base *v224; // r13
  ViewWrapperBase *v225; // r12
  _QWORD *v226; // rax
  _QWORD *v227; // rbx
  int v228; // edi
  struct Windows::Internal::ComTaskPool::TaskData *v229; // rax
  Windows::Internal::ComTaskPool::TaskData *v230; // rdx
  bool v231; // sf
  Windows::Internal::ComTaskPool::CThread *v232; // rdi
  __int64 v233; // rcx
  volatile signed __int64 *v234; // r10
  signed __int64 v235; // rax
  unsigned int v236; // ecx
  signed __int64 v237; // rtt
  __int64 v238; // rcx
  _QWORD *v239; // rax
  _QWORD *v240; // rbx
  __int64 v241; // rcx
  LPUNKNOWN v242; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v243; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v244; // rdi
  volatile int *v245; // rdx
  signed __int64 v246; // rax
  unsigned int v247; // ecx
  signed __int64 v248; // rtt
  __int64 v249; // rbx
  __int64 v250; // rcx
  wil::details::in1diag3 *v251; // rax
  int v252; // eax
  wil::details::in1diag3 *v253; // rcx
  __int64 v254; // rcx
  int (*v255)(ViewWrapperBase *__hidden, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *); // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v256; // rcx
  ViewWrapperBase *v257; // rcx
  char v258; // bl
  __int64 v259; // rdx
  void *v260; // rcx
  HANDLE v261; // rax
  HANDLE v262; // rax
  __int64 v263; // rax
  int *UserDataCount; // [rsp+20h] [rbp-7D8h]
  int UserDataCounta; // [rsp+20h] [rbp-7D8h]
  char v266; // [rsp+50h] [rbp-7A8h] BYREF
  char v267; // [rsp+51h] [rbp-7A7h]
  bool v268; // [rsp+52h] [rbp-7A6h] BYREF
  char v269; // [rsp+53h] [rbp-7A5h]
  ViewWrapperBase *v270; // [rsp+58h] [rbp-7A0h] BYREF
  signed __int32 v271; // [rsp+60h] [rbp-798h]
  unsigned int v272; // [rsp+68h] [rbp-790h] BYREF
  _QWORD *v273; // [rsp+70h] [rbp-788h] BYREF
  unsigned int v274; // [rsp+78h] [rbp-780h]
  ViewWrapperBase *v275; // [rsp+80h] [rbp-778h] BYREF
  _QWORD *v276; // [rsp+88h] [rbp-770h]
  HSTRING *v277; // [rsp+90h] [rbp-768h] BYREF
  HSTRING newString; // [rsp+98h] [rbp-760h] BYREF
  HSTRING v279; // [rsp+A0h] [rbp-758h]
  __int64 v280; // [rsp+A8h] [rbp-750h] BYREF
  struct IUnknown *v281; // [rsp+B0h] [rbp-748h] BYREF
  __int64 v282; // [rsp+B8h] [rbp-740h] BYREF
  char v283; // [rsp+C0h] [rbp-738h]
  char v284; // [rsp+C1h] [rbp-737h]
  char v285; // [rsp+C2h] [rbp-736h]
  char v286; // [rsp+C3h] [rbp-735h]
  struct Windows::Foundation::Collections::IPropertySet *v287; // [rsp+C8h] [rbp-730h] BYREF
  volatile signed __int64 *v288; // [rsp+D0h] [rbp-728h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v289; // [rsp+D8h] [rbp-720h] BYREF
  UAPViewWrapper *v290; // [rsp+E0h] [rbp-718h] BYREF
  UAPViewWrapper *v291; // [rsp+E8h] [rbp-710h] BYREF
  __int64 v292; // [rsp+F0h] [rbp-708h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v293; // [rsp+F8h] [rbp-700h]
  int v294; // [rsp+100h] [rbp-6F8h]
  __int16 v295; // [rsp+104h] [rbp-6F4h]
  _QWORD *v296; // [rsp+108h] [rbp-6F0h] BYREF
  HSTRING v297; // [rsp+110h] [rbp-6E8h] BYREF
  HANDLE hObject; // [rsp+118h] [rbp-6E0h]
  __int64 v299; // [rsp+120h] [rbp-6D8h] BYREF
  int v300; // [rsp+128h] [rbp-6D0h] BYREF
  char *v301; // [rsp+130h] [rbp-6C8h] BYREF
  __int64 v302; // [rsp+138h] [rbp-6C0h] BYREF
  __int64 v303; // [rsp+140h] [rbp-6B8h] BYREF
  HSTRING v304; // [rsp+148h] [rbp-6B0h] BYREF
  __int64 v305; // [rsp+150h] [rbp-6A8h] BYREF
  __int64 v306; // [rsp+158h] [rbp-6A0h] BYREF
  ViewEventArgsForSelectTargetView *v307; // [rsp+160h] [rbp-698h] BYREF
  struct IViewWrapperInternal *v308; // [rsp+168h] [rbp-690h] BYREF
  char *v309; // [rsp+170h] [rbp-688h] BYREF
  LPCWCH lpString2; // [rsp+178h] [rbp-680h]
  LPUNKNOWN v311; // [rsp+180h] [rbp-678h] BYREF
  __int64 v312; // [rsp+188h] [rbp-670h] BYREF
  __int64 v313; // [rsp+190h] [rbp-668h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+198h] [rbp-660h] BYREF
  __int64 v315; // [rsp+1A0h] [rbp-658h] BYREF
  RTL_SRWLOCK *v316; // [rsp+1A8h] [rbp-650h] BYREF
  struct MsgString *v317; // [rsp+1B0h] [rbp-648h] BYREF
  void *v318; // [rsp+1B8h] [rbp-640h] BYREF
  PCNZWCH sourceString[2]; // [rsp+1C0h] [rbp-638h]
  DWORD CurrentThreadId; // [rsp+1D0h] [rbp-628h] BYREF
  int v321; // [rsp+1D8h] [rbp-620h] BYREF
  int v322; // [rsp+1E0h] [rbp-618h] BYREF
  BOOL v323; // [rsp+1E8h] [rbp-610h] BYREF
  int v324[3]; // [rsp+1F0h] [rbp-608h] BYREF
  WINBOOL v325; // [rsp+1FCh] [rbp-5FCh] BYREF
  unsigned int v326; // [rsp+200h] [rbp-5F8h] BYREF
  int v327; // [rsp+204h] [rbp-5F4h] BYREF
  __int16 v328; // [rsp+208h] [rbp-5F0h]
  unsigned int v329; // [rsp+210h] [rbp-5E8h] BYREF
  LPVOID Context; // [rsp+218h] [rbp-5E0h] BYREF
  LPVOID v331; // [rsp+220h] [rbp-5D8h] BYREF
  __int64 v332; // [rsp+228h] [rbp-5D0h] BYREF
  unsigned __int64 v333; // [rsp+230h] [rbp-5C8h] BYREF
  LPVOID v334; // [rsp+238h] [rbp-5C0h] BYREF
  _QWORD *v335; // [rsp+240h] [rbp-5B8h] BYREF
  ViewWrapperBase *v336; // [rsp+248h] [rbp-5B0h] BYREF
  Windows::Internal::ComTaskPool::CThread *v337; // [rsp+250h] [rbp-5A8h]
  WINBOOL fPending; // [rsp+258h] [rbp-5A0h] BYREF
  WINBOOL v339; // [rsp+25Ch] [rbp-59Ch] BYREF
  Windows::Internal::ComTaskPool::TaskData *v340[2]; // [rsp+260h] [rbp-598h] BYREF
  volatile signed __int64 *v341; // [rsp+270h] [rbp-588h] BYREF
  volatile signed __int64 *v342; // [rsp+278h] [rbp-580h]
  _QWORD *v343; // [rsp+280h] [rbp-578h] BYREF
  HSTRING v344; // [rsp+288h] [rbp-570h] BYREF
  HSTRING v345; // [rsp+290h] [rbp-568h] BYREF
  __int128 v346; // [rsp+298h] [rbp-560h]
  __int64 v347; // [rsp+2A8h] [rbp-550h]
  struct MsgString **v348; // [rsp+2B0h] [rbp-548h]
  char v349; // [rsp+2B8h] [rbp-540h]
  __int64 v350; // [rsp+2C0h] [rbp-538h]
  __int64 v351; // [rsp+2C8h] [rbp-530h]
  int v352[2]; // [rsp+2D0h] [rbp-528h] BYREF
  const unsigned __int16 *Data; // [rsp+2D8h] [rbp-520h] BYREF
  struct IUnknown *v354; // [rsp+2E0h] [rbp-518h] BYREF
  _QWORD *v355; // [rsp+2E8h] [rbp-510h]
  _QWORD *v356; // [rsp+2F0h] [rbp-508h]
  _QWORD *v357; // [rsp+2F8h] [rbp-500h]
  _QWORD *v358; // [rsp+300h] [rbp-4F8h]
  _QWORD *v359; // [rsp+308h] [rbp-4F0h]
  _QWORD *v360; // [rsp+310h] [rbp-4E8h]
  signed __int64 v361; // [rsp+318h] [rbp-4E0h]
  signed __int64 v362; // [rsp+320h] [rbp-4D8h]
  signed __int64 v363; // [rsp+328h] [rbp-4D0h]
  signed __int64 v364; // [rsp+330h] [rbp-4C8h]
  __int64 v365; // [rsp+338h] [rbp-4C0h]
  __int64 v366; // [rsp+340h] [rbp-4B8h]
  PSRWLOCK SRWLock[2]; // [rsp+348h] [rbp-4B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+358h] [rbp-4A0h] BYREF
  EVENT_DESCRIPTOR v369; // [rsp+368h] [rbp-490h] BYREF
  __int64 v370; // [rsp+378h] [rbp-480h]
  __int64 v371; // [rsp+380h] [rbp-478h]
  HSTRING v372; // [rsp+388h] [rbp-470h]
  volatile signed __int32 *v373; // [rsp+390h] [rbp-468h]
  ViewWrapperBase *v374; // [rsp+398h] [rbp-460h] BYREF
  __int128 v375; // [rsp+3A0h] [rbp-458h] BYREF
  char v376; // [rsp+3B0h] [rbp-448h]
  _QWORD v377[7]; // [rsp+3B8h] [rbp-440h] BYREF
  _QWORD *v378; // [rsp+3F0h] [rbp-408h]
  __int64 v379; // [rsp+3F8h] [rbp-400h]
  __int64 v380; // [rsp+400h] [rbp-3F8h]
  _QWORD *v381; // [rsp+408h] [rbp-3F0h]
  __int64 v382; // [rsp+410h] [rbp-3E8h]
  __int64 v383; // [rsp+418h] [rbp-3E0h]
  __int64 v384; // [rsp+420h] [rbp-3D8h]
  __int64 v385; // [rsp+428h] [rbp-3D0h]
  __int64 v386; // [rsp+430h] [rbp-3C8h]
  _BYTE pExceptionObject[24]; // [rsp+438h] [rbp-3C0h] BYREF
  _BYTE v388[56]; // [rsp+450h] [rbp-3A8h] BYREF
  _BYTE *v389; // [rsp+488h] [rbp-370h]
  _QWORD v390[2]; // [rsp+490h] [rbp-368h] BYREF
  int v391; // [rsp+4A0h] [rbp-358h]
  int v392; // [rsp+4A4h] [rbp-354h]
  __int128 v393; // [rsp+4A8h] [rbp-350h] BYREF
  __int64 v394; // [rsp+4B8h] [rbp-340h]
  void **v395; // [rsp+4C0h] [rbp-338h] BYREF
  _QWORD v396[2]; // [rsp+4C8h] [rbp-330h] BYREF
  __int64 v397; // [rsp+4D8h] [rbp-320h]
  DWORD v398; // [rsp+4E0h] [rbp-318h]
  int *v399; // [rsp+4E8h] [rbp-310h]
  int *v400; // [rsp+4F0h] [rbp-308h]
  int v401; // [rsp+4F8h] [rbp-300h] BYREF
  char v402; // [rsp+4FCh] [rbp-2FCh]
  char v403[32]; // [rsp+500h] [rbp-2F8h] BYREF
  int v404; // [rsp+520h] [rbp-2D8h] BYREF
  const char *v405; // [rsp+528h] [rbp-2D0h]
  LPVOID v406; // [rsp+530h] [rbp-2C8h]
  char v407; // [rsp+538h] [rbp-2C0h]
  __int64 v408; // [rsp+540h] [rbp-2B8h]
  __int64 v409; // [rsp+548h] [rbp-2B0h] BYREF
  LPVOID lpMem; // [rsp+5D8h] [rbp-220h]
  __int64 v411; // [rsp+5E0h] [rbp-218h]
  __int64 v412; // [rsp+5E8h] [rbp-210h]
  void *v413[2]; // [rsp+5F0h] [rbp-208h] BYREF
  _BYTE v414[56]; // [rsp+600h] [rbp-1F8h] BYREF
  _BYTE *v415; // [rsp+638h] [rbp-1C0h]
  HSTRING_HEADER v416; // [rsp+640h] [rbp-1B8h] BYREF
  HSTRING v417; // [rsp+658h] [rbp-1A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+660h] [rbp-198h] BYREF
  HSTRING string; // [rsp+678h] [rbp-180h] BYREF
  HSTRING_HEADER v420; // [rsp+680h] [rbp-178h] BYREF
  HSTRING v421; // [rsp+698h] [rbp-160h] BYREF
  HSTRING_HEADER v422; // [rsp+6A0h] [rbp-158h] BYREF
  HSTRING v423; // [rsp+6B8h] [rbp-140h] BYREF
  HSTRING_HEADER v424; // [rsp+6C0h] [rbp-138h] BYREF
  HSTRING v425; // [rsp+6D8h] [rbp-120h] BYREF
  char v426[24]; // [rsp+6E0h] [rbp-118h] BYREF
  __int64 v427; // [rsp+6F8h] [rbp-100h]
  struct _EVENT_DATA_DESCRIPTOR v428; // [rsp+700h] [rbp-F8h] BYREF
  void *v429; // [rsp+710h] [rbp-E8h]
  int v430; // [rsp+718h] [rbp-E0h]
  int v431; // [rsp+71Ch] [rbp-DCh]
  unsigned int *v432; // [rsp+720h] [rbp-D8h]
  __int64 v433; // [rsp+728h] [rbp-D0h]
  ViewWrapperBase *v434; // [rsp+730h] [rbp-C8h]
  int v435; // [rsp+738h] [rbp-C0h]
  int v436; // [rsp+73Ch] [rbp-BCh]
  PCNZWCH v437; // [rsp+740h] [rbp-B8h]
  int v438; // [rsp+748h] [rbp-B0h]
  int v439; // [rsp+74Ch] [rbp-ACh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+750h] [rbp-A8h] BYREF
  void *v441; // [rsp+760h] [rbp-98h]
  int v442; // [rsp+768h] [rbp-90h]
  int v443; // [rsp+76Ch] [rbp-8Ch]
  DWORD *p_CurrentThreadId; // [rsp+770h] [rbp-88h]
  __int64 v445; // [rsp+778h] [rbp-80h]
  int *v446; // [rsp+780h] [rbp-78h]
  __int64 v447; // [rsp+788h] [rbp-70h]
  int *v448; // [rsp+790h] [rbp-68h]
  __int64 v449; // [rsp+798h] [rbp-60h]
  int *v450; // [rsp+7A0h] [rbp-58h]
  __int64 v451; // [rsp+7A8h] [rbp-50h]
  BOOL *v452; // [rsp+7B0h] [rbp-48h]
  __int64 v453; // [rsp+7B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+7F8h] [rbp+0h]

  v380 = -2LL;
  LODWORD(v276) = a4;
  v366 = a1;
  v272 = a2;
  v289 = a5;
  v396[0] = 0LL;
  v396[1] = &v395;
  v397 = 0LL;
  v398 = 0;
  v399 = &v404;
  v400 = &v401;
  v401 = 0;
  v402 = 0;
  v407 = 0;
  v404 = 0;
  v405 = "RequestNavigateToView";
  v406 = 0LL;
  v408 = 1LL;
  lpMem = 0LL;
  memset_0(&v409, 0, 0x90uLL);
  v411 = 0LL;
  v412 = 0LL;
  v413[0] = 0LL;
  v395 = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  v323 = a5 != 0LL;
  v322 = a4;
  v321 = a3;
  v329 = a2;
  v379 = 0LL;
  v274 = 0;
  v9 = v400;
  v283 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v9 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v9 + 2));
  *v9 = 1;
  v284 = 0;
  v331 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v339, &v331) && v339 )
  {
    v331 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v10 = *((_QWORD *)v331 + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v445 = 4LL;
    v446 = (int *)&v329;
    v447 = 4LL;
    v448 = &v321;
    v449 = 4LL;
    v450 = &v322;
    v451 = 4LL;
    v452 = &v323;
    v453 = 4LL;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v395);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803941FE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v10 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v441 = &unk_180394209;
    v442 = 136;
    v443 = 1;
    EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, (LPCGUID)(v400 + 2), v11, 7u, &UserData);
  }
  if ( !v398 )
  {
    v12 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_21;
    v13 = GetCurrentThreadId();
    v14 = (signed __int64 *)(v12 + 8 * (v13 % 0xAuLL));
    v15 = *v14;
    if ( *v14 )
    {
      while ( *(_DWORD *)(v15 + 8) != v13 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        if ( !v15 )
          goto LABEL_17;
      }
      goto LABEL_22;
    }
LABEL_17:
    ProcessHeap = GetProcessHeap();
    v17 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v15 = (signed __int64)v17;
    if ( v17 )
    {
      *(_QWORD *)v17 = 0LL;
      v17[2] = v13;
      *((_QWORD *)v17 + 2) = 0LL;
      _m_prefetchw(v14);
      do
      {
        v18 = *v14;
        *(_QWORD *)(v15 + 16) = *v14;
      }
      while ( v18 != _InterlockedCompareExchange64(v14, v15, v18) );
    }
    else
    {
LABEL_21:
      v15 = 0LL;
    }
LABEL_22:
    v396[0] = v15;
    if ( v15 )
    {
      v397 = *(_QWORD *)v15;
      *(_QWORD *)v15 = v396;
      v398 = GetCurrentThreadId();
    }
  }
  try
  {
    v270 = 0LL;
    v273 = 0LL;
    v267 = 0;
    v160 = (RTL_SRWLOCK *)(a1 + 296);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 296));
    v316 = (RTL_SRWLOCK *)(a1 + 296);
    v370 = 0LL;
    v23 = 0LL;
    v26 = 0LL;
    v22 = ViewWrapperBase::GetViewInstanceId;
    while ( v26 < *(_QWORD *)(a1 + 376) )
    {
      v19 = *(_DWORD **)(*(_QWORD *)(a1 + 368) + 8 * v26);
      v20 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v19 + 592LL);
      if ( v20 == ViewWrapperBase::GetViewInstanceId )
      {
        v21 = v19[35];
      }
      else
      {
        v21 = ((__int64 (__fastcall *)(_DWORD *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))v20)(
                v19,
                ViewWrapperBase::GetViewInstanceId);
        v22 = ViewWrapperBase::GetViewInstanceId;
      }
      if ( v21 == v272 )
      {
        v23 = v26;
        v24 = 0;
        v25 = -2147319765;
        goto LABEL_32;
      }
      ++v26;
    }
    v25 = -2147319765;
    v24 = -2147319765;
LABEL_32:
    if ( v24 >= 0 )
    {
      v27 = *(__int64 (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))(*(_QWORD *)(a1 + 368) + 8 * v23);
      v28 = (**v27)(v27, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v270);
      if ( v28 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B8,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v28,
          (int)UserDataCount);
    }
    if ( v270 )
      goto LABEL_338;
    v281 = 0LL;
    v386 = 0LL;
    v384 = 0LL;
    v385 = 0LL;
    v29 = 0LL;
    v30 = *(_QWORD *)(a1 + 440);
    if ( v30 )
    {
      v31 = *(_DWORD **)(a1 + 432);
      while ( *v31 != v272 )
      {
        ++v29;
        v31 += 6;
        if ( v29 >= v30 )
          goto LABEL_40;
      }
      v33 = 24 * v29;
      v34 = *(void (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(24 * v29 + *(_QWORD *)(a1 + 432) + 8);
      (**v34)(v34, &GUID_00000000_0000_0000_c000_000000000046, &v281);
      v35 = *(_QWORD *)(a1 + 440);
      if ( v29 < v35 )
      {
        v36 = *(_QWORD *)(a1 + 432);
        v37 = *(_QWORD *)(v33 + v36 + 8);
        if ( v37 )
        {
          *(_QWORD *)(v33 + v36 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          v35 = *(_QWORD *)(a1 + 440);
        }
        if ( v29 != v35 - 1 )
        {
          memmove(
            (void *)(v33 + *(_QWORD *)(a1 + 432)),
            (const void *)(v33 + *(_QWORD *)(a1 + 432) + 24),
            24 * (v35 - v29) - 24);
          v35 = *(_QWORD *)(a1 + 440);
        }
        *(_QWORD *)(a1 + 440) = v35 - 1;
      }
      v32 = 0LL;
    }
    else
    {
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA4,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)0x8002802BLL,
        (int)UserDataCount);
      v32 = 2147647531LL;
    }
    if ( (int)v32 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x98,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)v32,
        (int)UserDataCount);
      goto LABEL_587;
    }
    v38 = v289;
    v287 = v289;
    if ( v289 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v289 + 8LL))(v289);
    newString = 0LL;
    string = 0LL;
    v39 = WindowsCreateStringReference(
            L"Windows.Internal.ShellExperience.TopLevelApplication",
            0x34u,
            &hstringHeader,
            &string);
    if ( v39 < 0 )
      RaiseException(v39, 1u, 0, 0LL);
    v417 = 0LL;
    v40 = -1LL;
    do
      ++v40;
    while ( aExperienceid[v40] );
    if ( v40 > 0xFFFFFFFF )
    {
      RaiseException(0x80070216, 1u, 0, 0LL);
      __debugbreak();
    }
    if ( (int)v40 + 1 < (unsigned int)v40 )
    {
      RaiseException(0x80070216, 1u, 0, 0LL);
      __debugbreak();
    }
    v41 = v40;
    if ( (unsigned int)v40 < (int)v40 + 1 )
      v41 = v40;
    v42 = WindowsCreateStringReference(L"ExperienceId", v41, &v416, &v417);
    if ( v42 < 0 )
      RaiseException(v42, 1u, 0, 0LL);
    v279 = string;
    v43 = v417;
    v304 = 0LL;
    v303 = 0LL;
    v302 = 0LL;
    if ( v38 )
    {
      v45 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))v38)(
              v38,
              &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
              &v302);
      v44 = v45;
      if ( v45 >= 0 )
      {
        v290 = 0LL;
        v44 = (*(__int64 (__fastcall **)(__int64, HSTRING, UAPViewWrapper **))(*(_QWORD *)v302 + 48LL))(
                v302,
                v43,
                &v290);
        if ( v44 >= 0 )
        {
          v46 = (**(__int64 (__fastcall ***)(UAPViewWrapper *, GUID *, __int64 *))v290)(
                  v290,
                  &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                  &v303);
          v44 = v46;
          if ( v46 >= 0 )
          {
            v47 = v290;
            if ( v290 )
            {
              v290 = 0LL;
              (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v47 + 16LL))(v47);
            }
            v48 = v302;
            if ( v302 )
            {
              v302 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
            }
LABEL_78:
            v49 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}(v303, &v304);
            v44 = v49;
            if ( v49 >= 0 )
            {
              v51 = v303;
              if ( v303 )
              {
                v303 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
              }
              v50 = v304;
              goto LABEL_86;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F,
              (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
              (const char *)(unsigned int)v49,
              (int)UserDataCount);
LABEL_80:
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v303);
            v50 = v304;
            if ( v44 < 0 )
              v50 = v279;
            v304 = v50;
LABEL_86:
            v52 = newString;
            if ( !v50 || v50 != newString )
            {
              WindowsDeleteString(newString);
              newString = 0LL;
              WindowsDuplicateString(v50, &newString);
            }
            v417 = 0LL;
            string = 0LL;
            v300 = 0;
            if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
              wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetCachedFeatureEnabledState(v52);
            v294 = 0;
            LOBYTE(v295) = 3;
            v327 = 0;
            v328 = v295;
            v324[0] = 3;
            v346 = 0uLL;
            v347 = 0LL;
            LODWORD(v279) = 0x10000;
            v53 = 0x10000;
            while ( 1 )
            {
              v271 = `wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data;
              v54 = `wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data;
              LODWORD(v346) = 0;
              if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data & 0x10000) == 0x10000 )
                break;
              v271 |= 0x10000u;
              if ( (v271 & 8) == 0 )
              {
                v271 |= 8u;
                LODWORD(v346) = 1;
              }
              if ( v54 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data,
                            v271,
                            `wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data) )
              {
                LODWORD(v347) = 0;
                goto LABEL_98;
              }
            }
            LODWORD(v347) = 1;
LABEL_98:
            v393 = v346;
            v394 = v347;
            if ( g_wil_details_recordFeatureUsage )
            {
              if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
                wil::details::RecordFeatureUsageCallback(
                  (wil::details *)0x8C77F9,
                  (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data,
                  (union wil_details_FeaturePropertyCache *)&v393,
                  (struct wil_details_RecordUsageResult *)1);
              else
                g_wil_details_recordFeatureUsage(
                  0x8C77F9u,
                  (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data,
                  (struct wil_details_RecordUsageResult *)&v393);
              if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
              {
                v390[0] = 0LL;
                v391 = 0;
                v390[1] = 2LL;
                v392 = (`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
                ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(9205753LL, 0LL, v390);
              }
            }
            if ( !(_DWORD)v394 && g_wil_details_pfnFeatureLoggingHook )
              g_wil_details_pfnFeatureLoggingHook(
                0x8C77F9u,
                (const struct FEATURE_LOGGED_TRAITS *)&v327,
                0LL,
                1,
                (const enum wil_ReportingKind *)v324,
                0LL,
                0,
                1uLL);
            v421 = 0LL;
            v55 = -1LL;
            do
              ++v55;
            while ( aViewsizeprefer_2[v55] );
            if ( v55 <= 0xFFFFFFFF )
            {
              if ( (int)v55 + 1 < (unsigned int)v55 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v53, v54);
                __debugbreak();
              }
              v56 = v55;
              if ( (unsigned int)v55 < (int)v55 + 1 )
                v56 = v55;
              v57 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v56, &v420, &v421);
              if ( v57 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v57, v58, v59);
                __debugbreak();
              }
              v60 = v274 | 1;
              v274 |= 1u;
              v61 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                           &v287,
                           v421,
                           v59,
                           &v300) < 0
                 || !v300;
              v274 = v60 & 0xFFFFFFFE;
              v421 = 0LL;
              if ( v61 )
              {
                v315 = 0LL;
                v350 = 0LL;
                v62 = 0LL;
                for ( i = 0LL; i < *(_QWORD *)(a1 + 376); ++i )
                {
                  v64 = *(_DWORD **)(*(_QWORD *)(a1 + 368) + 8 * i);
                  v65 = *(__int64 (**)(void))(*(_QWORD *)v64 + 592LL);
                  if ( (char *)v65 == (char *)ViewWrapperBase::GetViewInstanceId )
                    v66 = v64[35];
                  else
                    v66 = v65();
                  if ( v66 == a3 )
                  {
                    v62 = i;
                    v25 = 0;
                    break;
                  }
                }
                if ( v25 >= 0 )
                {
                  v67 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 368) + 8 * v62);
                  v68 = (**v67)(v67, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v315);
                  v69 = v68;
                  if ( v68 < 0 )
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x9B8,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                      (const char *)(unsigned int)v68,
                      (int)UserDataCount);
                  if ( v69 >= 0 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v315 + 648LL))(v315);
                    v70 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                            (__int64)v426,
                            (const WCHAR **)&off_180322BE8);
                    v71 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v287,
                            *(HSTRING *)(v70 + 24));
                    if ( v71 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0xB6,
                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                        (const char *)(unsigned int)v71,
                        (int)UserDataCount);
                    v427 = 0LL;
                  }
                }
                v72 = v315;
                if ( v315 )
                {
                  v315 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                }
              }
              v73 = *(_QWORD *)(a1 + 512);
              v317 = 0LL;
              if ( *(_BYTE *)(v73 + 145) )
              {
                v74 = -2147417848;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x246,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                  (const char *)0x80010108LL,
                  (int)UserDataCount);
                v75 = -2147417848;
              }
              else
              {
                v305 = 0LL;
                v76 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v281->lpVtbl->QueryInterface)(
                        v281,
                        &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                        &v305);
                v75 = v76;
                if ( v76 >= 0 )
                {
                  v77 = (*(__int64 (__fastcall **)(__int64, struct MsgString **))(*(_QWORD *)v305 + 24LL))(v305, &v317);
                  v75 = v77;
                  if ( v77 < 0 )
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x24A,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                      (const char *)(unsigned int)v77,
                      (int)UserDataCount);
                  v78 = v305;
                  if ( v305 )
                  {
                    v305 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
                  }
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x249,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                    (const char *)(unsigned int)v76,
                    (int)UserDataCount);
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v305);
                }
                v74 = -2147417848;
              }
              if ( v75 < 0 )
              {
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xBB,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                  (const char *)(unsigned int)v75,
                  (int)UserDataCount);
              }
              else
              {
                v348 = &v317;
                v349 = 1;
                v79 = *(_QWORD *)(a1 + 512);
                v333 = 0LL;
                if ( *(_BYTE *)(v79 + 145) )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2E9,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                    (const char *)0x80010108LL,
                    (int)UserDataCount);
                }
                else
                {
                  v312 = 0LL;
                  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v281->lpVtbl->QueryInterface)(
                    v281,
                    &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                    &v312);
                  v82 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v312 + 840LL))(v312, &v333);
                  v74 = v82;
                  if ( v82 < 0 )
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2EE,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                      (const char *)(unsigned int)v82,
                      (int)UserDataCount);
                  v83 = v312;
                  if ( v312 )
                  {
                    v312 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
                  }
                }
                v84 = retaddr;
                if ( v74 >= 0 )
                {
                  v85 = (char)v276;
                  LODWORD(v86) = (unsigned __int8)v276 & 0x10;
                  v423 = 0LL;
                  v87 = -1LL;
                  do
                    ++v87;
                  while ( aAllowwindowreu[v87] );
                  if ( v87 <= 0xFFFFFFFF )
                  {
                    if ( (int)v87 + 1 < (unsigned int)v87 )
                    {
                      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v80, v81);
                      __debugbreak();
                    }
                    v88 = v87;
                    if ( (unsigned int)v87 < (int)v87 + 1 )
                      v88 = v87;
                    v89 = WindowsCreateStringReference(L"AllowWindowReuse", v88, &v422, &v423);
                    if ( v89 < 0 )
                    {
                      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v89, v90, v91);
                      goto LABEL_595;
                    }
                    v92 = v423;
                    v266 = 0;
                    v306 = 0LL;
                    v299 = 0LL;
                    if ( v287 )
                    {
                      v94 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))v287)(
                              v287,
                              &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
                              &v299);
                      ViewInstanceId = v94;
                      if ( v94 >= 0 )
                      {
                        v291 = 0LL;
                        ViewInstanceId = (*(__int64 (__fastcall **)(__int64, HSTRING, UAPViewWrapper **))(*(_QWORD *)v299 + 48LL))(
                                           v299,
                                           v92,
                                           &v291);
                        if ( ViewInstanceId >= 0 )
                        {
                          v95 = (**(__int64 (__fastcall ***)(UAPViewWrapper *, GUID *, __int64 *))v291)(
                                  v291,
                                  &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                                  &v306);
                          ViewInstanceId = v95;
                          if ( v95 >= 0 )
                          {
                            v96 = v291;
                            if ( v291 )
                            {
                              v291 = 0LL;
                              (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v96 + 16LL))(v96);
                            }
                            v97 = v299;
                            if ( v299 )
                            {
                              v299 = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
                            }
LABEL_174:
                            v98 =  Windows::Foundation::IPropertyValue::`vcall'{144,{flat}}(v306, &v266);
                            ViewInstanceId = v98;
                            if ( v98 >= 0 )
                            {
                              v100 = v306;
                              if ( v306 )
                              {
                                v306 = 0LL;
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
                              }
LABEL_181:
                              v423 = 0LL;
                              LOBYTE(ViewInstanceId) = !(_DWORD)v86 && v266;
                              if ( !*(_BYTE *)(*(_QWORD *)(a1 + 512) + 145LL) )
                              {
                                v313 = 0LL;
                                ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v281->lpVtbl->QueryInterface)(
                                  v281,
                                  &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                                  &v313);
                                v101 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v313 + 208LL))(
                                         v313,
                                         (unsigned __int8)ViewInstanceId);
                                if ( v101 < 0 )
                                  wil::details::in1diag3::_Log_Hr(
                                    retaddr,
                                    (void *)0xCD,
                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                                    (const char *)(unsigned int)v101,
                                    (int)UserDataCount);
                                v102 = v313;
                                if ( v313 )
                                {
                                  v313 = 0LL;
                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
                                }
                              }
                              if ( !(_BYTE)ViewInstanceId )
                              {
                                if ( v289 )
                                {
                                  v425 = 0LL;
                                  v114 = WindowsCreateStringReference(
                                           L"ApplicationMultiviewActivationPolicy",
                                           0x24u,
                                           &v424,
                                           &v425);
                                  if ( v114 < 0 )
                                    goto LABEL_597;
                                  v117 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                                           &v287,
                                           v425,
                                           v116,
                                           0LL);
                                  ViewInstanceId = v117;
                                  v425 = 0LL;
                                  if ( v117 >= 0 )
                                    ViewInstanceId = 0;
                                  else
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x1F,
                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
                                      (const char *)(unsigned int)v117,
                                      (int)UserDataCount);
                                  if ( ViewInstanceId < 0 )
                                    wil::details::in1diag3::_Log_Hr(
                                      retaddr,
                                      (void *)0x126,
                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                      (const char *)(unsigned int)ViewInstanceId,
                                      (int)UserDataCount);
                                }
LABEL_219:
                                if ( v270 )
                                {
LABEL_331:
                                  if ( v349 )
                                  {
                                    v349 = 0;
                                    MsgRelease(*v348);
                                  }
                                  WindowsDeleteString(newString);
                                  newString = 0LL;
                                  v158 = v287;
                                  if ( v287 )
                                  {
                                    v287 = 0LL;
                                    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v158 + 16LL))(v158);
                                  }
                                  v159 = v281;
                                  if ( v281 )
                                  {
                                    v281 = 0LL;
                                    ((void (__fastcall *)(struct IUnknown *))v159->lpVtbl->Release)(v159);
                                  }
                                  v160 = v316;
LABEL_338:
                                  v161 = v273;
                                  if ( v273 )
                                  {
                                    v273 = 0LL;
                                    (*(void (__fastcall **)(_QWORD *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))(*v161 + 16LL))(
                                      v161,
                                      v22);
                                  }
                                  v86 = v270;
                                  v162 = 0LL;
                                  v273 = 0LL;
                                  v297 = 0LL;
                                  v163 = (*(__int64 (__fastcall **)(ViewWrapperBase *, HSTRING *))(*(_QWORD *)v270 + 56LL))(
                                           v270,
                                           &v297);
                                  ViewInstanceId = v163;
                                  if ( v163 < 0 )
                                  {
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0xABE,
                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                      (const char *)(unsigned int)v163,
                                      (int)UserDataCount);
                                    Windows::Internal::String::~String((Windows::Internal::String *)&v297);
                                    goto LABEL_374;
                                  }
                                  sourceString[0] = WindowsGetStringRawBuffer(v297, 0LL);
                                  lpString2 = (LPCWCH)(*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v86 + 600LL))(v86);
                                  v162 = 0LL;
                                  v273 = 0LL;
                                  v164 = 0LL;
                                  v296 = 0LL;
                                  v165 = 0LL;
                                  v335 = 0LL;
                                  v86 = 0LL;
                                  v276 = 0LL;
                                  if ( !*(_QWORD *)(a1 + 344) )
                                    goto LABEL_358;
                                  while ( 1 )
                                  {
                                    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336)
                                                                                      + 8LL * (_QWORD)v86)
                                                                          + 8LL))
                                      || v165 )
                                    {
                                      v269 = 0;
                                      StringLen = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336)
                                                                                             + 8LL * (_QWORD)v86)
                                                                                 + 8LL));
                                      StringRawBuffer = WindowsGetStringRawBuffer(
                                                          *(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336)
                                                                                 + 8LL * (_QWORD)v276)
                                                                     + 8LL),
                                                          0LL);
                                      if ( CompareStringOrdinal(StringRawBuffer, StringLen, sourceString[0], -1, 1) != 2 )
                                        goto LABEL_357;
                                      v86 = (ViewWrapperBase *)v276;
                                    }
                                    else
                                    {
                                      v269 = 1;
                                    }
                                    if ( WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336)
                                                                                     + 8LL * (_QWORD)v86)
                                                                         + 16LL)) )
                                      goto LABEL_351;
                                    v168 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336)
                                                                                      + 8LL * (_QWORD)v86)
                                                                          + 16LL));
                                    v169 = WindowsGetStringRawBuffer(
                                             *(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * (_QWORD)v276) + 16LL),
                                             0LL);
                                    if ( CompareStringOrdinal(v169, v168, lpString2, -1, 0) == 2 )
                                    {
                                      v86 = (ViewWrapperBase *)v276;
LABEL_351:
                                      v170 = *(_QWORD *)(a1 + 336);
                                      if ( v269 )
                                      {
                                        v171 = *(_QWORD **)(v170 + 8LL * (_QWORD)v86);
                                        if ( v165 != v171 )
                                        {
                                          if ( v171 )
                                            (*(void (__fastcall **)(_QWORD *))(*v171 + 8LL))(v171);
                                          v172 = v165;
                                          v165 = v171;
                                          v335 = v171;
                                          if ( v172 )
                                            (*(void (__fastcall **)(_QWORD *))(*v172 + 16LL))(v172);
                                        }
                                        goto LABEL_357;
                                      }
                                      Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::operator=(
                                        &v296,
                                        v170 + 8LL * (_QWORD)v86);
                                      v164 = v296;
                                      if ( v296 )
                                      {
                                        v173 = 0;
                                        goto LABEL_359;
                                      }
LABEL_358:
                                      v173 = 1;
LABEL_359:
                                      if ( v173 && v164 != v165 )
                                      {
                                        if ( v165 )
                                          (*(void (__fastcall **)(_QWORD *))(*v165 + 8LL))(v165);
                                        v174 = v164;
                                        v164 = v165;
                                        v296 = v165;
                                        if ( v174 )
                                          (*(void (__fastcall **)(_QWORD *))(*v174 + 16LL))(v174);
                                      }
                                      if ( v164 )
                                      {
                                        v162 = v164;
                                        v296 = 0LL;
                                        v273 = v164;
                                        if ( v165 )
                                        {
                                          v335 = 0LL;
                                          (*(void (__fastcall **)(_QWORD *))(*v165 + 16LL))(v165);
                                        }
                                        if ( v297 )
                                          WindowsDeleteString(v297);
                                        ViewInstanceId = 0;
                                      }
                                      else
                                      {
                                        Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::~ComPtr<CRefCountedObject<ViewEventRegistration>>(&v335);
                                        Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::~ComPtr<CRefCountedObject<ViewEventRegistration>>(&v296);
                                        ViewInstanceId = -2147023728;
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)0xAC3,
                                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                          (const char *)0x80070490LL,
                                          (int)UserDataCount);
                                        Windows::Internal::String::~String((Windows::Internal::String *)&v297);
                                      }
LABEL_374:
                                      v175 = retaddr;
                                      if ( ViewInstanceId >= 0 )
                                      {
                                        v176 = v267;
                                        if ( !v267 )
                                          goto LABEL_410;
                                        v177 = v162 + 1;
                                        if ( !v162 )
                                          v177 = 0LL;
                                        v178 = *(void (__fastcall **)(ViewWrapperBase *, _QWORD *, _QWORD))(*(_QWORD *)v270 + 584LL);
                                        if ( (char *)v178 == (char *)ViewWrapperBase::SetRegistration )
                                          ViewWrapperBase::SetRegistration(v270, v177, 0LL);
                                        else
                                          v178(v270, v177, 0LL);
                                        v179 = v270;
                                        v277 = 0LL;
                                        for ( j = 0LL; j < *(_QWORD *)(a1 + 592); ++j )
                                        {
                                          v181 = 8 * j;
                                          v182 = WindowsGetStringRawBuffer(
                                                   *(HSTRING *)(*(_QWORD *)(8 * j + *(_QWORD *)(a1 + 584)) + 8LL),
                                                   0LL);
                                          if ( (*(unsigned __int8 (__fastcall **)(ViewWrapperBase *, PCWSTR))(*(_QWORD *)v179 + 608LL))(
                                                 v179,
                                                 v182) )
                                          {
                                            v184 = *(_QWORD *)(a1 + 584);
                                            v185 = *(HSTRING **)(v184 + v181);
                                            if ( v185 )
                                            {
                                              (*((void (__fastcall **)(HSTRING *))*v185 + 1))(v185);
                                              v185 = *(HSTRING **)(v184 + v181);
                                            }
                                            v277 = v185;
                                            goto LABEL_387;
                                          }
                                        }
                                        v188 = v277;
                                        if ( v277 )
                                        {
                                          v277 = 0LL;
                                          (*((void (__fastcall **)(HSTRING *))*v188 + 2))(v188);
                                        }
                                        v189 = ViewEventDispatcher::_CreatePerApplicationData(a1, v179, &v277);
                                        LODWORD(v86) = v189;
                                        if ( v189 < 0 )
                                        {
                                          wil::details::in1diag3::Return_Hr(
                                            retaddr,
                                            (void *)0xC2B,
                                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                            (const char *)(unsigned int)v189,
                                            (int)UserDataCount);
                                          Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::~ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>(&v277);
                                          goto LABEL_408;
                                        }
LABEL_387:
                                        sourceString[0] = (PCNZWCH)&v277;
                                        sourceString[1] = (PCNZWCH)a1;
                                        v375 = *(_OWORD *)sourceString;
                                        v376 = 1;
                                        v336 = v179;
                                        if ( v179 )
                                          (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v179 + 8LL))(v179);
                                        LODWORD(v86) = 0;
                                        v186 = *(_QWORD *)(a1 + 376);
                                        if ( v186 != *(_QWORD *)(a1 + 392)
                                          || (LODWORD(v86) = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                                                               a1 + 368,
                                                               v186 + 1,
                                                               v183),
                                              (int)v86 >= 0) )
                                        {
                                          v187 = (ViewWrapperBase **)(*(_QWORD *)(a1 + 368)
                                                                    + 8 * (*(_QWORD *)(a1 + 376))++);
                                          if ( v187 )
                                          {
                                            *v187 = 0LL;
                                            if ( v187 != &v336 )
                                            {
                                              *v187 = v179;
                                              v179 = 0LL;
                                              v336 = 0LL;
                                            }
                                          }
                                        }
                                        if ( v179 )
                                        {
                                          v336 = 0LL;
                                          (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v179 + 16LL))(v179);
                                        }
                                        if ( (int)v86 >= 0 )
                                        {
                                          v277[2] = (HSTRING)((char *)v277[2] + 1);
                                          v376 = 0;
                                          v190 = v277;
                                          if ( !v277[2] )
                                          {
                                            ViewEventDispatcher::_RemovePerApplicationData(a1, v277);
                                            v190 = v277;
                                          }
                                          if ( v190 )
                                          {
                                            v277 = 0LL;
                                            (*((void (__fastcall **)(HSTRING *))*v190 + 2))(v190);
                                          }
                                          LODWORD(v86) = 0;
                                        }
                                        else
                                        {
                                          wil::details::in1diag3::Return_Hr(
                                            retaddr,
                                            (void *)0xC38,
                                            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                            (const char *)(unsigned int)v86,
                                            (int)UserDataCount);
                                          wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___(&v375);
                                          Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>::~ComPtr<CRefCountedObject<ViewEventDispatcher::PerApplicationData>>(&v277);
                                        }
LABEL_408:
                                        v191 = retaddr;
                                        if ( (int)v86 >= 0 )
                                        {
                                          v176 = v267;
LABEL_410:
                                          if ( v160 )
                                            ReleaseSRWLockExclusive(v160);
                                          v192 = v270;
                                          v193 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int))(*(_QWORD *)v270 + 632LL);
                                          if ( v193 == ViewWrapperBase::BeginWinRtActivation )
                                          {
                                            v194 = (RTL_SRWLOCK *)(*((_QWORD *)v270 + 20) + 296LL);
                                            AcquireSRWLockExclusive(v194);
                                            *((_DWORD *)v192 + 82) = v272;
                                            if ( v194 )
                                              ReleaseSRWLockExclusive(v194);
                                          }
                                          else
                                          {
                                            v193(v270, v272);
                                          }
                                          if ( v176 )
                                          {
                                            v195 = v162[4];
                                            v282 = v195;
                                            if ( v195 )
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v195 + 8LL))(v195);
                                            sourceString[0] = (PCNZWCH)&v282;
                                            v196 = v270;
                                            v288 = 0LL;
                                            v197 = (volatile signed __int64 *)operator new(
                                                                                0x58uLL,
                                                                                (const struct std::nothrow_t *)&std::nothrow);
                                            v198 = v197;
                                            v341 = v197;
                                            if ( !v197 )
                                            {
                                              Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v341);
                                              v199 = -2147024882;
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0xB20,
                                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                                (const char *)0x8007000ELL,
                                                (int)UserDataCount);
                                              Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(&v288);
                                              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v282);
                                              goto LABEL_519;
                                            }
                                            *((_QWORD *)v197 + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                            *((_QWORD *)v197 + 4) = 0LL;
                                            ppunkMarshal = 0LL;
                                            if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
                                            {
                                              v201 = *((_QWORD *)v198 + 4);
                                              if ( v201 )
                                              {
                                                *((_QWORD *)v198 + 4) = 0LL;
                                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v201 + 16LL))(v201);
                                              }
                                              ((void (__fastcall *)(LPUNKNOWN, GUID *, volatile signed __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
                                                ppunkMarshal,
                                                &GUID_00000003_0000_0000_c000_000000000046,
                                                v198 + 4);
                                            }
                                            v202 = ppunkMarshal;
                                            if ( ppunkMarshal )
                                            {
                                              ppunkMarshal = 0LL;
                                              ((void (__fastcall *)(LPUNKNOWN))v202->lpVtbl->Release)(v202);
                                            }
                                            *((_QWORD *)v198 + 7) = 0LL;
                                            *((_QWORD *)v198 + 10) = 1LL;
                                            *v198 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
                                            *((_QWORD *)v198 + 1) = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                            *((_QWORD *)v198 + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
                                            if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                            *v198 = (volatile signed __int64)&ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
                                            *((_QWORD *)v198 + 1) = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                            *((_QWORD *)v198 + 8) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
                                            v342 = v198;
                                            v341 = 0LL;
                                            *((_DWORD *)v198 + 12) = 0;
                                            v203 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)v198 + 7);
                                            v204 = v289;
                                            if ( v203 != v289 )
                                            {
                                              if ( v289 )
                                              {
                                                (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v289 + 8LL))(v289);
                                                v203 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)v198 + 7);
                                              }
                                              *((_QWORD *)v198 + 7) = v204;
                                              if ( v203 )
                                                (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v203 + 16LL))(v203);
                                            }
                                            v205 = *((_QWORD *)v198 + 10);
                                            v363 = v205;
                                            while ( v205 >= 0 )
                                            {
                                              if ( (_DWORD)v205 != 0x7FFFFFFF )
                                              {
                                                v206 = v205;
                                                v205 = _InterlockedCompareExchange64(v198 + 10, v205 + 1, v205);
                                                if ( v206 != v205 )
                                                  continue;
                                              }
                                              goto LABEL_440;
                                            }
                                            Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v205 + 16));
LABEL_440:
                                            v207 = v342;
                                            v288 = v342;
                                            v342 = 0LL;
                                            v208 = *((_QWORD *)v288 + 10);
                                            v364 = v208;
                                            while ( v208 >= 0 )
                                            {
                                              if ( (_DWORD)v208 == 0x7FFFFFFF )
                                                goto LABEL_449;
                                              v209 = v208 - 1;
                                              v210 = v208;
                                              v208 = _InterlockedCompareExchange64(v207 + 10, v208 - 1, v208);
                                              if ( v210 == v208 )
                                                goto LABEL_446;
                                            }
                                            v209 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
                                                     (Microsoft::WRL::Details *)(2 * v208 + 16),
                                                     v200);
LABEL_446:
                                            if ( !v209 )
                                            {
                                              (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v207 + 64))(
                                                v207,
                                                1LL);
                                              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                            }
LABEL_449:
                                            v280 = 0LL;
                                            v211 = v282;
                                            v365 = v282;
                                            if ( v282 )
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v282 + 8LL))(v282);
                                            if ( v211 )
                                            {
                                              v212 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v211 + 24LL))(
                                                       v211,
                                                       &GUID_d1b9407f_a351_5319_bce5_178ee5585391,
                                                       &v280);
                                              v213 = -2147024809;
                                              v214 = v280;
                                            }
                                            else
                                            {
                                              v214 = 0LL;
                                              v280 = 0LL;
                                              v213 = -2147024809;
                                              v212 = -2147024809;
                                            }
                                            if ( v211 )
                                            {
                                              v365 = 0LL;
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v211 + 16LL))(v211);
                                              v214 = v280;
                                            }
                                            if ( v212 < 0 )
                                            {
                                              v215 = (unsigned int)v212;
                                              v216 = 2851LL;
                                              goto LABEL_458;
                                            }
                                            v217 = (*(__int64 (__fastcall **)(__int64, ViewWrapperBase *, volatile signed __int64 *))(*(_QWORD *)v214 + 24LL))(
                                                     v214,
                                                     v196,
                                                     v288);
                                            if ( v217 < 0 )
                                            {
                                              v215 = (unsigned int)v217;
                                              v216 = 2852LL;
LABEL_458:
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)v216,
                                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                                (const char *)v215,
                                                (int)UserDataCount);
                                              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v280);
                                              Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(&v288);
                                              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v282);
                                              v162 = v273;
                                              v199 = -2147024882;
LABEL_520:
                                              v293 = 0LL;
                                              v239 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
                                              v240 = v239;
                                              v343 = v239;
                                              if ( v239 )
                                              {
                                                v239[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                                v239[4] = 0LL;
                                                v311 = 0LL;
                                                if ( CoCreateFreeThreadedMarshaler(0LL, &v311) >= 0 )
                                                {
                                                  v241 = v240[4];
                                                  if ( v241 )
                                                  {
                                                    v240[4] = 0LL;
                                                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v241 + 16LL))(v241);
                                                  }
                                                  ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v311->lpVtbl->QueryInterface)(
                                                    v311,
                                                    &GUID_00000003_0000_0000_c000_000000000046,
                                                    v240 + 4);
                                                }
                                                v242 = v311;
                                                if ( v311 )
                                                {
                                                  v311 = 0LL;
                                                  ((void (__fastcall *)(LPUNKNOWN))v242->lpVtbl->Release)(v242);
                                                }
                                                v240[7] = 0LL;
                                                v240[11] = 1LL;
                                                *v240 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
                                                v240[1] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                                v240[8] = &ViewEventArgsForNavigationRequest::`vftable'{for `IWeakReferenceSource'};
                                                v240[9] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>'};
                                                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                                *v240 = &ViewEventArgsForNavigationRequest::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
                                                v240[1] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                                v240[8] = &ViewEventArgsForNavigationRequest::`vftable'{for `IWeakReferenceSource'};
                                                v240[9] = &ViewEventArgsForNavigationRequest::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>'};
                                                *((_BYTE *)v240 + 96) = 0;
                                                *((_DWORD *)v240 + 12) = 2;
                                                v243 = (struct Windows::Foundation::Collections::IPropertySet *)v240[7];
                                                v244 = v289;
                                                if ( v243 != v289 )
                                                {
                                                  if ( v289 )
                                                  {
                                                    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v289 + 8LL))(v289);
                                                    v243 = (struct Windows::Foundation::Collections::IPropertySet *)v240[7];
                                                  }
                                                  v240[7] = v244;
                                                  if ( v243 )
                                                    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v243 + 16LL))(v243);
                                                }
                                                v293 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)v240;
                                                (*(void (__fastcall **)(_QWORD *))(*v240 + 8LL))(v240);
                                                v246 = v240[11];
                                                while ( v246 >= 0 )
                                                {
                                                  if ( (_DWORD)v246 == 0x7FFFFFFF )
                                                    goto LABEL_544;
                                                  v247 = v246 - 1;
                                                  v248 = v246;
                                                  v246 = _InterlockedCompareExchange64(v240 + 11, v246 - 1, v246);
                                                  if ( v248 == v246 )
                                                    goto LABEL_541;
                                                }
                                                v247 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
                                                         (Microsoft::WRL::Details *)(2 * v246 + 16),
                                                         v245);
LABEL_541:
                                                if ( !v247 )
                                                {
                                                  (*(void (__fastcall **)(_QWORD *, __int64))(*v343 + 64LL))(v343, 1LL);
                                                  if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                                    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                                }
LABEL_544:
                                                v199 = 0;
                                                v162 = v273;
                                              }
                                              else
                                              {
                                                Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v343);
                                              }
                                              if ( v199 < 0 )
                                              {
                                                wil::details::in1diag3::Throw_Hr(
                                                  retaddr,
                                                  (void *)0x15F,
                                                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                                  (const char *)(unsigned int)v199,
                                                  (int)UserDataCount);
                                              }
                                              else
                                              {
                                                v292 = 0LL;
                                                v249 = v162[4];
                                                v383 = v249;
                                                if ( v249 )
                                                {
                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v249 + 8LL))(v249);
                                                  v213 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v249 + 24LL))(
                                                           v249,
                                                           &GUID_d1b9407f_a351_5319_bce5_178ee5585391,
                                                           &v292);
                                                  v250 = v292;
                                                }
                                                else
                                                {
                                                  v250 = 0LL;
                                                  v292 = 0LL;
                                                }
                                                if ( v249 )
                                                {
                                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v249 + 16LL))(v249);
                                                  v250 = v292;
                                                }
                                                v251 = retaddr;
                                                if ( v213 >= 0 )
                                                {
                                                  v252 = (*(__int64 (__fastcall **)(__int64, ViewWrapperBase *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)v250 + 24LL))(
                                                           v250,
                                                           v270,
                                                           v293);
                                                  v253 = retaddr;
                                                  if ( v252 >= 0 )
                                                  {
                                                    v254 = v292;
                                                    if ( v292 )
                                                    {
                                                      v292 = 0LL;
                                                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v254 + 16LL))(v254);
                                                    }
                                                    v255 = *(int (**)(ViewWrapperBase *__hidden, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)v270 + 640LL);
                                                    if ( v255 == ViewWrapperBase::ApproveWinRtActivation )
                                                      ViewWrapperBase::ApproveWinRtActivation(v270, v289, v293);
                                                    else
                                                      ((void (__fastcall *)(ViewWrapperBase *, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))v255)(
                                                        v270,
                                                        v289,
                                                        v293);
                                                    v256 = v293;
                                                    if ( v293 )
                                                    {
                                                      v293 = 0LL;
                                                      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)v256 + 16LL))(v256);
                                                    }
                                                    (*(void (__fastcall **)(_QWORD *))(*v162 + 16LL))(v162);
                                                    v257 = v270;
                                                    if ( v270 )
                                                    {
                                                      v270 = 0LL;
                                                      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v257 + 16LL))(v257);
                                                    }
                                                    goto LABEL_609;
                                                  }
LABEL_605:
                                                  wil::details::in1diag3::Throw_Hr(
                                                    v253,
                                                    (void *)0x168,
                                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                                    (const char *)(unsigned int)v252,
                                                    (int)UserDataCount);
                                                  JUMPOUT(0x18003A2F4LL);
                                                }
                                              }
                                              wil::details::in1diag3::Throw_Hr(
                                                v251,
                                                (void *)0x167,
                                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                                (const char *)(unsigned int)v213,
                                                (int)UserDataCount);
                                              goto LABEL_605;
                                            }
                                            v219 = *(_QWORD *)(a1 + 536);
                                            if ( v219 )
                                            {
                                              v220 = *(_QWORD *)(v219 + 8);
                                              if ( v220 )
                                              {
                                                v221 = *(_DWORD *)(v220 + 8);
                                                if ( v221 )
                                                {
                                                  while ( v221 != _InterlockedCompareExchange(
                                                                    (volatile signed __int32 *)(v220 + 8),
                                                                    v221 + 1,
                                                                    v221) )
                                                  {
                                                    v221 = *(_DWORD *)(v220 + 8);
                                                    if ( !v221 )
                                                      goto LABEL_602;
                                                  }
                                                  v222 = *(HSTRING *)v219;
                                                  v279 = *(HSTRING *)v219;
                                                  v223 = *(volatile signed __int32 **)(v219 + 8);
                                                  v274 |= 8u;
                                                  if ( v196 )
                                                  {
                                                    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v196 + 8LL))(v196);
                                                    v222 = v279;
                                                  }
                                                  v371 = v219;
                                                  if ( v223 )
                                                    _InterlockedIncrement(v223 + 2);
                                                  v372 = v222;
                                                  v224 = (std::_Ref_count_base *)v223;
                                                  v373 = v223;
                                                  v225 = v196;
                                                  v374 = v196;
                                                  if ( v196 )
                                                    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v196 + 8LL))(v196);
                                                  LODWORD(v276) = *(_DWORD *)(v219 + 16);
                                                  v382 = 0LL;
                                                  v226 = operator new(
                                                           0x30uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
                                                  v227 = v226;
                                                  if ( v226 )
                                                  {
                                                    *v226 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
                                                    *((_DWORD *)v226 + 3) = 1;
                                                    *v226 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
                                                    if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                                      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                                    *v227 = off_180318000;
                                                    v227[2] = v219;
                                                    v227[3] = v279;
                                                    v227[4] = v223;
                                                    v224 = 0LL;
                                                    v373 = 0LL;
                                                    v227[5] = 0LL;
                                                    if ( v227 + 5 != &v374 )
                                                    {
                                                      v227[5] = v196;
                                                      v225 = 0LL;
                                                      v374 = 0LL;
                                                    }
                                                    hObject = 0LL;
                                                    v337 = 0LL;
                                                    *(_OWORD *)v340 = 0LL;
                                                    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
                                                    LODWORD(UserDataCount) = (_DWORD)v227;
                                                    v228 = Windows::Internal::ComTaskPool::s_QueuePoolTaskUnderLock(
                                                             hObject,
                                                             0LL,
                                                             2LL,
                                                             (unsigned int)v276);
                                                    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
                                                    v229 = v340[0];
                                                    if ( v340[0] )
                                                    {
                                                      v340[0] = *((Windows::Internal::ComTaskPool::TaskData **)v340[0]
                                                                + 3);
                                                      *((_QWORD *)v229 + 3) = 0LL;
                                                      v230 = v340[1];
                                                      if ( v340[1] == v229 )
                                                        v230 = 0LL;
                                                      for ( v340[1] = v230;
                                                            v229;
                                                            v229 = Windows::Internal::ComTaskPool::TaskList::PopFront((Windows::Internal::ComTaskPool::TaskList *)v340) )
                                                      {
                                                        Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(
                                                          v229,
                                                          (unsigned int)v230);
                                                      }
                                                    }
                                                    v231 = v228 < 0;
                                                    v232 = v337;
                                                    if ( !v231 && v337 )
                                                      Windows::Internal::ComTaskPool::CThread::WaitForThreadStart(v337);
                                                    if ( hObject )
                                                    {
                                                      AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
                                                      if ( !Windows::Internal::ComTaskPool::s_hEventCache )
                                                      {
                                                        Windows::Internal::ComTaskPool::s_hEventCache = hObject;
                                                        hObject = 0LL;
                                                      }
                                                      ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
                                                      if ( hObject )
                                                        CloseHandle(hObject);
                                                    }
                                                    if ( v232 )
                                                      (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CThread *))(*(_QWORD *)v232 + 16LL))(v232);
                                                    (*(void (__fastcall **)(_QWORD *))(*v227 + 16LL))(v227);
                                                  }
                                                  if ( v225 )
                                                    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v225 + 16LL))(v225);
                                                  if ( v224 )
                                                    std::_Ref_count_base::_Decref(v224);
                                                  if ( v196 )
                                                    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v196 + 16LL))(v196);
                                                  if ( v223 && _InterlockedExchangeAdd(v223 + 2, 0xFFFFFFFF) == 1 )
                                                  {
                                                    (**(void (__fastcall ***)(volatile signed __int32 *))v223)(v223);
                                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v223);
                                                  }
                                                  goto LABEL_503;
                                                }
                                              }
LABEL_602:
                                              std::bad_weak_ptr::bad_weak_ptr((std::bad_weak_ptr *)pExceptionObject);
                                              throw (std::bad_weak_ptr *)pExceptionObject;
                                            }
LABEL_503:
                                            v233 = v280;
                                            if ( v280 )
                                            {
                                              v280 = 0LL;
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v233 + 16LL))(v233);
                                            }
                                            v234 = v288;
                                            if ( v288 )
                                            {
                                              v288 = 0LL;
                                              v235 = *((_QWORD *)v234 + 10);
                                              while ( v235 >= 0 )
                                              {
                                                if ( (_DWORD)v235 == 0x7FFFFFFF )
                                                  goto LABEL_515;
                                                v236 = v235 - 1;
                                                v237 = v235;
                                                v235 = _InterlockedCompareExchange64(v234 + 10, v235 - 1, v235);
                                                if ( v237 == v235 )
                                                  goto LABEL_512;
                                              }
                                              v236 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
                                                       (Microsoft::WRL::Details *)(2 * v235 + 16),
                                                       v218);
LABEL_512:
                                              if ( !v236 )
                                              {
                                                (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v234 + 64))(
                                                  v234,
                                                  1LL);
                                                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                              }
                                            }
LABEL_515:
                                            v238 = v282;
                                            if ( v282 )
                                            {
                                              v282 = 0LL;
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v238 + 16LL))(v238);
                                            }
                                            v162 = v273;
                                            v199 = -2147024882;
                                          }
                                          else
                                          {
                                            v199 = -2147024882;
                                          }
LABEL_519:
                                          v213 = -2147024809;
                                          goto LABEL_520;
                                        }
LABEL_601:
                                        wil::details::in1diag3::Throw_Hr(
                                          v191,
                                          (void *)0x150,
                                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                          (const char *)(unsigned int)v86,
                                          (int)UserDataCount);
                                        goto LABEL_602;
                                      }
LABEL_600:
                                      wil::details::in1diag3::Throw_Hr(
                                        v175,
                                        (void *)0x148,
                                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                        (const char *)(unsigned int)ViewInstanceId,
                                        (int)UserDataCount);
                                      goto LABEL_601;
                                    }
LABEL_357:
                                    v86 = (ViewWrapperBase *)((char *)v276 + 1);
                                    v276 = v86;
                                    if ( (unsigned __int64)v86 >= *(_QWORD *)(a1 + 344) )
                                      goto LABEL_358;
                                  }
                                }
                                if ( (v85 & 8) != 0 )
                                {
                                  v351 = a1;
                                  v324[2] = 0;
                                  *(_QWORD *)v352 = WindowsGetStringRawBuffer(newString, 0LL);
                                  Data = MsgStringGetData(v317);
                                  v354 = v281;
                                  UserDataCount = v352;
                                  v118 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
                                           &v270,
                                           &v272,
                                           &v354,
                                           &Data);
                                  if ( v118 >= 0 )
                                    goto LABEL_330;
                                  wil::details::in1diag3::Throw_Hr(
                                    retaddr,
                                    (void *)0x137,
                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                    (const char *)(unsigned int)v118,
                                    (int)v352);
                                  goto LABEL_599;
                                }
                                sourceString[0] = WindowsGetStringRawBuffer(newString, 0LL);
                                if ( v317 )
                                {
                                  v119 = *(_DWORD *)v317 & 0xE0000000;
                                  if ( v119 == 0x40000000 )
                                  {
                                    v86 = (struct MsgString *)((char *)v317 + 8);
                                  }
                                  else
                                  {
                                    if ( v119 != 0x80000000 )
                                      __debugbreak();
                                    v86 = (ViewWrapperBase *)*((_QWORD *)v317 + 1);
                                  }
                                }
                                else
                                {
                                  v86 = 0LL;
                                }
                                v120 = v281;
                                v121 = v270;
                                if ( v270 )
                                {
                                  v270 = 0LL;
                                  (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v121 + 16LL))(v121);
                                }
                                v270 = 0LL;
                                v122 = (char *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
                                v309 = v122;
                                if ( !v122 )
                                {
                                  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v309);
                                  ViewInstanceId = -2147024882;
                                  goto LABEL_329;
                                }
                                *((_QWORD *)v122 + 2) = &Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
                                Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v122 + 64));
                                *((_QWORD *)v122 + 1) = &ViewWrapperBase::`vftable'{for `INtUserViewWrapper'};
                                *((_QWORD *)v122 + 2) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                *((_QWORD *)v122 + 3) = &ViewWrapperBase::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
                                *((_QWORD *)v122 + 4) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                *((_QWORD *)v122 + 5) = &ViewWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
                                *((_QWORD *)v122 + 6) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                *((_QWORD *)v122 + 7) = &ViewWrapperBase::`vftable'{for `IFramedViewWrapper'};
                                *((_QWORD *)v122 + 8) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                *((_DWORD *)v122 + 26) = 0;
                                *((_QWORD *)v122 + 14) = 0LL;
                                *((_QWORD *)v122 + 15) = 0LL;
                                *((_QWORD *)v122 + 16) = 0LL;
                                *((_QWORD *)v122 + 17) = 0LL;
                                *((_QWORD *)v122 + 18) = 0LL;
                                *((_DWORD *)v122 + 38) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
                                *((_QWORD *)v122 + 20) = 0LL;
                                *((_QWORD *)v122 + 21) = 0LL;
                                *((_QWORD *)v122 + 22) = 0LL;
                                *((_QWORD *)v122 + 23) = -1LL;
                                *((_DWORD *)v122 + 48) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
                                *((_QWORD *)v122 + 25) = 0LL;
                                *((_QWORD *)v122 + 26) = 0LL;
                                *((_QWORD *)v122 + 27) = 0LL;
                                *((_DWORD *)v122 + 56) = 0;
                                *(_QWORD *)(v122 + 228) = 0LL;
                                *(_QWORD *)(v122 + 236) = 0LL;
                                *(_QWORD *)(v122 + 244) = 0LL;
                                *(_QWORD *)(v122 + 252) = 0LL;
                                *(_QWORD *)(v122 + 260) = 0LL;
                                *((_DWORD *)v122 + 67) = 0;
                                *((_QWORD *)v122 + 34) = 0LL;
                                *((_QWORD *)v122 + 35) = 0LL;
                                *((_DWORD *)v122 + 72) = 1;
                                *((_DWORD *)v122 + 73) = 1;
                                *((_DWORD *)v122 + 74) = 4;
                                *((_QWORD *)v122 + 38) = 0LL;
                                *((_QWORD *)v122 + 39) = 0LL;
                                *((_QWORD *)v122 + 40) = 0LL;
                                InitializeSRWLock((PSRWLOCK)v122 + 41);
                                InitializeSRWLock((PSRWLOCK)v122 + 42);
                                *((_QWORD *)v122 + 43) = 0LL;
                                *((_QWORD *)v122 + 44) = 0LL;
                                *((_QWORD *)v122 + 45) = 0LL;
                                *((_DWORD *)v122 + 92) = 1;
                                *((_QWORD *)v122 + 47) = 0LL;
                                v122[384] = 0;
                                *(_QWORD *)(v122 + 388) = 0LL;
                                *((_QWORD *)v122 + 57) = 0LL;
                                *((_DWORD *)v122 + 116) = 0;
                                v122[468] = 0;
                                *((_QWORD *)v122 + 59) = 0LL;
                                *((_QWORD *)v122 + 60) = 0LL;
                                *((_QWORD *)v122 + 61) = 0LL;
                                InitializeSRWLock((PSRWLOCK)v122 + 62);
                                InitializeSRWLock((PSRWLOCK)v122 + 63);
                                *((_DWORD *)v122 + 128) = 0;
                                *((_WORD *)v122 + 258) = 0;
                                RmActivityImportanceInitialize(v122 + 356);
                                v123 = v309;
                                *((_QWORD *)v309 + 69) = 1LL;
                                *(_QWORD *)v123 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `IInspectable'};
                                *((_QWORD *)v122 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `INtUserViewWrapper'};
                                v124 = v123 + 16;
                                *((_QWORD *)v123 + 2) = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                v276 = v123 + 24;
                                *((_QWORD *)v123 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
                                v279 = (HSTRING)(v123 + 32);
                                *((_QWORD *)v123 + 4) = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                v355 = v123 + 40;
                                *((_QWORD *)v123 + 5) = &UAPViewWrapper::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
                                v356 = v123 + 48;
                                *((_QWORD *)v123 + 6) = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                v357 = v123 + 56;
                                *((_QWORD *)v123 + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `IFramedViewWrapper'};
                                v358 = v123 + 64;
                                *((_QWORD *)v123 + 8) = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                v359 = v123 + 520;
                                *((_QWORD *)v123 + 65) = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
                                v360 = v123 + 528;
                                *((_QWORD *)v123 + 66) = &UAPViewWrapper::`vftable'{for `IUAPViewWrapper'};
                                lpString2 = (LPCWCH)(v123 + 536);
                                *((_QWORD *)v123 + 67) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
                                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                {
                                  v125 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
                                  if ( (char *)v125 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
                                    v123 = v309;
                                  }
                                  else
                                  {
                                    v125();
                                  }
                                }
                                *(_QWORD *)v123 = &UAPViewWrapper::`vftable'{for `IInspectable'};
                                *((_QWORD *)v122 + 1) = &UAPViewWrapper::`vftable'{for `INtUserViewWrapper'};
                                *v124 = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                *v276 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
                                *(_QWORD *)v279 = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                *v355 = &UAPViewWrapper::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
                                *v356 = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
                                *v357 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `IFramedViewWrapper'};
                                *v358 = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
                                *v359 = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
                                *v360 = &UAPViewWrapper::`vftable'{for `IUAPViewWrapper'};
                                *(_QWORD *)lpString2 = &UAPViewWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
                                *((_DWORD *)v123 + 140) = 1;
                                v123[564] = 0;
                                v301 = v123;
                                v309 = 0LL;
                                v126 = *(ViewManagerBridge **)(a1 + 520);
                                v127 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, bool *))(*(_QWORD *)v126 + 264LL);
                                if ( v127 == ViewManagerBridge::GetSplashScreenDismissed )
                                  SplashScreenDismissed = ViewManagerBridge::GetSplashScreenDismissed(v126, v120, &v268);
                                else
                                  SplashScreenDismissed = v127(v126, v120, &v268);
                                if ( SplashScreenDismissed >= 0 )
                                  v123[564] = v268;
                                else
                                  wil::details::in1diag3::_Log_Hr(
                                    retaddr,
                                    (void *)0x20,
                                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
                                    (const char *)(unsigned int)SplashScreenDismissed,
                                    (int)UserDataCount);
                                v129 = v123 + 8;
                                *((_DWORD *)v123 + 39) = v272;
                                v130 = (struct IUnknown *)*((_QWORD *)v123 + 25);
                                if ( v130 != v120 )
                                {
                                  if ( v120 )
                                  {
                                    ((void (__fastcall *)(struct IUnknown *))v120->lpVtbl->AddRef)(v120);
                                    v130 = (struct IUnknown *)*((_QWORD *)v123 + 25);
                                  }
                                  *((_QWORD *)v123 + 25) = v120;
                                  if ( v130 )
                                    ((void (__fastcall *)(struct IUnknown *))v130->lpVtbl->Release)(v130);
                                }
                                if ( *((_QWORD *)v123 + 22) != a1 )
                                {
                                  v131 = *(_QWORD *)(a1 + 272);
                                  v361 = v131;
                                  while ( v131 >= 0 )
                                  {
                                    if ( (_DWORD)v131 != 0x7FFFFFFF )
                                    {
                                      v132 = v131;
                                      v131 = _InterlockedCompareExchange64(
                                               (volatile signed __int64 *)(a1 + 272),
                                               v131 + 1,
                                               v131);
                                      if ( v132 != v131 )
                                        continue;
                                    }
                                    goto LABEL_256;
                                  }
                                  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v131 + 16));
LABEL_256:
                                  v133 = *((_QWORD *)v123 + 22);
                                  *((_QWORD *)v123 + 22) = a1;
                                  if ( v133 )
                                    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::Release(v133);
                                  v123 = v301;
                                }
                                v134 = (struct IUnknown *)v129[24];
                                if ( v134 )
                                {
                                  v135 = *(ViewManagerBridge **)(v129[21] + 520LL);
                                  v136 = v129 + 22;
                                  v137 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned __int64 *))(*(_QWORD *)v135 + 288LL);
                                  ViewInstanceId = v137 == ViewManagerBridge::GetHostIdForView
                                                 ? ViewManagerBridge::GetHostIdForView(v135, v134, v136)
                                                 : v137(v135, v134, v136);
                                  if ( ViewInstanceId < 0 )
                                  {
                                    v138 = 86LL;
                                    goto LABEL_317;
                                  }
                                }
                                v381 = v129;
                                v377[0] = off_1803230C0;
                                v377[1] = v129;
                                v378 = v377;
                                lpString2 = (LPCWCH)v377;
                                v139 = v129 + 49;
                                v389 = 0LL;
                                v140 = (_BYTE *)std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Move(
                                                  v377,
                                                  v388);
                                v141 = v140;
                                v389 = v140;
                                if ( v140 != v388 )
                                {
                                  v142 = (_BYTE *)v129[56];
                                  if ( v142 != v139 )
                                  {
                                    v141 = (_BYTE *)v129[56];
                                    v389 = v141;
                                    v129[56] = v140;
                                    goto LABEL_284;
                                  }
                                }
                                v142 = v140;
                                v143 = 0LL;
                                v415 = 0LL;
                                if ( v140 )
                                {
                                  v142 = v388;
                                  if ( v140 != v388 )
                                  {
                                    v143 = v140;
                                    v415 = v140;
                                    goto LABEL_272;
                                  }
                                  v143 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _QWORD))(*(_QWORD *)v140 + 8LL))(
                                                    v140,
                                                    v414,
                                                    0LL);
                                  v415 = v143;
                                  v141 = v389;
                                  if ( v389 )
                                  {
                                    LOBYTE(v142) = v389 != v388;
                                    (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v389 + 32LL))(
                                      v389,
                                      v142,
                                      v143);
                                    v143 = v415;
LABEL_272:
                                    v141 = 0LL;
                                    v389 = 0LL;
                                  }
                                }
                                v144 = (_BYTE *)v129[56];
                                if ( v144 )
                                {
                                  v141 = (_BYTE *)v129[56];
                                  if ( v144 == v139 )
                                  {
                                    v389 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v144 + 8LL))(
                                                      v141,
                                                      v388,
                                                      v143);
                                    std::_Func_class<void,bool>::_Tidy(v129 + 49);
                                    v141 = v389;
                                    v143 = v415;
                                  }
                                  else
                                  {
                                    v389 = (_BYTE *)v129[56];
                                    v129[56] = 0LL;
                                  }
                                }
                                if ( v143 )
                                {
                                  if ( v143 == v414 )
                                  {
                                    v129[56] = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v143 + 8LL))(
                                                 v143,
                                                 v129 + 49);
                                    if ( v415 )
                                    {
                                      LOBYTE(v142) = v415 != v414;
                                      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v415 + 32LL))(v415, v142);
                                      v415 = 0LL;
                                    }
                                    v141 = v389;
                                  }
                                  else
                                  {
                                    v129[56] = v143;
                                    v415 = 0LL;
                                  }
                                }
LABEL_284:
                                if ( v141 )
                                {
                                  LOBYTE(v142) = v141 != v388;
                                  (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v141 + 32LL))(v141, v142);
                                  v389 = 0LL;
                                }
                                if ( v378 )
                                {
                                  LOBYTE(v142) = v378 != v377;
                                  (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v378 + 32LL))(v378, v142);
                                  v378 = 0LL;
                                }
                                if ( v86 )
                                {
                                  v344 = 0LL;
                                  v145 = -1LL;
                                  do
                                    ++v145;
                                  while ( *((_WORD *)v86 + v145) );
                                  if ( v145 <= 0xFFFFFFFF )
                                  {
                                    ViewInstanceId = WindowsCreateString((PCNZWCH)v86, v145, &v344);
                                    if ( ViewInstanceId >= 0 )
                                    {
                                      v146 = (HSTRING)v129[19];
                                      v129[19] = v344;
                                      WindowsDeleteString(v146);
                                    }
                                  }
                                  else
                                  {
                                    ViewInstanceId = -2147024362;
                                  }
                                  if ( ViewInstanceId >= 0 )
                                  {
                                    v147 = sourceString[0];
                                    if ( sourceString[0] )
                                    {
                                      v345 = 0LL;
                                      v148 = -1LL;
                                      do
                                        ++v148;
                                      while ( sourceString[0][v148] );
                                      if ( v148 <= 0xFFFFFFFF )
                                      {
                                        ViewInstanceId = WindowsCreateString(sourceString[0], v148, &v345);
                                        if ( ViewInstanceId >= 0 )
                                        {
                                          v149 = (HSTRING)v129[20];
                                          v129[20] = v345;
                                          WindowsDeleteString(v149);
                                        }
                                      }
                                      else
                                      {
                                        ViewInstanceId = -2147024362;
                                      }
                                      if ( ViewInstanceId >= 0 )
                                      {
                                        v285 = 0;
                                        v334 = 0LL;
                                        if ( InitOnceBeginInitialize(
                                               &`ViewManagerInteropLogging::Instance'::`2'::wrapper,
                                               0,
                                               &v325,
                                               &v334)
                                          && v325 )
                                        {
                                          v334 = qword_180438940;
                                          qword_180438940[0] = &LockScreenServiceLogging::`vftable';
                                          qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
                                          atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
                                          wil::TraceLoggingProvider::Register(
                                            (wil::TraceLoggingProvider *)qword_180438940,
                                            qword_180438958);
                                          InitOnceComplete(
                                            &`ViewManagerInteropLogging::Instance'::`2'::wrapper,
                                            0,
                                            qword_180438940);
                                        }
                                        v150 = *((_QWORD *)v334 + 1);
                                        if ( *(_DWORD *)v150 > 5u )
                                        {
                                          v326 = v272;
                                          v432 = &v326;
                                          v433 = 4LL;
                                          v151 = -1LL;
                                          do
                                            ++v151;
                                          while ( *((_WORD *)v86 + v151) );
                                          v434 = v86;
                                          v435 = 2 * v151 + 2;
                                          v436 = 0;
                                          v152 = -1LL;
                                          do
                                            ++v152;
                                          while ( v147[v152] );
                                          v437 = v147;
                                          v438 = 2 * v152 + 2;
                                          v439 = 0;
                                          *(_DWORD *)&v369.Id = ((unsigned int)&unk_18039742E
                                                               - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                                          *(_DWORD *)&v369.Level = 5;
                                          v369.Keyword = 0LL;
                                          v428.Ptr = *(_QWORD *)(v150 + 8);
                                          v428.Size = *(unsigned __int16 *)v428.Ptr;
                                          v428.Reserved = 2;
                                          v429 = &unk_180397439;
                                          v430 = 68;
                                          v431 = 1;
                                          EventWriteTransfer(*(_QWORD *)(v150 + 32), &v369, 0LL, 0LL, 5u, &v428);
                                          v123 = v301;
                                        }
                                        v286 = 0;
                                        v270 = (ViewWrapperBase *)(v129 + 1);
                                        (*(void (__fastcall **)(_QWORD *))(v129[1] + 8LL))(v129 + 1);
                                        if ( v123 )
                                        {
                                          v301 = 0LL;
                                          v154 = *((_QWORD *)v123 + 69);
                                          v362 = v154;
                                          while ( v154 >= 0 )
                                          {
                                            if ( (_DWORD)v154 == 0x7FFFFFFF )
                                              goto LABEL_328;
                                            v155 = v154 - 1;
                                            v156 = v154;
                                            v154 = _InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)v123 + 69,
                                                     v154 - 1,
                                                     v154);
                                            if ( v156 == v154 )
                                              goto LABEL_325;
                                          }
                                          v155 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
                                                   (Microsoft::WRL::Details *)(2 * v154 + 16),
                                                   v153);
LABEL_325:
                                          if ( !v155 )
                                          {
                                            (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v123 + 48LL))(
                                              v123,
                                              1LL);
                                            if ( Microsoft::WRL::Details::ModuleBase::module_ )
                                              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                                          }
                                        }
LABEL_328:
                                        ViewInstanceId = 0;
LABEL_329:
                                        v157 = retaddr;
                                        if ( ViewInstanceId >= 0 )
                                        {
LABEL_330:
                                          v267 = 1;
                                          goto LABEL_331;
                                        }
LABEL_599:
                                        wil::details::in1diag3::Throw_Hr(
                                          v157,
                                          (void *)0x141,
                                          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                          (const char *)(unsigned int)ViewInstanceId,
                                          (int)UserDataCount);
                                        goto LABEL_600;
                                      }
                                    }
                                    else
                                    {
                                      ViewInstanceId = -2147467261;
                                    }
                                    v138 = 99LL;
LABEL_317:
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)v138,
                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
                                      (const char *)(unsigned int)ViewInstanceId,
                                      (int)UserDataCount);
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x25,
                                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
                                      (const char *)(unsigned int)ViewInstanceId,
                                      UserDataCounta);
                                    Microsoft::WRL::ComPtr<UAPViewWrapper>::~ComPtr<UAPViewWrapper>(&v301);
                                    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v309);
                                    goto LABEL_329;
                                  }
                                }
                                else
                                {
                                  ViewInstanceId = -2147467261;
                                }
                                v138 = 98LL;
                                goto LABEL_317;
                              }
                              v308 = 0LL;
                              v103 = WindowsGetStringRawBuffer(newString, 0LL);
                              if ( (int)ViewEventDispatcher::_ViewFromHostIdAndExperienceId(
                                          (ViewEventDispatcher *)a1,
                                          v333,
                                          v103,
                                          &v308) < 0 )
                              {
LABEL_211:
                                Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v308);
                                goto LABEL_219;
                              }
                              Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v273);
                              MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                                                a1,
                                                                v308,
                                                                &v273);
                              v105 = retaddr;
                              if ( MatchingViewEventRegistration >= 0 )
                              {
                                v307 = 0LL;
                                Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(&v307);
                                v106 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSelectTargetView,ViewEventArgsForSelectTargetView,Windows::Foundation::Collections::IPropertySet * &>(
                                         &v307,
                                         (__int64 *)&v289);
                                v107 = retaddr;
                                if ( v106 >= 0 )
                                {
                                  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
                                    &v316,
                                    0LL);
                                  v318 = 0LL;
                                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v318);
                                  if ( (int)AgileGitPtr::CopyLocal(
                                              (AgileGitPtr *)(v273 + 4),
                                              &GUID_d1b9407f_a351_5319_bce5_178ee5585391,
                                              &v318) >= 0 )
                                  {
                                    v332 = 0LL;
                                    Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                                      &v308,
                                      (__int64)&v332);
                                    (*(void (__fastcall **)(void *, __int64, ViewEventArgsForSelectTargetView *))(*(_QWORD *)v318 + 24LL))(
                                      v318,
                                      v332,
                                      v307);
                                    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v332);
                                  }
                                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v318);
                                  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 296));
                                  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
                                    &v316,
                                    a1 + 296);
                                  SRWLock[1] = 0LL;
                                  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v308);
                                  v108 = 1;
                                  v275 = 0LL;
                                  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v275);
                                  if ( (int)ViewEventArgsForSelectTargetView::GetTargetView(v307, &v275) >= 0 )
                                  {
                                    v109 = v275;
                                    if ( !v275 )
                                    {
                                      v108 = 0;
                                      goto LABEL_205;
                                    }
                                    if ( *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v275
                                                                                                  + 592LL) == ViewWrapperBase::GetViewInstanceId )
                                      ViewInstanceId = ViewWrapperBase::GetViewInstanceId(v275);
                                    else
                                      ViewInstanceId = (*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v275 + 592LL))(v275);
                                    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v275);
                                    v110 = ViewEventDispatcher::_ViewFromViewInstanceId(
                                             (ViewEventDispatcher *)a1,
                                             ViewInstanceId,
                                             &v275);
                                    if ( v110 < 0 )
                                      wil::details::in1diag3::_Log_Hr(
                                        retaddr,
                                        (void *)0x111,
                                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                        (const char *)(unsigned int)v110,
                                        (int)UserDataCount);
                                  }
                                  v109 = v275;
LABEL_205:
                                  if ( !v109 && v108 )
                                  {
                                    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v275);
                                    v111 = WindowsGetStringRawBuffer(newString, 0LL);
                                    v112 = ViewEventDispatcher::_ViewFromHostIdAndExperienceId(
                                             (ViewEventDispatcher *)a1,
                                             v333,
                                             v111,
                                             &v275);
                                    if ( v112 < 0 )
                                      wil::details::in1diag3::_Log_Hr(
                                        retaddr,
                                        (void *)0x11B,
                                        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                        (const char *)(unsigned int)v112,
                                        (int)UserDataCount);
                                    v109 = v275;
                                  }
                                  v113 = v270;
                                  v270 = v109;
                                  v275 = v113;
                                  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v275);
                                  Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(&v307);
                                  goto LABEL_211;
                                }
                                goto LABEL_596;
                              }
LABEL_595:
                              wil::details::in1diag3::Throw_Hr(
                                v105,
                                (void *)0xE2,
                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                (const char *)(unsigned int)MatchingViewEventRegistration,
                                (int)UserDataCount);
LABEL_596:
                              wil::details::in1diag3::Throw_Hr(
                                v107,
                                (void *)0xE5,
                                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                                (const char *)(unsigned int)v106,
                                (int)UserDataCount);
LABEL_597:
                              Microsoft::WRL::Details::RaiseException(
                                (Microsoft::WRL::Details *)(unsigned int)v114,
                                v115,
                                v116);
                              __debugbreak();
                            }
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x2F,
                              (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
                              (const char *)(unsigned int)v98,
                              (int)UserDataCount);
LABEL_176:
                            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v306);
                            v99 = v266;
                            if ( ViewInstanceId < 0 )
                              v99 = 1;
                            v266 = v99;
                            goto LABEL_181;
                          }
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x25,
                            (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
                            (const char *)(unsigned int)v95,
                            (int)UserDataCount);
                        }
                        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v291);
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x1B,
                          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
                          (const char *)(unsigned int)v94,
                          (int)UserDataCount);
                      }
                    }
                    else
                    {
                      ViewInstanceId = -2147467261;
                    }
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v299);
                    if ( ViewInstanceId < 0 )
                      goto LABEL_176;
                    goto LABEL_174;
                  }
LABEL_592:
                  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v80, v81);
                  __debugbreak();
                }
              }
              wil::details::in1diag3::Throw_Hr(
                v84,
                (void *)0xC2,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                (const char *)(unsigned int)v74,
                (int)UserDataCount);
              goto LABEL_592;
            }
LABEL_587:
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v53, v54);
            __debugbreak();
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x25,
            (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
            (const char *)(unsigned int)v46,
            (int)UserDataCount);
        }
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v290);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v45,
          (int)UserDataCount);
      }
    }
    else
    {
      v44 = -2147467261;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v302);
    if ( v44 < 0 )
      goto LABEL_80;
    goto LABEL_78;
  }
  catch ( ... )
  {
    ViewManagerBridge::CloseViewForScenario(*(_QWORD *)(v366 + 512), v272, 0LL, 1LL);
  }
LABEL_609:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v395);
  v395 = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  if ( !v413[0] )
    goto LABEL_568;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v395,
    SRWLock);
  v258 = wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::unique(v413);
  if ( !v258 )
    wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v413);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v258 )
  {
LABEL_568:
    if ( *v400 == 1 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        &v395,
        v259);
    }
  }
  v260 = v413[0];
  if ( v413[0] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v413[0], 0xFFFFFFFF) == 1 )
    {
      v260 = v413[0];
      if ( v413[0] )
        wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v413[0]);
    }
    v413[0] = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v261 = GetProcessHeap();
      HeapFree(v261, 0, lpMem);
    }
    lpMem = 0LL;
    v411 = 0LL;
  }
  if ( v407 )
  {
    v262 = GetProcessHeap();
    HeapFree(v262, 0, v406);
    v407 = 0;
  }
  v406 = 0LL;
  if ( v401 == 1 )
  {
    v401 = 2;
    v263 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             v260,
             lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    _TlgWriteActivityAutoStop<0,5>(*(_QWORD *)(v263 + 8), v403);
  }
  v401 = 3;
  if ( v398 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v396);
}
