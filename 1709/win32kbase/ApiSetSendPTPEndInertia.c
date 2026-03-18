/*
 * XREFs of ApiSetSendPTPEndInertia @ 0x1C013D018
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSendPTPEndInertia(__int64 a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xDCu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsSendPTPEndInertiaSupported();
  if ( (int)result >= 0 )
    result = SendPTPEndInertia(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0xDDu,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
