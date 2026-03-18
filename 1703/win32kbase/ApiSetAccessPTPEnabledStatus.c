/*
 * XREFs of ApiSetAccessPTPEnabledStatus @ 0x1C0139C10
 * Callers:
 *     EnablePTPDevices @ 0x1C00D8C90 (EnablePTPDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetAccessPTPEnabledStatus(unsigned int a1)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      218,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsAccessPTPEnabledStatusSupported() >= 0 )
    v2 = AccessPTPEnabledStatus(a1, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      219,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v2;
}
