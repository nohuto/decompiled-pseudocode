/*
 * XREFs of ??1RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB910
 * Callers:
 *     ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801DDBE0 (-RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z.c)
 *     _ViewManagerBridge::RemoveWindowFromView_::_1_::dtor$1 @ 0x1801DDD86 (_ViewManagerBridge--RemoveWindowFromView_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveWindowFromView::~RemoveWindowFromView(
        ViewManagerInteropTraceLogging::RemoveWindowFromView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveWindowFromView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
