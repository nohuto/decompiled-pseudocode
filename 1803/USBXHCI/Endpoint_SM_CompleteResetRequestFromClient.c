/*
 * XREFs of Endpoint_SM_CompleteResetRequestFromClient @ 0x1C0013688
 * Callers:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C0013720 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 *     ESM_CompletingResetRequestWhenEndpointNotHalted @ 0x1C003D1B0 (ESM_CompletingResetRequestWhenEndpointNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C0016548 (WPP_RECORDER_SF_ddqL.c)
 */

__int64 __fastcall Endpoint_SM_CompleteResetRequestFromClient(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx

  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFEFF);
  v3 = *(_DWORD *)(a1 + 280);
  v4 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 259;
  WPP_RECORDER_SF_ddqL(*(_QWORD *)(a1 + 80), a2, a3, 113);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v4,
           v3);
}
