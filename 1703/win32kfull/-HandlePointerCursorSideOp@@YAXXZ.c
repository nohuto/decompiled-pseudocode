/*
 * XREFs of ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00C6160
 * Callers:
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 *     xxxEnsureMonitorCursors @ 0x1C010A23C (xxxEnsureMonitorCursors.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01B70F8 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01B7184 (-xxxSwitchCursors@@YAXH@Z.c)
 */

void HandlePointerCursorSideOp(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  Feedback *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(0LL, 1LL);
    Feedback::xxxRestoreMouseCursors(v12);
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  }
  if ( (v2 & 0x300) != 0 )
  {
    EnterCrit(0LL, 1LL);
    xxxSwitchCursors((v2 & 0x100) != 0);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 4 )
    {
      v6 = 8LL;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v6 = 1LL;
    }
    else
    {
      v7 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v6 = 2LL;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
          goto LABEL_11;
        v6 = 3LL;
      }
    }
    TransitionCursorSuppressionState(v6, 0LL);
LABEL_11:
    UserSessionSwitchLeaveCrit(v7, v3, v4, v5);
  }
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(0LL, 1LL);
    xxxEnsureMonitorCursors();
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  }
}
