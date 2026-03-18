/*
 * XREFs of ApiSetShouldSendCursorNotificationForExtensibility @ 0x1C0072720
 * Callers:
 *     SendCursorManagementNotification @ 0x1C00726F4 (SendCursorManagementNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetShouldSendCursorNotificationForExtensibility()
{
  unsigned int v0; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      188,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v0 = 0;
  if ( (int)IsShouldSendCursorNotificationForExtensibilitySupported() >= 0 )
    v0 = ShouldSendCursorNotificationForExtensibility();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      189,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v0;
}
