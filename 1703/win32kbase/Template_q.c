/*
 * XREFs of Template_q @ 0x1C00DBC78
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C00656D4 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00657C0 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C008E050 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C008E070 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C008E600 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C009BF40 (EtwTracePowerOnGdiEnd.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C009BF60 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C009BF80 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C009C010 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C009C030 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C009C050 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C00D9B40 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C00D9BA0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C00D9D10 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C00D9DD0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00DA3E0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00DA410 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C00DA4A0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C00DA4D0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00DA5C0 (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C00DA920 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C00DAB50 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C00FCEB0 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  v5.Reserved = 0;
  v5.Size = 4;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 1u, &v5);
}
