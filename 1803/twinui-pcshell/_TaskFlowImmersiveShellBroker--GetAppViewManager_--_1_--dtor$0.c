/*
 * XREFs of _TaskFlowImmersiveShellBroker::GetAppViewManager_::_1_::dtor$0 @ 0x1801A4A69
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetAppViewManager_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
