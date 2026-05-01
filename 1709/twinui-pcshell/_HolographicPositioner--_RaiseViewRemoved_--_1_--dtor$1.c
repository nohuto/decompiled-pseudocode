/*
 * XREFs of _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$1 @ 0x1801ED54C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::_RaiseViewRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>((__int64 *)(a2 + 32));
}
