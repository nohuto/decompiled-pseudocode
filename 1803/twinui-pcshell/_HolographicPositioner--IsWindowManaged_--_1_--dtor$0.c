/*
 * XREFs of _HolographicPositioner::IsWindowManaged_::_1_::dtor$0 @ 0x1800B11D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::IsWindowManaged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 64));
}
