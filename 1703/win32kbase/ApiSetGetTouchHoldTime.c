/*
 * XREFs of ApiSetGetTouchHoldTime @ 0x1C013CEAC
 * Callers:
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0123330 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetTouchHoldTime()
{
  unsigned int TouchHoldTime; // ebx

  TouchHoldTime = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      88,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsGetTouchHoldTimeSupported() >= 0 )
    TouchHoldTime = GetTouchHoldTime();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      89,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return TouchHoldTime;
}
