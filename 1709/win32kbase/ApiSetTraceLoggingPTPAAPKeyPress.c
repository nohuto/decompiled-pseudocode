/*
 * XREFs of ApiSetTraceLoggingPTPAAPKeyPress @ 0x1C013D2C8
 * Callers:
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C012B098 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetTraceLoggingPTPAAPKeyPress(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xE4u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsTraceLoggingPTPAAPKeyPressSupported();
  if ( (int)result >= 0 )
    result = TraceLoggingPTPAAPKeyPress(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0xE5u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
