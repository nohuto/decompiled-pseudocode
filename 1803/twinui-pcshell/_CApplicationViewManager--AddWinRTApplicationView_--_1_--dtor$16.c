/*
 * XREFs of _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$16 @ 0x1800B277C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 32));
}
