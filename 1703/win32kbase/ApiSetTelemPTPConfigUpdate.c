/*
 * XREFs of ApiSetTelemPTPConfigUpdate @ 0x1C013DE44
 * Callers:
 *     EnablePTPDevices @ 0x1C00D8C90 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetTelemPTPConfigUpdate()
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      228,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsTelemPTPConfigUpdateSupported();
  if ( (int)result >= 0 )
    result = TelemPTPConfigUpdate();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             229,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}
