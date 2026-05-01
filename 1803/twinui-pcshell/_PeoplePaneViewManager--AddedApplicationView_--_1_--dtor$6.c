/*
 * XREFs of _PeoplePaneViewManager::AddedApplicationView_::_1_::dtor$6 @ 0x1801C1578
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::AddedApplicationView_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 160));
}
