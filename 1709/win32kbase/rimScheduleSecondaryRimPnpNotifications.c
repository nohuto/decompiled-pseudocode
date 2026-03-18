/*
 * XREFs of rimScheduleSecondaryRimPnpNotifications @ 0x1C010F624
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimScheduleSecondaryRimPnpNotifications(__int64 a1)
{
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x37u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1008));
  ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x38u,
           (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
}
