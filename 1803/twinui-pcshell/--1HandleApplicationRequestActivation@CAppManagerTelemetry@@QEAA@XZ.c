/*
 * XREFs of ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x180104A10
 * Callers:
 *     _CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor$1 @ 0x18010FDAA (_CApplicationManager--_HandleApplicationRequestActivation_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppManagerTelemetry::HandleApplicationRequestActivation::~HandleApplicationRequestActivation(
        CAppManagerTelemetry::HandleApplicationRequestActivation *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
