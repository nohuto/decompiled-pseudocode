/*
 * XREFs of ??1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180107594
 * Callers:
 *     _ViewManagerBridge::OnRequestApplicationViewSwitcherOperation_::_1_::dtor$3 @ 0x18019F029 (_ViewManagerBridge--OnRequestApplicationViewSwitcherOperation_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::~OnRequestApplicationViewSwitcherOperation(
        ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
