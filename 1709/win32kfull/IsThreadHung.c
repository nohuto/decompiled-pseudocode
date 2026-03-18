/*
 * XREFs of IsThreadHung @ 0x1C0085124
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000BE60 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C000C474 (DoExplorerHangDetection.c)
 *     xxxQueryInformationThread @ 0x1C0047A8C (xxxQueryInformationThread.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0084EB0 (_GetWindowTrackInfoAsync.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F8220 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadHung(_QWORD *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( !a2 )
    a2 = gdwHungAppTimeout;
  v4 = a1[53];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) > a2
    && (*(_WORD *)(v4 + 10) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*a1)
    && (*(_BYTE *)(a1[50] + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}
