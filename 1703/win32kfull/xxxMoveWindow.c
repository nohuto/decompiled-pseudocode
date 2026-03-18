/*
 * XREFs of xxxMoveWindow @ 0x1C00F4050
 * Callers:
 *     NtUserMoveWindow @ 0x1C00F3ED0 (NtUserMoveWindow.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxValidateRect @ 0x1C01086F8 (xxxValidateRect.c)
 */

__int64 __fastcall xxxMoveWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 DesktopWindow; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  int v11; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi

  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v9 == DesktopWindow )
    return xxxSetWindowPos(a1, 0LL, v8, v10, v11, a5, a6 != 0 ? 20 : 28);
  if ( (*(_BYTE *)(v9 + 61) & 1) != 0 )
    return xxxSetWindowPos(a1, 0LL, v8, v10, v11, a5, a6 != 0 ? 20 : 28);
  v13 = GetDesktopWindow(v9);
  if ( *(_QWORD *)(v14 + 104) != v13 )
    return xxxSetWindowPos(a1, 0LL, v8, v10, v11, a5, a6 != 0 ? 20 : 28);
  v15 = xxxSetWindowPos((struct tagWND *)v14, 0LL, v8, v10, v11, a5, 20);
  if ( !a6 )
    xxxValidateRect(a1, 0LL);
  return v15;
}
