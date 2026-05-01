/*
 * XREFs of _FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor$4 @ 0x18014E816
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 128));
}
