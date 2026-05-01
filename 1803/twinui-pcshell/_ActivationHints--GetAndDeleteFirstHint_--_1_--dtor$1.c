/*
 * XREFs of _ActivationHints::GetAndDeleteFirstHint_::_1_::dtor$1 @ 0x1802B13A5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ActivationHints::GetAndDeleteFirstHint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
