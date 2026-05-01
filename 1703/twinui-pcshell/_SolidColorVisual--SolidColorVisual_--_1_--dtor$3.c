/*
 * XREFs of _SolidColorVisual::SolidColorVisual_::_1_::dtor$3 @ 0x1801A4D8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SolidColorVisual::SolidColorVisual_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>::~com_ptr_t<IDCompositionVisual2,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
