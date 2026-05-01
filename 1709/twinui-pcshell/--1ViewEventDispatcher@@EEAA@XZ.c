/*
 * XREFs of ??1ViewEventDispatcher@@EEAA@XZ @ 0x18011BB78
 * Callers:
 *     ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x18011BB44 (--_GViewEventDispatcher@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CLinkedList@UPendingActivationData@ViewEventDispatcher@@@@QEAA@XZ @ 0x180127E70 (--1-$CLinkedList@UPendingActivationData@ViewEventDispatcher@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::~ViewEventDispatcher(ViewEventDispatcher *this)
{
  char *v2; // rcx
  unsigned __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 j; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 k; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 m; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx

  *(_QWORD *)this = &ViewEventDispatcher::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &ViewEventDispatcher::`vftable'{for `IViewEventDispatcherCrashRecovery'};
  *((_QWORD *)this + 4) = &ViewEventDispatcher::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IForegroundManager'};
  *((_QWORD *)this + 5) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>'};
  *((_QWORD *)this + 7) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 8) = &ViewEventDispatcher::`vftable'{for `IImmersiveShellHookNotification'};
  *((_QWORD *)this + 9) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 14) = &ViewEventDispatcher::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 15) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 22) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>'};
  *((_QWORD *)this + 23) = &ViewEventDispatcher::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 24) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>'};
  *((_QWORD *)this + 25) = &ViewEventDispatcher::`vftable'{for `IViewCUIEventStore'};
  *((_QWORD *)this + 26) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Popups::IPopupClientBroker>'};
  *((_QWORD *)this + 28) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  v2 = (char *)*((_QWORD *)this + 77);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  if ( *((_QWORD *)this + 73) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 74); ++i )
    {
      v4 = *((_QWORD *)this + 73);
      v5 = *(_QWORD *)(v4 + 8 * i);
      if ( v5 )
      {
        *(_QWORD *)(v4 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 73));
    *((_QWORD *)this + 73) = 0LL;
  }
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  CLinkedList<ViewEventDispatcher::PendingActivationData>::~CLinkedList<ViewEventDispatcher::PendingActivationData>((char *)this + 568);
  CLinkedList<ViewEventDispatcher::PendingActivationData>::~CLinkedList<ViewEventDispatcher::PendingActivationData>((char *)this + 560);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 68);
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *((_QWORD *)this + 66);
  if ( v7 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 65);
  if ( v8 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 64);
  if ( v9 )
  {
    *((_QWORD *)this + 64) = 0LL;
    if ( !_InterlockedDecrement(v9 + 21) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 280LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v10 = *((_QWORD *)this + 63);
  if ( v10 )
  {
    *((_QWORD *)this + 63) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 62);
  if ( v11 )
  {
    *((_QWORD *)this + 62) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 61);
  if ( v12 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 60);
  if ( v13 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 59);
  if ( v14 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 58);
  if ( v15 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( *((_QWORD *)this + 54) )
  {
    v16 = 0LL;
    if ( *((_QWORD *)this + 55) )
    {
      v17 = 0LL;
      do
      {
        v18 = *((_QWORD *)this + 54);
        v19 = *(_QWORD *)(v17 + v18 + 8);
        if ( v19 )
        {
          *(_QWORD *)(v17 + v18 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        ++v16;
        v17 += 24LL;
      }
      while ( v16 < *((_QWORD *)this + 55) );
    }
    CoTaskMemFree(*((LPVOID *)this + 54));
    *((_QWORD *)this + 54) = 0LL;
  }
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  if ( *((_QWORD *)this + 50) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 51); ++j )
    {
      v21 = *((_QWORD *)this + 50);
      v22 = *(_QWORD *)(v21 + 8 * j);
      if ( v22 )
      {
        *(_QWORD *)(v21 + 8 * j) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 50));
    *((_QWORD *)this + 50) = 0LL;
  }
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  if ( *((_QWORD *)this + 46) )
  {
    for ( k = 0LL; k < *((_QWORD *)this + 47); ++k )
    {
      v24 = *((_QWORD *)this + 46);
      v25 = *(_QWORD *)(v24 + 8 * k);
      if ( v25 )
      {
        *(_QWORD *)(v24 + 8 * k) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 46));
    *((_QWORD *)this + 46) = 0LL;
  }
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  if ( *((_QWORD *)this + 42) )
  {
    for ( m = 0LL; m < *((_QWORD *)this + 43); ++m )
    {
      v27 = *((_QWORD *)this + 42);
      v28 = *(_QWORD *)(v27 + 8 * m);
      if ( v28 )
      {
        *(_QWORD *)(v27 + 8 * m) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 42));
    *((_QWORD *)this + 42) = 0LL;
  }
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  v29 = *((_QWORD *)this + 40);
  if ( v29 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>(this);
}
