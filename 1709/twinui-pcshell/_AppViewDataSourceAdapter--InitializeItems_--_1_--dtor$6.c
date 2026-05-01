/*
 * XREFs of _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$6 @ 0x1801F5C8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::InitializeItems_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 144));
}
