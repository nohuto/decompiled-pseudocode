/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$5 @ 0x1801D3992
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
