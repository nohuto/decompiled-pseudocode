/*
 * XREFs of _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$21 @ 0x1800B2728
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 568));
}
