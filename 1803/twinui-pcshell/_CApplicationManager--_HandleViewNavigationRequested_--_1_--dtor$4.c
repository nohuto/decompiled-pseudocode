/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$4 @ 0x1800B38C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 200));
}
