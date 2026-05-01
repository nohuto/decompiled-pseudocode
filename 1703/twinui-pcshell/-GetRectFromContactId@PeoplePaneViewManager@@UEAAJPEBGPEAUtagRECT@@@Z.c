/*
 * XREFs of ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x1800E8920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1800E895C (-GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetRectFromContactId(
        HWND *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  if ( PeoplePaneViewManager::GetRectFromContactIdWorker((PeoplePaneViewManager *)(this - 8), a2, a3) < 0 )
    GetWindowRect(this[27], a3);
  return 0LL;
}
