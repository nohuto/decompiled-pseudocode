/*
 * XREFs of ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x18016AD40
 * Callers:
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18016AC54 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016AF04 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z @ 0x18016C420 (-OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnMessage_::_1_::dtor$1 @ 0x18016C562 (_CPeopleBarFlyoutExperienceManager--OnMessage_--_1_--dtor$1.c)
 *     ?OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016C700 (-OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016C830 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnViewShowing_::_1_::dtor$0 @ 0x18016C915 (_CPeopleBarFlyoutExperienceManager--OnViewShowing_--_1_--dtor$0.c)
 *     ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016C930 (-OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x18016CA13 (_CPeopleBarFlyoutExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x18016D060 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 *     _CPeopleBarFlyoutExperienceManager::ShowFlyout_::_1_::dtor$0 @ 0x18016D296 (_CPeopleBarFlyoutExperienceManager--ShowFlyout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18016B5BC (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  *(_QWORD *)this = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
