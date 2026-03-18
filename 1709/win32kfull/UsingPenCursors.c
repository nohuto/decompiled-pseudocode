/*
 * XREFs of UsingPenCursors @ 0x1C0053348
 * Callers:
 *     _GetCursorInfo @ 0x1C00532C0 (_GetCursorInfo.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 * Callees:
 *     <none>
 */

__int64 UsingPenCursors()
{
  __int64 result; // rax

  result = 0LL;
  if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    return 1LL;
  return result;
}
