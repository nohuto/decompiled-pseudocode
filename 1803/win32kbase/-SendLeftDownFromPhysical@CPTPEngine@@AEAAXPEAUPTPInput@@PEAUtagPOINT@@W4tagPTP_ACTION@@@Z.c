/*
 * XREFs of ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C013B1F0
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0136D8C (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01378E8 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C013B384 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013B5A0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::SendLeftDownFromPhysical(CPTPEngine *a1, _QWORD *a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  char v13; // [rsp+70h] [rbp+10h] BYREF

  *((_DWORD *)a1 + 824) |= 0x80u;
  result = *((unsigned int *)a1 + 824);
  if ( (result & 8) == 0 )
  {
    LODWORD(v9) = a4;
    v12 = v10;
    v11 = v9;
    CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v11);
    if ( a3 )
    {
      LODWORD(v9) = 0;
      *(_QWORD *)((char *)&v9 + 4) = *a3;
      v12 = v10;
      v11 = v9;
      CBasePTPEngine::SendTelemetryOutput(a1, 6LL, &v11);
    }
    v8 = *(_QWORD *)((char *)a2 + 28);
    if ( (*((_DWORD *)a1 + 55) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v13, a2);
    result = CBasePTPEngine::SendMouseOutput(a1, 1LL, v8);
    *((_DWORD *)a1 + 824) |= 8u;
  }
  return result;
}
