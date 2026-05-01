/*
 * XREFs of _HolographicPositioner::_HandleControlGainedForView_::_1_::dtor$3 @ 0x1801B20BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::_HandleControlGainedForView_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 32));
}
