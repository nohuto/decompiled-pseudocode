/*
 * XREFs of _TlgCreateWsz @ 0x180074CDC
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18000BEA8 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000C010 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180074230 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800743C0 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007A630 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007B0D0 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007BDD0 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180080A90 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = word_1800AB3A8;
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
