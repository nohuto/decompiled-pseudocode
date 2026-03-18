/*
 * XREFs of ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18014F7C4
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014DABC (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 4) )
    return 0LL;
  result = a1 + 24;
  if ( !*(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 28) && !*(_DWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 36) )
    return 0LL;
  return result;
}
