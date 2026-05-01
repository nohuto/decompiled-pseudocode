/*
 * XREFs of ??1RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801327F4
 * Callers:
 *     _ViewManagerBridge::RaiseViewPropertyChanged_::_1_::dtor$0 @ 0x1801EF230 (_ViewManagerBridge--RaiseViewPropertyChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::~RaiseViewPropertyChanged(
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
