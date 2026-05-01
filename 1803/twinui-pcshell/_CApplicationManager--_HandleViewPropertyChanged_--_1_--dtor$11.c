/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$11 @ 0x1800B368C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 80));
}
