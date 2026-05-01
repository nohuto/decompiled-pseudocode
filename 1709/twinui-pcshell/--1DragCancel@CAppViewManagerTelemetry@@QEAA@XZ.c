/*
 * XREFs of ??1DragCancel@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18004B874
 * Callers:
 *     _CAppViewManager::DragCancel_::_1_::dtor$0 @ 0x1801E82CF (_CAppViewManager--DragCancel_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppViewManagerTelemetry::DragCancel::~DragCancel(CAppViewManagerTelemetry::DragCancel *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::DragCancel::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
