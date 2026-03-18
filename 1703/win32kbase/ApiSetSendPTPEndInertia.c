/*
 * XREFs of ApiSetSendPTPEndInertia @ 0x1C013DBCC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSendPTPEndInertia(__int64 a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      208,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsSendPTPEndInertiaSupported();
  if ( (int)result >= 0 )
    result = SendPTPEndInertia(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             209,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}
