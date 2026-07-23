/*
 * XREFs of NtPowerInformation @ 0x1404C2F2C
 * Callers:
 *     TtmpCalloutWatchdogCallback @ 0x14041DB70 (TtmpCalloutWatchdogCallback.c)
 *     TtmpCalloutArmWatchdog @ 0x1406D7690 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1406D7768 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1406D77C8 (TtmpCalloutDestroyWatchdog.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PopDisksRegisteredForIdle @ 0x140039B6C (PopDisksRegisteredForIdle.c)
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveGroupCount @ 0x14012E4F0 (KeQueryActiveGroupCount.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14013D0C4 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x14013DBE8 (PoPowerOffMonitor.c)
 *     PopEventCalloutDispatch @ 0x14014B6E4 (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x140159290 (ExVerifySuite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140227A34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x140227A7C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402292F0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1402293C8 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x14022A410 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14022AEB8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PpmClearSimulatedLoad @ 0x14022D354 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14022D688 (PpmSetSimulatedLoad.c)
 *     PoSetCsSessionGoal @ 0x14022F3C8 (PoSetCsSessionGoal.c)
 *     PopUpdatePowerButtonHoldState @ 0x140234864 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x140237BAC (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14025CC34 (ExGetWakeTimerList.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopDiagTraceSessionStates @ 0x14042015C (PopDiagTraceSessionStates.c)
 *     PopProcessorInformation @ 0x14044D5F4 (PopProcessorInformation.c)
 *     PopLoggingInformation @ 0x140453E50 (PopLoggingInformation.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopCurrentPowerState @ 0x1404C4460 (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 *     PopPowerRequestActionInfo @ 0x1404C7464 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404C7614 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopGetSettingValue @ 0x1404C79F0 (PopGetSettingValue.c)
 *     PopPowerRequestCreateInfo @ 0x1404C7E70 (PopPowerRequestCreateInfo.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     PopBlackBoxUpdate @ 0x1405744A4 (PopBlackBoxUpdate.c)
 *     PopSuspendResumePdc @ 0x140576F64 (PopSuspendResumePdc.c)
 *     PopUmpoSendLegacyEvent @ 0x1405775F4 (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x140578918 (PopDiagTraceServiceNotification.c)
 *     PopGetWakeSource @ 0x1405790CC (PopGetWakeSource.c)
 *     PopDiagTraceAppPowerMessage @ 0x140579288 (PopDiagTraceAppPowerMessage.c)
 *     PopReadHiberbootPolicy @ 0x1405793A0 (PopReadHiberbootPolicy.c)
 *     PopFreeSessionState @ 0x140579608 (PopFreeSessionState.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x1405798A8 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopSetDisplayStatus @ 0x140579DA0 (PopSetDisplayStatus.c)
 *     PopEnforceResiliencyScenarios @ 0x140579E38 (PopEnforceResiliencyScenarios.c)
 *     PopBatteryUpdateCurrentState @ 0x14057D4B4 (PopBatteryUpdateCurrentState.c)
 *     PopSessionConnectionChange @ 0x14057D5B0 (PopSessionConnectionChange.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     PopLogSleepDisabled @ 0x1405C2380 (PopLogSleepDisabled.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1405C3AEC (PopVerifySystemPowerPolicy.c)
 *     PopPdcInvocation @ 0x1405D1FEC (PopPdcInvocation.c)
 *     PopApplyAdminPolicy @ 0x1406C6E3C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1406C6FE8 (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x1406C9BD4 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406C9CDC (PopSetHiberFileType.c)
 *     PopBatteryDeviceState @ 0x1406CA30C (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x1406CB6E8 (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x1406CB998 (PopScreenOff.c)
 *     PopThermalProcessUsermodeEvent @ 0x1406CBBFC (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1406CD264 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopEtEnergyTrackerCreate @ 0x1406D1460 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerQuery @ 0x1406D1744 (PopEtEnergyTrackerQuery.c)
 *     PopUserPresentOverride @ 0x1406D47FC (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x1406D6688 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406D675C (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x1406D8DC4 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406D9278 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1406D9DCC (TtmDispatchApi.c)
 *     PopInitPlatformSettings @ 0x140819EF8 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v9; // r8
  __int64 v10; // r9
  _PROCESSOR_NUMBER *PoolWithTag; // rsi
  __int64 v12; // rdx
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v14; // r15d
  unsigned __int64 v15; // rcx
  _DWORD *v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  char v30; // r13
  void *v31; // rcx
  int v32; // eax
  ULONG v33; // r15d
  unsigned __int64 v35; // rax
  _PROCESSOR_NUMBER v36; // ebx
  NTSTATUS v37; // eax
  bool v38; // sf
  int v39; // eax
  int v40; // eax
  char IsDevicePotentialDripsConstraint; // al
  char *v42; // rax
  NTSTATUS SettingValue; // eax
  int Info; // eax
  USHORT Group; // bx
  __int64 v46; // rdx
  _DWORD *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  _BYTE *v51; // rdx
  int v52; // r9d
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ebx
  int v58; // ebx
  bool v59; // zf
  char *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 *v66; // rax
  PVOID v67; // rax
  _QWORD *v68; // rax
  unsigned int v69; // ebx
  unsigned int v70; // eax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  NTSTATUS v76; // eax
  unsigned int v77; // r13d
  unsigned int v78; // eax
  unsigned int ProcessSessionId; // eax
  unsigned int *v80; // rax
  unsigned int *v81; // rbx
  __int64 v82; // rcx
  unsigned int v83; // edx
  __int64 v84; // rcx
  int PowerRequestListInfo; // eax
  NTSTATUS v86; // eax
  char v87; // r15
  unsigned int v88; // eax
  bool v89; // bl
  char v90; // [rsp+40h] [rbp-6E8h]
  ULONG Length; // [rsp+44h] [rbp-6E4h]
  void *Length_4; // [rsp+48h] [rbp-6E0h]
  unsigned int Size; // [rsp+50h] [rbp-6D8h] BYREF
  char Size_4; // [rsp+54h] [rbp-6D4h] BYREF
  KPROCESSOR_MODE Size_5; // [rsp+55h] [rbp-6D3h]
  void *Src; // [rsp+58h] [rbp-6D0h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+60h] [rbp-6C8h]
  char v98; // [rsp+68h] [rbp-6C0h]
  int v99; // [rsp+6Ch] [rbp-6BCh]
  char v100; // [rsp+70h] [rbp-6B8h]
  BOOL v101; // [rsp+74h] [rbp-6B4h]
  unsigned int v102; // [rsp+78h] [rbp-6B0h] BYREF
  unsigned int v103; // [rsp+7Ch] [rbp-6ACh]
  char v104[8]; // [rsp+80h] [rbp-6A8h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-6A0h] BYREF
  _QWORD v106[192]; // [rsp+A0h] [rbp-688h] BYREF
  _BYTE v107[64]; // [rsp+6A0h] [rbp-88h] BYREF

  memset(v106, 0, sizeof(v106));
  Src = 0LL;
  Size = 0;
  v100 = 0;
  PoolWithTag = 0LL;
  psz = 0LL;
  P[0] = 0LL;
  LOBYTE(v12) = 0;
  v90 = 0;
  Size_4 = 0;
  v101 = 0;
  if ( (unsigned int)InformationLevel <= UpdateBlackBoxRecorder )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Size_5 = PreviousMode;
    v14 = InputBuffer != 0LL ? InputBufferLength : 0;
    v15 = (unsigned __int64)InputBuffer & -(__int64)(v14 != 0);
    InputBuffer = (PVOID)v15;
    Length_4 = (void *)v15;
    Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
    v16 = (_DWORD *)((unsigned __int64)OutputBuffer & -(__int64)(Length != 0));
    if ( PreviousMode )
    {
      if ( (unsigned int)InformationLevel <= SetPowerSettingValue && (v17 = 50462912, _bittest(&v17, InformationLevel))
        || (v18 = (unsigned int)(InformationLevel - 30), (unsigned int)v18 <= 0x3D)
        && (v15 = 0x209E02E385CA1E1FLL, _bittest64((const __int64 *)&v15, v18)) )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741790;
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        v30 = 0;
        goto LABEL_69;
      }
      v19 = (unsigned int)(InformationLevel - 37);
      if ( (unsigned int)v19 <= 0x39 && (v15 = 0x208801808940903LL, _bittest64((const __int64 *)&v15, v19))
        || (unsigned int)(InformationLevel - 2) <= 1 )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
        v99 = IsAppContainerOrIdentifyLevelContext;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
        {
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          InputBuffer = Length_4;
          v30 = 0;
          goto LABEL_69;
        }
        if ( v98 )
        {
          if ( InformationLevel != ScreenOff && InformationLevel != ThermalStandby )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741790;
            v99 = -1073741790;
            PoolWithTag = (_PROCESSOR_NUMBER *)psz;
            InputBuffer = Length_4;
            v30 = 0;
            goto LABEL_69;
          }
          v100 = PopCapabilityCheck(v15);
          if ( !v100 )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741790;
            v99 = -1073741790;
            PoolWithTag = (_PROCESSOR_NUMBER *)psz;
            InputBuffer = Length_4;
            v30 = 0;
            goto LABEL_69;
          }
        }
      }
      if ( InformationLevel == SystemMonitorHiberBootPowerOff
        || (v20 = (unsigned int)(InformationLevel - 45), (unsigned int)v20 <= 0x30)
        && (v15 = 0x1800200000021LL, _bittest64((const __int64 *)&v15, v20)) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v99 = -1073741790;
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          InputBuffer = Length_4;
          v30 = 0;
          goto LABEL_69;
        }
      }
      if ( Length_4 )
      {
        v22 = (unsigned int)(InformationLevel - 11);
        if ( (unsigned int)v22 > 0x3D || (v23 = 0x2001800900000001LL, !_bittest64(&v23, v22)) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741637;
            v99 = -1073741637;
            PoolWithTag = (_PROCESSOR_NUMBER *)psz;
            InputBuffer = Length_4;
            v30 = 0;
            goto LABEL_69;
          }
        }
        v24 = (unsigned int)(InformationLevel - 38);
        if ( (unsigned int)v24 <= 0x34 && (v25 = 0x18000004422401LL, _bittest64(&v25, v24))
          || InformationLevel == AdministratorPowerPolicy )
        {
          if ( !PspIsContextAdmin() )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741790;
            v99 = -1073741790;
            PoolWithTag = (_PROCESSOR_NUMBER *)psz;
            InputBuffer = Length_4;
            v30 = 0;
            goto LABEL_69;
          }
        }
        v26 = (unsigned int)(InformationLevel - 37);
        if ( (unsigned int)v26 <= 0x39 && (v27 = 0x3AE005828F40BC3LL, _bittest64(&v27, v26))
          || (unsigned int)(InformationLevel - 2) <= 1 )
        {
          v21 = 11;
        }
        else
        {
          v21 = 11;
          if ( InformationLevel != ProcessorInformation )
          {
            v31 = (void *)SeShutdownPrivilege;
            if ( InformationLevel == SystemReserveHiberFile )
              v31 = (void *)SeCreatePagefilePrivilege;
            P[1] = v31;
            if ( !SeSinglePrivilegeCheck((LUID)v31, PreviousMode) )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              v99 = -1073741727;
              PoolWithTag = (_PROCESSOR_NUMBER *)psz;
              InputBuffer = Length_4;
              v30 = 0;
              goto LABEL_69;
            }
          }
        }
        if ( v14 )
        {
          v28 = (unsigned __int64)Length_4 + v14;
          if ( v28 > 0x7FFFFFFF0000LL || v28 < (unsigned __int64)Length_4 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( v14 > 0x40 )
        {
          PoolWithTag = (_PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, v14, 0x206D654Du);
          psz = &PoolWithTag->Group;
          if ( !PoolWithTag )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741670;
            v99 = -1073741670;
            InputBuffer = Length_4;
            v30 = 0;
            goto LABEL_69;
          }
        }
        else
        {
          PoolWithTag = (_PROCESSOR_NUMBER *)v107;
          psz = (STRSAFE_PCNZWCH)v107;
        }
        memmove(PoolWithTag, Length_4, v14);
      }
      else
      {
        v21 = 11;
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      }
      if ( v16 )
        ProbeForWrite(v16, Length, 1u);
      LOBYTE(v12) = 0;
    }
    else
    {
      PoolWithTag = (_PROCESSOR_NUMBER *)v15;
      psz = (STRSAFE_PCNZWCH)v15;
      v21 = 11;
    }
    if ( (unsigned int)InformationLevel > TraceApplicationPowerMessageEnd
      || (v32 = -234812256, !_bittest(&v32, InformationLevel)) )
    {
      v35 = (unsigned int)(InformationLevel - 38);
      if ( (unsigned int)v35 > 0x38 || (v15 = 0x1FFE3BE75BE26EDLL, !_bittest64((const __int64 *)&v15, v35)) )
      {
        PopAcquirePolicyLock();
        LOBYTE(v12) = 1;
        v90 = 1;
      }
    }
    switch ( InformationLevel )
    {
      case SystemPowerPolicyAc:
      case SystemPowerPolicyDc:
        if ( !PoolWithTag )
        {
          if ( !v16 )
            goto LABEL_318;
LABEL_328:
          v71 = &unk_14034BA44;
          goto LABEL_329;
        }
        if ( v14 < 0xE8 )
          goto LABEL_327;
        IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, PoolWithTag, v14);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
          goto LABEL_328;
        goto LABEL_134;
      case VerifySystemPolicyAc:
      case VerifySystemPolicyDc:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 < 0xE8 )
          goto LABEL_327;
        IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(PoolWithTag, v106);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        v71 = v106;
LABEL_329:
        Src = v71;
        Size = 232;
        goto LABEL_61;
      case SystemPowerCapabilities:
        if ( !PoolWithTag )
        {
          if ( !v16 )
            goto LABEL_318;
LABEL_127:
          BYTE9(PopCapabilities) = PopFullWake & 1;
          byte_14034BC95 = PopDisksRegisteredForIdle();
          PopFilterCapabilities(&PopCapabilities, v106);
          Size = 76;
LABEL_106:
          Src = v106;
          goto LABEL_107;
        }
        if ( (PopSimulate & 1) == 0 )
          goto LABEL_318;
        if ( v14 >= 0x4C )
        {
          PopCapabilities = *(_OWORD *)&PoolWithTag->Group;
          unk_14034BC90 = *(_OWORD *)&PoolWithTag[4].Group;
          xmmword_14034BCA0 = *(_OWORD *)&PoolWithTag[8].Group;
          xmmword_14034BCB0 = *(_OWORD *)&PoolWithTag[12].Group;
          qword_14034BCC0 = *(_QWORD *)&PoolWithTag[16].Group;
          dword_14034BCC8 = (int)PoolWithTag[18];
          IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v15, v12);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_134;
          goto LABEL_127;
        }
LABEL_327:
        IsAppContainerOrIdentifyLevelContext = -1073741789;
        goto LABEL_134;
      case SystemBatteryState:
        if ( !PoolWithTag && v16 )
          goto LABEL_60;
        goto LABEL_318;
      case SystemPowerStateHandler:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 < 0x18 )
          goto LABEL_327;
        v49 = (__int64)*PoolWithTag;
        if ( (unsigned int)v49 >= 7 )
          goto LABEL_318;
        v50 = 3 * v49;
        if ( qword_14034BBC8[3 * v49] )
        {
          if ( (_DWORD)v49 != 4 || (void (__fastcall __noreturn *)(__int64))qword_14034BC28 != PopShutdownHandler )
            goto LABEL_318;
        }
        *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v49) = *(_OWORD *)&PoolWithTag->Group;
        qword_14034BBD0[3 * v49] = *(_QWORD *)&PoolWithTag[4].Group;
        word_14034BBC5[12 * v49] = 0;
        byte_14034BBC7[24 * v49] = 0;
        v51 = 0LL;
        v52 = 0;
        if ( !(_DWORD)v49 )
        {
          v59 = (PopSimulate & 8) == 0;
          v60 = (char *)&PopCapabilities + 3;
          v52 = 2;
          goto LABEL_207;
        }
        v53 = v49 - 1;
        if ( !v53 )
        {
          v59 = (PopSimulate & 0x40) == 0;
          v60 = (char *)&PopCapabilities + 4;
          v52 = 3;
          goto LABEL_207;
        }
        v54 = v53 - 1;
        if ( !v54 )
        {
          v59 = (PopSimulate & 0x20) == 0;
          v60 = (char *)&PopCapabilities + 5;
LABEL_282:
          v52 = 4;
          goto LABEL_207;
        }
        v55 = v54 - 1;
        if ( !v55 )
        {
          v59 = (PopSimulate & 0x2000) == 0;
          v60 = (char *)&PopCapabilities + 6;
          v52 = 5;
LABEL_207:
          if ( !v59 )
            v60 = 0LL;
          v51 = v60;
          goto LABEL_210;
        }
        v56 = v55 - 1;
        if ( !v56 )
        {
          v51 = (char *)&PopCapabilities + 7;
          goto LABEL_210;
        }
        if ( v56 == 2 )
        {
          v59 = (PopSimulate & 0x2000) == 0;
          v60 = (char *)&unk_14034BC91;
          goto LABEL_282;
        }
LABEL_210:
        v61 = v52 & (unsigned int)-(byte_14034BBC4[8 * v50] != 0);
        if ( (int)v61 > (int)qword_14034BCC0 )
          LODWORD(qword_14034BCC0) = byte_14034BBC4[8 * v50] != 0 ? v52 : 0;
        if ( v51 && *v51 != 1 )
        {
          *v51 = 1;
          PopResetCurrentPolicies(v61, v51);
        }
LABEL_61:
        v30 = v90;
LABEL_62:
        v33 = Length;
LABEL_63:
        if ( !Src || !v16 )
          goto LABEL_67;
        if ( v33 < Size )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741789;
        }
        else
        {
          memmove(v16, Src, Size);
LABEL_67:
          IsAppContainerOrIdentifyLevelContext = 0;
        }
        goto LABEL_68;
      case ProcessorStateHandler:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        Src = &PpmProcessorDriverDispatchTable;
        Size = 248;
        goto LABEL_61;
      case SystemPowerPolicyCurrent:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        v71 = PopPolicy;
        goto LABEL_329;
      case AdministratorPowerPolicy:
        if ( PoolWithTag )
        {
          if ( v14 < 0x18 )
            goto LABEL_327;
          IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(v15, PoolWithTag);
          if ( IsAppContainerOrIdentifyLevelContext < 0
            || (IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v73, v72),
                IsAppContainerOrIdentifyLevelContext < 0) )
          {
LABEL_134:
            v30 = v90;
LABEL_68:
            InputBuffer = Length_4;
            goto LABEL_69;
          }
        }
        else if ( !v16 )
        {
          goto LABEL_318;
        }
        Src = &PopAdminPolicy;
        Size = 24;
        goto LABEL_61;
      case SystemReserveHiberFile:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( !v14 )
          goto LABEL_327;
        KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
        PopAcquirePolicyLock();
        LOBYTE(v74) = 1;
        LOBYTE(v75) = PoolWithTag->Group;
        IsAppContainerOrIdentifyLevelContext = PopEnableHiberFile(v75, v74);
        PopReleasePolicyLock();
        KeSetEvent(&PopTransitionLock, 0, 0);
        goto LABEL_92;
      case ProcessorInformation:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(
                                                 (__int64)v106,
                                                 v12,
                                                 KeGetCurrentPrcb()->Group,
                                                 &Size);
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        v30 = v90;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_68;
        Src = v106;
        goto LABEL_62;
      case SystemPowerInformation:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        LODWORD(v106[0]) = 0;
        HIDWORD(v106[0]) = dword_14034B0A4;
        LODWORD(v106[1]) = dword_14034B0AC - dword_14034B0A8;
        BYTE4(v106[1]) = PopCoolingMode;
        Src = v106;
        Size = 16;
        goto LABEL_61;
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
        goto LABEL_330;
      case LastWakeTime:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        v66 = &qword_14034B1C8;
        goto LABEL_229;
      case LastSleepTime:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        v66 = &qword_14034B1D0;
        goto LABEL_229;
      case SystemExecutionState:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        if ( dword_14033B6D0 )
          LODWORD(v106[0]) |= 1u;
        if ( PopPowerRequestAttributes[0] )
          LODWORD(v106[0]) |= 2u;
        Src = v106;
        Size = 4;
        goto LABEL_61;
      case SystemPowerStateNotifyHandler:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 < 0x10 )
          goto LABEL_327;
        if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)&PoolWithTag->Group )
          goto LABEL_318;
        PopPowerStateNotifyHandler = *(_OWORD *)&PoolWithTag->Group;
        goto LABEL_61;
      case SystemPowerStateLogging:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v102);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        Src = P[0];
        Size = v102;
        goto LABEL_61;
      case SystemPowerLoggingEntry:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 < 8 )
          goto LABEL_327;
        v40 = PopLogSleepDisabled(*(_DWORD *)PoolWithTag, *(_DWORD *)&PoolWithTag[1], 0LL, 0LL);
        goto LABEL_119;
      case SetPowerSettingValue:
        if ( !PoolWithTag )
          goto LABEL_318;
        if ( v16 )
          goto LABEL_318;
        if ( Length )
          goto LABEL_318;
        if ( v14 < 0x1C )
          goto LABEL_318;
        v77 = (unsigned int)PoolWithTag[6];
        if ( !v77 )
          goto LABEL_318;
        v103 = (unsigned int)PoolWithTag[5];
        if ( v103 > 2 )
          goto LABEL_318;
        if ( *PoolWithTag != 1 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741736;
          goto LABEL_134;
        }
        v78 = v77 + 28;
        if ( v77 >= 0xFFFFFFE4 )
        {
          v78 = -1;
          IsAppContainerOrIdentifyLevelContext = -1073741675;
        }
        else
        {
          IsAppContainerOrIdentifyLevelContext = 0;
        }
        Size = v78;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        if ( v14 < v78 )
          goto LABEL_318;
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        v40 = PopSetPowerSettingValue((LPCGUID)(psz + 2), ProcessSessionId, v103, v77, (void *)(psz + 14));
        goto LABEL_119;
      case SystemMonitorHiberBootPowerOff:
        PopSuspendResumePdc(1LL, v12);
        PopHiberBootForceMonitorOff = 1;
        SettingValue = PoPowerOffMonitor();
        goto LABEL_133;
      case SystemVideoState:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        Size = 4;
        v47 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        Src = v47;
        v30 = v90;
        if ( !v47 )
          goto LABEL_394;
        Size_4 = 1;
        *v47 = PopConsoleDisplayState;
        goto LABEL_62;
      case TraceApplicationPowerMessage:
      case TraceApplicationPowerMessageEnd:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 < 8 )
          goto LABEL_327;
        if ( InformationLevel == TraceApplicationPowerMessage )
          PopDiagTraceAppPowerMessage(PoolWithTag, v12);
        else
          PopDiagTraceAppPowerMessageEnd(PoolWithTag, v12);
        goto LABEL_61;
      case SystemWakeSource:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        if ( (_BYTE)v12 )
        {
          PopReleasePolicyLock();
          v30 = 0;
        }
        else
        {
          v30 = v90;
        }
        Size = 0;
        IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Size);
        if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
          goto LABEL_295;
        v67 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x206D654Du);
        Src = v67;
        if ( !v67 )
        {
LABEL_394:
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          goto LABEL_68;
        }
        Size_4 = 1;
        IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(v67, &Size);
LABEL_295:
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_68;
        goto LABEL_62;
      case SystemHiberFileInformation:
        if ( !v16 )
          goto LABEL_318;
        if ( (_DWORD)dword_14034B2C0 && qword_14034B2B8 )
        {
          Size = dword_14034B2C0 + 8;
          v80 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_14034B2C0 + 8), 0x206D654Du);
          v81 = v80;
          if ( v80 )
          {
            Src = v80;
            Size_4 = 1;
            memmove(v80 + 2, qword_14034B2B8, (unsigned int)dword_14034B2C0);
            *v81 = (unsigned int)dword_14034B2C0 >> 4;
            goto LABEL_61;
          }
LABEL_401:
          IsAppContainerOrIdentifyLevelContext = -1073741670;
        }
        else
        {
          IsAppContainerOrIdentifyLevelContext = -1073741275;
        }
        goto LABEL_134;
      case TraceServicePowerMessage:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( Size_5 != 1 )
          goto LABEL_392;
        if ( v14 < 4 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741811;
        }
        else
        {
          IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(&PoolWithTag[1].Group, v14 - 4, 0LL);
          if ( IsAppContainerOrIdentifyLevelContext >= 0 )
            IsAppContainerOrIdentifyLevelContext = 0;
        }
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        PopDiagTraceServiceNotification(PoolWithTag);
        goto LABEL_61;
      case ProcessorLoad:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 == 6 )
        {
          v37 = PpmSetSimulatedLoad((__int64)PoolWithTag);
          goto LABEL_91;
        }
        if ( v14 != 4 )
          goto LABEL_409;
        v37 = PpmClearSimulatedLoad(PoolWithTag);
        goto LABEL_91;
      case PowerShutdownNotification:
        if ( !PoolWithTag || v16 || v14 != 24 )
          goto LABEL_318;
        v68 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( !v68 )
          goto LABEL_401;
        *(_OWORD *)v68 = *(_OWORD *)&PoolWithTag->Group;
        v68[2] = *(_QWORD *)&PoolWithTag[4].Group;
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopShutdownNotificationCallback,
                (signed __int64)v68,
                0LL) )
          goto LABEL_107;
        ExFreePoolWithTag(v68, 0x206D654Du);
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        goto LABEL_134;
      case MonitorCapabilities:
        if ( !PoolWithTag || v14 != 4 || v16 )
          goto LABEL_318;
        v101 = *PoolWithTag != 0;
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE);
        goto LABEL_61;
      case SessionPowerInit:
        if ( PoolWithTag )
          goto LABEL_318;
        if ( !v16 )
          goto LABEL_318;
        v33 = Length;
        if ( Length != 64 )
          goto LABEL_318;
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        v57 = PopEsState;
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        LOBYTE(v106[6]) = v57 == 1;
        LOBYTE(v106[7]) = TtmpEnabled == 1;
        if ( TtmpEnabled == 1 )
        {
          IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_134;
        }
        PopAcquirePolicyLock();
        LODWORD(v106[2]) = 0;
        v106[0] = &PopNoMoreInput;
        v106[1] = &PopHiberBootForceMonitorOff;
        LODWORD(v106[3]) = byte_14034BB31 != 0;
        HIDWORD(v106[3]) = dword_14034BB2C;
        HIDWORD(v106[2]) = dword_14034BB4C;
        v106[4] = qword_14034BB50;
        HIDWORD(v106[6]) = HIDWORD(qword_14034BB58);
        v106[5] = __PAIR64__(dword_14034BB60, qword_14034BB58);
        BYTE1(v106[6]) = PopLidOpened;
        Src = v106;
        Size = 64;
        v58 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", v58);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, v58, 0);
        PopReleasePolicyLock();
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        goto LABEL_142;
      case SessionDisplayState:
        if ( !PoolWithTag || v14 != 16 || v16 )
          goto LABEL_318;
        if ( HIBYTE(PoolWithTag[3].Group) && LOBYTE(PoolWithTag[3].Group) )
        {
          if ( PopPlatformAoAc )
            PoSetCsSessionGoal();
          PopSetDisplayStatus(*(_DWORD *)&PoolWithTag[1], v12);
          PopUpdateConsoleDisplayState(*(_DWORD *)&PoolWithTag[1]);
        }
        if ( !PoolWithTag[3].Number )
          goto LABEL_151;
        if ( LOBYTE(PoolWithTag[3].Group) )
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &PoolWithTag[1], 4u, 0LL, 0LL, 0, 0);
        if ( !PoolWithTag[3].Number )
          goto LABEL_151;
        PopDiagTraceSessionDisplayStateChange(
          *(_DWORD *)&PoolWithTag[1] == 0,
          (int)*PoolWithTag,
          LOBYTE(PoolWithTag[3].Group),
          *(_DWORD *)&PoolWithTag[2]);
        goto LABEL_61;
      case PowerRequestCreate:
      case PlmPowerRequestCreate:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 != 40 )
          goto LABEL_327;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_327;
        LOBYTE(v12) = InformationLevel == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo(PoolWithTag, v12, v106);
        goto LABEL_140;
      case PowerRequestAction:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 != 24 )
          goto LABEL_327;
        v40 = PopPowerRequestActionInfo(PoolWithTag, v12);
        goto LABEL_119;
      case GetPowerRequestList:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Size);
        goto LABEL_434;
      case ProcessorInformationEx:
        if ( !PoolWithTag )
          goto LABEL_318;
        if ( v14 < 2 )
          goto LABEL_318;
        if ( !v16 )
          goto LABEL_318;
        Group = PoolWithTag->Group;
        if ( Group >= KeQueryActiveGroupCount() )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = PopProcessorInformation((__int64)v106, v46, Group, &Size);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        Src = v106;
        goto LABEL_61;
      case NotifyUserModeLegacyPowerEvent:
        if ( !PoolWithTag || v14 != 16 )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = PopUmpoSendLegacyEvent(PoolWithTag, v12);
        if ( (int)(IsAppContainerOrIdentifyLevelContext + 0x80000000) < 0 )
          goto LABEL_151;
        if ( IsAppContainerOrIdentifyLevelContext != -1073741536 )
          goto LABEL_134;
        goto LABEL_61;
      case GroupPark:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_392;
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 == 16 )
        {
          v37 = PpmParkApplyForcedMask(PoolWithTag, v12);
          goto LABEL_91;
        }
        if ( v14 != 2 )
          goto LABEL_409;
        v37 = PpmParkClearForcedMask(PoolWithTag, v12);
        goto LABEL_91;
      case WakeTimerList:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        PowerRequestListInfo = ExGetWakeTimerList(&Src, &Size);
LABEL_434:
        IsAppContainerOrIdentifyLevelContext = PowerRequestListInfo;
        if ( PowerRequestListInfo < 0 )
          goto LABEL_134;
        Size_4 = 1;
        goto LABEL_61;
      case SystemHiberFileSize:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 < 4 )
          goto LABEL_327;
        KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
        PopAcquirePolicyLock();
        v76 = PopSetHiberFileSize(*(_DWORD *)PoolWithTag, v104);
        goto LABEL_368;
      case ProcessorSetIdle:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_392;
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 == 8 )
        {
          v37 = PpmSetSimulatedIdle((__int64)PoolWithTag);
        }
        else
        {
          if ( v14 != 4 )
          {
LABEL_409:
            IsAppContainerOrIdentifyLevelContext = -1073741811;
            goto LABEL_92;
          }
          v37 = PpmClearSimulatedIdle(PoolWithTag);
        }
        goto LABEL_91;
      case LogicalProcessorIdling:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 != 8 )
          goto LABEL_327;
        v33 = Length;
        if ( Length != 4 )
          goto LABEL_327;
        IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(
                                                 (int)*PoolWithTag,
                                                 *(_DWORD *)&PoolWithTag[1],
                                                 (unsigned int *)v106);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        Src = v106;
        Size = 4;
        goto LABEL_142;
      case UserPresence:
        if ( !ExVerifySuite(PhoneNT) )
        {
LABEL_330:
          IsAppContainerOrIdentifyLevelContext = -1073741822;
          goto LABEL_134;
        }
        if ( !PoolWithTag || v14 != 1 || v16 )
          goto LABEL_318;
        LOBYTE(v82) = PoolWithTag->Group;
        v40 = PopUserPresentOverride(v82);
LABEL_119:
        IsAppContainerOrIdentifyLevelContext = v40;
        v38 = v40 < 0;
        goto LABEL_93;
      case PowerSettingNotificationName:
        InputBuffer = Length_4;
        if ( v16 )
        {
          if ( (!Length_4 || v14 == 20) && Length == 8 )
            IsAppContainerOrIdentifyLevelContext = PopGetSettingNotificationName(PoolWithTag, v16);
          else
            IsAppContainerOrIdentifyLevelContext = -1073741789;
        }
        else
        {
          IsAppContainerOrIdentifyLevelContext = -1073741811;
        }
        v30 = v90;
        goto LABEL_69;
      case GetPowerSettingValue:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 != 16 || Length < 4 )
          goto LABEL_327;
        SettingValue = PopGetSettingValue(PoolWithTag, v16, Length);
        goto LABEL_133;
      case IdleResiliency:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 < 8 )
          goto LABEL_327;
        PopEnforceResiliencyScenarios(PoolWithTag);
        goto LABEL_61;
      case SessionRITState:
        if ( !PoolWithTag )
          goto LABEL_318;
        if ( v14 != 8 )
          goto LABEL_318;
        if ( !v16 )
          goto LABEL_318;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_318;
        v48 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        PopSessionInputChange(v48, (char *)psz, v16);
        goto LABEL_142;
      case SessionConnectNotification:
        if ( !PoolWithTag )
          goto LABEL_318;
        if ( v14 != 2 )
          goto LABEL_318;
        if ( !v16 )
          goto LABEL_318;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_318;
        v62 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopSessionConnectionChange(v62, psz, v16);
        v64 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        if ( xmmword_14036E6F0 )
        {
          LOBYTE(v63) = *((_BYTE *)psz + 1);
          LOBYTE(v65) = *(_BYTE *)psz;
          xmmword_14036E6F0(v64, v63, v65);
        }
        goto LABEL_142;
      case SessionPowerCleanup:
        if ( PoolWithTag || v16 )
          goto LABEL_318;
        v69 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", v69);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, v69, 0);
        PopFreeSessionState(v69);
        if ( TtmpEnabled == 1 )
          TtmCleanupCurrentSession();
        goto LABEL_107;
      case SessionLockState:
        if ( !PoolWithTag || v14 != 8 || v16 )
          goto LABEL_318;
        v70 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        PopSessionWinlogonNotification(v70, (__int64)psz);
        goto LABEL_61;
      case SystemHiberbootState:
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_350;
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        PopFilterCapabilities(&PopCapabilities, v106);
        if ( BYTE2(v106[2]) )
          PopReadHiberbootPolicy((char *)&v106[2] + 2);
        v42 = (char *)&v106[2] + 2;
        goto LABEL_124;
      case PlatformInformation:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
        goto LABEL_123;
      case PdcInvocation:
        if ( !PoolWithTag || v14 != 128 || v16 && Length != 184 )
          goto LABEL_318;
        SettingValue = PopPdcInvocation(PoolWithTag, v16);
        goto LABEL_133;
      case MonitorInvocation:
        if ( !PoolWithTag || v14 != 8 || v16 || Length )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = 0;
        if ( PopPlatformAoAc )
        {
          if ( LOBYTE(PoolWithTag->Group) )
          {
            v86 = PoSetCsSessionGoal();
            IsAppContainerOrIdentifyLevelContext = v86;
            if ( (!v86 || v86 == 259)
              && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
              && !PopConsoleDisplayState )
            {
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
        goto LABEL_134;
      case FirmwareTableInformationRegistered:
        if ( PoolWithTag || v16 )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings(v15, v12);
        byte_14034BC94 = PopPlatformAoAc;
        goto LABEL_134;
      case SetShutdownSelectedTime:
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_61;
      case SuspendResumeInvocation:
        if ( !PoolWithTag || v14 != 8 || v16 && Length )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = 0;
        if ( !xmmword_14036E700 )
          goto LABEL_134;
        LOBYTE(v12) = PoolWithTag[1].Group;
        LOBYTE(v9) = HIBYTE(PoolWithTag[1].Group);
        LOBYTE(v10) = PoolWithTag[1].Number;
        SettingValue = xmmword_14036E700(*(_DWORD *)PoolWithTag, v12, v9, v10);
        goto LABEL_133;
      case ScreenOff:
      case ThermalStandby:
        if ( PoolWithTag || v16 )
          goto LABEL_318;
        if ( InformationLevel == ThermalStandby )
          v21 = 23;
        PopScreenOff(v21, v12);
        IsAppContainerOrIdentifyLevelContext = 0;
        goto LABEL_134;
      case CsDeviceNotification:
        if ( Size_5 )
          goto LABEL_392;
        if ( !PoolWithTag || v14 != 16 || v16 || Length )
          goto LABEL_318;
        SettingValue = PopPdcCsDeviceNotification(PoolWithTag, v12);
LABEL_133:
        IsAppContainerOrIdentifyLevelContext = SettingValue;
        goto LABEL_134;
      case PlatformRole:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        v39 = PopPlatformRole;
        if ( !PopPlatformRole )
        {
          v39 = _InterlockedCompareExchange(&PopPlatformRole, (dword_14034B390 != 0) + 1, 0);
          if ( !v39 )
            v39 = (dword_14034B390 != 0) + 1;
        }
        LODWORD(v106[0]) = v39;
        Size = 4;
        goto LABEL_106;
      case LastResumePerformance:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        LODWORD(v106[0]) = qword_14034B628;
        v106[1] = qword_14034B7C0;
        v106[2] = qword_14034B7C8;
        v30 = v90;
        if ( PopSleepStats )
        {
          Src = v106;
          Size = 24;
          goto LABEL_62;
        }
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        goto LABEL_68;
      case DisplayBurst:
        if ( PoolWithTag || v16 )
          goto LABEL_318;
        v87 = PopErrataReportingIncorrectLidState;
        if ( TtmpEnabled == 1 )
        {
          v88 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          TtmNotifySessionDisplayBurst(v88, 6LL);
LABEL_107:
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          goto LABEL_61;
        }
        v89 = 0;
        if ( !PopLidOpened )
          v89 = PopConsoleExternalDisplayConnected == 0;
        if ( !v89 )
          PopEventCalloutDispatch(10, 6LL);
        if ( !v87 )
        {
          LOBYTE(v9) = v89;
          PopDiagTraceDisplayBurstWin32kCallout(v15, v12, v9);
          goto LABEL_61;
        }
LABEL_151:
        v33 = Length;
LABEL_142:
        v30 = v90;
        goto LABEL_63;
      case ExitLatencySamplingPercentage:
        if ( Size_5 != 1 )
        {
LABEL_392:
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          goto LABEL_134;
        }
        if ( v16 || Length )
          goto LABEL_318;
        if ( PoolWithTag )
        {
          if ( v14 != 4 )
            goto LABEL_318;
          PpmSetExitLatencySamplingPercentage((int *)PoolWithTag);
        }
        else
        {
          PpmClearExitLatencySamplingPercentage();
        }
        goto LABEL_61;
      case SystemBatteryStatePrecise:
        if ( PoolWithTag || !v16 )
          goto LABEL_318;
        PopBatteryUpdateCurrentState(v15, v12);
LABEL_60:
        PopCurrentPowerState(v106, v12);
        Src = v106;
        Size = 32;
        goto LABEL_61;
      case ThermalEvent:
        if ( !PoolWithTag || v16 )
          goto LABEL_318;
        if ( v14 < 0x10 || v14 < 2 * (unsigned int)PoolWithTag[3].Group + 14 )
          goto LABEL_327;
        v40 = PopThermalProcessUsermodeEvent(PoolWithTag, v12);
        goto LABEL_119;
      case PowerRequestActionInternal:
        v83 = (unsigned int)PoolWithTag[2];
        v84 = *(_QWORD *)&PoolWithTag->Group;
        if ( LOBYTE(PoolWithTag[3].Group) )
          PoSetPowerRequestInternal(v84, v83);
        else
          PoClearPowerRequestInternal(v84, v83);
        goto LABEL_61;
      case BatteryDeviceState:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(&PoolWithTag->Group, v14, 0LL);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(PoolWithTag, v106);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        Src = v106;
        Size = 52;
        goto LABEL_61;
      case PowerInformationInternal:
        if ( !PoolWithTag )
          goto LABEL_318;
        if ( v14 < 8 )
          goto LABEL_318;
        v36 = *PoolWithTag;
        if ( *(_DWORD *)PoolWithTag >= 32 )
          goto LABEL_318;
        if ( (unsigned int)(*(_DWORD *)&v36 - 9) <= 8 )
        {
          if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, Size_5) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            goto LABEL_134;
          }
          v37 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64))TtmDispatchApi)(
                  v36,
                  (_DWORD)PoolWithTag,
                  v14,
                  (_DWORD)v16,
                  Length,
                  (__int64)&Src,
                  (__int64)&Size,
                  (__int64)&Size_4);
        }
        else
        {
          v37 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64))PopPowerInformationInternal)(
                  v36,
                  (_DWORD)PoolWithTag,
                  v14,
                  (_DWORD)v16,
                  (__int64)&Src,
                  (__int64)&Size,
                  (__int64)&Size_4);
        }
LABEL_91:
        IsAppContainerOrIdentifyLevelContext = v37;
LABEL_92:
        v38 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_93:
        if ( v38 )
          goto LABEL_134;
        goto LABEL_61;
      case SystemHiberFileType:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 < 4 )
          goto LABEL_327;
        KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
        PopAcquirePolicyLock();
        v76 = PopSetHiberFileType(*(_DWORD *)PoolWithTag, v104);
LABEL_368:
        IsAppContainerOrIdentifyLevelContext = v76;
        PopReleasePolicyLock();
        KeSetEvent(&PopTransitionLock, 0, 0);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_134;
        v66 = (__int64 *)v104;
LABEL_229:
        Src = v66;
        Size = 8;
        goto LABEL_61;
      case PhysicalPowerButtonPress:
        if ( !PoolWithTag || v14 < 4 || v16 )
          goto LABEL_318;
        PopUpdatePowerButtonHoldState(*PoolWithTag != 0);
        goto LABEL_61;
      case QueryPotentialDripsConstraint:
        if ( !PopPlatformAoAc )
        {
LABEL_350:
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          goto LABEL_134;
        }
        if ( !PoolWithTag || v14 != 336 || !v16 )
        {
LABEL_318:
          IsAppContainerOrIdentifyLevelContext = -1073741811;
          goto LABEL_134;
        }
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(PoolWithTag);
LABEL_123:
        LOBYTE(v106[0]) = IsDevicePotentialDripsConstraint;
        v42 = (char *)v106;
LABEL_124:
        Src = v42;
        Size = 1;
        goto LABEL_61;
      case EnergyTrackerCreate:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 != 12 )
          goto LABEL_327;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_327;
        Info = PopEtEnergyTrackerCreate(PoolWithTag, v106);
LABEL_140:
        IsAppContainerOrIdentifyLevelContext = Info;
        if ( Info < 0 )
          goto LABEL_134;
        Src = v106;
        Size = 8;
        goto LABEL_142;
      case EnergyTrackerQuery:
        if ( !PoolWithTag || !v16 )
          goto LABEL_318;
        if ( v14 != 8 )
          goto LABEL_327;
        v33 = Length;
        if ( Length < 0xC )
          goto LABEL_327;
        IsAppContainerOrIdentifyLevelContext = PopEtEnergyTrackerQuery(*(_QWORD *)&PoolWithTag->Group, v16, Length);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
          goto LABEL_142;
        goto LABEL_134;
      case UpdateBlackBoxRecorder:
        if ( !PoolWithTag || v16 || Length )
          goto LABEL_318;
        if ( v14 != 32 )
          goto LABEL_327;
        LOBYTE(v12) = Size_5;
        IsAppContainerOrIdentifyLevelContext = PopBlackBoxUpdate(PoolWithTag, v12);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
          goto LABEL_151;
        goto LABEL_134;
      default:
        goto LABEL_318;
    }
  }
  IsAppContainerOrIdentifyLevelContext = -1073741811;
  v30 = 0;
LABEL_69:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( Size_4 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v30 )
    PopReleasePolicyLock();
  if ( PoolWithTag && PoolWithTag != InputBuffer && PoolWithTag != (_PROCESSOR_NUMBER *)v107 )
    ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
