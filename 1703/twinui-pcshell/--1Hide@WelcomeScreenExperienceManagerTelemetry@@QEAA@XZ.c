/*
 * XREFs of ??1Hide@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B1AE8
 * Callers:
 *     _CWelcomeScreenExperienceManager::Hide_::_1_::dtor$0 @ 0x18019C8FF (_CWelcomeScreenExperienceManager--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3C80 (-Destroy@-$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflec.c)
 */

void __fastcall WelcomeScreenExperienceManagerTelemetry::Hide::~Hide(
        WelcomeScreenExperienceManagerTelemetry::Hide *this)
{
  *(_QWORD *)this = &WelcomeScreenExperienceManagerTelemetry::Hide::`vftable';
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
