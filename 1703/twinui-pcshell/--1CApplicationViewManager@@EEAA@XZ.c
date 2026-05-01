/*
 * XREFs of ??1CApplicationViewManager@@EEAA@XZ @ 0x1800714CC
 * Callers:
 *     ??_ECApplicationViewManager@@EEAAPEAXI@Z @ 0x180071434 (--_ECApplicationViewManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1AgileRegistrationList@@QEAA@XZ @ 0x180007BCC (--1AgileRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1800173E4 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
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
  char *v18; // rdi
  __int64 v19; // rdx
  char *v20; // rcx
  char *v21; // rcx
  char *v22; // rdi
  __int64 v23; // rdx
  char *v24; // rcx
  char *v25; // rcx
  __int64 v26; // rcx

  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  v2 = (CApplicationViewManager *)((char *)this + 24);
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>'};
  *((_QWORD *)this + 7) = &CApplicationViewManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 8) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 13) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 14) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<IApplicationViewSwitcher,Microsoft::WRL::Details::InterfaceList<IApplicationViewFlashingNotification,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IWindowManagementConstraintsEvents,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 15) = &CApplicationViewManager::`vftable'{for `IApplicationViewSwitcher'};
  *((_QWORD *)this + 16) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewFlashingNotification,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<IWindowManagementConstraintsEvents,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 17) = &CApplicationViewManager::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 18) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IWindowManagementConstraintsEvents,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationNotification,Microsoft::WRL::Details::InterfaceList<IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 19) = &CApplicationViewManager::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 20) = &CApplicationViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,1,0>'};
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 75);
  if ( v3 )
  {
    *((_QWORD *)this + 75) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
  v4 = *((_QWORD *)this + 74);
  if ( v4 )
  {
    *((_QWORD *)this + 74) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 73);
  if ( v5 )
  {
    *((_QWORD *)this + 73) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 72);
  if ( v6 )
  {
    *((_QWORD *)this + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 71);
  if ( v7 )
  {
    *((_QWORD *)this + 71) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 70);
  if ( v8 )
  {
    *((_QWORD *)this + 70) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 69);
  if ( v9 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 68);
  if ( v10 )
  {
    *((_QWORD *)this + 68) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 67);
  if ( v11 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 66);
  if ( v12 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 65);
  if ( v13 )
    (**v13)(v13, 1LL);
  v14 = *((_QWORD *)this + 63);
  if ( v14 )
  {
    *((_QWORD *)this + 63) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( *((_QWORD *)this + 59) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 60); ++i )
    {
      v16 = *((_QWORD *)this + 59);
      v17 = *(_QWORD *)(v16 + 8 * i);
      if ( v17 )
      {
        *(_QWORD *)(v16 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 59));
    *((_QWORD *)this + 59) = 0LL;
  }
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  v18 = (char *)this + 344;
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 344));
  v20 = (char *)*((_QWORD *)this + 56);
  if ( v20 )
  {
    LOBYTE(v19) = v20 != v18;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v20 + 24LL))(v20, v19);
    *((_QWORD *)this + 56) = 0LL;
  }
  v21 = (char *)*((_QWORD *)this + 56);
  if ( v21 )
  {
    LOBYTE(v19) = v21 != v18;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v21 + 24LL))(v21, v19);
    *((_QWORD *)this + 56) = 0LL;
  }
  v22 = (char *)this + 224;
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 224));
  v24 = (char *)*((_QWORD *)this + 41);
  if ( v24 )
  {
    LOBYTE(v23) = v24 != v22;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v24 + 24LL))(v24, v23);
    *((_QWORD *)this + 41) = 0LL;
  }
  v25 = (char *)*((_QWORD *)this + 41);
  if ( v25 )
  {
    LOBYTE(v23) = v25 != v22;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v25 + 24LL))(v25, v23);
    *((_QWORD *)this + 41) = 0LL;
  }
  AgileRegistrationList::~AgileRegistrationList((CApplicationViewManager *)((char *)this + 176));
  *((_DWORD *)this + 43) = -1073741823;
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(v2);
  v26 = *((_QWORD *)this + 2);
  if ( v26 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
}
