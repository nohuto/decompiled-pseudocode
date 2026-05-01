/*
 * XREFs of _CApplicationViewManager::GetViewForHwnd_::_1_::dtor$1 @ 0x1800B263C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::GetViewForHwnd_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 56));
}
