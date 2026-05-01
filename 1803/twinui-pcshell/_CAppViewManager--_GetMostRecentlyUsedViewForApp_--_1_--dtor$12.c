/*
 * XREFs of _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$12 @ 0x18012666C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 64));
}
