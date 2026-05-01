/*
 * XREFs of ??1DragComplete@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18004BC64
 * Callers:
 *     _CAppViewManager::DragComplete_::_1_::dtor$0 @ 0x1801E823F (_CAppViewManager--DragComplete_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppViewManagerTelemetry::DragComplete::~DragComplete(CAppViewManagerTelemetry::DragComplete *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::DragComplete::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
