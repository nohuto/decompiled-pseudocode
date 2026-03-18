/*
 * XREFs of ApiSetEditionProcessPointerInputAsMouse @ 0x1C013B450
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionProcessPointerInputAsMouse(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x80u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionProcessPointerInputAsMouseSupported();
  if ( (int)result >= 0 )
    result = EditionProcessPointerInputAsMouse(a1, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x81u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
