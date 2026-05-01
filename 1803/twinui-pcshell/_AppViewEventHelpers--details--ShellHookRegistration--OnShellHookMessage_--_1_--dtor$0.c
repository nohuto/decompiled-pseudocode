/*
 * XREFs of _AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::dtor$0 @ 0x180236F81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
