/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x14073E980
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14073E774 (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpShutdownProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( Level == 85 )
      PerfDiagpRequestState(7);
  }
}
