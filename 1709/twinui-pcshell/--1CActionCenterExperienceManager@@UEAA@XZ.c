/*
 * XREFs of ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1800953C8
 * Callers:
 *     ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x180095340 (--_GCActionCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1801DB104 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CActionCenterExperienceManager::~CActionCenterExperienceManager(CActionCenterExperienceManager *this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _TP_TIMER *v9; // rdi
  struct _TP_TIMER *v10; // rdi
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
  volatile signed __int32 *v21; // rcx

  *(_QWORD *)this = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 1) = &CActionCenterExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 2) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 3) = &CActionCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IActionCenterExperienceManager'};
  *((_QWORD *)this + 4) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 5) = &CActionCenterExperienceManager::`vftable'{for `IEdgeUiTouchInvocation'};
  *((_QWORD *)this + 6) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 7) = &CActionCenterExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 8) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 9) = &CActionCenterExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 10) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 13) = &CActionCenterExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 95);
  if ( v2 )
  {
    *((_QWORD *)this + 95) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 92);
  if ( v3 )
  {
    *((_QWORD *)this + 92) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 89);
  if ( v4 )
  {
    *((_QWORD *)this + 89) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 86);
  if ( v5 )
  {
    *((_QWORD *)this + 86) = 0LL;
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v6 = *((_QWORD *)this + 83);
  if ( v6 )
  {
    *((_QWORD *)this + 83) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 81);
  if ( v7 )
  {
    *((_QWORD *)this + 81) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 79);
  if ( v8 )
  {
    *((_QWORD *)this + 79) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 78);
  if ( v9 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 78), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 77);
  if ( v10 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 77), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v10, 1);
    CloseThreadpoolTimer(v10);
  }
  v11 = *((_QWORD *)this + 76);
  if ( v11 )
  {
    *((_QWORD *)this + 76) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 75);
  if ( v12 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 74);
  if ( v13 )
  {
    *((_QWORD *)this + 74) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 71);
  if ( v14 )
  {
    *((_QWORD *)this + 71) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 70);
  if ( v15 )
  {
    *((_QWORD *)this + 70) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 69);
  if ( v16 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 67);
  if ( v17 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  WindowsDeleteString(*((HSTRING *)this + 64));
  *((_QWORD *)this + 64) = 0LL;
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 448));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 416));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 384));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CActionCenterExperienceManager *)((char *)this + 352));
  v18 = *((_QWORD *)this + 40);
  if ( v18 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CActionCenterExperienceManager *)((char *)this + 120));
  v19 = *((_QWORD *)this + 14);
  if ( v19 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *((_QWORD *)this + 12);
  if ( v20 < 0 )
  {
    v21 = (volatile signed __int32 *)(2 * v20);
    if ( !_InterlockedDecrement(v21 + 3) )
    {
      if ( v21 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 32LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
