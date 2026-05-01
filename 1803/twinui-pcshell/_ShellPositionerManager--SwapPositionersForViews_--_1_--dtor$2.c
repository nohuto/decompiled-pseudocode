/*
 * XREFs of _ShellPositionerManager::SwapPositionersForViews_::_1_::dtor$2 @ 0x1802BA735
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellPositionerManager::SwapPositionersForViews_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 48));
}
