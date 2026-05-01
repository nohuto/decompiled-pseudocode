/*
 * XREFs of ??1OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801322A4
 * Callers:
 *     _ViewManagerBridge::OnRequestConsolidateView_::_1_::dtor$0 @ 0x1801EF0D7 (_ViewManagerBridge--OnRequestConsolidateView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestConsolidateView::~OnRequestConsolidateView(
        ViewManagerInteropTraceLogging::OnRequestConsolidateView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
