/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0055510
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0051F24 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 400LL) && !(unsigned int)IsShellProcess() && *(_DWORD *)(v2 + 976) )
  {
    if ( !*(_DWORD *)(v2 + 888) )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 908LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 940LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 940LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 940LL) &= ~4u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 936LL) = 0;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 932LL) = 0;
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 888LL);
  }
}
