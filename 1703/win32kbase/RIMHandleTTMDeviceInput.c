/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C0099B1C
 * Callers:
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-10h]

  if ( gbUseTTM )
    TtmNotifyDeviceInput(2LL, a1, (*(_DWORD *)(*(_QWORD *)(a1 + 344) + 76LL) & gWakeOnDeviceTypes) != 0);
  v2 = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x10u,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
    v2);
  return 0LL;
}
