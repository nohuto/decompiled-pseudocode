/*
 * XREFs of ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C00668A0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     IsShellParticipatesInSizing @ 0x1C00938B0 (IsShellParticipatesInSizing.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01B8368 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B9320 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxNotifyShellPositioningChanged(struct tagWND *a1, struct tagCVR *const a2)
{
  if ( (*((_DWORD *)a2 + 8) & 0x10000) != 0 && (*((_BYTE *)a1 + 306) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 31LL, *(_QWORD *)a2);
  if ( (*((_DWORD *)a2 + 8) & 0x2100C0) == 0
    && (*((_DWORD *)a2 + 8) & 3) != 3
    && (*((_BYTE *)a1 + 71) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState((__int64)a1) )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 16LL) )
      xxxNotifyShellTrackedWindowPosChanged(a1, 0LL);
    if ( (unsigned int)IsShellParticipatesInSizing(a1) )
      xxxNotifyShellWindowPosChangedCommon(a1, 0LL, 1LL, 7LL);
  }
}
