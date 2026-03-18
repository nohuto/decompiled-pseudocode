/*
 * XREFs of ApiSetIsProcessForeground @ 0x1C013D1F8
 * Callers:
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01152C4 (rimObsIsRegisteredObserverAllowed.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsProcessForeground(unsigned int a1)
{
  unsigned int v2; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      28,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v2 = 0;
  if ( (int)IsIsProcessForegroundSupported() >= 0 )
    v2 = IsProcessForeground(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      29,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v2;
}
