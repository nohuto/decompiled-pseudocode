/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C001A8C0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00015CC (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0001CAC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0002918 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0007320 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C00074C0 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceSummary2 @ 0x1C001F54C (ProcLibTraceSummary2.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C0020058 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0023190 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00233C8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0023674 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C00239FC (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0023D54 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0023F7C (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0024180 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0024398 (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTracePccSummary @ 0x1C0024400 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00244E0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C00247F4 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0024968 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C0024BB8 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0024CA8 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C0024F3C (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0025154 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C00252A0 (ProcLibTraceSummary.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  bool v18; // zf
  void (__fastcall *v19)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0015D98,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C0015DD8; i != &qword_1C0015DD8; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (__int64 *)qword_1C0015DB8; j != &qword_1C0015DB8; j = (__int64 *)*j )
      ProcLibTracePStateDomainRundown((__int64)j);
    v6 = dword_1C0016210;
    if ( (dword_1C0016210 & 0x7F077) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0016210;
    }
    if ( (v6 & 0x70000000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0016210;
    }
    if ( (v6 & 0x3300000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0016210;
    }
    if ( v6 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C0015DA8, 32, (__int64)v21);
    LOBYTE(v7) = 1;
    ProcLibTraceGetPlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    v10 = (_DWORD *)qword_1C00162F8;
    if ( qword_1C00162F8 )
    {
      v11 = 0LL;
      if ( *(_DWORD *)qword_1C00162F8 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v10[8 * v11 + 2 + 2 * (unsigned int)v11]);
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *v10 );
      }
    }
    ResetEnumerationContext(v21);
    while ( 1 )
    {
      v18 = (unsigned int)EnumerateNextDevice((__int64)v21, &v20) == 0;
      v19 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v18 )
        break;
      v19(WdfDriverGlobals, qword_1C0015D98);
      v12 = v20;
      ProcLibTraceProcessorRundown(v20);
      ProcLibTraceSummary(v12);
      LOBYTE(v13) = 1;
      ProcLibTraceSummary2(v12, v13);
      ProcLibTracePerfStatesRundown(v12);
      ProcLibTraceBiosPStatesRundown(v12);
      ProcLibTraceBiosCStatesRundown(v12);
      ProcLibTraceBiosTStatesRundown(v12);
      ProcLibTraceProcessorLpiRundown(v12);
      LOBYTE(v14) = 1;
      ProcLibTraceQueryCapabilities(v12, v14);
      LOBYTE(v15) = 1;
      ProcLibTraceGetProcessorIdleStates(v12, v15);
      LOBYTE(v16) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v12, v16);
      LOBYTE(v17) = 1;
      ProcLibTracePepPerfCapabilities(v12, v17);
      ProcLibTraceProcessorIds(v12);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0015D98,
        0LL);
    }
    v19(WdfDriverGlobals, qword_1C0015D98);
  }
}
