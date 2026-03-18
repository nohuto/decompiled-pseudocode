/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessible @ 0x1C013A3A4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessible(unsigned int a1)
{
  unsigned int IsGpqForegroundAccessible; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x42u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  IsGpqForegroundAccessible = 0;
  if ( (int)IsEditionIsGpqForegroundAccessibleSupported() >= 0 )
    IsGpqForegroundAccessible = EditionIsGpqForegroundAccessible(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x43u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return IsGpqForegroundAccessible;
}
