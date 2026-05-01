/*
 * XREFs of _AppViewDataSourceAdapter::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801F5ACB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
