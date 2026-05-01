/*
 * XREFs of ??1ViewEventDispatcher@@EEAA@XZ @ 0x1800F110C
 * Callers:
 *     ??_GViewEventDispatcher@@EEAAPEAXI@Z @ 0x1800F10D8 (--_GViewEventDispatcher@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FCBA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceList@UIMessageProxyLis.c)
 *     ??1?$CLinkedList@UPendingActivationData@ViewEventDispatcher@@@@QEAA@XZ @ 0x1800FCD78 (--1-$CLinkedList@UPendingActivationData@ViewEventDispatcher@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 j; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 k; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 m; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx

  *(_QWORD *)this = &ViewEventDispatcher::`vftable';
  *((_QWORD *)this + 1) = &ViewEventDispatcher::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 3) = &ViewEventDispatcher::`vftable'{for `IViewEventDispatcherCrashRecovery'};
  *((_QWORD *)this + 4) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 5) = &ViewEventDispatcher::`vftable'{for `IImmersiveShellHookNotification'};
  *((_QWORD *)this + 6) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 10) = &ViewEventDispatcher::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 11) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 16) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 17) = &ViewEventDispatcher::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 18) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 19) = &ViewEventDispatcher::`vftable'{for `IViewCUIEventStore'};
  *((_QWORD *)this + 20) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 21) = &ViewEventDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v2 = (char *)*((_QWORD *)this + 68);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  if ( *((_QWORD *)this + 64) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 65); ++i )
    {
      v4 = *((_QWORD *)this + 64);
      v5 = *(_QWORD *)(v4 + 8 * i);
      if ( v5 )
      {
        *(_QWORD *)(v4 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 64));
    *((_QWORD *)this + 64) = 0LL;
  }
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  CLinkedList<ViewEventDispatcher::PendingActivationData>::~CLinkedList<ViewEventDispatcher::PendingActivationData>((char *)this + 496);
  CLinkedList<ViewEventDispatcher::PendingActivationData>::~CLinkedList<ViewEventDispatcher::PendingActivationData>((char *)this + 488);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 59);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *((_QWORD *)this + 57);
  if ( v7 )
  {
    *((_QWORD *)this + 57) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 56);
  if ( v8 )
  {
    *((_QWORD *)this + 56) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((_QWORD *)this + 55) )
  {
    *((_QWORD *)this + 55) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
  }
  v9 = *((_QWORD *)this + 54);
  if ( v9 )
  {
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 53);
  if ( v10 )
  {
    *((_QWORD *)this + 53) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 52);
  if ( v11 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 51);
  if ( v12 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 50);
  if ( v13 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 49);
  if ( v14 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( *((_QWORD *)this + 45) )
  {
    v15 = 0LL;
    if ( *((_QWORD *)this + 46) )
    {
      v16 = 0LL;
      do
      {
        v17 = *((_QWORD *)this + 45);
        v18 = *(_QWORD *)(v16 + v17 + 8);
        if ( v18 )
        {
          *(_QWORD *)(v16 + v17 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        ++v15;
        v16 += 24LL;
      }
      while ( v15 < *((_QWORD *)this + 46) );
    }
    CoTaskMemFree(*((LPVOID *)this + 45));
    *((_QWORD *)this + 45) = 0LL;
  }
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  if ( *((_QWORD *)this + 41) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 42); ++j )
    {
      v20 = *((_QWORD *)this + 41);
      v21 = *(_QWORD *)(v20 + 8 * j);
      if ( v21 )
      {
        *(_QWORD *)(v20 + 8 * j) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 41));
    *((_QWORD *)this + 41) = 0LL;
  }
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  if ( *((_QWORD *)this + 37) )
  {
    for ( k = 0LL; k < *((_QWORD *)this + 38); ++k )
    {
      v23 = *((_QWORD *)this + 37);
      v24 = *(_QWORD *)(v23 + 8 * k);
      if ( v24 )
      {
        *(_QWORD *)(v23 + 8 * k) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 37));
    *((_QWORD *)this + 37) = 0LL;
  }
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  if ( *((_QWORD *)this + 33) )
  {
    for ( m = 0LL; m < *((_QWORD *)this + 34); ++m )
    {
      v26 = *((_QWORD *)this + 33);
      v27 = *(_QWORD *)(v26 + 8 * m);
      if ( v27 )
      {
        *(_QWORD *)(v26 + 8 * m) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  v28 = *((_QWORD *)this + 31);
  if ( v28 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *((_QWORD *)this + 25);
  if ( v29 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v29));
  v30 = *((_QWORD *)this + 23);
  if ( v30 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((ViewEventDispatcher *)((char *)this + 48));
}
