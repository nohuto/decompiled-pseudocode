/*
 * XREFs of _HolographicPositioner::_TransitionViewToHolographic_::_1_::dtor$1 @ 0x1801B3C27
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::_TransitionViewToHolographic_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 120));
}
