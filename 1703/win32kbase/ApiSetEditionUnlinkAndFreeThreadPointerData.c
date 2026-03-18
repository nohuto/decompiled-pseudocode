/*
 * XREFs of ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C013CA0C
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C006E080 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionUnlinkAndFreeThreadPointerData(__int64 a1, __int64 a2)
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
      138,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionUnlinkAndFreeThreadPointerDataSupported();
  if ( (int)result >= 0 )
    result = EditionUnlinkAndFreeThreadPointerData(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v5,
             14,
             139,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
