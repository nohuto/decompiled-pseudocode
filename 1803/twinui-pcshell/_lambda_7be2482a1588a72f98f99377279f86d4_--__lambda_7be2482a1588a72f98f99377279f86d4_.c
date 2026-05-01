/*
 * XREFs of _lambda_7be2482a1588a72f98f99377279f86d4_::__lambda_7be2482a1588a72f98f99377279f86d4_ @ 0x1801EFBC4
 * Callers:
 *     _WindowEventDispatcher::QueuePendingActivation_::_1_::dtor$7 @ 0x1801D7535 (_WindowEventDispatcher--QueuePendingActivation_--_1_--dtor$7.c)
 *     _WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange_::_1_::dtor$1 @ 0x1801F2944 (_WindowWrapperBase--NotifyGlobalComponentsForWindowStateChange_--_1_--dtor$1.c)
 *     _WindowWrapperBase::NotifyReadyForPresentationChanged_::_1_::dtor$1 @ 0x1801F2A95 (_WindowWrapperBase--NotifyReadyForPresentationChanged_--_1_--dtor$1.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$1 @ 0x1801F3057 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$1.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$3 @ 0x1801F306F (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7be2482a1588a72f98f99377279f86d4_::__lambda_7be2482a1588a72f98f99377279f86d4_(__int64 a1)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
