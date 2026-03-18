/*
 * XREFs of ApiSetWritePTPSettingValues @ 0x1C013D558
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00DF100 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetWritePTPSettingValues(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xEAu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsWritePTPSettingValuesSupported() >= 0 )
    v2 = WritePTPSettingValues(a1, 13LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xEBu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v2;
}
