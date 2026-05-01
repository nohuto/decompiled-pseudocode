/*
 * XREFs of ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x1800BF738
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CortanaSharedExperienceManager *__fastcall CortanaSharedExperienceManager::CortanaSharedExperienceManager(
        CortanaSharedExperienceManager *this)
{
  CortanaSharedExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CortanaSharedExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  *((_QWORD *)this + 1) = &CortanaSharedExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CortanaSharedExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 3) = &CortanaSharedExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 6) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 7);
  InitializeSRWLock((PSRWLOCK)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 10);
  InitializeSRWLock((PSRWLOCK)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 13);
  InitializeSRWLock((PSRWLOCK)this + 14);
  *((_QWORD *)this + 15) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 16);
  InitializeSRWLock((PSRWLOCK)this + 17);
  *((_QWORD *)this + 18) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 19);
  InitializeSRWLock((PSRWLOCK)this + 20);
  *((_QWORD *)this + 21) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 22);
  InitializeSRWLock((PSRWLOCK)this + 23);
  *((_QWORD *)this + 24) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 25);
  InitializeSRWLock((PSRWLOCK)this + 26);
  *((_QWORD *)this + 27) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 28);
  InitializeSRWLock((PSRWLOCK)this + 29);
  *((_QWORD *)this + 30) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 31);
  InitializeSRWLock((PSRWLOCK)this + 32);
  *((_QWORD *)this + 33) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 34);
  InitializeSRWLock((PSRWLOCK)this + 35);
  *((_QWORD *)this + 36) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 37);
  InitializeSRWLock((PSRWLOCK)this + 38);
  *((_QWORD *)this + 39) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 40);
  InitializeSRWLock((PSRWLOCK)this + 41);
  *((_QWORD *)this + 42) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 43);
  InitializeSRWLock((PSRWLOCK)this + 44);
  *((_QWORD *)this + 45) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 46);
  InitializeSRWLock((PSRWLOCK)this + 47);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  result = this;
  *((_BYTE *)this + 504) = 0;
  *((_DWORD *)this + 127) = 0;
  *((_WORD *)this + 256) = 0;
  return result;
}
