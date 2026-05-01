/*
 * XREFs of ??0CPeopleTestExperienceManager@@QEAA@XZ @ 0x1800B29A8
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B3038 (--$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Det.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CPeopleTestExperienceManager *__fastcall CPeopleTestExperienceManager::CPeopleTestExperienceManager(
        CPeopleTestExperienceManager *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((CPeopleTestExperienceManager *)((char *)this + 24));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleTestExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IClosable'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPeopleTestExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleTestExperienceManager'};
  *((_QWORD *)this + 1) = &CPeopleTestExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CPeopleTestExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *v1 = &CPeopleTestExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 10) = &CPeopleTestExperienceManager::`vftable';
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 88, (char *)this + 80, 2LL);
  *((_QWORD *)this + 36) = 0LL;
  return this;
}
