/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C009C32C
 * Callers:
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C010C258 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1, int a2, int a3, int a4)
{
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( gbUseTTM )
  {
    v7 = a1;
    WPP_RECORDER_SF_dq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    TtmNotifyDeviceDeparture(2LL, a1);
  }
  v6 = 0;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xFu,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
    v6,
    v7);
  return 0LL;
}
