/*
 * XREFs of NtSetSystemPowerState @ 0x140408DF4
 * Callers:
 *     NtShutdownSystem @ 0x140716CF0 (NtShutdownSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     StringCchPrintfW @ 0x140034264 (StringCchPrintfW.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PopCheckForWork @ 0x140070144 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 *     KeSuspendThread @ 0x140072F68 (KeSuspendThread.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     PopSetPowerActionState @ 0x140138370 (PopSetPowerActionState.c)
 *     ExWakeTimersResume @ 0x140138758 (ExWakeTimersResume.c)
 *     PopThermalSxExit @ 0x1401387EC (PopThermalSxExit.c)
 *     PsIumResumeAfterHibernate @ 0x1401388EC (PsIumResumeAfterHibernate.c)
 *     PopThermalSxEntry @ 0x14013C6B4 (PopThermalSxEntry.c)
 *     PopRunMaximumIrpWorkers @ 0x14013CE5C (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x14013DA14 (PopActionRetrieveInitialState.c)
 *     ExWakeTimersPause @ 0x14013DACC (ExWakeTimersPause.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14013DD58 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14013DF8C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14013E02C (PopIgnoreBatteryStatusChange.c)
 *     PopForceCompleteCsSleepStudySession @ 0x14013E054 (PopForceCompleteCsSleepStudySession.c)
 *     PoSetUserPresent @ 0x14014ABB0 (PoSetUserPresent.c)
 *     ZwSetSystemPowerState @ 0x140181300 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x140227450 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14022B578 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14022F96C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14025CB50 (ExDeleteWakeTimerInfo.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopSetDevicesSystemState @ 0x140408D68 (PopSetDevicesSystemState.c)
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140409AF8 (ExUpdateSystemTimeFromCmos.c)
 *     PopNewWakeInfo @ 0x14040A2B8 (PopNewWakeInfo.c)
 *     IoFreePoDeviceNotifyList @ 0x14040A4B4 (IoFreePoDeviceNotifyList.c)
 *     PopDiagTracePostSleepNotification @ 0x14040A5A0 (PopDiagTracePostSleepNotification.c)
 *     PopDiagComputeEarlyHiberStats @ 0x14040A6BC (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x14040A738 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x14040A76C (PopCaptureTimeOnProcZero.c)
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14041A258 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x14041A468 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x14041A4F8 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x14041AF60 (ExGetNextWakeTime.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 *     PopFindPowerSettingConfiguration @ 0x1404C2204 (PopFindPowerSettingConfiguration.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopIsDozeSupported @ 0x1404C592C (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405763B8 (PopNotifyCallbacksPreSleep.c)
 *     PopNotifyTelemetryOsState @ 0x140576768 (PopNotifyTelemetryOsState.c)
 *     PopSetSleepMarker @ 0x140576A30 (PopSetSleepMarker.c)
 *     PopTransitionCheckpoint @ 0x140576B7C (PopTransitionCheckpoint.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1405779D8 (CmSetLazyFlushState.c)
 *     PpmPerfReApplyStates @ 0x140577A88 (PpmPerfReApplyStates.c)
 *     PopBootLoaderTraceProcess @ 0x140577ADC (PopBootLoaderTraceProcess.c)
 *     PopCurrentPowerStatePrecise @ 0x140577B60 (PopCurrentPowerStatePrecise.c)
 *     PopEsExitSleep @ 0x140577B84 (PopEsExitSleep.c)
 *     PoClearBroadcast @ 0x140577BB0 (PoClearBroadcast.c)
 *     PopQueueBatteryStatusTimeout @ 0x140577C0C (PopQueueBatteryStatusTimeout.c)
 *     PoInitializeBroadcast @ 0x140578768 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x140579A84 (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x140579B70 (PopInitSystemSleeperThread.c)
 *     PopFastS4Check @ 0x140579D08 (PopFastS4Check.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x140579ED8 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14057A0A8 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x14057A1E0 (PopAdvanceSystemPowerState.c)
 *     PopAcquireTransitionLock @ 0x14057A3D0 (PopAcquireTransitionLock.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 *     PopInitSIdle @ 0x140582D98 (PopInitSIdle.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     PopInitializePowerPolicySimulate @ 0x140585A34 (PopInitializePowerPolicySimulate.c)
 *     RtlUnlockBootStatusData @ 0x140585EE0 (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x140586418 (PopResetActionDefaults.c)
 *     MmZeroPageFileAtShutdown @ 0x1406B3404 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x1406C5420 (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x1406C56EC (PopSetShutdownMarker.c)
 *     PopSetSystemShutdownMarker @ 0x1406C5700 (PopSetSystemShutdownMarker.c)
 *     PopZeroHiberFile @ 0x1406C9DDC (PopZeroHiberFile.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  NTSTATUS v3; // edi
  int v6; // r15d
  __int64 v7; // r13
  int v8; // esi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rbx
  unsigned int v11; // eax
  NTSTATUS HiberContext; // ebx
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // r10d
  char v16; // al
  int v17; // r12d
  int v18; // r15d
  __int64 PowerSettingConfiguration; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  ULONG v23; // r8d
  __int64 v24; // rdx
  char v25; // r15
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  char v34; // bl
  __int64 v35; // r15
  __int64 v36; // rsi
  __int64 v37; // r9
  char v38; // r12
  int v39; // r10d
  __int64 *v40; // rbx
  int v41; // r8d
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  int v50; // r15d
  ULONG v51; // r12d
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // r15d
  char v58; // al
  __int64 v60; // rdx
  HANDLE v61; // rbx
  __int64 v62; // r11
  __int64 *v63; // rax
  int v64; // ebx
  __int64 v65; // rax
  SYSTEM_POWER_STATE v66; // eax
  char v67; // [rsp+41h] [rbp-BFh] BYREF
  char v68; // [rsp+42h] [rbp-BEh]
  char Buffer[5]; // [rsp+43h] [rbp-BDh] BYREF
  unsigned int v70; // [rsp+48h] [rbp-B8h] BYREF
  int v71; // [rsp+4Ch] [rbp-B4h]
  void *v72; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+58h] [rbp-A8h]
  _QWORD v74[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v75; // [rsp+74h] [rbp-8Ch]
  int v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+7Ch] [rbp-84h]
  __int64 v78; // [rsp+88h] [rbp-78h] BYREF
  int v79; // [rsp+90h] [rbp-70h]
  __int64 v80; // [rsp+98h] [rbp-68h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v82[3]; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  char v84[24]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+E8h] [rbp-18h] BYREF
  char Object[28]; // [rsp+100h] [rbp+0h] BYREF
  NTSTATUS v87; // [rsp+11Ch] [rbp+1Ch]
  char v88[96]; // [rsp+120h] [rbp+20h] BYREF
  char v92; // [rsp+1A8h] [rbp+A8h]

  v3 = 0;
  v73 = 1;
  v68 = 0;
  v80 = 0LL;
  v74[0] = 0LL;
  v6 = Flags;
  v72 = 0LL;
  v7 = 0LL;
  v8 = 0;
  PopTransitionCheckpoint(8LL, 1LL);
  if ( (unsigned int)(MinSystemState - 1) > 5
    || (unsigned int)(SystemAction - 1) > 6
    || (v6 & 0xFFFFFC0) != 0
    || dword_14034B194 >= 15 && SystemAction < PowerActionShutdown )
  {
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(SystemAction, MinSystemState, v6);
    else
      return -1073741727;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(SystemAction - 4) > 2 )
      return -1073741637;
    v60 = 2147483697LL;
    if ( SystemAction != PowerActionShutdownReset )
      v60 = 3221226219LL;
    PsTerminateServerSilo(CurrentServerSilo, v60);
    return v3;
  }
  if ( SystemAction == PowerActionShutdown )
    PopReadShutdownPolicy();
  memset(v82, 0, sizeof(v82));
  v79 = 0;
  v11 = dword_14034B194;
  v78 = (unsigned int)SystemAction;
  if ( dword_14034B194 >= 15 )
    v11 = 5;
  HIDWORD(v78) = v6;
  v82[0] = v11 | 0x8000000000LL;
  PopAcquireTransitionLock();
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0LL);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0LL);
  HiberContext = PoInitializeBroadcast();
  if ( HiberContext < 0 )
  {
LABEL_118:
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    return HiberContext;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopAcquirePolicyLock();
  v92 = 1;
  PopFilterCapabilities(&PopCapabilities, &unk_14034B240);
  if ( !byte_14034B181 )
  {
    PopResetActionDefaults();
    goto LABEL_14;
  }
  if ( byte_14034B181 != 2 )
  {
    PopReleasePolicyLock();
    PoClearBroadcast();
    HiberContext = -1073741791;
    goto LABEL_118;
  }
LABEL_14:
  PopSetPowerActionState(3);
  qword_14034B1B8 = (__int64)qword_14034B110;
  PopExecutePowerAction((unsigned int)v82, 0, (unsigned int)&v78, MinSystemState, 1);
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios(&v80);
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( SystemAction == PowerActionShutdownOff )
    LODWORD(qword_14034B184) = 6;
  if ( (unsigned int)(SystemAction - 4) <= 2 && PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
    PopZeroHiberFile(PopHiberInfo);
  v67 = 0;
  v70 = 0;
  if ( (unsigned int)(SystemAction - 2) <= 1 )
    PoPowerDownActionInProgress = 1;
  v14 = 1;
LABEL_20:
  HiberContext = -1073741536;
  while ( 2 )
  {
    v15 = 0x80000000;
    while ( 1 )
    {
      if ( !v14 )
      {
        PopAcquirePolicyLock();
        v15 = 0x80000000;
        v92 = 1;
      }
      if ( !(_DWORD)qword_14034B184 )
      {
        HiberContext = 0;
        goto LABEL_187;
      }
      v16 = PopAction;
      PopAction = 0;
      if ( HiberContext == -1073741536 )
      {
        if ( (v16 & 2) != 0 && (dword_14034B18C & v15) == 0 && (dword_14034B18C & 3) != 0 )
        {
          PopGetPolicyWorker(2);
LABEL_187:
          v51 = Flags;
          v50 = 0;
          goto LABEL_79;
        }
        PopActionRetrieveInitialState((_DWORD *)&qword_14034B184 + 1, &v70, &dword_14034B1A0, &v67);
        if ( (unsigned int)(qword_14034B184 - 4) <= 2 )
        {
          byte_14034B182 = 1;
          dword_14034B18C = v6;
        }
        HiberContext = 0;
      }
      if ( HiberContext < 0 )
        goto LABEL_187;
      PopReleasePolicyLock();
      v92 = 0;
      v17 = 1;
      v18 = 0;
      ExAcquireFastMutex(&PopSettingLock);
      PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
      if ( PowerSettingConfiguration )
      {
        v20 = *(_QWORD *)(PowerSettingConfiguration + 64);
        if ( v20 && *(_DWORD *)(v20 + 4) >= 4u )
          v17 = *(_DWORD *)(v20 + 12);
        v21 = *(_QWORD *)(PowerSettingConfiguration + 72);
        if ( v21 && *(_DWORD *)(v21 + 4) >= 4u )
          v18 = *(_DWORD *)(v21 + 12);
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      v22 = 0;
      v8 = 0;
      if ( (dword_14034B18C & 0x40000000) == 0 )
        v8 = v18;
      v76 = v8;
      if ( (dword_14034B18C & 0x40000000) == 0 )
        v22 = v17;
      v77 = v8;
      v75 = v22;
      PopInitializePowerPolicySimulate();
      dword_14034B1A4 = dword_14034B1A0;
      PopAdvanceSystemPowerState(
        &dword_14034B1A4,
        ((unsigned int)dword_14034B18C >> 27) & 2,
        HIDWORD(qword_14034B184),
        v70);
      v23 = Flags & 8;
      if ( (Flags & 8) != 0 )
      {
        v24 = dword_14034B1A0;
        byte_14034B2E0 = 1;
        dword_14034B1A8 = 5;
        v71 = 6;
      }
      else
      {
        if ( (unsigned __int8)PopFastS4Check() )
        {
          v24 = (unsigned int)dword_14034B1A0;
          dword_14034B1A8 = 5;
          v26 = 6;
          v71 = dword_14034B1A0;
          v25 = 1;
          goto LABEL_45;
        }
        v24 = dword_14034B1A0;
        dword_14034B1A8 = dword_14034B1A0;
        v71 = dword_14034B1A0;
      }
      v25 = 0;
      v26 = PopPowerStateHandlerLookup[v24];
      if ( v26 > 6 )
        goto LABEL_139;
LABEL_45:
      if ( !qword_14034BBC8[3 * (int)v26] )
      {
LABEL_139:
        LOBYTE(v24) = v25;
        if ( !(unsigned __int8)PopFindNextSystemPowerState(v70, v24, &v67) )
          goto LABEL_187;
        HiberContext = 0;
        goto LABEL_141;
      }
      if ( v23 )
      {
        v27 = 6LL;
LABEL_48:
        PopSetSleepMarker(v27);
        goto LABEL_49;
      }
      if ( !byte_14034B182 )
      {
        v27 = (unsigned int)v24;
        goto LABEL_48;
      }
      PopSetShutdownMarker();
      PopSetSystemShutdownMarker();
LABEL_49:
      PopAcquirePolicyLock();
      if ( (PopAction & 6) != 0 )
      {
        v6 = Flags;
        v14 = 1;
        v92 = 1;
        goto LABEL_20;
      }
      PopReleasePolicyLock();
      PopCheckpointSystemSleep(10);
      LOBYTE(v28) = v67;
      byte_14034B19C = 3;
      PopDiagTraceKernelQueriesAllowed(v28);
      if ( !v67 )
        break;
      v32 = PopSetDevicesSystemState(v13, v29, v30, v31);
      HiberContext = v32;
      v13 = v32 + 0x80000000;
      if ( (int)v13 < 0 || v32 == -1073741536 )
        break;
      LOBYTE(v33) = v25;
      if ( !(unsigned __int8)PopFindNextSystemPowerState(v70, v33, &v67) )
        goto LABEL_187;
      v6 = Flags;
      HiberContext = 0;
      v14 = 0;
    }
    if ( HiberContext < 0 || (PopCheckpointSystemSleep(13), HiberContext = PopAllocateHiberContext(), HiberContext < 0) )
    {
LABEL_141:
      v6 = Flags;
      goto LABEL_142;
    }
    v6 = Flags;
    v34 = PopNotifyTelemetryOsState(qword_14034B184, dword_14034B1A0, dword_14034B1A8, Flags, 1);
    PopTransitionCheckpoint(9LL, 0LL);
    if ( !byte_14034B182 )
    {
      PopDiagTracePreSleepNotification(v71, dword_14034B1A8, dword_14034B194, dword_14034B198, v34);
      PopCheckpointSystemSleep(16);
      PopUmpoSendFlushSleepStudyLoggerNotification();
    }
    PopEsEnterSleepShutdown();
    PopForceCompleteCsSleepStudySession(dword_14034B194);
    PopThermalSxEntry();
    if ( !v68 )
    {
      if ( byte_14034B182 && RtlLockBootStatusData(&FileHandle) >= 0 )
      {
        v61 = FileHandle;
        Buffer[0] = 1;
        RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemBootShutdown, Buffer, 1u, 0LL);
        RtlGetSetBootStatusData(v61, 0, RtlBsdItemShutdownBootId, (PVOID)0xFFFFF780000002C4LL, 4u, 0LL);
        RtlUnlockBootStatusData(v61);
      }
      v68 = 1;
    }
    PopFlushVolumes((unsigned int)dword_14034B1A0);
    if ( dword_14034B1A8 < dword_14034B1A0 )
      dword_14034B1A8 = dword_14034B1A0;
    byte_14034B19C = 2;
    if ( byte_14034B182 )
    {
      PopFxPrepareDevicesForShutdown();
      IoFreePoDeviceNotifyList(qword_14034B1B8 + 48);
      if ( dword_14034B194 == 2 )
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
    KeMtrrComparisonFailed = 0;
    HiberContext = PopInitSystemSleeperThread(v26, v84);
    if ( HiberContext < 0 )
    {
LABEL_142:
      v14 = 0;
      continue;
    }
    break;
  }
  if ( !byte_14034B230 )
  {
    ExWakeTimersPause();
    byte_14034B230 = 1;
  }
  v35 = 0LL;
  v36 = MEMORY[0xFFFFF78000000008];
  v37 = MEMORY[0xFFFFF78000000014];
  v38 = byte_14034B2E0;
  v39 = dword_14034B1A0;
  if ( !*((_DWORD *)PopPolicy + 22)
    || dword_14034B1A0 == 5
    || !(unsigned __int8)PopIsDozeSupported(&PopCapabilities)
    || (dword_14034B18C & 0x40000000) != 0 )
  {
    if ( byte_14034BC94 && v39 == 5 && !v38 && qword_14034B0C8 && dword_14034B194 == 11 )
    {
      v35 = -2LL;
      v7 = v36 + qword_14034B0C8 + -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset - v37;
    }
  }
  else
  {
    v7 = v36 + 10000000 * v62;
    v35 = -1LL;
  }
  v40 = &qword_14034B1E8;
  memset(&qword_14034B1E8, 0, 0x48uLL);
  dword_14034B1E0 = 3;
  if ( v38 || dword_14034B194 == 14 )
    goto LABEL_68;
  if ( v7 )
  {
    do
    {
      *v40 = v7;
      v40 += 3;
    }
    while ( (__int64)v40 < (__int64)&unk_14034B218 );
    v63 = qword_14034B1F8;
    do
    {
      *v63 = v35;
      v63 += 3;
    }
    while ( (__int64)v63 < (__int64)&qword_14034B228 );
  }
  v64 = qword_14034B238;
  if ( qword_14034B238 && qword_14034B238 < (unsigned __int64)(v36 + 20000000) )
    v64 = v36 + 20000000;
  if ( !v75 )
    goto LABEL_167;
  if ( v75 != 2 || (LOBYTE(v41) = 1, PopSimulate < 0) )
    LOBYTE(v41) = 0;
  if ( (unsigned __int8)ExGetNextWakeTime(v64 + 1, v7, v41, (unsigned int)v74, (__int64)&v72) )
  {
    v43 = v74[0];
    qword_14034B1E8 = v74[0];
    qword_14034B1F8[0] = (__int64)v72;
  }
  else
  {
LABEL_167:
    v43 = qword_14034B1E8;
  }
  if ( !v76 )
  {
    v42 = qword_14034B200;
    goto LABEL_70;
  }
  if ( v76 != 2 || (LOBYTE(v41) = 1, PopSimulate < 0) )
    LOBYTE(v41) = 0;
  if ( !(unsigned __int8)ExGetNextWakeTime(v64 + 1, v7, v41, (unsigned int)v74, (__int64)&v72) )
  {
LABEL_68:
    v42 = qword_14034B200;
    goto LABEL_69;
  }
  v42 = v74[0];
  qword_14034B200 = v74[0];
  qword_14034B210 = (__int64)v72;
LABEL_69:
  v43 = qword_14034B1E8;
LABEL_70:
  qword_14034B1F0[0] = v43;
  if ( v43 && v43 < v36 + 600000000 )
    qword_14034B1F0[0] = v36 + 600000000;
  qword_14034B208 = v42;
  if ( v42 && v42 < v36 + 600000000 )
    qword_14034B208 = v36 + 600000000;
  qword_14034B570 = KeQueryPerformanceCounter(0LL).QuadPart;
  LOBYTE(v44) = 1;
  ExUpdateSystemTimeFromCmos(v44);
  ((void (__fastcall *)(__int64, __int64))off_14033B2D0)(qword_14034B1F0[0], qword_14034B208);
  PopSetDevicesSystemState(v46, v45, v47, v48);
  PopNewWakeInfo();
  v7 = MEMORY[0xFFFFF78000000008];
  v73 = dword_14034BB2C;
  KeSetEvent(&Event, 0, 1u);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  v49 = dword_14034B1A0;
  v50 = dword_14034B1A0;
  v51 = Flags;
  if ( PoResumeFromHibernate )
    v50 = dword_14034B1A8;
  HiberContext = v87;
  if ( (Flags & 8) != 0 )
    v49 = 6;
  qword_14034B370 = 0LL;
  dword_14034B1AC = v50;
  PopDiagTracePostSleepNotification(
    v49,
    dword_14034B1A8,
    v50,
    qword_14034B1F0[0],
    qword_14034B208,
    qword_14034B1F8[0],
    qword_14034B210);
  if ( KeMtrrComparisonFailed )
    PopDiagTraceMtrrError();
  v8 = v77;
  if ( HiberContext < 0 && dword_14034B1A0 == 5 )
  {
    StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x", (unsigned int)HiberContext);
    RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
    IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
    PopDiagTraceHibernateErrorStatus((unsigned int)HiberContext);
  }
LABEL_79:
  if ( byte_14034B2E0 )
  {
    qword_14034B760 = KeQueryPerformanceCounter(0LL).QuadPart;
    dword_14034B2C4 = PopQpcTimeInMs(&qword_14034B758, &qword_14034B760);
  }
  if ( HiberContext >= 0 )
  {
    qword_14034B1D0 = v7;
    LOBYTE(v13) = 1;
    ExUpdateSystemTimeFromCmos(v13);
    LOBYTE(v52) = 1;
    if ( ((unsigned __int8 (__fastcall *)(__int64))off_14033B658[0])(v52) )
      ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
    qword_14034B588 = KeQueryPerformanceCounter(0LL).QuadPart;
    PfPowerActionNotify(2LL, 0LL, 0LL);
    qword_14034B1C8 = MEMORY[0xFFFFF78000000008];
    PopDiagComputeEarlyHiberStats();
    if ( v50 == 4 )
      PopDiagTraceFirmwareS3Stats();
  }
  byte_14034B19D = 1;
  PoPowerDownActionInProgress = 0;
  PsIumResumeAfterHibernate();
  if ( qword_14034B1B8 )
  {
    PfPowerActionNotify(3LL, 0LL, 0LL);
    PopSetDevicesSystemState(v54, v53, v55, v56);
    PfPowerActionNotify(3LL, 1LL, 0LL);
  }
  if ( v72 )
  {
    ExDeleteWakeTimerInfo(v72);
    v72 = 0LL;
  }
  ((void (__fastcall *)(_QWORD, _QWORD))off_14033B2D0)(0LL, 0LL);
  PopNotifyTelemetryOsState(qword_14034B184, dword_14034B1A0, dword_14034B1A8, v51, 0);
  PopQueueBatteryStatusTimeout();
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStartIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( v92 )
    PopReleasePolicyLock();
  PoClearBroadcast();
  qword_14034B1B8 = 0LL;
  PopEsExitSleep();
  PopCurrentPowerStatePrecise(v88);
  v57 = dword_14034BB2C;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
  PopThermalSxExit();
  PopAcquirePolicyLock();
  if ( HiberContext >= 0 && (PopInitSIdle(1LL), PopAction = 0, (unsigned __int64)dword_14034B1E0 < 3) )
  {
    qword_14034B238 = qword_14034B1F0[3 * dword_14034B1E0];
    v65 = qword_14034B1F8[3 * dword_14034B1E0];
    PopFullWake = 0;
    PopPendingUserPresenceDuringSystemSleep = 0;
    PopPendingUserPresenceMonitorOnReason = 0;
    if ( v65 == -1 )
    {
      LODWORD(qword_14034B184) = 2;
      v66 = PowerSystemHibernate;
    }
    else
    {
      if ( v65 == -2 )
      {
        if ( !qword_14034B1D8 )
          qword_14034B1D8 = qword_14034B1C8;
        goto LABEL_94;
      }
      if ( dword_14034BB2C != 1 )
      {
        if ( !v8 && v73 == v57 )
          PopCheckPowerSourceAfterRtcWakeSet();
        goto LABEL_94;
      }
      if ( v8 )
        goto LABEL_94;
      LODWORD(qword_14034B184) = SystemAction;
      v66 = MinSystemState;
    }
    HIDWORD(qword_14034B184) = v66;
    PopAction = 2;
    v58 = 0;
  }
  else
  {
LABEL_94:
    v58 = 1;
  }
  if ( byte_14034B230 && v58 )
  {
    ExWakeTimersResume();
    byte_14034B230 = 0;
    qword_14034B238 = 0LL;
  }
  if ( PoResumeFromHibernate )
  {
    PopBootLoaderTraceProcess();
    PoResumeFromHibernate = 0;
  }
  byte_14034B2E0 = 0;
  PopResetActionDefaults();
  PopSetPowerActionState(2);
  PopReleasePolicyLock();
  if ( PopPendingUserPresenceDuringSystemSleep )
    PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  PopCheckForWork();
  if ( HiberContext >= 0 )
    PpmPerfReApplyStates();
  dword_14034B194 = 15;
  qword_14034B6F0 = PopCaptureTimeOnProcZero();
  return HiberContext;
}
