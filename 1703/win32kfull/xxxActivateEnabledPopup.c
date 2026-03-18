/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C020DBAC
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00408F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0005220 (DWP_GetEnabledPopup.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxSetActiveWindow @ 0x1C00B2D78 (xxxSetActiveWindow.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  __int64 EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  EnabledPopup = DWP_GetEnabledPopup(a1);
  if ( !EnabledPopup || EnabledPopup == *(_QWORD *)(GetDesktopWindow((__int64)a1) + 112) )
    return 0LL;
  v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v6;
  v6[1] = EnabledPopup;
  ++*(_DWORD *)(EnabledPopup + 8);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v4, v3);
  return 1LL;
}
