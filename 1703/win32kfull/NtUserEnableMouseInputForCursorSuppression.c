/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C00F0D10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  v6 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_12;
  v6 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v6 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v6 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_12:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v2);
    v9 = 2LL;
    *(_DWORD *)(CurrentProcessWin32Process + 768) &= ~0x40000u;
LABEL_14:
    TransitionCursorSuppressionState(v9, 1LL);
    goto LABEL_5;
  }
  v6 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v10 = PsGetCurrentProcessWin32Process(v6, v2);
    v9 = 1LL;
    *(_DWORD *)(v10 + 768) |= 0x40000u;
    goto LABEL_14;
  }
LABEL_5:
  v5 = 1LL;
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v2, v3, v4);
  return v5;
}
