/*
 * XREFs of _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$1 @ 0x18013B8B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 144));
}
