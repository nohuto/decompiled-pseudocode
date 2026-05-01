/*
 * XREFs of ??1CApplicationManager@@MEAA@XZ @ 0x180007E1C
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180007D40 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCIAMGlobals@@QEAAPEAXI@Z @ 0x1800082F8 (--_GCIAMGlobals@@QEAAPEAXI@Z.c)
 *     ??1?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAA@XZ @ 0x1800175C4 (--1-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VC.c)
 *     ??1?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAA@XZ @ 0x180017EEC (--1-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ??1?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x1800181F4 (--1-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ.c)
 *     ??1?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA@XZ @ 0x1800183F4 (--1-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=25
void __fastcall CApplicationManager::~CApplicationManager(struct _RTL_CRITICAL_SECTION *this, unsigned int a2)
{
  void *v3; // rcx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  __int64 v6; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  ULONG_PTR v8; // rcx
  HANDLE v9; // rcx
  HANDLE v10; // rcx
  HANDLE OwningThread; // rcx
  __int64 v12; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v13; // rcx
  ULONG_PTR v14; // rcx
  HANDLE v15; // rcx
  HANDLE v16; // rcx
  __int64 v17; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v18; // rcx
  ULONG_PTR v19; // rcx
  HANDLE v20; // rcx
  HANDLE v21; // rcx
  __int64 v22; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v23; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>::`vftable'{for `IInspectable'};
  *(_QWORD *)&this->LockCount = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase,IWeakReferenceSource,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>'};
  *(_QWORD *)&this[1].LockCount = &CApplicationManager::`vftable'{for `IWeakReferenceSource'};
  this[1].OwningThread = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>'};
  this[2].OwningThread = &CApplicationManager::`vftable'{for `IImmersiveShellComponent'};
  this[2].LockSemaphore = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  this[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CApplicationManager::`vftable'{for `IImmersiveApplicationManager'};
  *(_QWORD *)&this[4].LockCount = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>'};
  this[4].OwningThread = &CApplicationManager::`vftable'{for `IImmersiveApplicationArrayService'};
  this[4].LockSemaphore = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>'};
  this[4].SpinCount = (ULONG_PTR)&CApplicationManager::`vftable'{for `IIAMServiceProvider'};
  this[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>'};
  *(_QWORD *)&this[5].LockCount = &CApplicationManager::`vftable'{for `IImmersiveMonitorNotification'};
  this[5].OwningThread = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationManagerViewPosition>'};
  this[5].SpinCount = (ULONG_PTR)&CApplicationManager::`vftable'{for `IImmersiveApplicationNotificationService'};
  this[6].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>'};
  *(_QWORD *)&this[6].LockCount = &CApplicationManager::`vftable'{for `IImmersiveApplicationManagerInternal'};
  this[6].OwningThread = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>'};
  this[6].LockSemaphore = &CApplicationManager::`vftable'{for `IApplicationStateChangeHandler'};
  this[6].SpinCount = (ULONG_PTR)&CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>'};
  this[7].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CApplicationManager::`vftable'{for `IRequestTrustedComponentForegroundControlInitialization'};
  *(_QWORD *)&this[7].LockCount = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppSwitchingTestability>'};
  this[7].LockSemaphore = &CApplicationManager::`vftable'{for `IImmersiveApplicationPresentation'};
  this[7].SpinCount = (ULONG_PTR)&CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>'};
  this[8].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CApplicationManager::`vftable'{for `IApplicationViewSerialization'};
  *(_QWORD *)&this[8].LockCount = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>'};
  this[8].OwningThread = &CApplicationManager::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow'};
  this[8].LockSemaphore = &CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>'};
  this[8].SpinCount = (ULONG_PTR)&CApplicationManager::`vftable'{for `IImmersiveApplicationTitleBarManager'};
  this[9].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CApplicationManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IUncloakWindowService>'};
  if ( CApplicationManagerUtility::g_pIAMGlobals )
    CIAMGlobals::`scalar deleting destructor'((CIAMGlobals *)CApplicationManagerUtility::g_pIAMGlobals, a2);
  CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::~CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>(&this[22]);
  v3 = *(void **)&this[21].LockCount;
  if ( v3 )
  {
    CoTaskMemFree(v3);
    *(_QWORD *)&this[21].LockCount = 0LL;
  }
  this[21].OwningThread = 0LL;
  this[21].SpinCount = 0LL;
  SpinCount = this[19].SpinCount;
  if ( SpinCount )
  {
    this[19].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[19].LockSemaphore;
  if ( LockSemaphore )
  {
    this[19].LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
  }
  v6 = *(_QWORD *)&this[19].LockCount;
  if ( v6 )
  {
    *(_QWORD *)&this[19].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  DebugInfo = this[19].DebugInfo;
  if ( DebugInfo )
  {
    this[19].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
  }
  v8 = this[18].SpinCount;
  if ( v8 )
  {
    this[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>(&this[17].SpinCount);
  v9 = this[17].LockSemaphore;
  if ( v9 )
  {
    this[17].LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v9 + 16LL))(v9);
  }
  CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::~CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>(&this[16].SpinCount);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>(&this[15].SpinCount);
  v10 = this[15].LockSemaphore;
  if ( v10 )
  {
    this[15].LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v10 + 16LL))(v10);
  }
  OwningThread = this[15].OwningThread;
  if ( OwningThread )
  {
    this[15].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v12 = *(_QWORD *)&this[15].LockCount;
  if ( v12 )
  {
    *(_QWORD *)&this[15].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = this[15].DebugInfo;
  if ( v13 )
  {
    this[15].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v13->Type + 16LL))(v13);
  }
  v14 = this[14].SpinCount;
  if ( v14 )
  {
    this[14].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = this[14].LockSemaphore;
  if ( v15 )
  {
    this[14].LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = this[14].OwningThread;
  if ( v16 )
  {
    this[14].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *(_QWORD *)&this[14].LockCount;
  if ( v17 )
  {
    *(_QWORD *)&this[14].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = this[14].DebugInfo;
  if ( v18 )
  {
    this[14].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v18->Type + 16LL))(v18);
  }
  v19 = this[13].SpinCount;
  if ( v19 )
  {
    this[13].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = this[13].LockSemaphore;
  if ( v20 )
  {
    this[13].LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = this[13].OwningThread;
  if ( v21 )
  {
    this[13].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *(_QWORD *)&this[13].LockCount;
  if ( v22 )
  {
    *(_QWORD *)&this[13].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = this[13].DebugInfo;
  if ( v23 )
  {
    this[13].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v23->Type + 16LL))(v23);
  }
  std::vector<AgileRegistrationList::Item>::~vector<AgileRegistrationList::Item>((AgileRegistrationList *)&this[11].LockCount);
  DeleteCriticalSection(this + 10);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>(this);
}
