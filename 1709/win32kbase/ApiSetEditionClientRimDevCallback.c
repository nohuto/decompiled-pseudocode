/*
 * XREFs of ApiSetEditionClientRimDevCallback @ 0x1C01394F4
 * Callers:
 *     RIMUpdateSecondaryRim @ 0x1C010E49C (RIMUpdateSecondaryRim.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionClientRimDevCallback(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x134u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionClientRimDevCallbackSupported();
  if ( (int)result >= 0 )
    result = EditionClientRimDevCallback(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x135u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
