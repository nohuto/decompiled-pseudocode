/*
 * XREFs of ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18023C024
 * Callers:
 *     ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x18023C5F0 (--_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180093A44 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18013CEE4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18023C624 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18023C680 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802436D4 (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(TouchKeyboardExperienceManager *this)
{
  __int64 *v2; // rbp
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rsi
  std::_Ref_count_base *v17; // rcx
  struct wil::details::wnf_subscription_state_base *v18; // rdx
  wil::details *v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // edx
  __int64 v22; // rsi
  unsigned int v23; // edx
  wil::details::event_watcher_state *v24; // rcx
  void *v25; // rcx
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  PSRWLOCK v27; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &TouchKeyboardExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveLayoutChanges'};
  *((_QWORD *)this + 17) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 18) = &TouchKeyboardExperienceManager::`vftable'{for `ITouchKeyboardExperienceManager'};
  *((_QWORD *)this + 19) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 21) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 22) = &TouchKeyboardExperienceManager::`vftable'{for `Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher'};
  *((_QWORD *)this + 23) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 352);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  TouchKeyboardExperienceManager::UnsubscribeTouchKeyboardWnfNotifications(this);
  v4 = (wil::details *)*((_QWORD *)this + 94);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v3);
  v5 = (wil::details *)*((_QWORD *)this + 93);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v3);
  v6 = (wil::details *)*((_QWORD *)this + 92);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v3);
  v7 = (wil::details *)*((_QWORD *)this + 91);
  if ( v7 )
    wil::details::delete_wnf_subscription_state(v7, v3);
  v8 = (wil::details *)*((_QWORD *)this + 90);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, v3);
  v9 = (wil::details *)*((_QWORD *)this + 89);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v3);
  v10 = (wil::details *)*((_QWORD *)this + 88);
  if ( v10 )
    wil::details::delete_wnf_subscription_state(v10, v3);
  v11 = (wil::details *)*((_QWORD *)this + 87);
  if ( v11 )
    wil::details::delete_wnf_subscription_state(v11, v3);
  v12 = *((_QWORD *)this + 85);
  if ( v12 )
  {
    *((_QWORD *)this + 85) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 83);
  SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 528));
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 528,
    v13);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this + 528,
    v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
  std::wstring::_Tidy_deallocate((__int64)this + 480);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  v15 = *((_QWORD *)this + 53);
  if ( v15 )
  {
    v16 = *((_QWORD *)this + 54);
    if ( v15 != v16 )
    {
      do
      {
        v17 = *(std::_Ref_count_base **)(v15 + 8);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
        v15 += 16LL;
      }
      while ( v15 != v16 );
      v15 = *((_QWORD *)this + 53);
    }
    std::_Deallocate((char *)v15, (*((_QWORD *)this + 55) - v15) >> 4, 0x10uLL);
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
  v19 = (wil::details *)*((_QWORD *)this + 37);
  if ( v19 )
    wil::details::delete_wnf_subscription_state(v19, v18);
  v20 = *((_QWORD *)this + 36);
  if ( v20 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v20 + 144));
    SRWLock = (PSRWLOCK)(v20 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 140), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(
        (wil::details::registry_watcher_state *)v20,
        v21);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  v22 = *((_QWORD *)this + 35);
  if ( v22 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v22 + 144));
    v27 = (PSRWLOCK)(v22 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 140), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &v27,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(
        (wil::details::registry_watcher_state *)v22,
        v23);
    }
    if ( v27 )
      ReleaseSRWLockExclusive(v27);
  }
  v24 = (wil::details::event_watcher_state *)*((_QWORD *)this + 34);
  if ( v24 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v24, (unsigned int)v18);
  v25 = (void *)*((_QWORD *)this + 29);
  if ( v25 )
    CoTaskMemFree(v25);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    (volatile int *)v18);
}
