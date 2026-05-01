/*
 * XREFs of ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x1800B0DC8
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B25B0 (--$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvide.c)
 * Callees:
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::CPeopleBarJumpViewExperienceManager(
        CPeopleBarJumpViewExperienceManager *this)
{
  CPeopleBarJumpViewExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 6) = &CPeopleBarJumpViewExperienceManager::`vftable';
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 56, (char *)this + 48, 2LL);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 74) = 2050;
  *((_DWORD *)this + 75) = 3;
  *((_QWORD *)this + 38) = 0LL;
  memset((char *)this + 312, 0, 0x28uLL);
  *((_QWORD *)this + 44) = 0LL;
  result = this;
  *((_BYTE *)this + 360) = 0;
  *((_DWORD *)this + 91) = 56;
  *((GUID *)this + 23) = GUID_NULL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  *((_DWORD *)this + 99) = 57;
  *((GUID *)this + 25) = GUID_NULL;
  *((_QWORD *)this + 52) = 0LL;
  return result;
}
