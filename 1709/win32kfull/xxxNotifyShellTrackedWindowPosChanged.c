/*
 * XREFs of xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B9320
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C00668A0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C011A590 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C020C98C (xxxSetWindowShowState.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01B8368 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowPosChanged(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = IsWindowSubjectToShellWindowBehavior(a1, 16LL, a3);
  if ( (_DWORD)result )
    return xxxNotifyShellWindowPosChangedCommon(a1, a2, 0, 0);
  return result;
}
