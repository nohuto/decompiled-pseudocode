/*
 * XREFs of ??0CCortanaConversationExperienceManager@@QEAA@XZ @ 0x180159570
 * Callers:
 *     ??$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180159364 (--$MakeAndInitialize@VCCortanaConversationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvi.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180306BF8 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CCortanaConversationExperienceManager *__fastcall CCortanaConversationExperienceManager::CCortanaConversationExperienceManager(
        CCortanaConversationExperienceManager *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((CCortanaConversationExperienceManager *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CCortanaConversationExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 1) = &CCortanaConversationExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *v1 = &CCortanaConversationExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &CCortanaConversationExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 72, (char *)this + 64, 1LL);
  return this;
}
