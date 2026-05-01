/*
 * XREFs of ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1800491A4
 * Callers:
 *     _CAppViewManager::_PrepareToSwitchHelper_::_1_::dtor$0 @ 0x1801E857B (_CAppViewManager--_PrepareToSwitchHelper_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppViewManagerTelemetry::PrepareToSwitchHelper::~PrepareToSwitchHelper(
        CAppViewManagerTelemetry::PrepareToSwitchHelper *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
