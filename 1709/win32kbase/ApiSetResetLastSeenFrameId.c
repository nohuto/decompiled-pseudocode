/*
 * XREFs of ApiSetResetLastSeenFrameId @ 0x1C013CAFC
 * Callers:
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C011F440 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetResetLastSeenFrameId()
{
  struct tagDESKTOP *v0; // rbx
  __int64 result; // rax

  v0 = grpdeskRitInput;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x5Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsResetLastSeenFrameIdSupported();
  if ( (int)result >= 0 )
    result = ResetLastSeenFrameId(v0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x5Bu,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
