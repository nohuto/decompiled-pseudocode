/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180153208
 * Callers:
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180152FE4 (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180156CD8 (--$MakeAndInitialize@VControlCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VCortanaConversationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180159484 (--$MakeAndInitialize@VCortanaConversationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Mi.c)
 *     ??$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015A3D8 (--$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015F924 (--$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@.c)
 *     ??$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180160814 (--$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@W.c)
 *     ??$MakeAndInitialize@VToastCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180161908 (--$MakeAndInitialize@VToastCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016A580 (--$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 *     ??$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016E1D8 (--$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micr.c)
 *     ??$MakeAndInitialize@VPeopleTestExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016FAC4 (--$MakeAndInitialize@VPeopleTestExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801704C4 (--$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180172BB8 (--$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPE.c)
 *     ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18017516C (--$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180179DA8 (--$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801800F4 (--$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::`vftable'{for `IIndividualExperienceManagerFactory'};
  *(_QWORD *)(a1 + 8) = &PeopleTestExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
