/*
 * XREFs of ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A50C
 * Callers:
 *     _lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_ @ 0x18017A340 (_lambda_417362b0a1391b76000680eec230619f_--__lambda_417362b0a1391b76000680eec230619f_.c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_ @ 0x18017A368 (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18017AB4C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$0 @ 0x18017AEEF (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$0.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$4 @ 0x18017AF1F (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$4.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$8 @ 0x18017AF5B (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$8.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017B3CC (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact(
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
