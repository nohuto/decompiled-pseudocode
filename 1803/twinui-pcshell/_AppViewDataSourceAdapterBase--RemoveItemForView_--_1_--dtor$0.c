/*
 * XREFs of _AppViewDataSourceAdapterBase::RemoveItemForView_::_1_::dtor$0 @ 0x180237846
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapterBase::RemoveItemForView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
