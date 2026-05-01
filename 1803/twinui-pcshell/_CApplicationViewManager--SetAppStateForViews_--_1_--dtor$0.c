/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$0 @ 0x18013C875
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 48));
}
