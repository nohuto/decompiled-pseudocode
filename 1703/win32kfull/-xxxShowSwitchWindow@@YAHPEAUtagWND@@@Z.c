/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4
 * Callers:
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  struct tagSwitchWndInfo *v2; // rax
  struct tagSwitchWndInfo *v3; // rdi
  struct tagSwitchWndInfo *v5; // rax
  _DWORD *v6; // r11
  struct tagSwitchWndInfo *v7; // rax

  v1 = gspwndAltTab;
  GetDispInfo(a1);
  v2 = Getpswi(v1);
  v3 = v2;
  if ( !v2
    || *((_DWORD *)v2 + 27) && (GetKeyState(0x12u) & 0x8000u) == 0LL
    || !*((_DWORD *)v3 + 27) && (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  xxxSetWindowPos(v1, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( ((W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
     || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                   + 52LL) & 1) == 0)
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  }
  if ( (*((_BYTE *)v1 + 71) & 0x10) == 0 )
  {
    v5 = Getpswi(v1);
    if ( !v5 )
      return 0LL;
    xxxSetWindowPos(
      v1,
      -1LL,
      (unsigned int)((*v6 + v6[2] - *((_DWORD *)v5 + 19)) / 2),
      (unsigned int)((v6[1] + v6[3] - *((_DWORD *)v5 + 20)) / 2),
      *((_DWORD *)v5 + 19),
      *((_DWORD *)v5 + 20),
      80);
  }
  xxxInternalUpdateWindow(v1, 1u);
  xxxWindowEvent(0x14u, (__int64 *)v1, -4, 0, 1);
  v7 = Getpswi(v1);
  if ( !v7 )
    return 0LL;
  xxxWindowEvent(0x8005u, (__int64 *)v1, -4, *((_DWORD *)v7 + 17) + 1 + *((_DWORD *)v7 + 14) * *((_DWORD *)v7 + 18), 1);
  return 1LL;
}
