/*
 * XREFs of ??1CApplicationManager@@MEAA@XZ @ 0x180007D1C
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180007B50 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1AgileRegistrationList@@QEAA@XZ @ 0x180007BCC (--1AgileRegistrationList@@QEAA@XZ.c)
 *     ??_GCIAMGlobals@@QEAAPEAXI@Z @ 0x180008224 (--_GCIAMGlobals@@QEAAPEAXI@Z.c)
 *     ??1?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x180016700 (--1-$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ.c)
 *     ??1?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAA@XZ @ 0x180016E78 (--1-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ??1?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x180017184 (--1-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1800173E4 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
void __fastcall CApplicationManager::~CApplicationManager(CApplicationManager *this, unsigned int a2)
{
  char *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx

  *(_QWORD *)this = &CApplicationManager::`vftable'{for `IInspectable'};
  v3 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>>>>,1,1>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>>,1,1>'};
  *((_QWORD *)this + 9) = &CApplicationManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 15) = &CApplicationManager::`vftable'{for `IImmersiveApplicationManager'};
  *((_QWORD *)this + 16) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationArrayService,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationVisibilityOverride,Microsoft::WRL::Details::InterfaceList<IIAMServiceProvider,Microsoft::WRL::Details::InterfaceList<ISpecialWindowMessageCallback,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 17) = &CApplicationManager::`vftable'{for `IImmersiveApplicationArrayService'};
  *((_QWORD *)this + 18) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationVisibilityOverride,Microsoft::WRL::Details::InterfaceList<IIAMServiceProvider,Microsoft::WRL::Details::InterfaceList<ISpecialWindowMessageCallback,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 19) = &CApplicationManager::`vftable'{for `IIAMServiceProvider'};
  *((_QWORD *)this + 20) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ISpecialWindowMessageCallback,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 21) = &CApplicationManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 22) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationManagerViewPosition,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 23) = &CApplicationManager::`vftable'{for `IImmersiveApplicationNotificationService'};
  *((_QWORD *)this + 24) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveAppNotificationListeners,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationManagerInternal,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationManagerSafeForSyncCallouts,Microsoft::WRL::Details::InterfaceList<IApplicationStateChangeHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IRequestTrustedComponentForegroundControlInitialization,Microsoft::WRL::Details::InterfaceList<IAppSwitchingTestability,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 25) = &CApplicationManager::`vftable'{for `IImmersiveApplicationManagerInternal'};
  *((_QWORD *)this + 26) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationManagerSafeForSyncCallouts,Microsoft::WRL::Details::InterfaceList<IApplicationStateChangeHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IRequestTrustedComponentForegroundControlInitialization,Microsoft::WRL::Details::InterfaceList<IAppSwitchingTestability,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 27) = &CApplicationManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 28) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IRequestTrustedComponentForegroundControlInitialization,Microsoft::WRL::Details::InterfaceList<IAppSwitchingTestability,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 29) = &CApplicationManager::`vftable'{for `IRequestTrustedComponentForegroundControlInitialization'};
  *((_QWORD *)this + 30) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAppSwitchingTestability,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 31) = &CApplicationManager::`vftable'{for `IImmersiveApplicationPresentation'};
  *((_QWORD *)this + 32) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IApplicationViewReconstitution,Microsoft::WRL::Details::InterfaceList<IApplicationViewSerialization,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTerminator,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTitleBarManager,Microsoft::WRL::Details::InterfaceList<IUncloakWindowService,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 33) = &CApplicationManager::`vftable'{for `IApplicationViewSerialization'};
  *((_QWORD *)this + 34) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTerminator,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTitleBarManager,Microsoft::WRL::Details::InterfaceList<IUncloakWindowService,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 35) = &CApplicationManager::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow'};
  *((_QWORD *)this + 36) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTerminator,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTitleBarManager,Microsoft::WRL::Details::InterfaceList<IUncloakWindowService,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 37) = &CApplicationManager::`vftable'{for `IImmersiveApplicationTitleBarManager'};
  *((_QWORD *)this + 38) = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IUncloakWindowService,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( CApplicationManagerUtility::g_pIAMGlobals )
    CIAMGlobals::`scalar deleting destructor'((CIAMGlobals *)CApplicationManagerUtility::g_pIAMGlobals, a2);
  CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::~CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>((char *)this + 800);
  v4 = (void *)*((_QWORD *)this + 96);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 96) = 0LL;
  }
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  v5 = *((_QWORD *)this + 89);
  if ( v5 )
  {
    *((_QWORD *)this + 89) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 87);
  if ( v6 )
  {
    *((_QWORD *)this + 87) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 86);
  if ( v7 )
  {
    *((_QWORD *)this + 86) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 85);
  if ( v8 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>((char *)this + 640);
  v9 = *((_QWORD *)this + 79);
  if ( v9 )
  {
    *((_QWORD *)this + 79) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::~CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>((char *)this + 600);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>((char *)this + 560);
  v10 = *((_QWORD *)this + 69);
  if ( v10 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 68);
  if ( v11 )
  {
    *((_QWORD *)this + 68) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 67);
  if ( v12 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 66);
  if ( v13 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 65);
  if ( v14 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 64);
  if ( v15 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 63);
  if ( v16 )
  {
    *((_QWORD *)this + 63) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 62);
  if ( v17 )
  {
    *((_QWORD *)this + 62) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 61);
  if ( v18 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = *((_QWORD *)this + 60);
  if ( v19 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *((_QWORD *)this + 59);
  if ( v20 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *((_QWORD *)this + 58);
  if ( v21 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *((_QWORD *)this + 57);
  if ( v22 )
  {
    *((_QWORD *)this + 57) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *((_QWORD *)this + 56);
  if ( v23 )
  {
    *((_QWORD *)this + 56) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  AgileRegistrationList::~AgileRegistrationList((CApplicationManager *)((char *)this + 376));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  v24 = *((_QWORD *)this + 40);
  if ( v24 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v24);
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(v3 + 32));
  v25 = *((_QWORD *)v3 + 2);
  if ( v25 )
  {
    *((_QWORD *)v3 + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
}
