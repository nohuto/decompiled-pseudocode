/*
 * XREFs of ??1OnAdded@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18012F7A4
 * Callers:
 *     _ViewManagerBridge::OnAdded_::_1_::dtor$1 @ 0x1801EEFC3 (_ViewManagerBridge--OnAdded_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnAdded::~OnAdded(ViewManagerInteropTraceLogging::OnAdded *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
