/*
 * XREFs of EtwTraceAppStateChange @ 0x1404E977C
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x140498E00 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x140082CB4 (TraceLoggingProviderEnabled.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpInitStateChangeInfo @ 0x14043D804 (EtwpInitStateChangeInfo.c)
 *     ObGetProcessHandleCount @ 0x140441B10 (ObGetProcessHandleCount.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140443E20 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14045118C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteAppStateChange @ 0x14045549C (EtwpWriteAppStateChange.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404E915C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404ED4D0 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404ED594 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1404ED5D4 (EtwpQueryProcessCommandLine.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

void __fastcall EtwTraceAppStateChange(struct _EX_RUNDOWN_REF *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  char v6; // r10
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  UCHAR v13; // dl
  unsigned int *p_ProcessHandleCount; // r15
  char v15; // r14
  char v16; // si
  PACCESS_TOKEN v17; // rbx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  _QWORD v22[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int ProcessHandleCount; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v29; // [rsp+BCh] [rbp-44h]
  __int64 v30; // [rsp+C4h] [rbp-3Ch]
  int v31; // [rsp+CCh] [rbp-34h]
  int v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D4h] [rbp-2Ch]
  int v34; // [rsp+D8h] [rbp-28h]
  char v35[41]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int64 v36; // [rsp+105h] [rbp+5h]
  unsigned __int64 v37; // [rsp+10Dh] [rbp+Dh]
  unsigned __int64 v38; // [rsp+115h] [rbp+15h]
  unsigned __int64 v39; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v40; // [rsp+125h] [rbp+25h]
  $5BC46E0569261879018906DEC3127961 v41; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v42[416]; // [rsp+170h] [rbp+70h] BYREF

  if ( TraceLoggingProviderEnabled(&stru_14033C520, a2, 0x600000000001uLL) )
  {
    EtwpInitStateChangeInfo((__int64)BugCheckParameter1, (__int64)v35);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)a2 - BugCheckParameter1[232].Count;
    v6 = *(_BYTE *)(a2 + 52);
    v35[1] = *(_BYTE *)(a2 + 48);
    v7 = v4;
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24);
    v36 = v7 / 0x2710;
    v35[0] = v6;
    v37 = v8 / 0x2710;
    v38 = v5 / 0x2710;
    v39 = *(_QWORD *)(a2 + 32) / 0x2710uLL;
    v40 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v6 == 3 )
    {
      PsQueryStatisticsProcess((__int64)BugCheckParameter1, v22);
      ProcessHandleCount = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v9 = -1;
      v10 = -1;
      v28 = BugCheckParameter1[158].Count << 12;
      v29 = BugCheckParameter1[159].Count << 12;
      v11 = -1;
      if ( v23 < 0xFFFFFFFFLL )
        v11 = v23;
      v31 = v11;
      v12 = -1;
      if ( v24 < 0xFFFFFFFFLL )
        v12 = v24;
      v32 = v12;
      if ( v25 / 1024 < 0xFFFFFFFFLL )
        v10 = v25 / 1024;
      v33 = v10;
      if ( v26 / 1024 < 0xFFFFFFFFLL )
        v9 = v26 / 1024;
      v34 = v9;
      v30 = v22[3];
      EtwpWriteAppStateChangeWithStats();
      p_ProcessHandleCount = (unsigned int *)&ProcessHandleCount;
    }
    else
    {
      EtwpWriteAppStateChange();
      p_ProcessHandleCount = 0LL;
    }
    if ( TraceLoggingProviderEnabled(&stru_14033C520, v13, 0x400000000000uLL) )
    {
      memset(v42, 0, 0x198uLL);
      v15 = 0;
      v18 = 0;
      v16 = 1;
      v19 = 0LL;
      v20 = 0LL;
      P = 0LL;
      if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection(BugCheckParameter1 + 95) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v41);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, v42, &v18);
      ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[107], (unsigned __int64)v17);
      if ( v16 )
      {
        if ( BugCheckParameter1[127].Count && EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)BugCheckParameter1) )
          EtwpQueryProcessCommandLine(BugCheckParameter1, &v20);
        EtwpQueryProcessOtherInfo(BugCheckParameter1, &v19);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess(&v41, 0LL);
        ExReleaseRundownProtection(BugCheckParameter1 + 95);
      }
      EtwpWriteAppStateChangeSummary(
        (__int64)BugCheckParameter1,
        v35,
        p_ProcessHandleCount,
        (__int64)v42,
        &v19,
        (unsigned __int16 *)&v20);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
}
