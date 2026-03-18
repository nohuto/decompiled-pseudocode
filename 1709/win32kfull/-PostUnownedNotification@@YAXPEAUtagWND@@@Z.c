/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0124C98
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  unsigned int v1; // edx

  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    if ( !gpqForeground || (v1 = 26, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
      v1 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), v1, *(_QWORD *)a1);
  }
}
