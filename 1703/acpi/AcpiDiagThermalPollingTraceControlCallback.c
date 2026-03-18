/*
 * XREFs of AcpiDiagThermalPollingTraceControlCallback @ 0x1C0041200
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x1C0002550 (AcpiDiagRequeueThermalPollingTimer.c)
 */

void __fastcall AcpiDiagThermalPollingTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx
  char *i; // rdx

  v4 = 0;
  if ( !ControlCode )
  {
    WPP_MAIN_CB.Reserved = 0LL;
    goto LABEL_10;
  }
  if ( ControlCode == 1 )
  {
    for ( i = (char *)&AcpiDiagThermalPollingIntervals; (MatchAnyKeyword & *(_QWORD *)i) == 0; i += 16 )
    {
      if ( (unsigned int)++v4 >= 5 )
        return;
    }
    if ( WPP_MAIN_CB.Reserved != (void *)*((_QWORD *)i + 1) )
    {
      WPP_MAIN_CB.Reserved = (void *)*((_QWORD *)i + 1);
LABEL_10:
      AcpiDiagRequeueThermalPollingTimer();
    }
  }
}
