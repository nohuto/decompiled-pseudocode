/*
 * XREFs of InitializeEditionAutoLogger @ 0x1C011B970
 * Callers:
 *     <none>
 * Callees:
 *     intializeGlobalRecorder @ 0x1C011B9F4 (intializeGlobalRecorder.c)
 *     WppInitKm @ 0x1C036B278 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C036B310 (WppLoadTracingSupport.c)
 */

__int64 __fastcall InitializeEditionAutoLogger(__int64 a1, __int64 a2)
{
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kFullTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(a1, a2);
  return intializeGlobalRecorder();
}
