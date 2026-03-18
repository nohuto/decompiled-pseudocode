/*
 * XREFs of ApiSetEditionMouseMoveShellResilience @ 0x1C0045290
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDes.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionMouseMoveShellResilience(__int64 a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      36,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsEditionMouseMoveShellResilienceSupported();
  if ( (int)result >= 0 )
    result = EditionMouseMoveShellResilience(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             37,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}
