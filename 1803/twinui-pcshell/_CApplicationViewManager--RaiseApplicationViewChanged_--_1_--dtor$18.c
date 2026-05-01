/*
 * XREFs of _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$18 @ 0x1800B2710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 64));
}
