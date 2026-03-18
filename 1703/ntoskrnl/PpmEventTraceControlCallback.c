/*
 * XREFs of PpmEventTraceControlCallback @ 0x1405D6570
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PpmEventPlatformVetoRundown @ 0x140235D08 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x140235FD8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x140236770 (PpmEventTraceLPIState.c)
 *     PpmEventVirtualHeterogeneitySupport @ 0x140581A64 (PpmEventVirtualHeterogeneitySupport.c)
 *     PpmEventHeteroPolicy @ 0x1405C0784 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x1405CCBA0 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x1406CF138 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x1406D34C8 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x1406D35EC (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1406D36C4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x1406D3924 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406D3A14 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1406D3C70 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x1406D3CFC (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x1406D3F34 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventVetoReasonRundown @ 0x1406D4300 (PpmEventVetoReasonRundown.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 Prcb; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned __int16 *v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  __int16 v32; // [rsp+30h] [rbp-10h]
  ULONG v33; // [rsp+68h] [rbp+28h] BYREF

  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v31 = qword_1403E42B8[0];
    v32 = 0;
    v30 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v30) )
    {
      Prcb = KeGetPrcb(v33);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown(v7, v6, v8);
      PpmEventVirtualHeterogeneitySupport(1);
      PpmEventHeteroPolicy(1);
    }
    for ( i = 0; i < PpmParkNumNodes; ++i )
      PpmEventTraceParkNodeRundown(PpmParkNodes + 248LL * i);
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    PpmEventTracePpmProfileStatusRundown(v11, v10, v12);
    PpmEventTraceProfiles(1);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings(v14, v13, v15);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown(v17, v16, v18);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      PpmEventTraceCoordinatedIdleStates(v21, v20, v22);
      PpmEventTracePlatformIdleAccounting(v24, v23, v25);
      PpmEventVetoReasonRundown(v27, v26, v28);
      PpmEventPlatformVetoRundown();
      v31 = qword_1403E42B8[0];
      v32 = 0;
      v30 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v33, &v30) )
      {
        v29 = KeGetPrcb(v33);
        PpmEventProcessorVetoRundown(v29);
        PpmEventTraceProcessorIdle(v29);
      }
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
      PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    }
  }
}
