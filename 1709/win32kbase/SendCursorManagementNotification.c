/*
 * XREFs of SendCursorManagementNotification @ 0x1C005DE24
 * Callers:
 *     SendClipChanged @ 0x1C005DDF0 (SendClipChanged.c)
 *     SendPositionChanged @ 0x1C005EE00 (SendPositionChanged.c)
 *     SendVisibilityChanged @ 0x1C005EE40 (SendVisibilityChanged.c)
 *     SendSuppressionStateChanged @ 0x1C012D820 (SendSuppressionStateChanged.c)
 * Callees:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     ApiSetShouldSendCursorNotificationForExtensibility @ 0x1C005DE50 (ApiSetShouldSendCursorNotificationForExtensibility.c)
 */

void __fastcall SendCursorManagementNotification(const void *a1)
{
  if ( gCursorManagementConnectionHandle )
  {
    if ( (unsigned int)ApiSetShouldSendCursorNotificationForExtensibility() )
      CoreMsgSend(gCursorManagementConnectionHandle, 0, a1, (const GUID *)0x18);
  }
}
