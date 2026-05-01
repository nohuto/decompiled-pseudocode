/*
 * XREFs of _AppViewDataSourceAdapter::AddItemForView_::_1_::dtor$5 @ 0x1801F5CD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::AddItemForView_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
