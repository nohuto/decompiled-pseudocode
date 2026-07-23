/*
 * XREFs of NtPowerInformation @ 0x1405203C4
 * Callers:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402834BC (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x14028367C (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140283900 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14052032C (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1405C7CF4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1405E4C38 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14073E8E8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x140771070 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x140771148 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1407711A8 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x140771230 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbLengthW @ 0x140075A6C (RtlStringCbLengthW.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140076428 (PoSetPowerRequestInternal.c)
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     KeQueryActiveGroupCount @ 0x14007DAC0 (KeQueryActiveGroupCount.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     PopDisksRegisteredForIdle @ 0x1400D09EC (PopDisksRegisteredForIdle.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14015543C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x140155CD8 (PoPowerOffMonitor.c)
 *     PopEventCalloutDispatch @ 0x14016E560 (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x14017D7F0 (ExVerifySuite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140271C34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x140271C7C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140273790 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x140273868 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x14027473C (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140275448 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PpmClearSimulatedLoad @ 0x140277DC0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140278154 (PpmSetSimulatedLoad.c)
 *     PopUpdatePowerButtonHoldState @ 0x14027FDA4 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x1402829EC (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x1402BAC10 (ExGetWakeTimerList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PnpWinlogonExternalDmaNotification @ 0x140489874 (PnpWinlogonExternalDmaNotification.c)
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     PopEtEnergyTrackerQuery @ 0x14051D9F0 (PopEtEnergyTrackerQuery.c)
 *     PopCurrentPowerState @ 0x1405222E4 (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x1405230F0 (PopBlackBoxUpdate.c)
 *     PopCapturePlatformRole @ 0x140523884 (PopCapturePlatformRole.c)
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 *     PopPowerRequestActionInfo @ 0x140523D80 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140524180 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestCreateInfo @ 0x1405251E0 (PopPowerRequestCreateInfo.c)
 *     PopDiagTraceSessionStates @ 0x140526968 (PopDiagTraceSessionStates.c)
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     ExCheckFullProcessInformationAccess @ 0x140540610 (ExCheckFullProcessInformationAccess.c)
 *     PopGetSettingValue @ 0x140565F00 (PopGetSettingValue.c)
 *     PopProcessorInformation @ 0x140573E68 (PopProcessorInformation.c)
 *     PopLoggingInformation @ 0x140583E58 (PopLoggingInformation.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     PopPdcInvocation @ 0x1405E9C08 (PopPdcInvocation.c)
 *     PopUmpoSendLegacyEvent @ 0x1405EB558 (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumePdc @ 0x1405EC3C4 (PopSuspendResumePdc.c)
 *     PopDiagTraceServiceNotification @ 0x1405ED7A0 (PopDiagTraceServiceNotification.c)
 *     PopDiagTraceAppPowerMessage @ 0x1405EDBA0 (PopDiagTraceAppPowerMessage.c)
 *     PopGetWakeSource @ 0x1405EDDD4 (PopGetWakeSource.c)
 *     PopFreeSessionState @ 0x1405EE0DC (PopFreeSessionState.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x1405EE200 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopReadHiberbootPolicy @ 0x1405EE6FC (PopReadHiberbootPolicy.c)
 *     PopSetDisplayStatus @ 0x1405EEA80 (PopSetDisplayStatus.c)
 *     PopEnforceResiliencyScenarios @ 0x1405EECF8 (PopEnforceResiliencyScenarios.c)
 *     PopLogSleepDisabled @ 0x140602AE8 (PopLogSleepDisabled.c)
 *     PopBatteryUpdateCurrentState @ 0x140611B78 (PopBatteryUpdateCurrentState.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopSessionConnectionChange @ 0x140612D8C (PopSessionConnectionChange.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x140626324 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1406265C4 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x14064E46C (PopEtEnergyTrackerCreate.c)
 *     PopApplyAdminPolicy @ 0x14075EDCC (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x14075EF78 (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x1407627FC (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x140762908 (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x140763090 (PopThermalProcessUsermodeEvent.c)
 *     PopBatteryDeviceState @ 0x1407639B8 (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x140764F48 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x140765220 (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x14076527C (PopScreenOff.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1407674F8 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x14076829C (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopUserPresentOverride @ 0x14076DB40 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x14076FDB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14076FE88 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x14077292C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140772AA0 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x140772DE4 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 *     PopInitPlatformSettings @ 0x1408C7854 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  POWER_INFORMATION_LEVEL v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 *v12; // r14
  __int64 v13; // rdx
  KPROCESSOR_MODE v14; // r14
  ULONG v15; // r13d
  void *v16; // r15
  void *v17; // r12
  int v18; // eax
  unsigned __int64 v19; // rax
  NTSTATUS WakeSource; // ebx
  unsigned __int64 v21; // rax
  char v22; // r13
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  void *v30; // rcx
  unsigned __int64 v31; // rcx
  size_t v32; // rax
  int v33; // eax
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int128 *v38; // rax
  char *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  _BYTE *v42; // rcx
  int v43; // r9d
  int v44; // edx
  int v45; // edx
  int v46; // edx
  int v47; // edx
  bool v48; // zf
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  bool v52; // sf
  NTSTATUS v53; // eax
  __int64 *v54; // rax
  int v55; // eax
  USHORT v56; // bx
  __int64 v57; // rdx
  int v58; // eax
  POWER_INFORMATION_LEVEL v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int ProcessSessionId; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v64; // rbx
  NTSTATUS v65; // eax
  _QWORD *v66; // rax
  unsigned int v67; // ebx
  unsigned int v68; // r13d
  unsigned int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rcx
  int v76; // ebx
  int v77; // eax
  char v78; // al
  int Info; // eax
  unsigned int v80; // edx
  __int64 v81; // rcx
  int PowerRequestListInfo; // eax
  int v83; // eax
  NTSTATUS SettingNotificationName; // eax
  __int64 v85; // rcx
  char IsDevicePotentialDripsConstraint; // al
  __int64 v87; // rcx
  char v88; // r13
  unsigned int v89; // eax
  bool v90; // bl
  _PROCESSOR_NUMBER v91; // ebx
  char v93; // [rsp+40h] [rbp-6E8h]
  ULONG Length; // [rsp+44h] [rbp-6E4h]
  unsigned int Length_4; // [rsp+48h] [rbp-6E0h] BYREF
  char v96; // [rsp+4Ch] [rbp-6DCh] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+4Dh] [rbp-6DBh]
  char v98; // [rsp+4Eh] [rbp-6DAh]
  void *Src; // [rsp+50h] [rbp-6D8h] BYREF
  PVOID v100; // [rsp+58h] [rbp-6D0h]
  char v101; // [rsp+60h] [rbp-6C8h]
  int v102; // [rsp+64h] [rbp-6C4h]
  POWER_INFORMATION_LEVEL v103; // [rsp+68h] [rbp-6C0h]
  BOOL v105; // [rsp+70h] [rbp-6B8h] BYREF
  unsigned int v106; // [rsp+74h] [rbp-6B4h] BYREF
  unsigned __int64 v107; // [rsp+78h] [rbp-6B0h]
  char v108[8]; // [rsp+80h] [rbp-6A8h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-6A0h] BYREF
  _QWORD v110[192]; // [rsp+A0h] [rbp-688h] BYREF
  wchar_t psz[32]; // [rsp+6A0h] [rbp-88h] BYREF

  v107 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v103 = InformationLevel;
  memset(v110, 0, sizeof(v110));
  Src = 0LL;
  Length_4 = 0;
  v12 = 0LL;
  v100 = 0LL;
  P[0] = 0LL;
  LOBYTE(v13) = 0;
  v93 = 0;
  v98 = 0;
  v96 = 0;
  v105 = 0;
  if ( (unsigned int)v8 > SessionAllowExternalDmaDevices )
  {
    WakeSource = -1073741811;
    goto LABEL_499;
  }
  v14 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v14;
  v15 = InputBuffer != 0LL ? InputBufferLength : 0;
  v16 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
  P[1] = v16;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v17 = (void *)(v107 & -(__int64)(Length != 0));
  if ( !v14 )
  {
    v12 = (__int128 *)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
    v100 = v12;
LABEL_59:
    if ( (unsigned int)v8 > TraceApplicationPowerMessageEnd || (v33 = -234812256, !_bittest(&v33, v8)) )
    {
      v34 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v34 > 0x39 || (v9 = 0x3FFE3BE75BE26EDLL, !_bittest64(&v9, v34)) )
      {
        PopAcquirePolicyLock();
        LOBYTE(v13) = 1;
        v93 = 1;
        v98 = 1;
      }
    }
    switch ( v8 )
    {
      case SystemPowerPolicyAc:
      case SystemPowerPolicyDc:
        if ( !v12 )
        {
          if ( !v17 )
            goto LABEL_68;
LABEL_75:
          v35 = &unk_1403AA944;
          goto LABEL_76;
        }
        if ( v15 < 0xE8 )
          goto LABEL_73;
        WakeSource = PopApplyPolicy(0LL, 0LL, v12, v15);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( WakeSource >= 0 )
          goto LABEL_75;
        goto LABEL_70;
      case VerifySystemPolicyAc:
      case VerifySystemPolicyDc:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 < 0xE8 )
          goto LABEL_73;
        WakeSource = PopVerifySystemPowerPolicy(v12, v110);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        v35 = v110;
LABEL_76:
        Src = v35;
        Length_4 = 232;
        goto LABEL_493;
      case SystemPowerCapabilities:
        if ( !v12 )
        {
          if ( !v17 )
            goto LABEL_68;
LABEL_100:
          BYTE9(PopCapabilities) = PopFullWake & 1;
          byte_1403AAB75 = PopDisksRegisteredForIdle();
          PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v110);
          Src = v110;
          Length_4 = 76;
          goto LABEL_101;
        }
        if ( (PopSimulate & 1) == 0 )
          goto LABEL_68;
        if ( v15 >= 0x4C )
        {
          PopCapabilities = *v12;
          unk_1403AAB70 = v12[1];
          xmmword_1403AAB80 = v12[2];
          xmmword_1403AAB90 = v12[3];
          qword_1403AABA0 = *((_QWORD *)v12 + 8);
          dword_1403AABA8 = *((_DWORD *)v12 + 18);
          WakeSource = PopResetCurrentPolicies(v9, v13);
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
          if ( WakeSource < 0 )
            goto LABEL_70;
          goto LABEL_100;
        }
LABEL_73:
        WakeSource = -1073741789;
LABEL_69:
        InputBuffer = v16;
        goto LABEL_70;
      case SystemBatteryState:
        if ( !v12 && v17 )
          goto LABEL_112;
        goto LABEL_68;
      case SystemPowerStateHandler:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 < 0x18 )
          goto LABEL_73;
        v40 = *(unsigned int *)v12;
        if ( (unsigned int)v40 >= 7 )
          goto LABEL_68;
        v41 = 3 * v40;
        if ( qword_1403AAAA8[3 * v40] )
        {
          if ( (_DWORD)v40 != 4 || (void (__fastcall __noreturn *)(__int64))qword_1403AAB08 != PopShutdownHandler )
            goto LABEL_68;
        }
        *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v40) = *v12;
        qword_1403AAAB0[3 * v40] = *((_QWORD *)v12 + 2);
        word_1403AAAA5[12 * v40] = 0;
        byte_1403AAAA7[24 * v40] = 0;
        v42 = 0LL;
        v43 = 0;
        if ( (_DWORD)v40 )
        {
          v44 = v40 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( !v47 )
                {
                  v42 = (char *)&PopCapabilities + 7;
                  goto LABEL_142;
                }
                if ( v47 != 2 )
                  goto LABEL_142;
                v43 = 4;
                v48 = (PopSimulate & 0x2000) == 0;
                v42 = &unk_1403AAB71;
              }
              else
              {
                v43 = 5;
                v48 = (PopSimulate & 0x2000) == 0;
                v42 = (char *)&PopCapabilities + 6;
              }
            }
            else
            {
              v43 = 4;
              v48 = (PopSimulate & 0x20) == 0;
              v42 = (char *)&PopCapabilities + 5;
            }
          }
          else
          {
            v43 = 3;
            v48 = (PopSimulate & 0x40) == 0;
            v42 = (char *)&PopCapabilities + 4;
          }
        }
        else
        {
          v43 = 2;
          v48 = (PopSimulate & 8) == 0;
          v42 = (char *)&PopCapabilities + 3;
        }
        if ( !v48 )
          v42 = 0LL;
LABEL_142:
        v49 = v43 & (unsigned int)-(byte_1403AAAA4[8 * v41] != 0);
        if ( (int)v49 > (int)qword_1403AABA0 )
          LODWORD(qword_1403AABA0) = byte_1403AAAA4[8 * v41] != 0 ? v43 : 0;
        if ( v42 && *v42 != 1 )
        {
          *v42 = 1;
          PopResetCurrentPolicies(v42, v49);
        }
        goto LABEL_493;
      case ProcessorStateHandler:
        if ( v12 || !v17 )
          goto LABEL_68;
        Src = &PpmProcessorDriverDispatchTable;
        Length_4 = 248;
        goto LABEL_493;
      case SystemPowerPolicyCurrent:
        if ( v12 || !v17 )
          goto LABEL_68;
        v35 = PopPolicy;
        goto LABEL_76;
      case AdministratorPowerPolicy:
        if ( v12 )
        {
          if ( v15 < 0x18 )
            goto LABEL_73;
          WakeSource = PopApplyAdminPolicy(v9, v12);
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
          if ( WakeSource < 0 || (WakeSource = PopResetCurrentPolicies(v37, v36), WakeSource < 0) )
          {
LABEL_70:
            v22 = v93;
            goto LABEL_500;
          }
        }
        else if ( !v17 )
        {
          goto LABEL_68;
        }
        v38 = &PopAdminPolicy;
        goto LABEL_85;
      case SystemReserveHiberFile:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( !v15 )
          goto LABEL_73;
        KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
        PopAcquirePolicyLock();
        LOBYTE(v50) = 1;
        LOBYTE(v51) = *(_BYTE *)v12;
        WakeSource = PopEnableHiberFile(v51, v50);
        PopReleasePolicyLock();
        KeSetEvent(&PopTransitionLock, 0, 0);
        goto LABEL_157;
      case ProcessorInformation:
        if ( v12 || !v17 )
          goto LABEL_68;
        v55 = PopProcessorInformation(v110, v13, KeGetCurrentPrcb()->Group, &Length_4);
        v12 = (__int128 *)v100;
        goto LABEL_177;
      case SystemPowerInformation:
        if ( v12 || !v17 )
          goto LABEL_68;
        LODWORD(v110[0]) = 0;
        HIDWORD(v110[0]) = dword_1403A9F84;
        LODWORD(v110[1]) = dword_1403A9F8C - dword_1403A9F88;
        BYTE4(v110[1]) = PopCoolingMode;
        Src = v110;
        Length_4 = 16;
        goto LABEL_493;
      case ProcessorStateHandler2:
      case ProcessorPowerPolicyAc:
      case ProcessorPowerPolicyDc:
      case VerifyProcessorPowerPolicyAc:
      case VerifyProcessorPowerPolicyDc:
      case ProcessorPowerPolicyCurrent:
      case ProcessorPerfStates:
      case ProcessorIdleStates:
      case ProcessorCap:
      case ProcessorIdleDomains:
      case ProcessorIdleStatesHv:
      case ProcessorPerfStatesHv:
      case ProcessorPerfCapHv:
      case RegisterSpmPowerSettings:
      case PlatformIdleStates:
      case ProcessorIdleVeto:
      case PlatformIdleVeto:
        goto LABEL_77;
      case LastWakeTime:
        if ( v12 || !v17 )
          goto LABEL_68;
        v54 = &qword_1403AA0A8;
        goto LABEL_166;
      case LastSleepTime:
        if ( v12 || !v17 )
          goto LABEL_68;
        v54 = &qword_1403AA0B0;
        goto LABEL_166;
      case SystemExecutionState:
        if ( v12 || !v17 )
          goto LABEL_68;
        if ( dword_1403962E0 )
          LODWORD(v110[0]) |= 1u;
        if ( PopPowerRequestAttributes[0] )
          LODWORD(v110[0]) |= 2u;
        goto LABEL_205;
      case SystemPowerStateNotifyHandler:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 < 0x10 )
          goto LABEL_73;
        if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)v12 )
          goto LABEL_68;
        PopPowerStateNotifyHandler = *v12;
        goto LABEL_493;
      case SystemPowerStateLogging:
        if ( v12 || !v17 )
          goto LABEL_68;
        WakeSource = PopLoggingInformation(P, &v106);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        Src = P[0];
        Length_4 = v106;
        goto LABEL_493;
      case SystemPowerLoggingEntry:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 < 8 )
          goto LABEL_73;
        v58 = PopLogSleepDisabled(*(unsigned int *)v12, *((unsigned int *)v12 + 1), 0LL, 0LL);
        goto LABEL_192;
      case SetPowerSettingValue:
        if ( !v12 )
          goto LABEL_68;
        if ( v17 )
          goto LABEL_68;
        if ( Length )
          goto LABEL_68;
        if ( v15 < 0x1C )
          goto LABEL_68;
        v59 = *((_DWORD *)v12 + 6);
        v103 = v59;
        if ( v59 == SystemPowerPolicyAc )
          goto LABEL_68;
        LODWORD(v107) = *((_DWORD *)v12 + 5);
        if ( (unsigned int)v107 > 2 )
          goto LABEL_68;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( *(_DWORD *)v12 != 1 )
        {
          WakeSource = -1073741736;
          goto LABEL_70;
        }
        v60 = v59 + 28;
        v61 = -1;
        if ( v60 >= 0x1C )
          v61 = v60;
        Length_4 = v61;
        WakeSource = v60 < 0x1C ? 0xC0000095 : 0;
        if ( v60 < 0x1C )
          goto LABEL_70;
        if ( v15 < v61 )
          goto LABEL_68;
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (__int128 *)v100;
        v58 = PopSetPowerSettingValue((LPCGUID)((char *)v100 + 4), ProcessSessionId, v107, v103, (char *)v100 + 28);
LABEL_192:
        WakeSource = v58;
        v52 = v58 < 0;
        goto LABEL_158;
      case SystemMonitorHiberBootPowerOff:
        PopSuspendResumePdc(1LL, v13);
        PopHiberBootForceMonitorOff = 1;
        SettingNotificationName = PoPowerOffMonitor();
        goto LABEL_370;
      case SystemVideoState:
        if ( v12 || !v17 )
          goto LABEL_68;
        Length_4 = 4;
        Src = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !Src )
          goto LABEL_232;
        v96 = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_493;
      case TraceApplicationPowerMessage:
      case TraceApplicationPowerMessageEnd:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 < 8 )
          goto LABEL_73;
        if ( v8 == TraceApplicationPowerMessage )
          PopDiagTraceAppPowerMessage(v12, v13);
        else
          PopDiagTraceAppPowerMessageEnd(v12, v13);
        goto LABEL_493;
      case SystemWakeSource:
        if ( v12 || !v17 )
          goto LABEL_68;
        if ( (_BYTE)v13 )
          PopReleasePolicyLock();
        v22 = 0;
        v93 = 0;
        Length_4 = 0;
        WakeSource = PopGetWakeSource(0LL, &Length_4);
        if ( WakeSource != -1073741789 )
          goto LABEL_248;
        Src = ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x206D654Du);
        if ( !Src )
        {
          WakeSource = -1073741670;
          InputBuffer = v16;
          goto LABEL_500;
        }
        v96 = 1;
        WakeSource = PopGetWakeSource(Src, &Length_4);
LABEL_248:
        InputBuffer = v16;
        if ( WakeSource < 0 )
          goto LABEL_500;
        v98 = 0;
        goto LABEL_493;
      case SystemHiberFileInformation:
        if ( !v17 )
          goto LABEL_68;
        if ( !(_DWORD)dword_1403AA1A0 || !qword_1403AA198 )
        {
          WakeSource = -1073741275;
          goto LABEL_69;
        }
        Length_4 = dword_1403AA1A0 + 8;
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_1403AA1A0 + 8), 0x206D654Du);
        v64 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_232:
          WakeSource = -1073741670;
          goto LABEL_69;
        }
        Src = PoolWithTag;
        v96 = 1;
        memmove(PoolWithTag + 2, qword_1403AA198, (unsigned int)dword_1403AA1A0);
        *v64 = (unsigned int)dword_1403AA1A0 >> 4;
        goto LABEL_493;
      case TraceServicePowerMessage:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( PreviousMode != 1 )
          goto LABEL_222;
        if ( v15 >= 4 )
        {
          WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v12 + 2, v15 - 4, 0LL);
          if ( WakeSource >= 0 )
            WakeSource = 0;
        }
        else
        {
          WakeSource = -1073741811;
        }
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        PopDiagTraceServiceNotification(v12, v13);
        goto LABEL_493;
      case ProcessorLoad:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 == 6 )
        {
          v65 = PpmSetSimulatedLoad((__int64)v12);
          goto LABEL_262;
        }
        if ( v15 != 4 )
          goto LABEL_263;
        v65 = PpmClearSimulatedLoad((_PROCESSOR_NUMBER *)v12);
        goto LABEL_262;
      case PowerShutdownNotification:
        if ( !v12 || v17 || v15 != 24 )
          goto LABEL_68;
        v66 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( !v66 )
          goto LABEL_232;
        *(_OWORD *)v66 = *v12;
        v66[2] = *((_QWORD *)v12 + 2);
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopShutdownNotificationCallback,
                (signed __int64)v66,
                0LL) )
          goto LABEL_101;
        ExFreePoolWithTag(v66, 0x206D654Du);
        WakeSource = -1073741823;
        v12 = (__int128 *)v100;
        goto LABEL_69;
      case MonitorCapabilities:
        if ( !v12 || v15 != 4 || v17 )
          goto LABEL_68;
        v105 = *(_DWORD *)v12 != 0;
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4u, &v105);
        goto LABEL_493;
      case SessionPowerInit:
        if ( v12 )
          goto LABEL_68;
        if ( !v17 )
          goto LABEL_68;
        v68 = Length;
        if ( Length != 64 )
          goto LABEL_68;
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        v76 = PopEsState;
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        LOBYTE(v110[6]) = v76 == 1;
        LOBYTE(v110[7]) = TtmpEnabled == 1;
        if ( TtmpEnabled == 1 )
        {
          WakeSource = TtmInitCurrentSession();
          InputBuffer = v16;
          if ( WakeSource < 0 )
            goto LABEL_70;
        }
        PopAcquirePolicyLock();
        LODWORD(v110[2]) = 0;
        v110[0] = &PopNoMoreInput;
        v110[1] = &PopHiberBootForceMonitorOff;
        LODWORD(v110[3]) = byte_1403AAA31 != 0;
        HIDWORD(v110[3]) = dword_1403AAA2C;
        HIDWORD(v110[2]) = dword_1403AAA4C;
        v110[4] = qword_1403AAA50;
        HIDWORD(v110[6]) = HIDWORD(qword_1403AAA58);
        v110[5] = __PAIR64__(dword_1403AAA60, qword_1403AAA58);
        BYTE1(v110[6]) = PopLidOpened;
        Src = v110;
        Length_4 = 64;
        v77 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", v77);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
        PopReleasePolicyLock();
        v12 = (__int128 *)v100;
        goto LABEL_494;
      case SessionDisplayState:
        if ( !v12 || v15 != 16 || v17 )
          goto LABEL_68;
        if ( *((_BYTE *)v12 + 13) && *((_BYTE *)v12 + 12) )
        {
          if ( PopPlatformAoAc )
          {
            LOBYTE(v9) = *((_BYTE *)v12 + 15);
            PopProcessSessionDisplayStateChange(v9, *((unsigned int *)v12 + 2));
          }
          PopSetDisplayStatus(*((unsigned int *)v12 + 1), v13);
          PopUpdateConsoleDisplayState(*((unsigned int *)v12 + 1));
        }
        v78 = *((_BYTE *)v12 + 14);
        if ( v78 )
        {
          if ( *((_BYTE *)v12 + 12) )
          {
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)v12 + 4, 4u, 0LL, 0LL, 0, 0);
            v78 = *((_BYTE *)v12 + 14);
          }
          if ( v78 )
            PopDiagTraceSessionDisplayStateChange(
              *((_DWORD *)v12 + 1) == 0,
              *(_DWORD *)v12,
              *((unsigned __int8 *)v12 + 12),
              *((_DWORD *)v12 + 2));
        }
        goto LABEL_493;
      case PowerRequestCreate:
      case PlmPowerRequestCreate:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 != 40 )
          goto LABEL_73;
        v68 = Length;
        if ( Length != 8 )
          goto LABEL_73;
        LOBYTE(v13) = v8 == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo(v12, v13, v110);
        goto LABEL_330;
      case PowerRequestAction:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 != 24 )
          goto LABEL_73;
        v58 = PopPowerRequestActionInfo(v12, v13);
        goto LABEL_192;
      case GetPowerRequestList:
        if ( v12 || !v17 )
          goto LABEL_68;
        PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Length_4);
        goto LABEL_342;
      case ProcessorInformationEx:
        if ( !v12 )
          goto LABEL_68;
        if ( v15 < 2 )
          goto LABEL_68;
        if ( !v17 )
          goto LABEL_68;
        v56 = *(_WORD *)v12;
        if ( v56 >= KeQueryActiveGroupCount() )
          goto LABEL_68;
        v55 = PopProcessorInformation(v110, v57, v56, &Length_4);
LABEL_177:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        WakeSource = v55;
        if ( v55 < 0 )
          goto LABEL_70;
        Src = v110;
        goto LABEL_493;
      case NotifyUserModeLegacyPowerEvent:
        if ( !v12 || v15 != 16 )
          goto LABEL_68;
        v83 = PopUmpoSendLegacyEvent(v12, v13);
        WakeSource = v83;
        if ( v83 >= 0 )
          goto LABEL_493;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( v83 == -1073741536 )
          goto LABEL_493;
        goto LABEL_70;
      case GroupPark:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_222;
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 == 16 )
        {
          v65 = PpmParkApplyForcedMask(v12, v13);
          goto LABEL_262;
        }
        if ( v15 != 2 )
          goto LABEL_263;
        v65 = PpmParkClearForcedMask(v12, v13);
        goto LABEL_262;
      case WakeTimerList:
        if ( v12 || !v17 )
          goto LABEL_68;
        PowerRequestListInfo = ExGetWakeTimerList(&Src, &Length_4);
LABEL_342:
        WakeSource = PowerRequestListInfo;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( PowerRequestListInfo < 0 )
          goto LABEL_70;
        v96 = 1;
        goto LABEL_493;
      case SystemHiberFileSize:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 < 4 )
          goto LABEL_73;
        KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
        PopAcquirePolicyLock();
        v53 = PopSetHiberFileSize(*(unsigned int *)v12, v108);
        goto LABEL_164;
      case ProcessorSetIdle:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_222;
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 == 8 )
        {
          v65 = PpmSetSimulatedIdle((__int64)v12);
        }
        else
        {
          if ( v15 != 4 )
          {
LABEL_263:
            WakeSource = -1073741811;
            goto LABEL_157;
          }
          v65 = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)v12);
        }
        goto LABEL_262;
      case LogicalProcessorIdling:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 != 8 )
          goto LABEL_73;
        v68 = Length;
        if ( Length != 4 )
          goto LABEL_73;
        WakeSource = PpmParkSetLpiCap(*(_DWORD *)v12, *((_DWORD *)v12 + 1), (unsigned int *)v110);
        if ( WakeSource < 0 )
          goto LABEL_69;
        Src = v110;
        Length_4 = 4;
        goto LABEL_494;
      case UserPresence:
        if ( !ExVerifySuite(PhoneNT) )
        {
LABEL_77:
          WakeSource = -1073741822;
          goto LABEL_69;
        }
        if ( !v12 || v15 != 1 || v17 )
          goto LABEL_68;
        LOBYTE(v75) = *(_BYTE *)v12;
        WakeSource = PopUserPresentOverride(v75);
        if ( WakeSource >= 0 )
          goto LABEL_493;
        goto LABEL_69;
      case PowerSettingNotificationName:
        if ( !v17 )
          goto LABEL_68;
        if ( v16 && v15 != 20 || Length != 8 )
          goto LABEL_73;
        SettingNotificationName = PopGetSettingNotificationName(v12, v17);
        goto LABEL_370;
      case GetPowerSettingValue:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 != 16 || Length < 4 )
          goto LABEL_73;
        SettingNotificationName = PopGetSettingValue(v12, v17, Length);
        goto LABEL_370;
      case IdleResiliency:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 < 8 )
          goto LABEL_73;
        PopEnforceResiliencyScenarios(v12);
        goto LABEL_493;
      case SessionRITState:
        if ( !v12 )
          goto LABEL_68;
        if ( v15 != 8 )
          goto LABEL_68;
        if ( !v17 )
          goto LABEL_68;
        v68 = Length;
        if ( Length != 8 )
          goto LABEL_68;
        v69 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (__int128 *)v100;
        PopSessionInputChange(v69, v100, v17);
        goto LABEL_494;
      case SessionConnectNotification:
        if ( !v12 )
          goto LABEL_68;
        if ( v15 != 2 )
          goto LABEL_68;
        if ( !v17 )
          goto LABEL_68;
        v68 = Length;
        if ( Length != 8 )
          goto LABEL_68;
        v70 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopSessionConnectionChange(v70, v100, v17);
        v72 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (__int128 *)v100;
        if ( qword_1403D1430 )
        {
          LOBYTE(v71) = *((_BYTE *)v100 + 1);
          LOBYTE(v73) = *(_BYTE *)v100;
          qword_1403D1430(v72, v71, v73);
        }
        goto LABEL_494;
      case SessionPowerCleanup:
        if ( v12 || v17 )
          goto LABEL_68;
        v67 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", v67);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
        PopFreeSessionState(v67);
        if ( TtmpEnabled == 1 )
          TtmCleanupCurrentSession();
        goto LABEL_101;
      case SessionLockState:
        if ( !v12 || v15 != 8 || v17 )
          goto LABEL_68;
        v74 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (__int128 *)v100;
        PopSessionWinlogonNotification(v74, (__int64)v100);
        goto LABEL_493;
      case SystemHiberbootState:
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_103;
        if ( v12 || !v17 )
          goto LABEL_68;
        PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v110);
        if ( BYTE2(v110[2]) )
          PopReadHiberbootPolicy((char *)&v110[2] + 2);
        v39 = (char *)&v110[2] + 2;
        goto LABEL_109;
      case PlatformInformation:
        if ( v12 || !v17 )
          goto LABEL_68;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
        goto LABEL_400;
      case PdcInvocation:
        if ( !v12 || v15 != 144 || v17 && Length != 192 )
          goto LABEL_68;
        SettingNotificationName = PopPdcInvocation(v12, v17);
        goto LABEL_370;
      case MonitorInvocation:
        if ( !v12 || v15 != 8 || v17 || Length )
          goto LABEL_68;
        WakeSource = 0;
        if ( PopPlatformAoAc )
        {
          if ( *(_BYTE *)v12 )
          {
            PopAcquirePolicyLock();
            LOBYTE(v85) = 1;
            WakeSource = PopProcessSessionDisplayStateChange(v85, *((unsigned int *)v12 + 1));
            PopReleasePolicyLock();
            if ( (!WakeSource || WakeSource == 259)
              && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
              && !PopConsoleDisplayState )
            {
              PopDiagTraceMonitorOnWithLidClosed(*((unsigned int *)v12 + 1));
              PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
              ZwUpdateWnfStateData(
                &WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
                &PopLastStandbyExitScenarioId,
                1u,
                0LL,
                0LL,
                0,
                0);
            }
          }
        }
        goto LABEL_69;
      case FirmwareTableInformationRegistered:
        if ( v12 || v17 )
          goto LABEL_68;
        WakeSource = PopInitPlatformSettings(v9, v13);
        byte_1403AAB74 = PopPlatformAoAc;
        goto LABEL_69;
      case SetShutdownSelectedTime:
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_493;
      case SuspendResumeInvocation:
        if ( !v12 || v15 != 8 || v17 && Length )
          goto LABEL_68;
        WakeSource = 0;
        if ( !qword_1403D1440 )
          goto LABEL_69;
        LOBYTE(v13) = *((_BYTE *)v12 + 4);
        LOBYTE(v10) = *((_BYTE *)v12 + 5);
        LOBYTE(v11) = *((_BYTE *)v12 + 6);
        SettingNotificationName = qword_1403D1440(*(unsigned int *)v12, v13, v10, v11);
        goto LABEL_370;
      case ScreenOff:
      case ThermalStandby:
        if ( v12 || v17 )
          goto LABEL_68;
        v87 = 23LL;
        if ( v8 != ThermalStandby )
          v87 = 11LL;
        PopScreenOff(v87, v13);
        goto LABEL_415;
      case CsDeviceNotification:
        if ( PreviousMode )
          goto LABEL_222;
        if ( !v12 || v15 != 16 || v17 || Length )
          goto LABEL_68;
        SettingNotificationName = PopPdcCsDeviceNotification(v12, v13);
LABEL_370:
        WakeSource = SettingNotificationName;
        goto LABEL_69;
      case PlatformRole:
        if ( v12 || !v17 )
          goto LABEL_68;
        LODWORD(v110[0]) = PopCapturePlatformRole(v9, v13);
LABEL_205:
        Src = v110;
        Length_4 = 4;
        goto LABEL_493;
      case LastResumePerformance:
        if ( v12 || !v17 )
          goto LABEL_68;
        LODWORD(v110[0]) = qword_1403AA548;
        v110[1] = qword_1403AA6E0;
        v110[2] = qword_1403AA6E8;
        if ( !PopSleepStats )
        {
          WakeSource = -1073741823;
          goto LABEL_69;
        }
        v38 = (__int128 *)v110;
LABEL_85:
        Src = v38;
        Length_4 = 24;
        goto LABEL_493;
      case DisplayBurst:
        if ( v12 || v17 )
          goto LABEL_68;
        v88 = PopErrataReportingIncorrectLidState;
        if ( TtmpEnabled == 1 )
        {
          v89 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          TtmNotifySessionDisplayBurst(v89);
LABEL_101:
          v12 = (__int128 *)v100;
        }
        else
        {
          v90 = 0;
          if ( !PopLidOpened )
            v90 = PopConsoleExternalDisplayConnected == 0;
          if ( !v90 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v88 )
          {
            LOBYTE(v10) = v90;
            PopDiagTraceDisplayBurstWin32kCallout(v9, v13, v10);
          }
        }
        goto LABEL_493;
      case ExitLatencySamplingPercentage:
        if ( PreviousMode != 1 )
        {
LABEL_222:
          WakeSource = -1073741790;
          goto LABEL_69;
        }
        if ( v17 || Length )
          goto LABEL_68;
        if ( v12 )
        {
          if ( v15 != 4 )
            goto LABEL_68;
          PpmSetExitLatencySamplingPercentage((int *)v12);
        }
        else
        {
          PpmClearExitLatencySamplingPercentage();
        }
        goto LABEL_493;
      case SystemBatteryStatePrecise:
        if ( v12 || !v17 )
          goto LABEL_68;
        PopBatteryUpdateCurrentState(v9, v13);
LABEL_112:
        PopCurrentPowerState(v110);
        Src = v110;
        Length_4 = 32;
        goto LABEL_493;
      case ThermalEvent:
        if ( !v12 || v17 )
          goto LABEL_68;
        if ( v15 < 0x10 || v15 < 2 * (unsigned int)*((unsigned __int16 *)v12 + 6) + 14 )
          goto LABEL_73;
        v58 = PopThermalProcessUsermodeEvent(v12, v13);
        goto LABEL_192;
      case PowerRequestActionInternal:
        v80 = *((_DWORD *)v12 + 2);
        v81 = *(_QWORD *)v12;
        if ( *((_BYTE *)v12 + 12) )
          PoSetPowerRequestInternal(v81, v80);
        else
          PoClearPowerRequestInternal(v81, v80);
        goto LABEL_493;
      case BatteryDeviceState:
        if ( !v12 || !v17 )
          goto LABEL_68;
        WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v12, v15, 0LL);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        WakeSource = PopBatteryDeviceState(v12, v110);
        if ( WakeSource < 0 )
          goto LABEL_70;
        Src = v110;
        Length_4 = 52;
        goto LABEL_493;
      case PowerInformationInternal:
        if ( !v12 )
          goto LABEL_68;
        if ( v15 < 8 )
          goto LABEL_68;
        v91 = *(_PROCESSOR_NUMBER *)v12;
        if ( *(int *)v12 >= 43 )
          goto LABEL_68;
        if ( (unsigned int)(*(_DWORD *)&v91 - 9) > 8 )
        {
          v65 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64))PopPowerInformationInternal)(
                  v91,
                  (_DWORD)v12,
                  v15,
                  (_DWORD)v17,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v96);
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
            && !PopCapabilityCheck(L"terminalPowerManagement") )
          {
            WakeSource = -1073741727;
            goto LABEL_69;
          }
          v65 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64))TtmDispatchApi)(
                  v91,
                  (_DWORD)v12,
                  v15,
                  (_DWORD)v17,
                  Length,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v96);
        }
LABEL_262:
        WakeSource = v65;
LABEL_157:
        v52 = WakeSource < 0;
LABEL_158:
        InputBuffer = v16;
        if ( !v52 )
          goto LABEL_493;
        goto LABEL_70;
      case SystemHiberFileType:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 < 4 )
          goto LABEL_73;
        KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
        PopAcquirePolicyLock();
        v53 = PopSetHiberFileType(*(unsigned int *)v12, v108);
LABEL_164:
        WakeSource = v53;
        PopReleasePolicyLock();
        KeSetEvent(&PopTransitionLock, 0, 0);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
        if ( WakeSource < 0 )
          goto LABEL_70;
        v54 = (__int64 *)v108;
LABEL_166:
        Src = v54;
        Length_4 = 8;
        goto LABEL_493;
      case PhysicalPowerButtonPress:
        if ( !v12 || v15 < 4 || v17 )
          goto LABEL_68;
        PopUpdatePowerButtonHoldState(*(_DWORD *)v12 != 0);
        goto LABEL_493;
      case QueryPotentialDripsConstraint:
        if ( !PopPlatformAoAc )
        {
LABEL_103:
          WakeSource = -1073741637;
          goto LABEL_69;
        }
        if ( !v12 || v15 != 336 || !v17 )
        {
LABEL_68:
          WakeSource = -1073741811;
          goto LABEL_69;
        }
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(v12);
LABEL_400:
        LOBYTE(v110[0]) = IsDevicePotentialDripsConstraint;
        v39 = (char *)v110;
LABEL_109:
        Src = v39;
        Length_4 = 1;
LABEL_493:
        v68 = Length;
LABEL_494:
        if ( !Src || !v17 )
          goto LABEL_415;
        if ( v68 < Length_4 )
          goto LABEL_73;
        memmove(v17, Src, Length_4);
LABEL_415:
        WakeSource = 0;
        goto LABEL_69;
      case EnergyTrackerCreate:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 != 12 )
          goto LABEL_73;
        v68 = Length;
        if ( Length != 8 )
          goto LABEL_73;
        Info = PopEtEnergyTrackerCreate(v12, v110);
LABEL_330:
        WakeSource = Info;
        InputBuffer = v16;
        if ( Info < 0 )
          goto LABEL_70;
        Src = v110;
        Length_4 = 8;
        goto LABEL_494;
      case EnergyTrackerQuery:
        if ( !v12 || !v17 )
          goto LABEL_68;
        if ( v15 != 8 )
          goto LABEL_73;
        v68 = Length;
        if ( Length < 0xC )
          goto LABEL_73;
        WakeSource = PopEtEnergyTrackerQuery(*(_QWORD *)v12, (__int64)v17, Length);
        InputBuffer = v16;
        if ( WakeSource >= 0 )
          goto LABEL_494;
        goto LABEL_70;
      case UpdateBlackBoxRecorder:
        if ( !v12 || v17 || Length )
          goto LABEL_68;
        if ( v15 != 32 )
          goto LABEL_73;
        LOBYTE(v13) = PreviousMode;
        v58 = PopBlackBoxUpdate(v12, v13);
        goto LABEL_192;
      case SessionAllowExternalDmaDevices:
        if ( !v12 || v15 != 1 || v17 )
          goto LABEL_68;
        PnpWinlogonExternalDmaNotification(v12);
        goto LABEL_493;
      default:
        goto LABEL_68;
    }
  }
  if ( (unsigned int)v8 > SetPowerSettingValue || (v18 = 50462912, !_bittest(&v18, v8)) )
  {
    v19 = (unsigned int)(v8 - 30);
    if ( (unsigned int)v19 > 0x3D || (v9 = 0x209E02E385CA1E1FLL, !_bittest64(&v9, v19)) )
    {
      v21 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v21 <= 0x3A && (v9 = 0x608801808940903LL, _bittest64(&v9, v21)) || (unsigned int)(v8 - 2) <= 1 )
      {
        WakeSource = SeIsAppContainerOrIdentifyLevelContext(0LL);
        v102 = WakeSource;
        if ( WakeSource < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
          v12 = (__int128 *)v100;
          v22 = 0;
          goto LABEL_500;
        }
        v8 = v103;
        if ( v101 )
        {
          if ( v103 != ScreenOff && v103 != ThermalStandby )
          {
            WakeSource = -1073741790;
            v102 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
            v12 = (__int128 *)v100;
            v22 = 0;
            goto LABEL_500;
          }
          if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
          {
            WakeSource = -1073741790;
            v102 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
            v12 = (__int128 *)v100;
            v22 = 0;
            goto LABEL_500;
          }
        }
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        LOBYTE(v9) = v14;
        WakeSource = ExCheckFullProcessInformationAccess(v9);
        v102 = WakeSource;
        if ( WakeSource < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
          v12 = (__int128 *)v100;
          v22 = 0;
          goto LABEL_500;
        }
        v8 = v103;
      }
      v23 = (unsigned int)(v8 - 28);
      if ( (unsigned int)v23 <= 0x32 )
      {
        v9 = 0x4000000420001LL;
        if ( _bittest64(&v9, v23) )
        {
          if ( !(unsigned __int8)PspIsContextAdmin() )
          {
            WakeSource = -1073741790;
            v102 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
            v12 = (__int128 *)v100;
            v22 = 0;
            goto LABEL_500;
          }
        }
      }
      if ( v16 )
      {
        v24 = (unsigned int)(v8 - 11);
        if ( (unsigned int)v24 > 0x3D || (v25 = 0x2001800900000001LL, !_bittest64(&v25, v24)) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
          {
            WakeSource = -1073741637;
            v102 = -1073741637;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
            v12 = (__int128 *)v100;
            v22 = 0;
            goto LABEL_500;
          }
        }
        if ( v8 == AdministratorPowerPolicy
          || (v26 = (unsigned int)(v8 - 38), (unsigned int)v26 <= 0x39)
          && (v27 = 0x218000004422401LL, _bittest64(&v27, v26)) )
        {
          if ( !(unsigned __int8)PspIsContextAdmin() )
          {
            WakeSource = -1073741790;
            v102 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
            v12 = (__int128 *)v100;
            v22 = 0;
            goto LABEL_500;
          }
        }
        if ( (unsigned int)(v8 - 2) > 1 )
        {
          v28 = (unsigned int)(v8 - 37);
          if ( (unsigned int)v28 > 0x3A || (v29 = 0x7AE005828F40BC3LL, !_bittest64(&v29, v28)) )
          {
            if ( v8 != ProcessorInformation )
            {
              v30 = (void *)SeShutdownPrivilege;
              if ( v8 == SystemReserveHiberFile )
                v30 = (void *)SeCreatePagefilePrivilege;
              P[2] = v30;
              if ( !SeSinglePrivilegeCheck((LUID)v30, v14) )
              {
                WakeSource = -1073741727;
                v102 = -1073741727;
                InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
                v12 = (__int128 *)v100;
                v22 = 0;
                goto LABEL_500;
              }
            }
          }
        }
        if ( v15 )
        {
          v31 = (unsigned __int64)v16 + v15;
          if ( v31 > 0x7FFFFFFF0000LL || v31 < (unsigned __int64)v16 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v32 = v15;
        if ( v15 > 0x40 )
        {
          v12 = (__int128 *)ExAllocatePoolWithTag(PagedPool, v15, 0x206D654Du);
          v100 = v12;
          v32 = v15;
          if ( !v12 )
          {
            WakeSource = -1073741670;
            v102 = -1073741670;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
            v22 = 0;
            goto LABEL_500;
          }
        }
        else
        {
          v12 = (__int128 *)psz;
          v100 = psz;
        }
        memmove(v12, v16, v32);
      }
      else
      {
        v12 = (__int128 *)v100;
      }
      if ( v17 )
        ProbeForWrite(v17, Length, 1u);
      LOBYTE(v13) = 0;
      goto LABEL_59;
    }
  }
  WakeSource = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v15 != 0));
  v12 = (__int128 *)v100;
LABEL_499:
  v22 = 0;
LABEL_500:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v96 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v22 )
    PopReleasePolicyLock();
  if ( v12 && v12 != InputBuffer && v12 != (__int128 *)psz )
    ExFreePoolWithTag(v12, 0x206D654Du);
  return WakeSource;
}
