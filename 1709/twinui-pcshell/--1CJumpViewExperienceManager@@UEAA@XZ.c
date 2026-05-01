/*
 * XREFs of ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1800BCC84
 * Callers:
 *     ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1800BCC50 (--_ECJumpViewExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x1800BC31C (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1801DB104 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CJumpViewExperienceManager::~CJumpViewExperienceManager(CJumpViewExperienceManager *this)
{
  struct _TP_TIMER **v2; // rdi
  struct _TP_TIMER *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rcx

  *(_QWORD *)this = &CJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 2) = &CJumpViewExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 4) = &CJumpViewExperienceManager::`vftable'{for `IActiveZBandNotificationForMonitor'};
  *((_QWORD *)this + 5) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 8) = &CJumpViewExperienceManager::`vftable';
  v2 = (struct _TP_TIMER **)((char *)this + 808);
  if ( *((_QWORD *)this + 101) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 101,
      0LL);
  v3 = *v2;
  if ( v3 )
  {
    SetThreadpoolTimer(v3, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v3, 1);
    CloseThreadpoolTimer(v3);
  }
  JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((CJumpViewExperienceManager *)((char *)this + 496));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CJumpViewExperienceManager *)((char *)this + 432));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CJumpViewExperienceManager *)((char *)this + 400));
  WindowsDeleteString(*((HSTRING *)this + 49));
  *((_QWORD *)this + 49) = 0LL;
  v4 = *((_QWORD *)this + 46);
  if ( v4 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 45);
  if ( v5 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 43);
  if ( v7 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 42);
  if ( v8 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  WindowsDeleteString(*((HSTRING *)this + 41));
  *((_QWORD *)this + 41) = 0LL;
  CSingleViewShellExperience::~CSingleViewShellExperience((CJumpViewExperienceManager *)((char *)this + 128));
  v9 = *((_QWORD *)this + 15);
  if ( v9 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v10 )
  {
    *((_QWORD *)this + 12) = 0LL;
    if ( !_InterlockedDecrement(v10 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v11 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( !_InterlockedDecrement(v11 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v12 = *((_QWORD *)this + 7);
  if ( v12 < 0 )
  {
    v13 = (volatile signed __int32 *)(2 * v12);
    if ( !_InterlockedDecrement(v13 + 3) )
    {
      if ( v13 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 32LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
