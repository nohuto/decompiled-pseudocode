/*
 * XREFs of ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01BBC48
 * Callers:
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021D344 (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021D41C (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 * Callees:
 *     ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01BC2C0 (-SwitchMouseCursors@@YAXHHH@Z.c)
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
