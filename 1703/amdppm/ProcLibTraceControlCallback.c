/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C001D790
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceCStateDomainRundown @ 0x1C0005A58 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0005B00 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibGetProcessorNumber @ 0x1C0005BD4 (ProcLibGetProcessorNumber.c)
 *     InitializeEnumerationContext @ 0x1C0008E90 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceSummary @ 0x1C001CE90 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C001D178 (ProcLibTraceSummary2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C001D5B8 (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001DBF8 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C001DE10 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001DEF0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001E19C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E3D4 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C001E668 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001E890 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB14 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001EC60 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001ECF4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001EEF8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001F0F0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001F300 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001F634 (ProcLibTraceCoordinatedIdleStates.c)
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
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  _BYTE *PoolWithTag; // rdi
  unsigned int v16; // ecx
  __int64 k; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  struct _PROCESSOR_NUMBER v26; // [rsp+34h] [rbp-CCh] BYREF
  struct _PROCESSOR_NUMBER v27; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29[5]; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *p_Number; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  unsigned int *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  _BYTE *v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int8 *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  char *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  _QWORD *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  _QWORD *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00113E8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C0011428; i != &qword_1C0011428; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (__int64 *)qword_1C0011408; j != &qword_1C0011408; j = (__int64 *)*j )
      ProcLibTracePStateDomainRundown((__int64)j);
    v6 = dword_1C0011860;
    if ( (dword_1C0011860 & 0x7F077) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0011860;
    }
    if ( (v6 & 0x70000000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0011860;
    }
    if ( (v6 & 0x3300000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0011860;
    }
    if ( v6 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v29);
    LOBYTE(v7) = 1;
    ProcLibTraceGetPlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    v10 = (_DWORD *)qword_1C0011948;
    if ( qword_1C0011948 )
    {
      v11 = 0LL;
      if ( *(_DWORD *)qword_1C0011948 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v10[8 * v11 + 2 + 2 * (unsigned int)v11]);
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *v10 );
      }
    }
    ResetEnumerationContext(v29);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v29, &v28) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C00113E8);
      v12 = v28;
      ProcLibTraceProcessorRundown(v28);
      ProcLibTraceSummary(v12);
      ProcLibTraceSummary2((__int64)v12, 1);
      if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v12, &v26) >= 0 )
        {
          v13 = v12[27];
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 24);
            v25 = *(_DWORD *)(v14 + 56);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v25, 0x72637250u);
            if ( PoolWithTag )
            {
              v16 = v25;
              for ( k = 0LL; (unsigned int)k < v25; v16 = v25 )
              {
                v18 = 3 * k;
                v19 = 32LL * (unsigned int)k;
                k = (unsigned int)(k + 1);
                v20 = *(_QWORD *)(v14 + 48) + v19;
                *(_DWORD *)&PoolWithTag[2 * v18] = *(_DWORD *)(v20 + 16);
                PoolWithTag[2 * v18 + 4] = *(_BYTE *)(v20 + 24);
                PoolWithTag[2 * v18 + 5] = *(_BYTE *)(v20 + 25);
              }
              UserData.Reserved = 0;
              v33 = 0;
              v36 = 0;
              v39 = 0;
              UserData.Ptr = (unsigned __int64)&v26;
              p_Number = &v26.Number;
              v34 = &v25;
              v38 = 6 * v16;
              UserData.Size = 2;
              v32 = 1;
              v35 = 4;
              v37 = PoolWithTag;
              EtwWrite(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN, 0LL, 4u, &UserData);
              ExFreePoolWithTag(PoolWithTag, 0x72637250u);
            }
          }
        }
      }
      ProcLibTraceBiosPStatesRundown(v12);
      ProcLibTraceBiosCStatesRundown(v12);
      ProcLibTraceBiosTStatesRundown(v12);
      ProcLibTraceProcessorLpiRundown(v12);
      LOBYTE(v21) = 1;
      ProcLibTraceQueryCapabilities(v12, v21);
      LOBYTE(v22) = 1;
      ProcLibTraceGetProcessorIdleStates(v12, v22);
      LOBYTE(v23) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v12, v23);
      LOBYTE(v24) = 1;
      ProcLibTracePepPerfCapabilities(v12, v24);
      if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_ID_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v12, &v27) >= 0 )
        {
          v40.Reserved = 0;
          v43 = 0;
          v46 = 0;
          v49 = 0;
          v52 = 0;
          v40.Ptr = (unsigned __int64)&v27;
          v41 = &v27.Number;
          v44 = (char *)v12 + 52;
          v47 = v12 + 6;
          v50 = v12 + 7;
          v40.Size = 2;
          v42 = 1;
          v45 = 4;
          v48 = 4;
          v51 = 4;
          EtwWrite(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_ID_RUNDOWN, 0LL, 5u, &v40);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00113E8,
        0LL);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113E8);
  }
}
