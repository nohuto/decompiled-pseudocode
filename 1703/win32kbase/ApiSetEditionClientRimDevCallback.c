/*
 * XREFs of ApiSetEditionClientRimDevCallback @ 0x1C013A21C
 * Callers:
 *     RIMUpdateSecondaryRim @ 0x1C010FB20 (RIMUpdateSecondaryRim.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
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
  unsigned int v11; // esi
  __int64 result; // rax
  int v14; // edx

  v11 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      296,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionClientRimDevCallbackSupported();
  if ( (int)result >= 0 )
    result = EditionClientRimDevCallback(a1, v11, a3, a4, a5, a6, a7, a8, a9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v14,
             14,
             297,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
