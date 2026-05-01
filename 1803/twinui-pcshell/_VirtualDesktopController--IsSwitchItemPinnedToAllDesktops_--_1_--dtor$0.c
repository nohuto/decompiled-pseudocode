/*
 * XREFs of _VirtualDesktopController::IsSwitchItemPinnedToAllDesktops_::_1_::dtor$0 @ 0x180260B6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::IsSwitchItemPinnedToAllDesktops_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 32));
}
