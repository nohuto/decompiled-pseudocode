/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C0045D80
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL);
    goto LABEL_10;
  }
  v4 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_11;
  v4 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_8;
  v4 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_8;
  v4 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_11:
    if ( !a1 )
      goto LABEL_9;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v7 = 2LL;
    *(_DWORD *)(CurrentProcessWin32Process + 776) &= ~0x40000u;
LABEL_13:
    TransitionCursorSuppressionState(v7, 1LL);
    goto LABEL_9;
  }
  v4 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_9;
LABEL_8:
  if ( !a1 )
  {
    v8 = PsGetCurrentProcessWin32Process(v4);
    v7 = 1LL;
    *(_DWORD *)(v8 + 776) |= 0x40000u;
    goto LABEL_13;
  }
LABEL_9:
  v3 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v4, v2);
  return v3;
}
