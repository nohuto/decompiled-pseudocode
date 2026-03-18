/*
 * XREFs of xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B608C
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C01112BC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C020B5C8 (xxxSetWindowShowState.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01B50F8 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowPosChanged(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = IsWindowSubjectToShellWindowBehavior(a1, 16LL, a3);
  if ( (_DWORD)result )
    return xxxNotifyShellWindowPosChangedCommon(a1, a2, 0, 0);
  return result;
}
