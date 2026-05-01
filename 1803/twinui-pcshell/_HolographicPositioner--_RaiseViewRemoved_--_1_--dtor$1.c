/*
 * XREFs of _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$1 @ 0x1801B371B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::_RaiseViewRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::~ComPtr<ViewHostItemEventArgs>(a2 + 104);
}
