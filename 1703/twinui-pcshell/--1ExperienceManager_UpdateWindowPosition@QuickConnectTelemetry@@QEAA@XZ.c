/*
 * XREFs of ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x1800AA3E8
 * Callers:
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$0 @ 0x18019C7B8 (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::~ExperienceManager_UpdateWindowPosition(
        QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
