/*
 * XREFs of ??1PositionApplication@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B1FF8
 * Callers:
 *     _CWelcomeScreenExperienceManager::PositionApplication_::_1_::dtor$0 @ 0x18019C917 (_CWelcomeScreenExperienceManager--PositionApplication_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3C80 (-Destroy@-$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflec.c)
 */

void __fastcall WelcomeScreenExperienceManagerTelemetry::PositionApplication::~PositionApplication(
        WelcomeScreenExperienceManagerTelemetry::PositionApplication *this)
{
  *(_QWORD *)this = &WelcomeScreenExperienceManagerTelemetry::PositionApplication::`vftable';
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
