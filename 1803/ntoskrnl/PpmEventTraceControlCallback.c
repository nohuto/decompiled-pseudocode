/*
 * XREFs of PpmEventTraceControlCallback @ 0x140655C50
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PpmEventPlatformVetoRundown @ 0x140280D18 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x140280FE8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x140281764 (PpmEventTraceLPIState.c)
 *     PpmEventQosSupport @ 0x14061049C (PpmEventQosSupport.c)
 *     PpmEventHeteroPolicy @ 0x14063FBC8 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x1406491A8 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x14076A6E0 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x14076C834 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x14076C958 (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x14076CA30 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x14076CC88 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x14076CD78 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x14076CFE0 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x14076D06C (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x14076D29C (PpmEventTraceProcessorPerformance.c)
 *     PpmEventVetoReasonRundown @ 0x14076D660 (PpmEventVetoReasonRundown.c)
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
    v31 = qword_14044C5D8[0];
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
      PpmEventQosSupport(1);
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
      v31 = qword_14044C5D8[0];
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
