/*
 * XREFs of ??1HandleViewCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800F70CC
 * Callers:
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$0 @ 0x1800B2D80 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::HandleViewCreated::~HandleViewCreated(
        ViewManagerInteropTraceLogging::HandleViewCreated *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::HandleViewCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
