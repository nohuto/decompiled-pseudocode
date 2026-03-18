/*
 * XREFs of ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC
 * Callers:
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1C0132B38 (--1CPTPEngine@@UEAA@XZ.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C0134558 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0134A2C (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 *     ?DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z @ 0x1C0135618 (-DoTPShellProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KPEAH@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0136988 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0136C30 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0137BC8 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0137FAC (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall CBasePTPEngine::SendTelemetryOutput(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // xmm1_8
  __int64 v5; // rcx

  v3 = (_DWORD *)(a1 + 1128);
  v4 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 1136) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 1132) = a2;
  *(_QWORD *)(a1 + 1152) = v4;
  v5 = *(_QWORD *)(a1 + 8);
  *v3 = 2;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 8LL))(v5, v3);
  return memset(v3, 0, 0x20uLL);
}
