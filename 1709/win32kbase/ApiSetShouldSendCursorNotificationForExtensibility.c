/*
 * XREFs of ApiSetShouldSendCursorNotificationForExtensibility @ 0x1C005DE50
 * Callers:
 *     SendCursorManagementNotification @ 0x1C005DE24 (SendCursorManagementNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetShouldSendCursorNotificationForExtensibility()
{
  unsigned int v0; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xC8u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v0 = 0;
  if ( (int)IsShouldSendCursorNotificationForExtensibilitySupported() >= 0 )
    v0 = ShouldSendCursorNotificationForExtensibility();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xC9u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v0;
}
