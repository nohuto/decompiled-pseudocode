/*
 * XREFs of ?SetPeopleBandWindow@PeoplePaneViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1800EBA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBandWindow(PeoplePaneViewManager *this, HWND a2)
{
  *((_QWORD *)this + 26) = a2;
  return 0LL;
}
