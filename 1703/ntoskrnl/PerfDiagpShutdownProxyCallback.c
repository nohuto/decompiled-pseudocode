/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x14057A400
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14045EC38 (PerfDiagpRequestState.c)
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
