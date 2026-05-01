/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$1 @ 0x18013C881
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 72));
}
