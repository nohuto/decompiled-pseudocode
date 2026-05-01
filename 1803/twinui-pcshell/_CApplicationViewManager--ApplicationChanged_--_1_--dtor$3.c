/*
 * XREFs of _CApplicationViewManager::ApplicationChanged_::_1_::dtor$3 @ 0x1800B2698
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::ApplicationChanged_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 56));
}
