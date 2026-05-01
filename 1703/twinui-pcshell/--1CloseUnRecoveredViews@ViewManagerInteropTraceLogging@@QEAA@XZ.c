/*
 * XREFs of ??1CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800EF8A4
 * Callers:
 *     _ViewEventDispatcher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x18019E591 (_ViewEventDispatcher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CloseUnRecoveredViews::~CloseUnRecoveredViews(
        ViewManagerInteropTraceLogging::CloseUnRecoveredViews *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
