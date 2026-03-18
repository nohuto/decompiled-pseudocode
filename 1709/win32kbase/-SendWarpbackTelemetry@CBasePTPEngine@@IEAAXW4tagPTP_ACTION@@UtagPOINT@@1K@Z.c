/*
 * XREFs of ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C013728C
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01337B0 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void *__fastcall CBasePTPEngine::SendWarpbackTelemetry(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int128 v10; // [rsp+20h] [rbp-40h]
  _BYTE v11[28]; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  LODWORD(v10) = a2;
  v14 = v12;
  v13 = v10;
  CBasePTPEngine::SendTelemetryOutput(a1, 4, (__int64)&v13);
  *(_QWORD *)&v11[12] = a4;
  *(_DWORD *)&v11[20] = a5;
  *(_DWORD *)v11 = a2;
  *(_QWORD *)&v11[4] = a3;
  v14 = *(_QWORD *)&v11[16];
  v13 = *(_OWORD *)v11;
  return CBasePTPEngine::SendTelemetryOutput(a1, 7, (__int64)&v13);
}
