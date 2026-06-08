/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0028AA0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0003900 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0003930 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000394C (EnumerateNextDevice.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0008F8C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0009034 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibGetProcessorNumber @ 0x1C0009108 (ProcLibGetProcessorNumber.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0009150 (ProcLibTracePepPerfDomain.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceSummary @ 0x1C00281B0 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0028498 (ProcLibTraceSummary2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C00288A4 (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTraceProcessorRundown @ 0x1C0028F00 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C0029118 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00291F8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0029498 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C00296D0 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0029964 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0029B8C (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0029E04 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C0029F60 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0029FF4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002A1F8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002A3F0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C002A6A8 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C002A9DC (ProcLibTraceCoordinatedIdleStates.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  unsigned __int8 *j; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  _BYTE *PoolWithTag; // rdi
  unsigned int v15; // ecx
  __int64 k; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // [rsp+30h] [rbp-61h] BYREF
  struct _PROCESSOR_NUMBER v25; // [rsp+34h] [rbp-5Dh] BYREF
  struct _PROCESSOR_NUMBER v26; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-51h] BYREF
  __int64 v28[5]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int8 *p_Number; // [rsp+80h] [rbp-11h]
  int v31; // [rsp+88h] [rbp-9h]
  int v32; // [rsp+8Ch] [rbp-5h]
  unsigned int *v33; // [rsp+90h] [rbp-1h]
  int v34; // [rsp+98h] [rbp+7h]
  int v35; // [rsp+9Ch] [rbp+Bh]
  _QWORD *v36; // [rsp+A0h] [rbp+Fh]
  int v37; // [rsp+A8h] [rbp+17h]
  int v38; // [rsp+ACh] [rbp+1Bh]
  _QWORD *v39; // [rsp+B0h] [rbp+1Fh]
  int v40; // [rsp+B8h] [rbp+27h]
  int v41; // [rsp+BCh] [rbp+2Bh]

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011418,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C0011458; i != &qword_1C0011458; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (unsigned __int8 *)qword_1C0011438; j != (unsigned __int8 *)&qword_1C0011438; j = *(unsigned __int8 **)j )
    {
      ProcLibTracePStateDomainRundown((__int64)j);
      if ( j[48] )
        ProcLibTracePepPerfDomain(j, 1);
    }
    if ( (dword_1C0011890 & 0x7F077) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
    if ( (dword_1C0011890 & 0x70000000) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
    if ( (dword_1C0011890 & 0x3300000) != 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
    if ( dword_1C0011890 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C0011428, 32, (__int64)v28);
    LOBYTE(v6) = 1;
    ProcLibTraceGetPlatformIdleStates(v6);
    LOBYTE(v7) = 1;
    ProcLibTracePlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTraceCoordinatedIdleStates(v8);
    v9 = (_DWORD *)qword_1C0011978;
    if ( qword_1C0011978 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)qword_1C0011978 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v9[8 * v10 + 2 + 2 * (unsigned int)v10]);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *v9 );
      }
    }
    ResetEnumerationContext(v28);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v28, &v27) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C0011418);
      v11 = v27;
      ProcLibTraceProcessorRundown(v27);
      ProcLibTraceSummary(v11);
      ProcLibTraceSummary2((__int64)v11, 1);
      if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v11, &v25) >= 0 )
        {
          v12 = v11[27];
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 24);
            v24 = *(_DWORD *)(v13 + 56);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v24, 0x72637250u);
            if ( PoolWithTag )
            {
              v15 = v24;
              for ( k = 0LL; (unsigned int)k < v24; v15 = v24 )
              {
                v17 = 3 * k;
                v18 = 32LL * (unsigned int)k;
                k = (unsigned int)(k + 1);
                v19 = *(_QWORD *)(v13 + 48) + v18;
                *(_DWORD *)&PoolWithTag[2 * v17] = *(_DWORD *)(v19 + 16);
                PoolWithTag[2 * v17 + 4] = *(_BYTE *)(v19 + 24);
                PoolWithTag[2 * v17 + 5] = *(_BYTE *)(v19 + 25);
              }
              UserData.Reserved = 0;
              v32 = 0;
              v35 = 0;
              v38 = 0;
              UserData.Ptr = (unsigned __int64)&v25;
              p_Number = &v25.Number;
              v33 = &v24;
              v37 = 6 * v15;
              UserData.Size = 2;
              v31 = 1;
              v34 = 4;
              v36 = PoolWithTag;
              EtwWrite(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN, 0LL, 4u, &UserData);
              ExFreePoolWithTag(PoolWithTag, 0x72637250u);
            }
          }
        }
      }
      ProcLibTraceBiosPStatesRundown(v11);
      ProcLibTraceBiosCStatesRundown(v11);
      ProcLibTraceBiosTStatesRundown(v11);
      ProcLibTraceProcessorLpiRundown(v11);
      LOBYTE(v20) = 1;
      ProcLibTraceQueryCapabilities(v11, v20);
      LOBYTE(v21) = 1;
      ProcLibTraceGetProcessorIdleStates(v11, v21);
      LOBYTE(v22) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v11, v22);
      LOBYTE(v23) = 1;
      ProcLibTracePepPerfCapabilities(v11, v23);
      if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_ID_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v11, &v26) >= 0 )
        {
          UserData.Reserved = 0;
          v32 = 0;
          v35 = 0;
          v38 = 0;
          v41 = 0;
          UserData.Ptr = (unsigned __int64)&v26;
          p_Number = &v26.Number;
          v33 = (unsigned int *)v11 + 13;
          v36 = v11 + 6;
          v39 = v11 + 7;
          UserData.Size = 2;
          v31 = 1;
          v34 = 4;
          v37 = 4;
          v40 = 4;
          EtwWrite(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_ID_RUNDOWN, 0LL, 5u, &UserData);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0011418,
        0LL);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011418);
  }
}
