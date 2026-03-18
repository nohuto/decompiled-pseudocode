/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C0046CC0
 * Callers:
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C0045D80 (NtUserEnableMouseInputForCursorSuppression.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00492E4 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C0141FF0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0142310 (PowerOffGdi.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BC1B8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01BC4E0 (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C0046DAC (SetPointerMetaVisibility.c)
 *     ReadCursorSuppressionConfig @ 0x1C0125538 (ReadCursorSuppressionConfig.c)
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
LABEL_20:
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
          goto LABEL_20;
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
