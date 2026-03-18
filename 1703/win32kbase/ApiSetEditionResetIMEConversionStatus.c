/*
 * XREFs of ApiSetEditionResetIMEConversionStatus @ 0x1C007A648
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0078DC0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionResetIMEConversionStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v5; // edx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      240,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionResetIMEConversionStatusSupported();
  if ( (int)result >= 0 )
    result = EditionResetIMEConversionStatus(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v5,
             14,
             241,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
