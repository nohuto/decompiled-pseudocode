/*
 * XREFs of _HolographicPositioner::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1800B2048
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::OnApplicationViewChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 40));
}
