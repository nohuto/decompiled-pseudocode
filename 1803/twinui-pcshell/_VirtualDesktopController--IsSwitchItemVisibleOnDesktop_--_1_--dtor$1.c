/*
 * XREFs of _VirtualDesktopController::IsSwitchItemVisibleOnDesktop_::_1_::dtor$1 @ 0x180260D6A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 120));
}
