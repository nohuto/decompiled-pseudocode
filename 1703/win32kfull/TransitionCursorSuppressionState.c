/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C00F0DC0
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00C6160 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C00F0D10 (NtUserEnableMouseInputForCursorSuppression.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C013B470 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C013B690 (PowerOffGdi.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01B6E5C (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01B7184 (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C00F0E8C (SetPointerMetaVisibility.c)
 *     ReadCursorSuppressionConfig @ 0x1C00F10D8 (ReadCursorSuppressionConfig.c)
 */

LONG __fastcall TransitionCursorSuppressionState(int a1, int a2)
{
  LONG result; // eax

  result = gCursorSuppressionState;
  if ( gCursorSuppressionState > 0 )
  {
    if ( gCursorSuppressionState <= 4 )
    {
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 != 8 )
              return result;
            if ( a2 )
            {
              gCursorSuppressionState = 4;
LABEL_9:
              _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
              return KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
            }
            result = SetPointerMetaVisibility(1LL);
LABEL_12:
            gCursorSuppressionState = 8;
            return result;
          }
LABEL_33:
          gCursorSuppressionState = 3;
          return result;
        }
LABEL_13:
        gCursorSuppressionState = 2;
        return result;
      }
LABEL_19:
      gCursorSuppressionState = 1;
      return result;
    }
    if ( gCursorSuppressionState <= 6 || gCursorSuppressionState == 8 )
    {
      switch ( a1 )
      {
        case 8:
          goto LABEL_12;
        case 2:
          if ( a2 )
          {
            gCursorSuppressionState = 6;
            goto LABEL_9;
          }
          result = SetPointerMetaVisibility(0LL);
          goto LABEL_13;
        case 1:
          if ( a2 )
          {
            gCursorSuppressionState = 5;
            goto LABEL_9;
          }
          result = SetPointerMetaVisibility(0LL);
          goto LABEL_19;
        case 3:
          if ( a2 )
          {
            gCursorSuppressionState = 7;
            goto LABEL_9;
          }
          result = SetPointerMetaVisibility(0LL);
          goto LABEL_33;
      }
    }
    else if ( gCursorSuppressionState == 9 )
    {
      result = ReadCursorSuppressionConfig();
      gCursorSuppressionState = result;
      if ( result )
        return SetPointerMetaVisibility(0LL);
    }
  }
  return result;
}
