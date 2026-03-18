/*
 * XREFs of RIMSendLatencyMgtRequest @ 0x1C00A3920
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC95C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000D190 (RIMSendLatencyMgtDeviceRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     EtwTraceLatencyModeSwitchStop @ 0x1C00A3D20 (EtwTraceLatencyModeSwitchStop.c)
 *     EtwTraceLatencyModeSwitchStart @ 0x1C00A3D40 (EtwTraceLatencyModeSwitchStart.c)
 */

__int64 __fastcall RIMSendLatencyMgtRequest(int a1)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *j; // rbx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x10u,
    (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids);
  EtwTraceLatencyModeSwitchStart();
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    for ( j = i[33].Blink; j; j = j[2].Blink )
    {
      if ( (LODWORD(j[12].Blink) & 0x80u) != 0 )
        RIMSendLatencyMgtDeviceRequest((int)j, (__int64)j[28].Blink, a1);
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  EtwTraceLatencyModeSwitchStop();
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x11u,
           (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids);
}
