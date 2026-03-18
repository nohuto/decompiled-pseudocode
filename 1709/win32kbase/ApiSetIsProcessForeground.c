/*
 * XREFs of ApiSetIsProcessForeground @ 0x1C013C6C4
 * Callers:
 *     rimObsIsRegisteredObserverAllowed @ 0x1C0113D8C (rimObsIsRegisteredObserverAllowed.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsProcessForeground(unsigned int a1)
{
  unsigned int v2; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x20u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v2 = 0;
  if ( (int)IsIsProcessForegroundSupported() >= 0 )
    v2 = IsProcessForeground(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x21u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v2;
}
