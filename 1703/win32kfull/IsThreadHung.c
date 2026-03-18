/*
 * XREFs of IsThreadHung @ 0x1C00B6074
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00069B0 (xxxSwitchToThisWindow.c)
 *     DoExplorerHangDetection @ 0x1C0006F5C (DoExplorerHangDetection.c)
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     _GetWindowTrackInfoAsync @ 0x1C00B2F90 (_GetWindowTrackInfoAsync.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01EDD84 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
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
  v4 = a1[50];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) > a2
    && (*(_WORD *)(v4 + 10) & 0x1C07) == 0
    && !(unsigned int)PsGetThreadFreezeCount(*a1)
    && (*(_BYTE *)(a1[47] + 12LL) & 0x40) == 0 )
  {
    return 1;
  }
  return v3;
}
