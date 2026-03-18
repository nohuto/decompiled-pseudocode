/*
 * XREFs of ApiSetEditionProcessPointerInputAsMouse @ 0x1C013C228
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionProcessPointerInputAsMouse(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  unsigned __int16 v4; // di
  __int64 result; // rax
  __int16 v7; // dx

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      120,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionProcessPointerInputAsMouseSupported();
  if ( (int)result >= 0 )
    result = EditionProcessPointerInputAsMouse(a1, v4, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v7,
             14,
             121,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
