/*
 * XREFs of _GetLocalizedDisplayNameForApp_::_1_::dtor$1 @ 0x1800B5FB2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocalizedDisplayNameForApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(a2 + 72);
}
