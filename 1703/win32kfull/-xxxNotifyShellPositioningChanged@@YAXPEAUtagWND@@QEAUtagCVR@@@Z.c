/*
 * XREFs of ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0021794 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     IsShellParticipatesInSizing @ 0x1C0021CB0 (IsShellParticipatesInSizing.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01B50F8 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B608C (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxNotifyShellPositioningChanged(struct tagWND *a1, struct tagCVR *const a2)
{
  PostIAMPosChangedNotification(a2, a1);
  if ( (*((_DWORD *)a2 + 8) & 0x2100C0) == 0
    && (*((_DWORD *)a2 + 8) & 3) != 3
    && (*((_BYTE *)a1 + 71) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState(a1) )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 16LL) )
      xxxNotifyShellTrackedWindowPosChanged(a1, 0LL);
    if ( (unsigned int)IsShellParticipatesInSizing(a1) )
      xxxNotifyShellWindowPosChangedCommon(a1, 0LL, 1LL, 7LL);
  }
}
