/*
 * XREFs of ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x1800A9D68
 * Callers:
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x18019C728 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging(
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
