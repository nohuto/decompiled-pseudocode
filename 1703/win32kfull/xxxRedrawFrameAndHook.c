/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0139250
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( (unsigned int)IsTrayWindow((__int64)a1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6, v2, 0LL, 0xAu);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
