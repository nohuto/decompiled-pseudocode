/*
 * XREFs of ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@K@Z @ 0x1C01370C0
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01337B0 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01338B4 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C0136C50 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C013704C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z @ 0x1C0137118 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAIK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendMouseOutput(__int64 a1, int a2, __int64 a3, int a4)
{
  _DWORD *v4; // rbx
  void (__fastcall ***v5)(_QWORD, _DWORD *); // rcx

  v4 = (_DWORD *)(a1 + 548);
  *(_DWORD *)(a1 + 552) = a2;
  *(_QWORD *)(a1 + 556) = a3;
  *(_DWORD *)(a1 + 564) = a4;
  v5 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v4 = 1;
  (**v5)(v5, v4);
  return memset(v4, 0, 0x258uLL);
}
