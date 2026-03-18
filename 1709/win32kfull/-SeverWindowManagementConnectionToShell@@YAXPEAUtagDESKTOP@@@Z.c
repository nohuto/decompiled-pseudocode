/*
 * XREFs of ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B8230
 * Callers:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B8260 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     SetShellWndManagementWindow @ 0x1C00D6330 (SetShellWndManagementWindow.c)
 */

void __fastcall SeverWindowManagementConnectionToShell(struct tagDESKTOP *a1)
{
  __int64 v1; // rax

  v1 = SetShellWndManagementWindow((__int64)a1, 0LL);
  if ( v1 )
    PostMessage(v1, 835LL, 0LL, 0LL);
}
