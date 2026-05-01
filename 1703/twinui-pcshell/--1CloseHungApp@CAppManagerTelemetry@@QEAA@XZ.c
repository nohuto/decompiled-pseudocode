/*
 * XREFs of ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x180024404
 * Callers:
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$0 @ 0x1801980BF (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppManagerTelemetry::CloseHungApp::~CloseHungApp(CAppManagerTelemetry::CloseHungApp *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
