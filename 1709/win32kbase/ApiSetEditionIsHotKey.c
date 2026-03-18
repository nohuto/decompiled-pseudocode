/*
 * XREFs of ApiSetEditionIsHotKey @ 0x1C013A444
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012E84C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(unsigned int a1, unsigned int a2)
{
  unsigned int IsHotKey; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x12Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  IsHotKey = 0;
  if ( (int)IsEditionIsHotKeySupported() >= 0 )
    IsHotKey = EditionIsHotKey(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x12Bu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return IsHotKey;
}
