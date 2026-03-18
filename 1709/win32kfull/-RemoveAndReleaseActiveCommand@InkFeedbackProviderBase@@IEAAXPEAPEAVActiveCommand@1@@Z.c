/*
 * XREFs of ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021E0A0
 * Callers:
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00E0C60 (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C021D4F0 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021D820 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021F520 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021DF80 (-RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand **a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8

  InkFeedbackProviderBase::RemoveActiveCommand(this, (struct InkFeedbackProviderBase::ActiveCommand ***)*a2);
  if ( *a2 )
    Win32FreePool(*a2, v3, v4);
  *a2 = 0LL;
}
