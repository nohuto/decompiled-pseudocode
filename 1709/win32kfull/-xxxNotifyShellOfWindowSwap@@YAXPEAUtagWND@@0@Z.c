/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0135050
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005410C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a2;
  _PostShellHookMsgWorker(*(unsigned __int16 *)(gpsi + 1362LL), *(_QWORD *)a1, *(_QWORD *)a2, 0LL);
  PostShellHookMessagesEx(0xEu, v3, 0LL);
  PostShellHookMessagesEx(0xDu, v2, 0LL);
  xxxCallHook(13, v2, v3, 0xAu);
}
