/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1407A1310
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14065117C (PerfDiagpRequestState.c)
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
