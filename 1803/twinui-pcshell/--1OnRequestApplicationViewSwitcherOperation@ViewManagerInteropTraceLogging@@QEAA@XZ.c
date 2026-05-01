/*
 * XREFs of ??1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180091E50
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     _ViewManagerBridge::OnRequestApplicationViewSwitcherOperation_::_1_::dtor$3 @ 0x1800B485C (_ViewManagerBridge--OnRequestApplicationViewSwitcherOperation_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::~OnRequestApplicationViewSwitcherOperation(
        ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
