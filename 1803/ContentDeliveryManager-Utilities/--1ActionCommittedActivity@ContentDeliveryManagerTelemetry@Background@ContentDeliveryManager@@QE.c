/*
 * XREFs of ??1ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180052218
 * Callers:
 *     __lambda_ad70acd571a7801377b6a8c4f9458fc2_::operator()_::_1_::dtor$3 @ 0x1800C48A3 (__lambda_ad70acd571a7801377b6a8c4f9458fc2_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180045328 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::~ActionCommittedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionCommittedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
