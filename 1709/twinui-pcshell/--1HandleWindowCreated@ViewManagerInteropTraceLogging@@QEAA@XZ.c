/*
 * XREFs of ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180119D74
 * Callers:
 *     _ViewEventDispatcher::_HandleWindowCreated_::_1_::dtor$0 @ 0x1801EEA09 (_ViewEventDispatcher--_HandleWindowCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated(
        ViewManagerInteropTraceLogging::HandleWindowCreated *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
