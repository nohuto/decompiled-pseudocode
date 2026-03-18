/*
 * XREFs of _TlgCreateWsz @ 0x1800053BC
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ @ 0x180075F7C (-TraceSwapChainTelemetry@CBindInfo@CCompositionSurfaceInfo@@AEAAXXZ.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x18012A9F4 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18012C37C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18012F174 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x180156F58 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801584FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180161C34 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180189D60 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18018CBD0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18018CDF8 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18018D1F8 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18018D2C0 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x18018EF54 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1801C108C (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1801C120C (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&word_1801EFDD8;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
