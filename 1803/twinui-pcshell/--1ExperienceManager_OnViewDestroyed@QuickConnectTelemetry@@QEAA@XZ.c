/*
 * XREFs of ??1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A5AC
 * Callers:
 *     ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017C870 (-OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CQuickConnectExperienceManager::OnViewDestroyed_::_1_::dtor$0 @ 0x18017CA06 (_CQuickConnectExperienceManager--OnViewDestroyed_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017B3CC (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::~ExperienceManager_OnViewDestroyed(
        QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
