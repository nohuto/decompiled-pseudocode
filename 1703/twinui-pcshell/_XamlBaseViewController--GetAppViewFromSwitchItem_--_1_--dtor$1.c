/*
 * XREFs of _XamlBaseViewController::GetAppViewFromSwitchItem_::_1_::dtor$1 @ 0x1801A3B5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlBaseViewController::GetAppViewFromSwitchItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>::~com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
