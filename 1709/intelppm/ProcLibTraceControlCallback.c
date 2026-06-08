/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0023AE0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000148C (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0007194 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0007334 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePepPerfDomain @ 0x1C00074AC (ProcLibTracePepPerfDomain.c)
 *     ProcLibTraceSummary2 @ 0x1C002277C (ProcLibTraceSummary2.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C00232DC (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C00268C0 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0026AF8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0026D98 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0027114 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C002746C (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0027694 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0027898 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0027AB8 (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTracePccSummary @ 0x1C0027B28 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0027C08 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C0027FCC (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0028140 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C0028390 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0028480 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C0028714 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C002892C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C0028A88 (ProcLibTraceSummary.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  __int64 j; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // zf
  void (__fastcall *v16)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00195D8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C0019618; i != &qword_1C0019618; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = qword_1C00195F8; (__int64 *)j != &qword_1C00195F8; j = *(_QWORD *)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( *(_BYTE *)(j + 48) )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C0019A50 & 0x7F077) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
    if ( (dword_1C0019A50 & 0x70000000) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
    if ( (dword_1C0019A50 & 0x3300000) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
    if ( dword_1C0019A50 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C00195E8, 32, (__int64)v18);
    ProcLibTraceGetPlatformIdleStates(1);
    LOBYTE(v6) = 1;
    ProcLibTracePlatformIdleStates(v6);
    LOBYTE(v7) = 1;
    ProcLibTraceCoordinatedIdleStates(v7);
    v8 = (_DWORD *)qword_1C0019B38;
    if ( qword_1C0019B38 )
    {
      v9 = 0LL;
      if ( *(_DWORD *)qword_1C0019B38 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v8[8 * v9 + 2 + 2 * (unsigned int)v9]);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *v8 );
      }
    }
    ResetEnumerationContext(v18);
    while ( 1 )
    {
      v15 = (unsigned int)EnumerateNextDevice((__int64)v18, &v17) == 0;
      v16 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v15 )
        break;
      v16(WdfDriverGlobals, qword_1C00195D8);
      v10 = v17;
      ProcLibTraceProcessorRundown(v17);
      ProcLibTraceSummary(v10);
      ProcLibTraceSummary2(v10, 1);
      ProcLibTracePerfStatesRundown(v10);
      ProcLibTraceBiosPStatesRundown(v10);
      ProcLibTraceBiosCStatesRundown(v10);
      ProcLibTraceBiosTStatesRundown(v10);
      ProcLibTraceProcessorLpiRundown(v10);
      LOBYTE(v11) = 1;
      ProcLibTraceQueryCapabilities(v10, v11);
      LOBYTE(v12) = 1;
      ProcLibTraceGetProcessorIdleStates(v10, v12);
      LOBYTE(v13) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v10, v13);
      LOBYTE(v14) = 1;
      ProcLibTracePepPerfCapabilities(v10, v14);
      ProcLibTraceProcessorIds(v10);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00195D8,
        0LL);
    }
    v16(WdfDriverGlobals, qword_1C00195D8);
  }
}
