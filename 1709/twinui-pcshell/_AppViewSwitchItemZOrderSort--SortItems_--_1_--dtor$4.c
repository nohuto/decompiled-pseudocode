/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$4 @ 0x1801F5FD9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::~com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
