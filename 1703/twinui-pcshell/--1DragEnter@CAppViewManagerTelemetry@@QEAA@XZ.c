/*
 * XREFs of ??1DragEnter@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18004A0B4
 * Callers:
 *     _CAppViewManager::DragEnter_::_1_::dtor$0 @ 0x18019983F (_CAppViewManager--DragEnter_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppViewManagerTelemetry::DragEnter::~DragEnter(CAppViewManagerTelemetry::DragEnter *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::DragEnter::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
