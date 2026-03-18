/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78
 * Callers:
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CF1B4 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  struct tagSwitchWndInfo *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagSwitchWndInfo *v7; // rdi
  struct tagSwitchWndInfo *v9; // rax
  struct tagSwitchWndInfo *v10; // rax
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v1 = gspwndAltTab;
  v2 = *(_QWORD *)(GetDispInfo(a1) + 88);
  v3 = Getpswi((struct tagWND *)v1);
  v7 = v3;
  if ( !v3
    || *((_DWORD *)v3 + 27) && (GetKeyState(0x12u, v4, v5, v6) & 0x8000u) == 0LL
    || !*((_DWORD *)v7 + 27) && (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v11 = *GetMonitorWorkRect(&v11, v2);
  xxxSetWindowPos((struct tagWND *)v1, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(v1 + 71) & 0x10) == 0 )
  {
    v9 = Getpswi((struct tagWND *)v1);
    if ( !v9 )
      return 0LL;
    xxxSetWindowPos(
      (struct tagWND *)v1,
      -1LL,
      (unsigned int)(((int)v11 + DWORD2(v11) - *((_DWORD *)v9 + 19)) / 2),
      (unsigned int)((DWORD1(v11) + HIDWORD(v11) - *((_DWORD *)v9 + 20)) / 2),
      *((_DWORD *)v9 + 19),
      *((_DWORD *)v9 + 20),
      80);
  }
  xxxInternalUpdateWindow((struct tagWND *)v1, 1u);
  xxxWindowEvent(0x14u, (volatile signed __int32 *)v1, 4294967292LL, 0LL, 1);
  v10 = Getpswi((struct tagWND *)v1);
  if ( !v10 )
    return 0LL;
  xxxWindowEvent(
    0x8005u,
    (volatile signed __int32 *)v1,
    4294967292LL,
    (unsigned int)(*((_DWORD *)v10 + 17) + 1 + *((_DWORD *)v10 + 14) * *((_DWORD *)v10 + 18)),
    1);
  return 1LL;
}
