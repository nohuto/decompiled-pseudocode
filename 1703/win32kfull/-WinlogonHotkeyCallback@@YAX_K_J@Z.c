/*
 * XREFs of ?WinlogonHotkeyCallback@@YAX_K_J@Z @ 0x1C019DC90
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C0197E40 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 */

void __fastcall WinlogonHotkeyCallback(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = a1;
  if ( a1 == 10 )
  {
    PostWinlogonMessage(1026LL, 15LL);
  }
  else
  {
    if ( a1 == 7 )
      TraceLoggingWinPHotKeyEvent();
    PostWinlogonMessage(1028LL, v1);
  }
}
