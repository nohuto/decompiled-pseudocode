/*
 * XREFs of SendCursorManagementNotification @ 0x1C00726F4
 * Callers:
 *     SendVisibilityChanged @ 0x1C0071BE0 (SendVisibilityChanged.c)
 *     SendPositionChanged @ 0x1C0072110 (SendPositionChanged.c)
 *     SendClipChanged @ 0x1C00726C0 (SendClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C012E2C0 (SendSuppressionStateChanged.c)
 * Callees:
 *     CoreMsgSend @ 0x1C006C2DC (CoreMsgSend.c)
 *     ApiSetShouldSendCursorNotificationForExtensibility @ 0x1C0072720 (ApiSetShouldSendCursorNotificationForExtensibility.c)
 */

void __fastcall SendCursorManagementNotification(const void *a1)
{
  if ( gCursorManagementConnectionHandle )
  {
    if ( (unsigned int)ApiSetShouldSendCursorNotificationForExtensibility() )
      CoreMsgSend(gCursorManagementConnectionHandle, 0, a1, (const GUID *)0x18);
  }
}
