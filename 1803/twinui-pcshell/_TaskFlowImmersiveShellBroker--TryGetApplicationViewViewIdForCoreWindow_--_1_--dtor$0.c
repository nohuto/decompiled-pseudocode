/*
 * XREFs of _TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow_::_1_::dtor$0 @ 0x1800B4D38
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(a2 + 64);
}
