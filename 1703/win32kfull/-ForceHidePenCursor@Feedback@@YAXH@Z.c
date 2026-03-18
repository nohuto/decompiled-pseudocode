/*
 * XREFs of ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01B6930
 * Callers:
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021C09C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021C170 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 * Callees:
 *     ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01B6F64 (-SwitchMouseCursors@@YAXHHH@Z.c)
 */

void __fastcall Feedback::ForceHidePenCursor(Feedback *this)
{
  if ( (_DWORD)this != Feedback::gfForceHidePenCursor )
  {
    Feedback::gfForceHidePenCursor = (int)this;
    if ( Feedback::gfUsingPenCursors )
      SwitchMouseCursors(1, 0, 0);
  }
}
