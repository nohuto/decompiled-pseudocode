/*
 * XREFs of McTemplateK0q @ 0x1C00E271C
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C0077E50 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0077F44 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C0095B90 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C0095BB0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C0096600 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A3900 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A41D0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00A5F80 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00A6010 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00A6030 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00A6050 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C00DFE70 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C00DFF10 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C00E0040 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C00E0100 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00E0F70 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00E0FA0 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C00E1030 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C00E1060 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00E1150 (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C00E1470 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C00E16A0 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C00FD2C0 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 2u, &v5);
}
