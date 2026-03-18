/*
 * XREFs of xxxEnableNonClientDpiScaling @ 0x1C01C0DA0
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1C01D7E10 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( (*((_DWORD *)a1 + 92) & 0xF) != 2 || !(unsigned int)IsTopLevelWindow((__int64)a1) || *((int *)a1 + 15) < 0 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 76);
  if ( (v2 & 0x20000000) == 0 )
  {
    v3 = *((_QWORD *)a1 + 45);
    *((_DWORD *)a1 + 76) = v2 | 0x30000000;
    v4 = ValidateHmonitorNoRip(v3);
    UpdateWindowSpriteDPI((__int64)a1, v4);
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  }
  return 1LL;
}
