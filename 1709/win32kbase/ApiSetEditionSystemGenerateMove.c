/*
 * XREFs of ApiSetEditionSystemGenerateMove @ 0x1C0091CB0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C00DE6A0 (zzzDestroyQueue.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSystemGenerateMove(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xCAu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionSystemGenerateMoveSupported();
  if ( (int)result >= 0 )
    result = EditionSystemGenerateMove(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0xCBu,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
