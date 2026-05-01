/*
 * XREFs of ??1RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18011A814
 * Callers:
 *     _ViewEventDispatcher::PerformDelayedInitialization_::_1_::dtor$2 @ 0x1801EE7BC (_ViewEventDispatcher--PerformDelayedInitialization_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RecoverComponentRelationships::~RecoverComponentRelationships(
        ViewManagerInteropTraceLogging::RecoverComponentRelationships *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
