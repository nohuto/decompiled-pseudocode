/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x1404714E0
 * Callers:
 *     NtSetSystemPowerState @ 0x14047674C (NtSetSystemPowerState.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     KeSuspendThread @ 0x14004584C (KeSuspendThread.c)
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     StringCchPrintfW @ 0x1400CC590 (StringCchPrintfW.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     PopThermalSxEntry @ 0x14014DA64 (PopThermalSxEntry.c)
 *     ExWakeTimersPause @ 0x14014DD10 (ExWakeTimersPause.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14014DDE0 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14014DE0C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14014DE28 (PpmCheckResumeStatisticsCollection.c)
 *     PsIumResumeAfterHibernate @ 0x14014DE60 (PsIumResumeAfterHibernate.c)
 *     PopThermalSxExit @ 0x14014DE80 (PopThermalSxExit.c)
 *     ExWakeTimersResume @ 0x14014DF48 (ExWakeTimersResume.c)
 *     PopSetPowerActionState @ 0x14014E860 (PopSetPowerActionState.c)
 *     PopRunMaximumIrpWorkers @ 0x140155118 (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x140155B9C (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140155F44 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140156204 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401562A4 (PopIgnoreBatteryStatusChange.c)
 *     PopForceCompleteCsSleepStudySession @ 0x140157908 (PopForceCompleteCsSleepStudySession.c)
 *     PoSetUserPresent @ 0x14016DAE0 (PoSetUserPresent.c)
 *     ZwSetSystemPowerState @ 0x1401AA920 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x140271630 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x140275C64 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14027A8FC (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x1402BAB80 (ExDeleteWakeTimerInfo.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopFlushVolumes @ 0x140470660 (PopFlushVolumes.c)
 *     PopDiagTracePostSleepNotification @ 0x140470AB8 (PopDiagTracePostSleepNotification.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140470C5C (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x140470CD8 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140470D0C (PopCaptureTimeOnProcZero.c)
 *     PopNewWakeInfo @ 0x140470EF8 (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14047140C (ExUpdateSystemTimeFromCmos.c)
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x140472178 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x14047632C (IoFreePoDeviceNotifyList.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140486F80 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140487190 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140487220 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x14048773C (ExGetNextWakeTime.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PopIsDozeSupported @ 0x14051CC74 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
 *     PopInitSystemSleeperThread @ 0x1405EA6E0 (PopInitSystemSleeperThread.c)
 *     PopQueueBatteryStatusTimeout @ 0x1405EA7B8 (PopQueueBatteryStatusTimeout.c)
 *     PopEsExitSleep @ 0x1405EA804 (PopEsExitSleep.c)
 *     PopCurrentPowerStatePrecise @ 0x1405EA830 (PopCurrentPowerStatePrecise.c)
 *     PopBootLoaderTraceProcess @ 0x1405EA854 (PopBootLoaderTraceProcess.c)
 *     PpmPerfReApplyStates @ 0x1405EA8BC (PpmPerfReApplyStates.c)
 *     PopSetSleepMarker @ 0x1405EAA78 (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x1405EBEF8 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405EC638 (PopNotifyCallbacksPreSleep.c)
 *     PoClearBroadcast @ 0x1405ECC28 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x1405ECC84 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1405EE5D4 (PopEsEnterSleepShutdown.c)
 *     PopFastS4Check @ 0x1405EEA68 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x1405EEC60 (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x1405EED98 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x1405EF064 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x1405EF1A0 (PopAdvanceSystemPowerState.c)
 *     PopAcquireTransitionLock @ 0x1405EF3F4 (PopAcquireTransitionLock.c)
 *     CmSetLazyFlushState @ 0x1405EF43C (CmSetLazyFlushState.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     PopInitSIdle @ 0x1406118BC (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x140613A48 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x1406143CC (PopResetActionDefaults.c)
 *     MmZeroPageFileAtShutdown @ 0x14074A344 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x14075D2EC (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x14075D66C (PopSetShutdownMarker.c)
 *     PopSetSystemShutdownMarker @ 0x14075D680 (PopSetSystemShutdownMarker.c)
 *     PopZeroHiberFile @ 0x140762A08 (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x1407653E4 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x140778C00 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x140786E90 (RtlSetSystemBootStatusEx.c)
 */

NTSTATUS __fastcall PopTransitionSystemPowerStateEx(__int64 a1)
{
  int v1; // edi
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  int v5; // eax
  POWER_ACTION v6; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  POWER_ACTION v9; // esi
  int v10; // eax
  bool v11; // cc
  int v12; // eax
  POWER_ACTION v13; // eax
  _BYTE *v14; // rsi
  unsigned int v15; // eax
  unsigned int *v16; // r14
  int v17; // eax
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int HiberContext; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int inited; // eax
  __int64 v30; // r10
  _DWORD *v31; // r9
  __int64 *v32; // rsi
  int v33; // r8d
  int v34; // ecx
  int v35; // r8d
  int v36; // ecx
  __int64 v37; // rcx
  void *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v45; // edx
  char NextSystemPowerState; // al
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 *v53; // rax
  _DWORD *v54; // rdx
  __int64 *v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 *v57; // rsi
  __int64 *v58; // r14
  char NextWakeTime; // al
  int v60; // eax
  char v61; // al
  __int64 v62; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v64; // [rsp+50h] [rbp-30h] BYREF
  char *v65; // [rsp+58h] [rbp-28h]
  int v66; // [rsp+60h] [rbp-20h]
  int v67; // [rsp+68h] [rbp-18h]
  unsigned __int64 v68; // [rsp+70h] [rbp-10h]
  int v69; // [rsp+78h] [rbp-8h]
  char v70; // [rsp+C0h] [rbp+40h] BYREF
  int v71; // [rsp+C8h] [rbp+48h]

  v1 = 0;
  v2 = (_DWORD *)(a1 + 232);
  *(_BYTE *)(a1 + 24) = 0;
  v4 = (_DWORD *)(a1 + 236);
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 148) = 1;
  *(_DWORD *)(a1 + 152) = 1;
  *(_BYTE *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 360) = 1LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_BYTE *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  v5 = PopSimulate & 0x10000;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 372) = v5 != 0 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8LL, 1LL);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - 1) > 5 )
    return -1073741811;
  v6 = *(_DWORD *)a1;
  v71 = 6;
  if ( (unsigned int)(v6 - 1) > 6
    || (*(_DWORD *)(a1 + 8) & 0xCFFFFC0) != 0
    || dword_1403AA074 >= 16 && v6 < PowerActionShutdown )
  {
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_BYTE *)(a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*(POWER_ACTION *)a1, *(SYSTEM_POWER_STATE *)(a1 + 4), *(_DWORD *)(a1 + 8));
    else
      return -1073741727;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v9 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 96) = CurrentServerSilo;
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    if ( v9 == PowerActionShutdown )
      PopReadShutdownPolicy();
    *(_QWORD *)(a1 + 12) = 0LL;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    v10 = dword_1403AA074;
    v11 = dword_1403AA074 < 16;
    *(_DWORD *)(a1 + 124) = 128;
    if ( !v11 )
      v10 = 5;
    *(_DWORD *)(a1 + 120) = v10;
    PopAcquireTransitionLock();
    MmLockPagableSectionByHandle(ExPageLockHandle);
    PopRunMaximumIrpWorkers();
    PopUnlockAfterSleepWorkItem.Parameter = 0LL;
    PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
    PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
    CmSetLazyFlushState(0LL);
    PopNotifyCallbacksPreSleep();
    ExSwapinWorkerThreads(0LL);
    v12 = PoInitializeBroadcast(0LL);
    *(_DWORD *)(a1 + 104) = v12;
    if ( v12 >= 0 )
    {
      PopCheckPowerSourceAfterRtcWakeCancel();
      PopAcquirePolicyLock();
      *(_BYTE *)(a1 + 64) = 1;
      PopFilterCapabilities(&PopCapabilities, &unk_1403AA128);
      if ( byte_1403AA061 )
      {
        if ( byte_1403AA061 != 2 )
        {
          PopReleasePolicyLock();
          PoClearBroadcast();
          ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
          return -1073741791;
        }
      }
      else
      {
        PopResetActionDefaults();
      }
      PopSetPowerActionState(3);
      qword_1403AA098 = (__int64)qword_1403A9FF0;
      PopExecutePowerAction(a1 + 120, 0, a1 + 12, *(_DWORD *)(a1 + 4), 1);
      PopIgnoreBatteryStatusChange();
      PopCheckResiliencyScenarios();
      PopEnforceResiliencyScenarios(a1 + 248);
      PopExecuteOnTargetProcessors(
        (__int64)KeActiveProcessors,
        (__int64)PpmStopIllegalProcessorThrottleLogging,
        0LL,
        0LL);
      v13 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 6 )
      {
        LODWORD(qword_1403AA064) = 6;
        v13 = *(_DWORD *)a1;
      }
      if ( (unsigned int)(v13 - 4) <= 2 && PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(PopHiberInfo);
      v14 = (_BYTE *)(a1 + 88);
      v15 = *(_DWORD *)a1 - 2;
      *(_BYTE *)(a1 + 88) = 0;
      v16 = (unsigned int *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
      if ( v15 <= 1 )
        PoPowerDownActionInProgress = 1;
LABEL_19:
      *(_DWORD *)(a1 + 104) = -1073741536;
      while ( 1 )
      {
        if ( !*(_BYTE *)(a1 + 64) )
        {
          PopAcquirePolicyLock();
          *(_BYTE *)(a1 + 64) = 1;
        }
        if ( !(_DWORD)qword_1403AA064 )
        {
          *(_DWORD *)(a1 + 104) = 0;
          goto LABEL_73;
        }
        *(_BYTE *)(a1 + 144) = PopAction;
        PopAction = 0;
        v17 = *(_DWORD *)(a1 + 104);
        if ( v17 == -1073741536 )
        {
          if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && (dword_1403AA06C & 0x80000000) == 0 && (dword_1403AA06C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            goto LABEL_73;
          }
          PopActionRetrieveInitialState(
            (_DWORD *)&qword_1403AA064 + 1,
            (_DWORD *)(a1 + 28),
            &dword_1403AA080,
            (_BYTE *)(a1 + 88));
          if ( (unsigned int)(qword_1403AA064 - 4) <= 2 )
          {
            byte_1403AA062 = 1;
            dword_1403AA06C = *(_DWORD *)(a1 + 8);
          }
          *(_DWORD *)(a1 + 104) = 0;
          v17 = 0;
        }
        if ( v17 < 0 )
          goto LABEL_73;
        PopReleasePolicyLock();
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 360) = 1;
        *(_DWORD *)(a1 + 364) = 0;
        PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 360, a1 + 364);
        v18 = (_DWORD *)(a1 + 364);
        if ( (dword_1403AA06C & 0x40000000) != 0 )
        {
          *(_DWORD *)(a1 + 360) = 0;
          *v18 = 0;
        }
        if ( !byte_1403AA146 && !byte_1403AA134 && !byte_1403AA13B )
          *v18 = 0;
        PopInitializePowerPolicySimulate();
        dword_1403AA084 = dword_1403AA080;
        v19 = ((unsigned int)dword_1403AA06C >> 27) & 2;
        *(_DWORD *)(a1 + 108) = v19;
        PopAdvanceSystemPowerState(&dword_1403AA084, v19, HIDWORD(qword_1403AA064), *v16);
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          byte_1403AA1C0 = 1;
          *(_BYTE *)(a1 + 36) = 0;
          dword_1403AA088 = 5;
          *(_DWORD *)(a1 + 44) = 6;
          v21 = dword_1403AA080;
        }
        else
        {
          if ( (unsigned __int8)PopFastS4Check() )
          {
            *(_DWORD *)(a1 + 44) = dword_1403AA080;
            v22 = 6;
            dword_1403AA088 = 5;
            *(_BYTE *)(a1 + 36) = 1;
            goto LABEL_38;
          }
          dword_1403AA088 = dword_1403AA080;
          *(_DWORD *)(a1 + 44) = dword_1403AA080;
          v21 = dword_1403AA080;
          *(_BYTE *)(a1 + 36) = 0;
        }
        v22 = PopPowerStateHandlerLookup[v21];
LABEL_38:
        *(_DWORD *)(a1 + 68) = v22;
        if ( v22 > 6 || !qword_1403AAAA8[3 * (int)v22] )
          goto LABEL_130;
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          v23 = 6LL;
        }
        else
        {
          if ( byte_1403AA062 )
          {
            PopSetShutdownMarker();
            PopSetSystemShutdownMarker();
            goto LABEL_43;
          }
          v23 = (unsigned int)dword_1403AA080;
        }
        PopSetSleepMarker(v23);
LABEL_43:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *(_BYTE *)(a1 + 64) = 1;
          goto LABEL_19;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_1403AA07C = 3;
        LOBYTE(v24) = *v14;
        PopDiagTraceKernelQueriesAllowed(v24);
        if ( !*v14
          || (v25 = PopSetDevicesSystemState(),
              v20 = 0x80000000LL,
              *(_DWORD *)(a1 + 104) = v25,
              (int)(v25 + 0x80000000) < 0)
          || v25 == -1073741536 )
        {
          if ( *(int *)(a1 + 104) >= 0 )
          {
            PopCheckpointSystemSleep(13LL);
            HiberContext = PopAllocateHiberContext();
            *(_DWORD *)(a1 + 104) = HiberContext;
            if ( HiberContext >= 0 )
            {
              *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                        qword_1403AA064,
                                        dword_1403AA080,
                                        dword_1403AA088,
                                        *(_DWORD *)(a1 + 8),
                                        1);
              PopTransitionCheckpoint(9LL, 0LL);
              if ( !byte_1403AA062 )
              {
                PopDiagTracePreSleepNotification(
                  *(_DWORD *)(a1 + 44),
                  dword_1403AA088,
                  dword_1403AA074,
                  dword_1403AA078,
                  *(_DWORD *)(a1 + 112));
                PopCheckpointSystemSleep(16LL);
                PopUmpoSendFlushSleepStudyLoggerNotification();
              }
              PopEsEnterSleepShutdown();
              PopForceCompleteCsSleepStudySession(dword_1403AA074);
              PopThermalSxEntry(v27);
              if ( !*(_BYTE *)(a1 + 24) )
              {
                if ( byte_1403AA062 )
                {
                  v70 = 1;
                  v64 = 5;
                  v66 = 1;
                  v65 = &v70;
                  v67 = 11;
                  v68 = 0xFFFFF780000002C4uLL;
                  v69 = 4;
                  RtlSetSystemBootStatusEx(&v64, 2LL, 0LL);
                }
                *(_BYTE *)(a1 + 24) = 1;
              }
              PopFlushVolumes(dword_1403AA080);
              if ( dword_1403AA088 < dword_1403AA080 )
                dword_1403AA088 = dword_1403AA080;
              byte_1403AA07C = 2;
              if ( byte_1403AA062 )
              {
                PopFxPrepareDevicesForShutdown();
                IoFreePoDeviceNotifyList(qword_1403AA098 + 48);
                if ( dword_1403AA074 == 2 )
                  PopCriticalShutdownInProgress = 1;
                PopTransitionCheckpoint(8LL, 2LL);
                if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                  PopGracefulShutdown(0LL);
                PopShutdownWorkItem.Parameter = 0LL;
                PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
                PopShutdownWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
                KeSuspendThread((__int64)KeGetCurrentThread());
                return -1073741077;
              }
              v28 = *(unsigned int *)(a1 + 68);
              KeMtrrComparisonFailed = 0;
              inited = PopInitSystemSleeperThread(v28, a1 + 264);
              *(_DWORD *)(a1 + 104) = inited;
              if ( inited >= 0 )
              {
                if ( !byte_1403AA110 )
                {
                  ExWakeTimersPause();
                  byte_1403AA110 = 1;
                }
                *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000008];
                v30 = MEMORY[0xFFFFF78000000014];
                v31 = PopPolicy;
                *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000014];
                *(_QWORD *)(a1 + 224) = 0LL;
                if ( v31[22]
                  && dword_1403AA080 != 5
                  && (unsigned __int8)PopIsDozeSupported(&PopCapabilities)
                  && (dword_1403AA06C & 0x40000000) == 0 )
                {
                  v48 = *(_QWORD *)(a1 + 192);
                  *(_QWORD *)(a1 + 216) = v48;
                  v49 = v48 + 10000000LL * *(unsigned int *)(v47 + 88);
                  *(_QWORD *)(a1 + 224) = -1LL;
                  goto LABEL_142;
                }
                if ( byte_1403AAB74
                  && dword_1403AA080 == 5
                  && !byte_1403AA1C0
                  && qword_1403A9FA8
                  && ((dword_1403AA074 - 11) & 0xFFFFFFFD) == 0 )
                {
                  v50 = qword_1403A9FA8 - v30;
                  *(_QWORD *)(a1 + 352) = qword_1403A9FA8 - v30;
                  v51 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                  *(_QWORD *)(a1 + 224) = -2LL;
                  v52 = v51 + v50;
                  v49 = v52 + *(_QWORD *)(a1 + 192);
                  *(_QWORD *)(a1 + 352) = v52;
LABEL_142:
                  *(_QWORD *)(a1 + 216) = v49;
                }
                if ( *(_QWORD *)(a1 + 224) == -1LL && !qword_1403AA120 )
                  qword_1403AA120 = *(_QWORD *)(a1 + 192);
                v32 = &qword_1403AA0C8;
                memset(&qword_1403AA0C8, 0, 0x48uLL);
                dword_1403AA0C0 = 3;
                if ( byte_1403AA1C0 || dword_1403AA074 == 14 )
                  goto LABEL_64;
                if ( dword_1403AA080 == 5 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v53 = qword_1403AA0D0;
                    do
                    {
                      *v53 = 0LL;
                      v53 += 3;
                    }
                    while ( (__int64)v53 < (__int64)&qword_1403AA100 );
                  }
                }
                if ( *(_QWORD *)(a1 + 216) )
                {
                  if ( *(_QWORD *)(a1 + 224) == -2LL )
                  {
                    v54 = (_DWORD *)(a1 + 360);
                    if ( *(_DWORD *)(a1 + 360) )
                    {
                      qword_1403AA0C8 = *(_QWORD *)(a1 + 216);
                      qword_1403AA0D8[0] = *(_QWORD *)(a1 + 224);
                    }
                    if ( *(_DWORD *)(a1 + 364) )
                    {
                      qword_1403AA0E0 = *(_QWORD *)(a1 + 216);
                      qword_1403AA0F0 = *(_QWORD *)(a1 + 224);
                    }
LABEL_161:
                    v56 = qword_1403AA118;
                    *(_QWORD *)(a1 + 80) = qword_1403AA118;
                    if ( v56 )
                    {
                      if ( v56 < *(_QWORD *)(a1 + 192) + 20000000LL )
                        v56 = *(_QWORD *)(a1 + 192) + 20000000LL;
                      *(_QWORD *)(a1 + 80) = v56;
                    }
                    if ( *v54 )
                    {
                      if ( *v54 != 2 || (LOBYTE(v33) = 1, PopSimulate < 0) )
                        LOBYTE(v33) = 0;
                      *(_BYTE *)(a1 + 208) = v33;
                      v57 = (__int64 *)(a1 + 56);
                      v58 = (__int64 *)(a1 + 240);
                      NextWakeTime = ExGetNextWakeTime(
                                       (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                                       *(_QWORD *)(a1 + 216),
                                       v33,
                                       (int)a1 + 56,
                                       a1 + 240);
                      *(_BYTE *)(a1 + 368) = NextWakeTime;
                      if ( NextWakeTime )
                      {
                        qword_1403AA0C8 = *v57;
                        qword_1403AA0D8[0] = *v58;
                      }
                    }
                    else
                    {
                      v57 = (__int64 *)(a1 + 56);
                      v58 = (__int64 *)(a1 + 240);
                    }
                    v60 = *(_DWORD *)(a1 + 364);
                    if ( v60 )
                    {
                      if ( v60 != 2 || (LOBYTE(v33) = 1, PopSimulate < 0) )
                        LOBYTE(v33) = 0;
                      *(_BYTE *)(a1 + 208) = v33;
                      v61 = ExGetNextWakeTime(
                              (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                              *(_QWORD *)(a1 + 216),
                              v33,
                              (_DWORD)v57,
                              (__int64)v58);
                      *(_BYTE *)(a1 + 368) = v61;
                      if ( v61 )
                      {
                        qword_1403AA0E0 = *v57;
                        qword_1403AA0F0 = *v58;
                      }
                    }
LABEL_64:
                    qword_1403AA0D0[0] = qword_1403AA0C8;
                    if ( qword_1403AA0C8
                      && qword_1403AA0C8 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 372) )
                    {
                      qword_1403AA0D0[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 372);
                    }
                    qword_1403AA0E8 = qword_1403AA0E0;
                    if ( qword_1403AA0E0
                      && qword_1403AA0E0 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 372) )
                    {
                      qword_1403AA0E8 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 372);
                    }
                    qword_1403AA490 = KeQueryPerformanceCounter(0LL).QuadPart;
                    ExUpdateSystemTimeFromCmos(1, 1u);
                    ((void (__fastcall *)(__int64, __int64))off_1403986A0)(qword_1403AA0D0[0], qword_1403AA0E8);
                    PopSetDevicesSystemState();
                    PopNewWakeInfo();
                    *(_QWORD *)(a1 + 344) = MEMORY[0xFFFFF78000000008];
                    *(_DWORD *)(a1 + 148) = dword_1403AAA2C;
                    PpmCheckPausePpmEngineForSx();
                    KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
                    KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
                    qword_1403AA250 = 0LL;
                    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
                    PpmCheckResumePpmEngineFromSx();
                    v34 = dword_1403AA080;
                    if ( PoResumeFromHibernate )
                      v34 = dword_1403AA088;
                    dword_1403AA08C = v34;
                    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
                    {
                      *(_DWORD *)(a1 + 44) = 6;
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 44) = dword_1403AA080;
                      v71 = dword_1403AA080;
                    }
                    v35 = dword_1403AA08C;
                    v36 = v71;
                    *(_DWORD *)(a1 + 40) = dword_1403AA08C;
                    PopDiagTracePostSleepNotification(
                      v36,
                      dword_1403AA088,
                      v35,
                      qword_1403AA0D0[0],
                      qword_1403AA0E8,
                      qword_1403AA0D8[0],
                      qword_1403AA0F0);
                    if ( KeMtrrComparisonFailed )
                      PopDiagTraceMtrrError();
                    if ( *(int *)(a1 + 104) < 0 && dword_1403AA080 == 5 )
                    {
                      StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                      RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                      IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                      PopDiagTraceHibernateErrorStatus(*(unsigned int *)(a1 + 104));
                    }
LABEL_73:
                    if ( byte_1403AA1C0 )
                    {
                      qword_1403AA680 = KeQueryPerformanceCounter(0LL).QuadPart;
                      dword_1403AA1A4 = PopQpcTimeInMs(&qword_1403AA678, &qword_1403AA680);
                    }
                    if ( *(int *)(a1 + 104) >= 0 )
                    {
                      qword_1403AA0B0 = *(_QWORD *)(a1 + 344);
                      ExUpdateSystemTimeFromCmos(1, 1u);
                      LOBYTE(v37) = 1;
                      if ( ((unsigned __int8 (__fastcall *)(__int64))off_140398A28[0])(v37) )
                        ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
                      qword_1403AA4A8 = KeQueryPerformanceCounter(0LL).QuadPart;
                      PfPowerActionNotify(2LL, 0LL, 0LL);
                      qword_1403AA0A8 = MEMORY[0xFFFFF78000000008];
                      PopDiagComputeEarlyHiberStats();
                      if ( *(_DWORD *)(a1 + 40) == 4 )
                        PopDiagTraceFirmwareS3Stats();
                    }
                    byte_1403AA07D = 1;
                    PoPowerDownActionInProgress = 0;
                    PpmCheckResumeStatisticsCollection();
                    PsIumResumeAfterHibernate();
                    if ( qword_1403AA098 )
                    {
                      PfPowerActionNotify(3LL, 0LL, 0LL);
                      PopSetDevicesSystemState();
                      PfPowerActionNotify(3LL, 1LL, 0LL);
                    }
                    v38 = *(void **)(a1 + 240);
                    if ( v38 )
                    {
                      ExDeleteWakeTimerInfo(v38);
                      *(_QWORD *)(a1 + 240) = 0LL;
                    }
                    ((void (__fastcall *)(_QWORD, _QWORD))off_1403986A0)(0LL, 0LL);
                    *(_DWORD *)(a1 + 112) = PopNotifyTelemetryOsState(
                                              qword_1403AA064,
                                              dword_1403AA080,
                                              dword_1403AA088,
                                              *(_DWORD *)(a1 + 8),
                                              0);
                    PopQueueBatteryStatusTimeout();
                    PopExecuteOnTargetProcessors(
                      (__int64)KeActiveProcessors,
                      (__int64)PpmStartIllegalProcessorThrottleLogging,
                      0LL,
                      0LL);
                    if ( *(_BYTE *)(a1 + 64) )
                    {
                      PopReleasePolicyLock();
                      *(_BYTE *)(a1 + 64) = 0;
                    }
                    PoClearBroadcast();
                    qword_1403AA098 = 0LL;
                    PopEsExitSleep();
                    PopCurrentPowerStatePrecise(a1 + 156);
                    *(_DWORD *)(a1 + 152) = dword_1403AAA2C;
                    PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
                    PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
                    PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
                    ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
                    PopThermalSxExit(v39);
                    if ( !*(_BYTE *)(a1 + 64) )
                    {
                      PopAcquirePolicyLock();
                      *(_BYTE *)(a1 + 64) = 1;
                    }
                    if ( *(int *)(a1 + 104) < 0 )
                      goto LABEL_90;
                    PopInitSIdle(1LL);
                    v43 = dword_1403AA0C0;
                    PopAction = 0;
                    if ( (unsigned __int64)dword_1403AA0C0 >= 3 )
                      goto LABEL_90;
                    v41 = 0x140000000uLL;
                    v43 = 3LL * dword_1403AA0C0;
                    qword_1403AA118 = qword_1403AA0D0[3 * dword_1403AA0C0];
                    v62 = qword_1403AA0D8[3 * dword_1403AA0C0];
                    PopFullWake = 0;
                    PopPendingUserPresenceDuringSystemSleep = 0;
                    PopPendingUserPresenceMonitorOnReason = 0;
                    if ( v62 == -1 )
                    {
                      if ( (unsigned __int8)PopDeferDoze(
                                              *(unsigned int *)(a1 + 360),
                                              *(unsigned int *)(a1 + 364),
                                              a1 + 156) )
                        qword_1403AA064 = *(_QWORD *)a1;
                      else
                        qword_1403AA064 = 0x500000002LL;
                      PopAction |= 2u;
                    }
                    else
                    {
                      if ( v62 == -2 )
                      {
                        if ( !qword_1403AA0B8 )
                          qword_1403AA0B8 = qword_1403AA0A8;
                        goto LABEL_90;
                      }
                      if ( dword_1403AAA2C != 1 )
                      {
                        if ( !*(_DWORD *)(a1 + 364) && *(_DWORD *)(a1 + 148) == *(_DWORD *)(a1 + 152) )
                          PopCheckPowerSourceAfterRtcWakeSet();
                        goto LABEL_90;
                      }
                      if ( *(_DWORD *)(a1 + 364) )
                      {
LABEL_90:
                        if ( byte_1403AA110 && *(_BYTE *)(a1 + 256) )
                        {
                          ExWakeTimersResume(v41, v40, v42, v43);
                          byte_1403AA110 = 0;
                          qword_1403AA118 = 0LL;
                        }
                        if ( PoResumeFromHibernate )
                        {
                          PopBootLoaderTraceProcess();
                          PoResumeFromHibernate = 0;
                        }
                        byte_1403AA1C0 = 0;
                        PopResetActionDefaults();
                        PopSetPowerActionState(2);
                        PopReleasePolicyLock();
                        if ( PopPendingUserPresenceDuringSystemSleep )
                          PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason);
                        ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
                        PopCheckForWork();
                        if ( *(int *)(a1 + 104) >= 0 )
                          PpmPerfReApplyStates();
                        dword_1403AA074 = 16;
                        qword_1403AA610 = PopCaptureTimeOnProcZero();
                        return *(_DWORD *)(a1 + 104);
                      }
                      qword_1403AA064 = *(_QWORD *)a1;
                      PopAction = 2;
                    }
                    *(_BYTE *)(a1 + 256) = 0;
                    goto LABEL_90;
                  }
                  do
                  {
                    *v32 = *(_QWORD *)(a1 + 216);
                    v32 += 3;
                  }
                  while ( (__int64)v32 < (__int64)&qword_1403AA0F8 );
                  v55 = qword_1403AA0D8;
                  do
                  {
                    *v55 = *(_QWORD *)(a1 + 224);
                    v55 += 3;
                  }
                  while ( (__int64)v55 < (__int64)&qword_1403AA108 );
                }
                v54 = (_DWORD *)(a1 + 360);
                goto LABEL_161;
              }
            }
          }
        }
        else
        {
LABEL_130:
          LOBYTE(v20) = *(_BYTE *)(a1 + 36);
          NextSystemPowerState = PopFindNextSystemPowerState(*v16, v20, a1 + 88);
          *(_BYTE *)(a1 + 48) = NextSystemPowerState;
          if ( !NextSystemPowerState )
            goto LABEL_73;
          *(_DWORD *)(a1 + 104) = 0;
        }
      }
    }
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    return *(_DWORD *)(a1 + 104);
  }
  else
  {
    if ( (unsigned int)(v9 - 4) > 2 )
    {
      v1 = -1073741637;
    }
    else
    {
      v45 = -2147483599;
      if ( v9 != PowerActionShutdownReset )
        v45 = -1073741077;
      *(_DWORD *)(a1 + 32) = v45;
      PsTerminateServerSilo(*(_QWORD *)(a1 + 96));
    }
    *(_DWORD *)(a1 + 104) = v1;
    return v1;
  }
}
