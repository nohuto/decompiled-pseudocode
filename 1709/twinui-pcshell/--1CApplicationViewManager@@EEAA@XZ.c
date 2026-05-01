/*
 * XREFs of ??1CApplicationViewManager@@EEAA@XZ @ 0x180074034
 * Callers:
 *     ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x180073F9C (--_ECApplicationViewManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA@XZ @ 0x1800183F4 (--1-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@Q.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationViewManager::~CApplicationViewManager(CApplicationViewManager *this)
{
  CImmersiveShellComponentWithGITSite *v2; // rsi
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  __int64 v14; // rcx
  unsigned __int64 i; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx

  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>>::`vftable'{for `Microsoft::WRL::FtmBase'};
  v2 = (CApplicationViewManager *)((char *)this + 40);
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>>'};
  *((_QWORD *)this + 10) = &CApplicationViewManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 18) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 19) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>'};
  *((_QWORD *)this + 20) = &CApplicationViewManager::`vftable'{for `IApplicationViewSwitcher'};
  *((_QWORD *)this + 21) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>'};
  *((_QWORD *)this + 22) = &CApplicationViewManager::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 23) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification>'};
  *((_QWORD *)this + 24) = &CApplicationViewManager::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 25) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEnterpriseIdChangeNotification>'};
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 82);
  if ( v3 )
  {
    *((_QWORD *)this + 82) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 72LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = *((_QWORD *)this + 81);
  if ( v4 )
  {
    *((_QWORD *)this + 81) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 80);
  if ( v5 )
  {
    *((_QWORD *)this + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 79);
  if ( v6 )
  {
    *((_QWORD *)this + 79) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 78);
  if ( v7 )
  {
    *((_QWORD *)this + 78) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 77);
  if ( v8 )
  {
    *((_QWORD *)this + 77) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 76);
  if ( v9 )
  {
    *((_QWORD *)this + 76) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 75);
  if ( v10 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 74);
  if ( v11 )
  {
    *((_QWORD *)this + 74) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 73);
  if ( v12 )
  {
    *((_QWORD *)this + 73) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 72);
  if ( v13 )
    (**v13)(v13, 1LL);
  v14 = *((_QWORD *)this + 70);
  if ( v14 )
  {
    *((_QWORD *)this + 70) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( *((_QWORD *)this + 66) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 67); ++i )
    {
      v16 = *((_QWORD *)this + 66);
      v17 = *(_QWORD *)(v16 + 8 * i);
      if ( v17 )
      {
        *(_QWORD *)(v16 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 66));
    *((_QWORD *)this + 66) = 0LL;
  }
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  SmartCookie::~SmartCookie((CApplicationViewManager *)((char *)this + 400));
  SmartCookie::~SmartCookie((CApplicationViewManager *)((char *)this + 280));
  std::vector<AgileRegistrationList::Item>::~vector<AgileRegistrationList::Item>((unsigned __int64 *)this + 29);
  *((_DWORD *)this + 57) = -1073741823;
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(v2);
  v18 = *((_QWORD *)this + 4);
  if ( v18 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
}
