/*
 * XREFs of ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C
 * Callers:
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180009BE4 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ??_E?$CTaskWrapper@AEAV_lambda_532f1f640b749836e78f2398ba6696dd_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18000C160 (--_E-$CTaskWrapper@AEAV_lambda_532f1f640b749836e78f2398ba6696dd_@@@ComTaskPool@Internal@Windows@.c)
 *     ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x18000CBD0 (-Release@-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18000CDB4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180071178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180071248 (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180071A50 (-InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@Ap.c)
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x1800879B8 (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z @ 0x18009E890 (--4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x18009E8E0 (--4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??$?0U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAA@PEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@Z @ 0x1800F89F0 (--$-0U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEA.c)
 *     _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_ @ 0x1800FB350 (_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_--__lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_.c)
 *     ??_ECDelayedTaskLifetime@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180105420 (--_ECDelayedTaskLifetime@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x180128074 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x180138478 (_lambda_639d6738ffd80580db82ce4ed229ae7f_--__lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 *     ??_E?$CTaskWrapper@V_lambda_639d6738ffd80580db82ce4ed229ae7f_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801384A0 (--_E-$CTaskWrapper@V_lambda_639d6738ffd80580db82ce4ed229ae7f_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180138C10 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 *     ??_E?$CTaskWrapper@V_lambda_95b1a6b9fe71802b53b78e46f944807e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18014CF90 (--_E-$CTaskWrapper@V_lambda_95b1a6b9fe71802b53b78e46f944807e_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z @ 0x18014DD00 (-PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_90df9b04abdace81241a7a17f06e4af1_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18017AA30 (--_G-$CTaskWrapper@V_lambda_90df9b04abdace81241a7a17f06e4af1_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017C5A0 (-OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ??1?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAA@XZ @ 0x18018DF70 (--1-$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U-$default_delete@UINIT.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x18018F26C (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x1801901D0 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     ??1?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@EEAA@XZ @ 0x1801A2CF4 (--1-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1801C0960 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C4BA0 (-SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802255CC (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802256AC (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180259514 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180267760 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802685F4 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x180284DAC (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18030535C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(
        __int64 *a1)
{
  unsigned int result; // eax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
               v3,
               (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release);
    else
      return v4();
  }
  return result;
}
