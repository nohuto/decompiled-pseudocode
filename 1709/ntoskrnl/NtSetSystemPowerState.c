/*
 * XREFs of NtSetSystemPowerState @ 0x140437F10
 * Callers:
 *     NtShutdownSystem @ 0x140756410 (NtShutdownSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     KeSuspendThread @ 0x1400AC2F8 (KeSuspendThread.c)
 *     PopCheckForWork @ 0x1400B0F0C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     StringCchPrintfW @ 0x14012B374 (StringCchPrintfW.c)
 *     PoSetUserPresent @ 0x14015B530 (PoSetUserPresent.c)
 *     ZwSetSystemPowerState @ 0x140180CE0 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x14023A208 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14023E8E8 (PopFxPrepareDevicesForShutdown.c)
 *     PopActionRetrieveInitialState @ 0x14024220C (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x1402422E8 (PopSetPowerActionState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14024240C (PopIgnoreBatteryStatusChange.c)
 *     PopThermalSxEntry @ 0x140243B58 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140243C14 (PopThermalSxExit.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140244110 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14024417C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopForceCompleteCsSleepStudySession @ 0x140247808 (PopForceCompleteCsSleepStudySession.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1402486EC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140248718 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140248734 (PpmCheckResumeStatisticsCollection.c)
 *     PopRunMaximumIrpWorkers @ 0x1402490CC (PopRunMaximumIrpWorkers.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14024A120 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PsIumResumeAfterHibernate @ 0x14024F600 (PsIumResumeAfterHibernate.c)
 *     ExDeleteWakeTimerInfo @ 0x140286480 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersPause @ 0x140286828 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x140286900 (ExWakeTimersResume.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     IoFreePoDeviceNotifyList @ 0x14042DDC4 (IoFreePoDeviceNotifyList.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PopCaptureTimeOnProcZero @ 0x1404314C4 (PopCaptureTimeOnProcZero.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopNewWakeInfo @ 0x140431C7C (PopNewWakeInfo.c)
 *     PopFlushVolumes @ 0x140436890 (PopFlushVolumes.c)
 *     PopSetDevicesSystemState @ 0x14043760C (PopSetDevicesSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140438F48 (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14043923C (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140439484 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140439514 (PopDiagTraceMtrrError.c)
 *     PopDiagTracePostSleepNotification @ 0x1404395A0 (PopDiagTracePostSleepNotification.c)
 *     PopQpcTimeInMs @ 0x140439734 (PopQpcTimeInMs.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14043A854 (ExUpdateSystemTimeFromCmos.c)
 *     ExGetNextWakeTime @ 0x14043AB44 (ExGetNextWakeTime.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopIsDozeSupported @ 0x1404E86D8 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 *     MmLockPagableSectionByHandle @ 0x140507380 (MmLockPagableSectionByHandle.c)
 *     PopInitSIdle @ 0x1405B9968 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x1405EF5E0 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x1405F24AC (PopResetActionDefaults.c)
 *     CmSetLazyFlushState @ 0x14069430C (CmSetLazyFlushState.c)
 *     MmZeroPageFileAtShutdown @ 0x1406DF3D4 (MmZeroPageFileAtShutdown.c)
 *     PopFastS4Check @ 0x1406F50B0 (PopFastS4Check.c)
 *     PopFindNextSystemPowerState @ 0x1406F50E8 (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x1406F5830 (PopSetShutdownMarker.c)
 *     PopSetSleepMarker @ 0x1406F5844 (PopSetSleepMarker.c)
 *     PopSetSystemShutdownMarker @ 0x1406F58C8 (PopSetSystemShutdownMarker.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 *     PopAdvanceSystemPowerState @ 0x1406F751C (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x1406F9D48 (PpmPerfReApplyStates.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceProcess @ 0x1406FB258 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x1406FC79C (PopZeroHiberFile.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x1406FECD0 (PopCurrentPowerStatePrecise.c)
 *     PopQueueBatteryStatusTimeout @ 0x1406FEEFC (PopQueueBatteryStatusTimeout.c)
 *     PoClearBroadcast @ 0x140700A3C (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140700A98 (PoInitializeBroadcast.c)
 *     PopAcquireTransitionLock @ 0x140700EEC (PopAcquireTransitionLock.c)
 *     PopDeferDoze @ 0x140700F18 (PopDeferDoze.c)
 *     PopInitSystemSleeperThread @ 0x1407010A0 (PopInitSystemSleeperThread.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407012F8 (PopNotifyCallbacksPreSleep.c)
 *     PopQueryPowerSettingUlong @ 0x140701348 (PopQueryPowerSettingUlong.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140704064 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x140704E6C (PopDiagTracePreSleepNotification.c)
 *     PopNotifyTelemetryOsState @ 0x1407060AC (PopNotifyTelemetryOsState.c)
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 *     PopEsEnterSleepShutdown @ 0x1407083E0 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x140708424 (PopEsExitSleep.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1407235C0 (RtlSetSystemBootStatusEx.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  NTSTATUS v3; // ebx
  POWER_ACTION v5; // r15d
  int v6; // r14d
  __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rdi
  __int64 v11; // rdx
  unsigned int v12; // eax
  NTSTATUS inited; // edi
  __int64 v14; // rcx
  unsigned int v15; // r13d
  char v16; // al
  char v17; // al
  int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // r14d
  char v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  int HiberContext; // eax
  char v31; // di
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  __int64 v36; // r13
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 *v39; // rdi
  int v40; // r8d
  unsigned int v41; // r14d
  unsigned int v42; // r15d
  __int64 v43; // rcx
  __int64 *v44; // rax
  int v45; // edi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r13
  int v52; // ecx
  int v53; // r14d
  ULONG v54; // r12d
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r14d
  int v61; // ecx
  __int64 v62; // rax
  char v63; // al
  SYSTEM_POWER_STATE v64; // eax
  char v65; // al
  __int64 v66; // rdx
  char v67; // [rsp+41h] [rbp-BFh] BYREF
  char v68; // [rsp+42h] [rbp-BEh]
  unsigned int v69; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v70; // [rsp+48h] [rbp-B8h] BYREF
  char v71; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v72; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+58h] [rbp-A8h]
  __int64 v74; // [rsp+60h] [rbp-A0h]
  void *v75; // [rsp+68h] [rbp-98h] BYREF
  int v76; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  __int64 v79; // [rsp+80h] [rbp-80h] BYREF
  int v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v82[3]; // [rsp+98h] [rbp-68h] BYREF
  int v83; // [rsp+B0h] [rbp-50h] BYREF
  char *v84; // [rsp+B8h] [rbp-48h]
  int v85; // [rsp+C0h] [rbp-40h]
  int v86; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v87; // [rsp+D0h] [rbp-30h]
  int v88; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v90[32]; // [rsp+F0h] [rbp-10h] BYREF
  char v91[24]; // [rsp+110h] [rbp+10h] BYREF
  struct _KEVENT Event; // [rsp+128h] [rbp+28h] BYREF
  char Object[28]; // [rsp+140h] [rbp+40h] BYREF
  NTSTATUS v94; // [rsp+15Ch] [rbp+5Ch]
  char v98; // [rsp+1C8h] [rbp+C8h]

  v3 = 0;
  v81 = 0LL;
  v5 = SystemAction;
  v68 = 0;
  v6 = Flags;
  v78 = 0LL;
  v75 = 0LL;
  LODWORD(v74) = 1;
  v7 = 0LL;
  v72 = 1;
  v69 = 0;
  v76 = 0;
  v77 = 0;
  PopTransitionCheckpoint(8LL);
  if ( (unsigned int)(MinSystemState - 1) > 5
    || (unsigned int)(v5 - 1) > 6
    || (v6 & 0xFFFFFC0) != 0
    || v5 < PowerActionShutdown && dword_1403657F4 >= 15 )
  {
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(v5, MinSystemState, v6);
    else
      return -1073741727;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v5 - 4) > 2 )
      return -1073741637;
    v11 = 2147483697LL;
    if ( v5 != PowerActionShutdownReset )
      v11 = 3221226219LL;
    PsTerminateServerSilo(CurrentServerSilo, v11);
    return v3;
  }
  if ( v5 == PowerActionShutdown )
    PopReadShutdownPolicy();
  memset(v82, 0, sizeof(v82));
  v80 = 0;
  v12 = dword_1403657F4;
  v79 = (unsigned int)v5;
  if ( dword_1403657F4 >= 15 )
    v12 = 5;
  HIDWORD(v79) = v6;
  v82[0] = v12 | 0x8000000000LL;
  PopAcquireTransitionLock();
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0LL);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0LL);
  inited = PoInitializeBroadcast();
  if ( inited < 0 )
    goto LABEL_25;
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopAcquirePolicyLock();
  v98 = 1;
  PopFilterCapabilities(&PopCapabilities, &unk_1403658A8);
  if ( !byte_1403657E1 )
  {
    PopResetActionDefaults();
    goto LABEL_28;
  }
  if ( byte_1403657E1 == 2 )
  {
LABEL_28:
    PopSetPowerActionState(3);
    qword_140365818 = (__int64)qword_140365770;
    PopExecutePowerAction((unsigned int)v82, 0, (unsigned int)&v79, MinSystemState, 1);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios();
    PopEnforceResiliencyScenarios(&v81);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    if ( v5 == PowerActionShutdownOff )
      LODWORD(qword_1403657E4) = 6;
    if ( (unsigned int)(v5 - 4) <= 2 && PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    v67 = 0;
    v70 = 0;
    v15 = 0;
    if ( (unsigned int)(v5 - 2) <= 1 )
      PoPowerDownActionInProgress = 1;
    v16 = 1;
    inited = -1073741536;
    while ( 1 )
    {
      if ( !v16 )
      {
        PopAcquirePolicyLock();
        v98 = 1;
      }
      if ( !(_DWORD)qword_1403657E4 )
      {
        inited = 0;
        goto LABEL_155;
      }
      v17 = PopAction;
      PopAction = 0;
      if ( inited == -1073741536 )
      {
        if ( (v17 & 2) != 0 && dword_1403657EC >= 0 && (dword_1403657EC & 3) != 0 )
        {
          PopGetPolicyWorker(2);
LABEL_155:
          v54 = Flags;
          v53 = 0;
          v51 = 0LL;
          goto LABEL_156;
        }
        PopActionRetrieveInitialState((_DWORD *)&qword_1403657E4 + 1, &v70, &dword_140365800, &v67);
        if ( (unsigned int)(qword_1403657E4 - 4) <= 2 )
        {
          byte_1403657E2 = 1;
          dword_1403657EC = v6;
        }
        v15 = v70;
        inited = 0;
      }
      if ( inited < 0 )
        goto LABEL_155;
      PopReleasePolicyLock();
      v98 = 0;
      v72 = 1;
      v69 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v72, &v69);
      if ( (dword_1403657EC & 0x40000000) != 0 )
      {
        v72 = 0;
        v69 = 0;
      }
      PopInitializePowerPolicySimulate();
      dword_140365804 = dword_140365800;
      PopAdvanceSystemPowerState(
        &dword_140365804,
        ((unsigned int)dword_1403657EC >> 27) & 2,
        HIDWORD(qword_1403657E4),
        v15);
      v18 = v6 & 8;
      if ( (v6 & 8) != 0 )
      {
        v19 = dword_140365800;
        byte_140365B40 = 1;
        dword_140365808 = 5;
        v73 = 6;
      }
      else
      {
        if ( (unsigned __int8)PopFastS4Check() )
        {
          v19 = (unsigned int)dword_140365800;
          dword_140365808 = 5;
          v20 = 6;
          v73 = dword_140365800;
          v21 = 1;
          goto LABEL_59;
        }
        v19 = dword_140365800;
        dword_140365808 = dword_140365800;
        v73 = dword_140365800;
      }
      v21 = 0;
      v20 = PopPowerStateHandlerLookup[v19];
      if ( v20 > 6 )
        goto LABEL_84;
LABEL_59:
      if ( !qword_140366248[3 * (int)v20] )
        goto LABEL_84;
      if ( v18 )
      {
        v22 = 6LL;
LABEL_64:
        PopSetSleepMarker(v22);
        goto LABEL_66;
      }
      if ( !byte_1403657E2 )
      {
        v22 = (unsigned int)v19;
        goto LABEL_64;
      }
      PopSetShutdownMarker();
      PopSetSystemShutdownMarker();
LABEL_66:
      PopAcquirePolicyLock();
      if ( (PopAction & 6) == 0 )
      {
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL, v23, v24, v25);
        LOBYTE(v26) = v67;
        byte_1403657FC = 3;
        PopDiagTraceKernelQueriesAllowed(v26);
        if ( !v67 )
          goto LABEL_71;
        v29 = PopSetDevicesSystemState(v14, v19, v27, v28);
        inited = v29;
        if ( v29 >= 0 )
        {
LABEL_72:
          PopCheckpointSystemSleep(13LL, v19, v27, v28);
          HiberContext = PopAllocateHiberContext();
          v15 = v70;
          inited = HiberContext;
          if ( HiberContext >= 0 )
          {
            v31 = PopNotifyTelemetryOsState(qword_1403657E4, dword_140365800, dword_140365808, Flags, 1);
            PopTransitionCheckpoint(9LL);
            if ( !byte_1403657E2 )
            {
              PopDiagTracePreSleepNotification(v73, dword_140365808, dword_1403657F4, dword_1403657F8, v31);
              PopCheckpointSystemSleep(16LL, v32, v33, v34);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopForceCompleteCsSleepStudySession(dword_1403657F4);
            PopThermalSxEntry(v35);
            if ( !v68 )
            {
              if ( byte_1403657E2 )
              {
                v71 = 1;
                v83 = 5;
                v85 = 1;
                v84 = &v71;
                v86 = 11;
                v87 = 0xFFFFF780000002C4uLL;
                v88 = 4;
                RtlSetSystemBootStatusEx(&v83, 2LL, 0LL);
              }
              v68 = 1;
            }
            PopFlushVolumes(dword_140365800);
            if ( dword_140365808 < dword_140365800 )
              dword_140365808 = dword_140365800;
            byte_1403657FC = 2;
            if ( byte_1403657E2 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList((_BYTE *)(qword_140365818 + 48));
              if ( dword_1403657F4 == 2 )
                PopCriticalShutdownInProgress = 1;
              PopTransitionCheckpoint(8LL);
              if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                PopGracefulShutdown();
              PopShutdownWorkItem.Parameter = 0LL;
              PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
              PopShutdownWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
              KeSuspendThread((__int64)KeGetCurrentThread());
              return -1073741077;
            }
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v20, v91);
            if ( inited >= 0 )
            {
              if ( !byte_140365890 )
              {
                ExWakeTimersPause();
                byte_140365890 = 1;
              }
              v74 = 0LL;
              v36 = MEMORY[0xFFFFF78000000008];
              v37 = MEMORY[0xFFFFF78000000014];
              if ( !*((_DWORD *)PopPolicy + 22)
                || dword_140365800 == 5
                || !(unsigned __int8)PopIsDozeSupported(&PopCapabilities)
                || (dword_1403657EC & 0x40000000) != 0 )
              {
                if ( byte_140366314
                  && dword_140365800 == 5
                  && !byte_140365B40
                  && qword_140365728
                  && ((dword_1403657F4 - 11) & 0xFFFFFFFD) == 0 )
                {
                  v74 = -2LL;
                  v7 = v36 + qword_140365728 + -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset - v37;
                }
              }
              else
              {
                v74 = -1LL;
                v7 = v36 + 10000000 * v38;
                if ( !qword_1403658A0 )
                  qword_1403658A0 = v36;
              }
              v39 = &qword_140365848;
              memset(&qword_140365848, 0, 0x48uLL);
              dword_140365840 = 3;
              if ( !byte_140365B40 && dword_1403657F4 != 14 )
              {
                v41 = v69;
                v42 = v72;
                if ( dword_140365800 == 5 && v72 != 1 && v69 != 1 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, &v76, &v77);
                  if ( v76 || v77 )
                  {
                    v42 = 0;
                    v72 = 0;
                    v41 = 0;
                    v69 = 0;
                  }
                }
                if ( v7 )
                {
                  v43 = v74;
                  if ( v74 == -2 )
                  {
                    if ( v42 )
                    {
                      qword_140365848 = v7;
                      qword_140365858[0] = -2LL;
                    }
                    if ( v41 )
                    {
                      qword_140365860 = v7;
                      qword_140365870 = -2LL;
                    }
                  }
                  else
                  {
                    do
                    {
                      *v39 = v7;
                      v39 += 3;
                    }
                    while ( (__int64)v39 < (__int64)&unk_140365878 );
                    v44 = qword_140365858;
                    do
                    {
                      *v44 = v43;
                      v44 += 3;
                    }
                    while ( (__int64)v44 < (__int64)&qword_140365888 );
                  }
                }
                v45 = qword_140365898;
                if ( qword_140365898 && qword_140365898 < (unsigned __int64)(v36 + 20000000) )
                  v45 = v36 + 20000000;
                if ( v42 )
                {
                  if ( v42 != 2 || (LOBYTE(v40) = 1, PopSimulate < 0) )
                    LOBYTE(v40) = 0;
                  if ( (unsigned __int8)ExGetNextWakeTime(v45 + 1, v7, v40, (unsigned int)&v78, (__int64)&v75) )
                  {
                    qword_140365848 = v78;
                    qword_140365858[0] = (__int64)v75;
                  }
                }
                if ( v41 )
                {
                  if ( v41 != 2 || (LOBYTE(v40) = 1, PopSimulate < 0) )
                    LOBYTE(v40) = 0;
                  v5 = SystemAction;
                  if ( (unsigned __int8)ExGetNextWakeTime(v45 + 1, v7, v40, (unsigned int)&v78, (__int64)&v75) )
                  {
                    qword_140365860 = v78;
                    qword_140365870 = (__int64)v75;
                  }
                }
                else
                {
                  v5 = SystemAction;
                }
              }
              qword_140365850[0] = qword_140365848;
              if ( qword_140365848 && qword_140365848 < (unsigned __int64)(v36 + 600000000) )
                qword_140365850[0] = v36 + 600000000;
              qword_140365868 = qword_140365860;
              if ( qword_140365860 && qword_140365860 < (unsigned __int64)(v36 + 600000000) )
                qword_140365868 = v36 + 600000000;
              qword_140365BF0 = KeQueryPerformanceCounter(0LL).QuadPart;
              LOBYTE(v46) = 1;
              ExUpdateSystemTimeFromCmos(v46, 1LL);
              ((void (__fastcall *)(__int64, __int64))off_140353300)(qword_140365850[0], qword_140365868);
              PopSetDevicesSystemState(v48, v47, v49, v50);
              PopNewWakeInfo();
              v51 = MEMORY[0xFFFFF78000000008];
              LODWORD(v74) = dword_1403661AC;
              PpmCheckPausePpmEngineForSx();
              KeSetEvent(&Event, 0, 1u);
              KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              inited = v94;
              qword_140365BD0 = 0LL;
              PpmCheckResumePpmEngineFromSx();
              v52 = dword_140365800;
              v53 = dword_140365800;
              v54 = Flags;
              if ( PoResumeFromHibernate )
                v53 = dword_140365808;
              dword_14036580C = v53;
              if ( (Flags & 8) != 0 )
                v52 = 6;
              PopDiagTracePostSleepNotification(
                v52,
                dword_140365808,
                v53,
                qword_140365850[0],
                qword_140365868,
                qword_140365858[0],
                qword_140365870);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( inited < 0 && dword_140365800 == 5 )
              {
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x", (unsigned int)inited);
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus((unsigned int)inited);
              }
LABEL_156:
              if ( byte_140365B40 )
              {
                qword_140365DE0 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_140365B24 = PopQpcTimeInMs(&qword_140365DD8, &qword_140365DE0);
              }
              if ( inited >= 0 )
              {
                qword_140365830 = v51;
                LOBYTE(v14) = 1;
                ExUpdateSystemTimeFromCmos(v14, 1LL);
                LOBYTE(v55) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_140353688[0])(v55) )
                  ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
                qword_140365C08 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2, 0, 0);
                qword_140365828 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( v53 == 4 )
                  PopDiagTraceFirmwareS3Stats();
              }
              byte_1403657FD = 1;
              PoPowerDownActionInProgress = 0;
              PpmCheckResumeStatisticsCollection();
              PsIumResumeAfterHibernate();
              if ( qword_140365818 )
              {
                PfPowerActionNotify(3, 0, 0);
                PopSetDevicesSystemState(v57, v56, v58, v59);
                PfPowerActionNotify(3, 1, 0);
              }
              if ( v75 )
              {
                ExDeleteWakeTimerInfo(v75);
                v75 = 0LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD))off_140353300)(0LL, 0LL);
              PopNotifyTelemetryOsState(qword_1403657E4, dword_140365800, dword_140365808, v54, 0);
              PopQueueBatteryStatusTimeout();
              PopExecuteOnTargetProcessors(
                (__int64)KeActiveProcessors,
                (__int64)PpmStartIllegalProcessorThrottleLogging,
                0LL,
                0LL);
              if ( v98 )
                PopReleasePolicyLock();
              PoClearBroadcast();
              qword_140365818 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(v90);
              v60 = dword_1403661AC;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit(v61);
              PopAcquirePolicyLock();
              if ( inited >= 0 )
              {
                PopInitSIdle(1LL);
                PopAction = 0;
                if ( (unsigned __int64)dword_140365840 < 3 )
                {
                  qword_140365898 = qword_140365850[3 * dword_140365840];
                  v62 = qword_140365858[3 * dword_140365840];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  if ( v62 == -1 )
                  {
                    v63 = PopDeferDoze(v72, v69, v90);
                    PopAction |= 2u;
                    if ( !v63 )
                    {
                      LODWORD(qword_1403657E4) = 2;
                      v64 = PowerSystemHibernate;
                      goto LABEL_181;
                    }
LABEL_180:
                    v64 = MinSystemState;
                    LODWORD(qword_1403657E4) = v5;
LABEL_181:
                    HIDWORD(qword_1403657E4) = v64;
                    v65 = 0;
LABEL_186:
                    if ( byte_140365890 && v65 )
                    {
                      ExWakeTimersResume();
                      byte_140365890 = 0;
                      qword_140365898 = 0LL;
                    }
                    if ( PoResumeFromHibernate )
                    {
                      PopBootLoaderTraceProcess();
                      PoResumeFromHibernate = 0;
                    }
                    byte_140365B40 = 0;
                    PopResetActionDefaults();
                    PopSetPowerActionState(2);
                    PopReleasePolicyLock();
                    if ( PopPendingUserPresenceDuringSystemSleep )
                      PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason, v66);
                    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
                    PopCheckForWork();
                    if ( inited >= 0 )
                      PpmPerfReApplyStates();
                    dword_1403657F4 = 15;
                    qword_140365D70 = PopCaptureTimeOnProcZero();
                    return inited;
                  }
                  if ( v62 == -2 )
                  {
                    if ( !qword_140365838 )
                      qword_140365838 = qword_140365828;
                  }
                  else if ( dword_1403661AC == 1 )
                  {
                    if ( !v69 )
                    {
                      PopAction = 2;
                      goto LABEL_180;
                    }
                  }
                  else if ( !v69 && (_DWORD)v74 == v60 )
                  {
                    PopCheckPowerSourceAfterRtcWakeSet();
                  }
                }
              }
              v65 = 1;
              goto LABEL_186;
            }
            v15 = v70;
          }
        }
        else if ( v29 == -1073741536 )
        {
LABEL_71:
          v15 = v70;
          if ( inited >= 0 )
            goto LABEL_72;
        }
        else
        {
LABEL_84:
          LOBYTE(v19) = v21;
          v15 = v70;
          if ( !(unsigned __int8)PopFindNextSystemPowerState(v70, v19, &v67) )
            goto LABEL_155;
          inited = 0;
        }
        v16 = 0;
        goto LABEL_39;
      }
      v15 = v70;
      v16 = 1;
      v98 = 1;
      inited = -1073741536;
LABEL_39:
      v6 = Flags;
    }
  }
  PopReleasePolicyLock();
  PoClearBroadcast();
  inited = -1073741791;
LABEL_25:
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return inited;
}
