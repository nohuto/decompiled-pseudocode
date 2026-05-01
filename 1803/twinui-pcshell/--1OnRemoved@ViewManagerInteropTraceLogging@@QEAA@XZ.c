/*
 * XREFs of ??1OnRemoved@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800F72E8
 * Callers:
 *     _ViewManagerBridge::OnRemoved_::_1_::dtor$1 @ 0x1800B4A07 (_ViewManagerBridge--OnRemoved_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRemoved::~OnRemoved(ViewManagerInteropTraceLogging::OnRemoved *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
