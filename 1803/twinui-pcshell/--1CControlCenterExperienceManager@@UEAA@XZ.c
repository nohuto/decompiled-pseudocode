/*
 * XREFs of ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180157068
 * Callers:
 *     ??_GCControlCenterExperienceManager@@UEAAPEAXI@Z @ 0x1801572A0 (--_GCControlCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800FCB28 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180308F1C (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::~CControlCenterExperienceManager(
        CControlCenterExperienceManager *this,
        volatile int *a2)
{
  __int64 v3; // r10
  Microsoft::WRL::Details::EventTargetArray *v4; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v5)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v6)(); // rax
  struct _TP_TIMER *v7; // rcx
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  wil::details *v9; // rcx
  __int64 v10; // rcx
  volatile int *v11; // rdx

  *(_QWORD *)this = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 1) = &CControlCenterExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 2) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &CControlCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IBaseExperienceManager'};
  *((_QWORD *)this + 4) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 5) = &CControlCenterExperienceManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 6) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 7) = &CControlCenterExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 8) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 11) = &CControlCenterExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    *((_QWORD *)this + 60) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v3 + 12), a2) )
    {
      v5 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v4 + 24LL);
      if ( v5 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v4, (const struct std::nothrow_t *)1);
      else
        v5(v4, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v6 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v6 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v6)(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 58);
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  WindowsDeleteString(*((HSTRING *)this + 49));
  *((_QWORD *)this + 49) = 0LL;
  v9 = (wil::details *)*((_QWORD *)this + 48);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v8);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CControlCenterExperienceManager *)((char *)this + 352));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CControlCenterExperienceManager *)((char *)this + 320));
  v10 = *((_QWORD *)this + 38);
  if ( v10 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CControlCenterExperienceManager *)((char *)this + 104));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>(
    (__int64)this,
    v11);
}
