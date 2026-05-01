/*
 * XREFs of ??1AddWindowToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB7A8
 * Callers:
 *     ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801DB9C0 (-AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     _ViewManagerBridge::AddWindowToView_::_1_::dtor$1 @ 0x1801DBBB0 (_ViewManagerBridge--AddWindowToView_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddWindowToView::~AddWindowToView(
        ViewManagerInteropTraceLogging::AddWindowToView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
