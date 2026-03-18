/*
 * XREFs of rimScheduleSecondaryRimPnpNotifications @ 0x1C0110B8C
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimScheduleSecondaryRimPnpNotifications(__int64 a1)
{
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    54,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1008));
  ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           55,
           (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
}
