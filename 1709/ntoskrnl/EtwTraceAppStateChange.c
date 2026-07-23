/*
 * XREFs of EtwTraceAppStateChange @ 0x1404FE234
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x1404AD730 (PsQueryStatisticsProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404DC228 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404DCA98 (EtwpQueryTokenPackageInfo.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1404DD394 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x1404DD438 (EtwpWriteAppStateChange.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1404DD4C8 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpInitStateChangeInfo @ 0x1404DD67C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404FE504 (EtwpWriteAppStateChangeSummary.c)
 *     ObGetProcessHandleCount @ 0x14050523C (ObGetProcessHandleCount.c)
 */

void __fastcall EtwTraceAppStateChange(__int64 BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  UCHAR v14; // dl
  int *p_ProcessHandleCount; // r15
  char v16; // r14
  char v17; // si
  PACCESS_TOKEN v18; // rbx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  _QWORD v23[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int ProcessHandleCount; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+B4h] [rbp-4Ch]
  __int64 v30; // [rsp+BCh] [rbp-44h]
  __int64 v31; // [rsp+C4h] [rbp-3Ch]
  int v32; // [rsp+CCh] [rbp-34h]
  int v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D4h] [rbp-2Ch]
  int v35; // [rsp+D8h] [rbp-28h]
  _BYTE v36[41]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int64 v37; // [rsp+105h] [rbp+5h]
  unsigned __int64 v38; // [rsp+10Dh] [rbp+Dh]
  unsigned __int64 v39; // [rsp+115h] [rbp+15h]
  unsigned __int64 v40; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v41; // [rsp+125h] [rbp+25h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v42; // [rsp+140h] [rbp+40h] BYREF
  WCHAR PackageSize[208]; // [rsp+170h] [rbp+70h] BYREF

  if ( TraceLoggingProviderEnabled(&stru_140354B50, a2, 0x600000000001uLL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, (__int64)v36);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 1880);
    v7 = *(_BYTE *)(a2 + 52);
    v36[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v36[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    v37 = v8 / 0x2710;
    v38 = v9 / 0x2710;
    v39 = v6 / 0x2710;
    v40 = v5 / 0x2710;
    v41 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      PsQueryStatisticsProcess(BugCheckParameter1, v23);
      ProcessHandleCount = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      v29 = *(_QWORD *)(BugCheckParameter1 + 1264) << 12;
      v30 = *(_QWORD *)(BugCheckParameter1 + 1272) << 12;
      v12 = -1;
      if ( v24 < 0xFFFFFFFFLL )
        v12 = v24;
      v32 = v12;
      v13 = -1;
      if ( v25 < 0xFFFFFFFFLL )
        v13 = v25;
      v33 = v13;
      if ( v26 / 1024 < 0xFFFFFFFFLL )
        v11 = v26 / 1024;
      v34 = v11;
      if ( v27 / 1024 < 0xFFFFFFFFLL )
        v10 = v27 / 1024;
      v35 = v10;
      v31 = v23[3];
      EtwpWriteAppStateChangeWithStats();
      p_ProcessHandleCount = &ProcessHandleCount;
    }
    else
    {
      EtwpWriteAppStateChange();
      LODWORD(p_ProcessHandleCount) = 0;
    }
    if ( TraceLoggingProviderEnabled(&stru_140354B50, v14, 0x400000000000uLL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v16 = 0;
      v19 = 0;
      v17 = 1;
      v20 = 0LL;
      v21 = 0LL;
      P = 0LL;
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v42);
          v16 = 1;
        }
        else
        {
          v17 = 0;
        }
      }
      v18 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v18, PackageSize, &v19);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v18);
      if ( v17 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1016) && EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
          EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)&v21);
        EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v20);
      }
      if ( v16 )
      {
        KiUnstackDetachProcess(&v42, 0LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        (unsigned int)v36,
        (_DWORD)p_ProcessHandleCount,
        (unsigned int)PackageSize,
        (__int64)&v20,
        (__int64)&v21);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
}
