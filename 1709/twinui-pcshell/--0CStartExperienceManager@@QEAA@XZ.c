/*
 * XREFs of ??0CStartExperienceManager@@QEAA@XZ @ 0x1800B5AF4
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B92B0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x1801DAE0C (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CStartExperienceManager *__fastcall CStartExperienceManager::CStartExperienceManager(CStartExperienceManager *this)
{
  struct IDWMStoryboardListener *v1; // rsi
  volatile signed __int32 *v3; // rcx
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)this + 3) = 0LL;
  v1 = (CStartExperienceManager *)((char *)this + 72);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,CWRLObjectWithSite,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>'};
  *((_QWORD *)this + 11) = 1LL;
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `IStartSizingFrameCallback'};
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDWMStoryboardListener>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CStartExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CStartExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,CWRLObjectWithSite,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>'};
  *((_QWORD *)this + 4) = &CStartExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &CStartExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>'};
  *((_QWORD *)this + 6) = &CStartExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 7) = &CStartExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>'};
  *((_QWORD *)this + 8) = &CStartExperienceManager::`vftable'{for `IStartSizingFrameCallback'};
  *(_QWORD *)v1 = &CStartExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDWMStoryboardListener>'};
  *((_QWORD *)this + 12) = &CStartExperienceManager::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 14);
  InitializeSRWLock((PSRWLOCK)this + 15);
  *((_QWORD *)this + 16) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 17);
  InitializeSRWLock((PSRWLOCK)this + 18);
  *((_QWORD *)this + 19) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 20);
  InitializeSRWLock((PSRWLOCK)this + 21);
  *((_QWORD *)this + 22) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 23);
  InitializeSRWLock((PSRWLOCK)this + 24);
  *((_QWORD *)this + 25) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 26);
  InitializeSRWLock((PSRWLOCK)this + 27);
  *((_QWORD *)this + 28) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 29);
  InitializeSRWLock((PSRWLOCK)this + 30);
  *((_QWORD *)this + 31) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 32);
  InitializeSRWLock((PSRWLOCK)this + 33);
  *((_QWORD *)this + 34) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 35);
  InitializeSRWLock((PSRWLOCK)this + 36);
  *((_QWORD *)this + 37) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 304, (char *)this + 96, 1LL);
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  *((_DWORD *)this + 137) = 56;
  *(_OWORD *)((char *)this + 552) = xmmword_180226A48;
  *((_QWORD *)this + 71) = 0LL;
  *((_BYTE *)this + 576) = 0;
  *((_DWORD *)this + 145) = 57;
  *(_OWORD *)((char *)this + 584) = xmmword_180226A38;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  *((_QWORD *)this + 77) = 0LL;
  *((_WORD *)this + 320) = 0;
  *((_DWORD *)this + 161) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 82) = &CStartSizingFrame::`vftable';
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = -1;
  *((_DWORD *)this + 175) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 178) = 96;
  memset((char *)this + 720, 0, 0x28uLL);
  *((_DWORD *)this + 190) = 0;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 816), 0, 0);
  *((_DWORD *)this + 214) = 0;
  *((_WORD *)this + 430) = 0;
  *((_BYTE *)this + 862) = 0;
  if ( !*((_QWORD *)this + 75) )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 75);
    if ( v3 )
    {
      *((_QWORD *)this + 75) = 0LL;
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 40LL))(v3, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    *((_QWORD *)this + 75) = 0LL;
    v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( !v4 )
    {
      v6 = -2147024882;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xAA,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
        (const char *)(unsigned int)v6);
      return this;
    }
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IOleWindow>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = &CExperienceManagerAnimationHelper::DummyWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IOleWindow>'};
    *((_QWORD *)v5 + 2) = &CExperienceManagerAnimationHelper::DummyWindow::`vftable'{for `CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>'};
    *((_QWORD *)v5 + 4) = 0LL;
    v6 = CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
           (CExperienceManagerAnimationHelper::DummyWindow *)v5,
           v1);
    if ( v6 >= 0 )
    {
      _InterlockedAdd(v5 + 3, 1u);
      *((_QWORD *)this + 75) = v5;
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 40LL))(v5, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v6 = 0;
    }
    else if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 40LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( v6 < 0 )
      goto LABEL_21;
  }
  return this;
}
