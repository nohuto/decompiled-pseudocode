/*
 * XREFs of APISetEditionGetMouseWheelRoutingMode @ 0x1C0139B7C
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0131420 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 APISetEditionGetMouseWheelRoutingMode()
{
  unsigned int MouseWheelRoutingMode; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      180,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  MouseWheelRoutingMode = 0;
  if ( (int)IsEditionGetMouseWheelRoutingModeSupported() >= 0 )
    MouseWheelRoutingMode = EditionGetMouseWheelRoutingMode();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      181,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return MouseWheelRoutingMode;
}
