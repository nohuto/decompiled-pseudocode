/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C001A094
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0020808 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 376LL) && !(unsigned int)IsShellProcess() && *(_DWORD *)(v2 + 968) )
  {
    if ( !*(_DWORD *)(v2 + 880) )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 900LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) &= ~4u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 928LL) = 0;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 924LL) = 0;
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 880LL);
  }
}
