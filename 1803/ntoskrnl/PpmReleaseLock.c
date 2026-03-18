/*
 * XREFs of PpmReleaseLock @ 0x140036890
 * Callers:
 *     PpmCheckStart @ 0x1400356C0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x1400367B0 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x140073580 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140144040 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14014DE0C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14014DE28 (PpmCheckResumeStatisticsCollection.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140271C34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140273790 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x140277F50 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x14027F090 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1402829EC (PpmParkSetLpiCap.c)
 *     PpmInfoReleaseLocks @ 0x140519DCC (PpmInfoReleaseLocks.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x1405F2B50 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 *     PopPpmHeteroPolicyCallback @ 0x14063EA10 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140648FC4 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x140655C50 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14075F240 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x140761350 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x140764B90 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14076A578 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x14076EBC0 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14076ED30 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14076F130 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14076FC30 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14076FDB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14076FE88 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1408C19C4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

void __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbp
  volatile signed __int32 *v2; // rdi
  int v4; // r14d
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r12
  int v7; // eax
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rcx
  char v13; // al
  bool v14; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v16; // r9
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  int v20; // r9d
  __int64 *v21; // r8
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned __int8 v26; // al
  __int64 v27; // r9
  _QWORD *v28; // rcx
  int v29; // r8d
  __int64 *v30; // rdx
  __int64 v31; // [rsp+80h] [rbp+8h]
  struct _KPRCB *v32; // [rsp+80h] [rbp+8h]
  _KTHREAD *v33; // [rsp+88h] [rbp+10h]
  struct _KPRCB *v34; // [rsp+90h] [rbp+18h]
  _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v1 = *a1;
  v2 = (volatile signed __int32 *)(a1 + 1);
  *a1 = 0LL;
  if ( (a1[1] & 0x7F) != 0 )
  {
    v4 = 0;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(a1 + 1);
    v7 = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = 1;
    if ( v7 )
    {
LABEL_6:
      _InterlockedAnd(v2, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
      goto LABEL_7;
    }
    v8 = (_QWORD *)a1[2];
    v9 = a1 + 2;
    if ( !v4 )
    {
      if ( v8 == v9 )
        goto LABEL_6;
      while ( 1 )
      {
        v10 = (_QWORD *)*v8;
        v11 = (__int64)v8;
        v8 = v10;
        v12 = *(_QWORD **)(v11 + 8);
        if ( v10[1] != v11 || *v12 != v11 )
          __fastfail(3u);
        *v12 = v10;
        v10[1] = v12;
        v13 = *(_BYTE *)(v11 + 16);
        if ( v13 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v11, *(unsigned __int16 *)(v11 + 18), 0LL) )
        {
          v14 = (*((_DWORD *)a1 + 3))-- == 1;
          if ( v14 )
            goto LABEL_6;
        }
LABEL_14:
        if ( v8 == v9 )
          goto LABEL_6;
      }
      if ( v13 != 2 )
      {
        KiTryUnwaitThread(CurrentPrcb, v11, 256LL, 0LL);
        goto LABEL_14;
      }
      *(_BYTE *)(v11 + 17) = 5;
      v31 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)v11 = 0LL;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v34 = KeGetCurrentPrcb();
      CurrentThread = v34->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
        EtwTraceEnqueueWork(v16, v11, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v31);
      v17 = (_QWORD *)(v31 + 8);
      v18 = v31;
      if ( (_QWORD *)*v17 != v17
        && *(_DWORD *)(v31 + 40) < *(_DWORD *)(v31 + 44)
        && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v31 || CurrentThread->WaitReason != 15) )
      {
        v19 = KiWakeQueueWaiter((__int64)v34, v31, v11);
        v18 = v31;
        if ( v19 )
          goto LABEL_32;
        v17 = (_QWORD *)(v31 + 8);
      }
      v20 = *(_DWORD *)(v18 + 4);
      *(_DWORD *)(v18 + 4) = v20 + 1;
      v21 = *(__int64 **)(v18 + 32);
      if ( *v21 != v18 + 24 )
        __fastfail(3u);
      *(_QWORD *)v11 = v18 + 24;
      *(_QWORD *)(v11 + 8) = v21;
      *v21 = v11;
      *(_QWORD *)(v18 + 32) = v11;
      if ( !v20 && (_QWORD *)*v17 != v17 )
      {
        KiWakeOtherQueueWaiters(v34, v18);
        v18 = v31;
      }
LABEL_32:
      _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
      v14 = (*((_DWORD *)a1 + 3))-- == 1;
      if ( v14 )
        goto LABEL_6;
      goto LABEL_14;
    }
    if ( v8 == v9 )
    {
LABEL_56:
      v9[1] = v9;
      *v9 = v9;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v22 = (__int64)v8;
      v8 = (_QWORD *)*v8;
      v23 = *(_BYTE *)(v22 + 16);
      if ( v23 == 1 )
      {
        v24 = *(unsigned __int16 *)(v22 + 18);
LABEL_54:
        KiTryUnwaitThread(CurrentPrcb, v22, v24, 0LL);
        goto LABEL_55;
      }
      if ( v23 != 2 )
      {
        v24 = 256LL;
        goto LABEL_54;
      }
      *(_BYTE *)(v22 + 17) = 5;
      v25 = *(_QWORD *)(v22 + 24);
      *(_QWORD *)v22 = 0LL;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v32 = KeGetCurrentPrcb();
      v33 = v32->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v26 = KeIsThreadRunning(v32->CurrentThread);
        EtwTraceEnqueueWork(v27, v22, v26);
      }
      KiAcquireKobjectLockSafe(v25);
      v28 = (_QWORD *)(v25 + 8);
      if ( (_QWORD *)*v28 == v28
        || *(_DWORD *)(v25 + 40) >= *(_DWORD *)(v25 + 44)
        || v33->Queue == (_DISPATCHER_HEADER *volatile)v25 && v33->WaitReason == 15 )
      {
        goto LABEL_48;
      }
      if ( !KiWakeQueueWaiter((__int64)v32, v25, v22) )
        break;
LABEL_52:
      _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
LABEL_55:
      if ( v8 == v9 )
        goto LABEL_56;
    }
    v28 = (_QWORD *)(v25 + 8);
LABEL_48:
    v29 = *(_DWORD *)(v25 + 4);
    *(_DWORD *)(v25 + 4) = v29 + 1;
    v30 = *(__int64 **)(v25 + 32);
    if ( *v30 != v25 + 24 )
      __fastfail(3u);
    *(_QWORD *)v22 = v25 + 24;
    *(_QWORD *)(v22 + 8) = v30;
    *v30 = v22;
    *(_QWORD *)(v25 + 32) = v22;
    if ( !v29 && (_QWORD *)*v28 != v28 )
      KiWakeOtherQueueWaiters(v32, v25);
    goto LABEL_52;
  }
  if ( *((_DWORD *)a1 + 3) != 1 )
  {
    v4 = 1;
    goto LABEL_3;
  }
LABEL_7:
  if ( v1 )
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
}
