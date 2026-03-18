/*
 * XREFs of ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00170BC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldComposeWindow(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // rax
  unsigned int v3; // r10d
  __int64 v5; // rcx
  __int64 v6; // r11

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  v3 = 0;
  if ( v2
    && v2 == a2
    && !(unsigned int)IsWindowBeingDestroyed(a1)
    && (*(_BYTE *)(v5 + 71) & 0x10) != 0
    && ((unsigned int)IsTopLevelWindow(v5) || (unsigned int)IsDesktopWindow(v6)) )
  {
    return 1;
  }
  return v3;
}
