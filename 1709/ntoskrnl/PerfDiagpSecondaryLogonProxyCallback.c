/*
 * XREFs of PerfDiagpSecondaryLogonProxyCallback @ 0x14073E950
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14073E774 (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpSecondaryLogonProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx

  if ( ControlCode )
  {
    if ( Level != 85 )
      return;
    v4 = 5;
  }
  else
  {
    v4 = 6;
  }
  PerfDiagpRequestState(v4);
}
