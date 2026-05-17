/*
 * XREFs of RtlpReportHeapFailure @ 0x1801023A4
 * Callers:
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlIsAnyDebuggerPresent @ 0x1800F834C (RtlIsAnyDebuggerPresent.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800FF8E8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpPrintErrorInformation @ 0x180101E88 (RtlpPrintErrorInformation.c)
 */

void __fastcall RtlpReportHeapFailure(int a1)
{
  unsigned int v2; // r8d

  if ( RtlpDisableBreakOnFailureCookie == (unsigned int)RtlpGetModifiedProcessCookie() )
  {
    if ( a1 <= RtlpHeapErrorHandlerThreshold )
    {
      RtlpPrintErrorInformation();
      if ( RtlIsAnyDebuggerPresent() )
      {
        if ( (RtlpHpHeapFeatures & 4) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v2) = ~RtlpHpHeapFeatures;
    RtlReportCriticalFailure(-1073740940, (unsigned __int64)&RtlpHeapFailureInfo, (v2 >> 2) & 1);
  }
}
