/*
 * XREFs of _VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops_::_1_::dtor$0 @ 0x180260C42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::IsSwitchItemViewPinnedToAllDesktops_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 32));
}
