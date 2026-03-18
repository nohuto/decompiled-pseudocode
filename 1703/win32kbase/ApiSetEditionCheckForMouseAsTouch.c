/*
 * XREFs of ApiSetEditionCheckForMouseAsTouch @ 0x1C013A0D0
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0121B50 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SecondPassIntialize@CMouseSensor@@UEAAJXZ @ 0x1C0130550 (-SecondPassIntialize@CMouseSensor@@UEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionCheckForMouseAsTouch()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      170,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionCheckForMouseAsTouchSupported() >= 0 )
    v0 = EditionCheckForMouseAsTouch();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      171,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v0;
}
