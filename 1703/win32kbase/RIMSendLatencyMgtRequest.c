/*
 * XREFs of RIMSendLatencyMgtRequest @ 0x1C009A9C0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00D65EC (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 *     EtwTraceLatencyModeSwitchStop @ 0x1C009ADD0 (EtwTraceLatencyModeSwitchStop.c)
 *     EtwTraceLatencyModeSwitchStart @ 0x1C009ADF0 (EtwTraceLatencyModeSwitchStart.c)
 */

__int64 __fastcall RIMSendLatencyMgtRequest(int a1)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *j; // rbx

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    16,
    (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids);
  EtwTraceLatencyModeSwitchStart();
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    for ( j = i[33].Blink; j; j = j[2].Blink )
    {
      if ( (LODWORD(j[12].Blink) & 0x80u) != 0 )
        RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)j, (__int64)j[28].Blink, a1);
    }
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  EtwTraceLatencyModeSwitchStop();
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           17,
           (__int64)&WPP_a16ed08ebbdb32b7feb08771ce29ed7a_Traceguids);
}
