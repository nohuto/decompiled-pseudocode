/*
 * XREFs of _PeoplePaneViewManager::HandleViewReady_::_1_::dtor$3 @ 0x1801C2BB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::HandleViewReady_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 96));
}
