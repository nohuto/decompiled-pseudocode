/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C020F3C8
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetActiveWindow @ 0x1C00C8C60 (xxxSetActiveWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C020F330 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  __int64 EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  EnabledPopup = DWP_GetEnabledPopup(a1);
  if ( !EnabledPopup || EnabledPopup == *(_QWORD *)(GetDesktopWindow((__int64)a1) + 112) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v10;
  v10[1] = EnabledPopup;
  _InterlockedIncrement((volatile signed __int32 *)(EnabledPopup + 8));
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v8, v7);
  return 1LL;
}
