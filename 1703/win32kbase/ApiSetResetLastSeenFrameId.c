/*
 * XREFs of ApiSetResetLastSeenFrameId @ 0x1C013D62C
 * Callers:
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C01205C4 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetResetLastSeenFrameId()
{
  struct tagDESKTOP *v0; // rbx
  __int64 result; // rax

  v0 = grpdeskRitInput;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      84,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsResetLastSeenFrameIdSupported();
  if ( (int)result >= 0 )
    result = ResetLastSeenFrameId(v0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             85,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}
