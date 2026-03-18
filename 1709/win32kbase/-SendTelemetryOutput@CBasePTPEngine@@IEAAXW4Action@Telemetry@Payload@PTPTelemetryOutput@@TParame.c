/*
 * XREFs of ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01371DC
 * Callers:
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1C0132258 (--1CPTPEngine@@UEAA@XZ.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C0132A68 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01338B4 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01358D8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0135BA0 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0136C50 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C013728C (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendTelemetryOutput(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // xmm1_8
  __int64 v5; // rcx

  v3 = (_DWORD *)(a1 + 1148);
  v4 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 1156) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 1152) = a2;
  *(_QWORD *)(a1 + 1172) = v4;
  v5 = *(_QWORD *)(a1 + 8);
  *v3 = 2;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 8LL))(v5, v3);
  return memset(v3, 0, 0x20uLL);
}
