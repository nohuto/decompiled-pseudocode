/*
 * XREFs of ??1OnConnected@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18012D244
 * Callers:
 *     _ViewManagerBridge::OnConnected_::_1_::dtor$0 @ 0x1801EEF36 (_ViewManagerBridge--OnConnected_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnConnected::~OnConnected(
        ViewManagerInteropTraceLogging::OnConnected *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
