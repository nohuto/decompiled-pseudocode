/*
 * XREFs of NtPowerInformation @ 0x1404E90A0
 * Callers:
 *     PnpRecordBlackboxPnpEventInformation @ 0x1400FEDA4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PopRecordPoBlackboxInformation @ 0x140249DD0 (PopRecordPoBlackboxInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x14070D904 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x14070D9DC (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x14070DA3C (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x14070DAC0 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PoClearPowerRequestInternal @ 0x1400B4DB8 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400B4F20 (PoSetPowerRequestInternal.c)
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     KeQueryActiveGroupCount @ 0x1400FE430 (KeQueryActiveGroupCount.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     PopDisksRegisteredForIdle @ 0x14012ED48 (PopDisksRegisteredForIdle.c)
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     ExVerifySuite @ 0x140143C10 (ExVerifySuite.c)
 *     PopEventCalloutDispatch @ 0x14015D3BC (PopEventCalloutDispatch.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14023A804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x14023A84C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x14023C1A0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x14023C278 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x14023D29C (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14023E1D8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PpmClearSimulatedLoad @ 0x140240790 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140240BF8 (PpmSetSimulatedLoad.c)
 *     PoPowerOffMonitor @ 0x140242174 (PoPowerOffMonitor.c)
 *     PoSetCsSessionGoal @ 0x1402435C0 (PoSetCsSessionGoal.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140246EBC (PopDiagTraceSessionDisplayStateChange.c)
 *     PopUpdatePowerButtonHoldState @ 0x14024A060 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x14024CC50 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x140286510 (ExGetWakeTimerList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopEtEnergyTrackerQuery @ 0x140445B34 (PopEtEnergyTrackerQuery.c)
 *     ExCheckFullProcessInformationAccess @ 0x14044C8B0 (ExCheckFullProcessInformationAccess.c)
 *     PopLoggingInformation @ 0x140451CD0 (PopLoggingInformation.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 *     PopPowerRequestActionInfo @ 0x1404F1B94 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestCreateInfo @ 0x1404F1D38 (PopPowerRequestCreateInfo.c)
 *     PopGetSettingValue @ 0x14057CFF0 (PopGetSettingValue.c)
 *     PopProcessorInformation @ 0x14058ECEC (PopProcessorInformation.c)
 *     PopBlackBoxUpdate @ 0x140599AD8 (PopBlackBoxUpdate.c)
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopDiagTraceSessionStates @ 0x14059FE78 (PopDiagTraceSessionStates.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1405B94B4 (PopVerifySystemPowerPolicy.c)
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x1405D5670 (PopLogSleepDisabled.c)
 *     PopPdcInvocation @ 0x1405EC540 (PopPdcInvocation.c)
 *     PopSessionConnectionChange @ 0x1405ED750 (PopSessionConnectionChange.c)
 *     PopReadHiberbootPolicy @ 0x1406F53D0 (PopReadHiberbootPolicy.c)
 *     PopApplyAdminPolicy @ 0x1406F75D0 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1406F7774 (PopGetPowerRequestListInfo.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 *     PopFreeSessionState @ 0x1406FA384 (PopFreeSessionState.c)
 *     PopGetWakeSource @ 0x1406FA664 (PopGetWakeSource.c)
 *     PopSetHiberFileSize @ 0x1406FC350 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406FC45C (PopSetHiberFileType.c)
 *     PopBatteryDeviceState @ 0x1406FE138 (PopBatteryDeviceState.c)
 *     PopBatteryUpdateCurrentState @ 0x1406FEBF8 (PopBatteryUpdateCurrentState.c)
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x1406FF984 (PopScreenOff.c)
 *     PopSuspendResumePdc @ 0x1406FFA1C (PopSuspendResumePdc.c)
 *     PopThermalProcessUsermodeEvent @ 0x1406FFE6C (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140701AE0 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140701BF8 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x14070326C (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x140704104 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopDiagTraceServiceNotification @ 0x140704F30 (PopDiagTraceServiceNotification.c)
 *     PopEnforceResiliencyScenarios @ 0x140706AE4 (PopEnforceResiliencyScenarios.c)
 *     PopUmpoSendLegacyEvent @ 0x1407082D8 (PopUmpoSendLegacyEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x140708870 (PopEtEnergyTrackerCreate.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 *     PopSetDisplayStatus @ 0x14070A030 (PopSetDisplayStatus.c)
 *     PopUserPresentOverride @ 0x14070A154 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x14070C8F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14070C9C8 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x14070F158 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x14070F2CC (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x14070F608 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 *     PopInitPlatformSettings @ 0x14084A0A4 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v8; // r9
  _PROCESSOR_NUMBER *PoolWithTag; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  ULONG v13; // r13d
  __int64 v14; // rcx
  unsigned int v15; // ebx
  volatile void *v16; // r15
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // rcx
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  char v29; // r12
  LUID v30; // rcx
  int v31; // eax
  unsigned __int64 v33; // rax
  _PROCESSOR_NUMBER v34; // r12d
  NTSTATUS v35; // eax
  bool v36; // sf
  NTSTATUS SettingNotificationName; // eax
  int v38; // eax
  char IsDevicePotentialDripsConstraint; // al
  char *v40; // rax
  int v41; // eax
  int Info; // eax
  __int64 *v43; // rax
  USHORT Group; // bx
  __int64 v45; // rdx
  _DWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  _BYTE *v49; // rcx
  int v50; // r9d
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // ebx
  int v56; // eax
  unsigned int v57; // eax
  bool v58; // zf
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  NTSTATUS v66; // eax
  POWER_INFORMATION_LEVEL v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // ecx
  unsigned int ProcessSessionId; // eax
  char v71; // cl
  char v72; // r13
  PVOID v73; // rax
  unsigned int *v74; // rax
  unsigned int *v75; // rbx
  _QWORD *v76; // rax
  unsigned int v77; // ebx
  unsigned int v78; // eax
  __int64 v79; // rcx
  unsigned int v80; // edx
  __int64 v81; // rcx
  int PowerRequestListInfo; // eax
  int v83; // eax
  NTSTATUS v84; // eax
  __int64 v85; // rcx
  char v86; // di
  unsigned int v87; // eax
  bool v88; // bl
  unsigned int v89; // [rsp+40h] [rbp-728h]
  unsigned int Size; // [rsp+44h] [rbp-724h] BYREF
  char Size_4; // [rsp+48h] [rbp-720h] BYREF
  KPROCESSOR_MODE Size_5; // [rsp+49h] [rbp-71Fh]
  char Size_6; // [rsp+4Ah] [rbp-71Eh]
  void *Src; // [rsp+50h] [rbp-718h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+58h] [rbp-710h]
  POWER_INFORMATION_LEVEL v96; // [rsp+60h] [rbp-708h]
  char v97; // [rsp+64h] [rbp-704h]
  int v98; // [rsp+68h] [rbp-700h]
  char v99; // [rsp+6Ch] [rbp-6FCh]
  char v100; // [rsp+6Dh] [rbp-6FBh]
  unsigned int Length; // [rsp+70h] [rbp-6F8h]
  BOOL Length_4; // [rsp+74h] [rbp-6F4h] BYREF
  unsigned int v104; // [rsp+78h] [rbp-6F0h] BYREF
  PVOID v105; // [rsp+80h] [rbp-6E8h]
  char v106[8]; // [rsp+88h] [rbp-6E0h] BYREF
  PVOID P; // [rsp+90h] [rbp-6D8h] BYREF
  PVOID v108; // [rsp+98h] [rbp-6D0h]
  PVOID v109; // [rsp+A0h] [rbp-6C8h]
  PVOID v110; // [rsp+A8h] [rbp-6C0h]
  PVOID v111; // [rsp+B0h] [rbp-6B8h]
  PVOID v112; // [rsp+B8h] [rbp-6B0h]
  PVOID v113; // [rsp+C0h] [rbp-6A8h]
  PVOID v114; // [rsp+C8h] [rbp-6A0h]
  LUID v115; // [rsp+D0h] [rbp-698h]
  _QWORD v116[192]; // [rsp+E0h] [rbp-688h] BYREF
  _BYTE v117[64]; // [rsp+6E0h] [rbp-88h] BYREF

  v96 = InformationLevel;
  memset(v116, 0, sizeof(v116));
  Src = 0LL;
  Size = 0;
  PoolWithTag = 0LL;
  psz = 0LL;
  P = 0LL;
  LOBYTE(v10) = 0;
  v89 = v10;
  Size_6 = 0;
  Size_4 = 0;
  Length_4 = 0;
  v11 = (unsigned int)v96;
  if ( (unsigned int)v96 > UpdateBlackBoxRecorder )
  {
LABEL_242:
    IsAppContainerOrIdentifyLevelContext = -1073741811;
LABEL_113:
    v29 = v89;
    goto LABEL_73;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Size_5 = PreviousMode;
  v13 = InputBuffer != 0LL ? InputBufferLength : 0;
  v14 = -(__int64)(v13 != 0);
  InputBuffer = (PVOID)(v14 & (unsigned __int64)InputBuffer);
  v111 = InputBuffer;
  v109 = InputBuffer;
  v108 = InputBuffer;
  v114 = InputBuffer;
  v113 = InputBuffer;
  v112 = InputBuffer;
  v110 = InputBuffer;
  v105 = InputBuffer;
  v15 = OutputBuffer != 0LL ? OutputBufferLength : 0;
  Length = v15;
  v16 = (volatile void *)((unsigned __int64)OutputBuffer & -(__int64)(v15 != 0));
  if ( PreviousMode )
  {
    if ( (unsigned int)v96 <= SetPowerSettingValue && (v17 = 50462912, _bittest(&v17, v96))
      || (v18 = (unsigned int)(v96 - 30), (unsigned int)v18 <= 0x3D)
      && (v14 = 0x209E02E385CA1E1FLL, _bittest64(&v14, v18)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
LABEL_244:
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      goto LABEL_113;
    }
    if ( (unsigned int)(v96 - 2) <= 1
      || (v19 = (unsigned int)(v96 - 37), (unsigned int)v19 <= 0x39)
      && (v14 = 0x208801808940903LL, _bittest64(&v14, v19)) )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v98 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        v29 = v89;
        goto LABEL_73;
      }
      LODWORD(v11) = v96;
      if ( v97 )
      {
        if ( v96 != ScreenOff && v96 != ThermalStandby )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v98 = -1073741790;
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          v29 = v89;
          goto LABEL_73;
        }
        if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v98 = -1073741790;
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          v29 = v89;
          goto LABEL_73;
        }
        LODWORD(v11) = v96;
      }
    }
    if ( (unsigned int)(v11 - 92) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(PreviousMode);
      v98 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
        v29 = v89;
        goto LABEL_73;
      }
      LODWORD(v11) = v96;
    }
    v20 = (unsigned int)(v11 - 28);
    if ( (unsigned int)v20 <= 0x32 )
    {
      v14 = 0x4000000420001LL;
      if ( _bittest64(&v14, v20) )
      {
        if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v98 = -1073741790;
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          v29 = v89;
          goto LABEL_73;
        }
        LODWORD(v11) = v96;
      }
    }
    if ( InputBuffer )
    {
      v21 = (unsigned int)(v11 - 11);
      if ( (unsigned int)v21 > 0x3D || (v22 = 0x2001800900000001LL, !_bittest64(&v22, v21)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v98 = -1073741637;
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          v29 = v89;
          goto LABEL_73;
        }
        LODWORD(v11) = v96;
      }
      if ( (_DWORD)v11 == 9
        || (v23 = (unsigned int)(v11 - 38), (unsigned int)v23 <= 0x34)
        && (v24 = 0x18000004422401LL, _bittest64(&v24, v23)) )
      {
        if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v98 = -1073741790;
          PoolWithTag = (_PROCESSOR_NUMBER *)psz;
          v29 = v89;
          goto LABEL_73;
        }
        LODWORD(v11) = v96;
      }
      v25 = (unsigned int)(v11 - 37);
      if ( (unsigned int)v25 > 0x39 || (v26 = 0x3AE005828F40BC3LL, !_bittest64(&v26, v25)) )
      {
        if ( (unsigned int)(v11 - 2) > 1 && (_DWORD)v11 != 11 )
        {
          v30 = SeShutdownPrivilege;
          if ( (_DWORD)v11 == 10 )
            v30 = SeCreatePagefilePrivilege;
          v115 = v30;
          if ( !SeSinglePrivilegeCheck(v30, PreviousMode) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            v98 = -1073741727;
            PoolWithTag = (_PROCESSOR_NUMBER *)psz;
            v29 = v89;
            goto LABEL_73;
          }
        }
      }
      if ( v13 )
      {
        v27 = (char *)InputBuffer + v13;
        if ( (unsigned __int64)v27 > 0x7FFFFFFF0000LL || v27 < InputBuffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( v13 > 0x40 )
      {
        PoolWithTag = (_PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, v13, 0x206D654Du);
        psz = &PoolWithTag->Group;
        if ( !PoolWithTag )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v98 = -1073741670;
          v29 = v89;
          goto LABEL_73;
        }
      }
      else
      {
        PoolWithTag = (_PROCESSOR_NUMBER *)v117;
        psz = (STRSAFE_PCNZWCH)v117;
      }
      memmove(PoolWithTag, InputBuffer, v13);
    }
    else
    {
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
    }
    v15 = Length;
    if ( v16 )
      ProbeForWrite(v16, Length, 1u);
    v10 = v89;
    v11 = (unsigned int)v96;
  }
  else
  {
    PoolWithTag = (_PROCESSOR_NUMBER *)InputBuffer;
    psz = (STRSAFE_PCNZWCH)InputBuffer;
  }
  if ( (unsigned int)v11 > 0x1F || (v31 = -234812256, !_bittest(&v31, v11)) )
  {
    v33 = (unsigned int)(v11 - 38);
    if ( (unsigned int)v33 > 0x38 || (v14 = 0x1FFE3BE75BE26EDLL, !_bittest64(&v14, v33)) )
    {
      PopAcquirePolicyLock();
      LOBYTE(v10) = 1;
      LOBYTE(v89) = 1;
      Size_6 = 1;
      v11 = (unsigned int)v96;
    }
  }
  v99 = v10;
  v100 = v10;
  switch ( (int)v11 )
  {
    case 0:
    case 1:
      if ( PoolWithTag )
      {
        if ( v13 < 0xE8 )
          goto LABEL_252;
        IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, PoolWithTag, v13);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_113;
      }
      else if ( !v16 )
      {
        goto LABEL_242;
      }
      v63 = &unk_1403660C4;
LABEL_254:
      Src = v63;
      Size = 232;
      goto LABEL_67;
    case 2:
    case 3:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 < 0xE8 )
        goto LABEL_252;
      IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(PoolWithTag, v116);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      v63 = v116;
      goto LABEL_254;
    case 4:
      if ( !PoolWithTag )
      {
        if ( !v16 )
          goto LABEL_242;
LABEL_138:
        BYTE9(PopCapabilities) = PopFullWake & 1;
        byte_140366315 = PopDisksRegisteredForIdle();
        PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v116);
        Size = 76;
LABEL_118:
        Src = v116;
        goto LABEL_119;
      }
      if ( (PopSimulate & 1) == 0 )
        goto LABEL_242;
      if ( v13 >= 0x4C )
      {
        PopCapabilities = *(_OWORD *)&PoolWithTag->Group;
        unk_140366310 = *(_OWORD *)&PoolWithTag[4].Group;
        xmmword_140366320 = *(_OWORD *)&PoolWithTag[8].Group;
        xmmword_140366330 = *(_OWORD *)&PoolWithTag[12].Group;
        qword_140366340 = *(_QWORD *)&PoolWithTag[16].Group;
        dword_140366348 = (int)PoolWithTag[18];
        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_113;
        goto LABEL_138;
      }
LABEL_252:
      IsAppContainerOrIdentifyLevelContext = -1073741789;
      goto LABEL_113;
    case 5:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      goto LABEL_66;
    case 6:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 < 0x18 )
        goto LABEL_252;
      v47 = (__int64)*PoolWithTag;
      if ( (unsigned int)v47 >= 7 )
        goto LABEL_242;
      v48 = 3 * v47;
      if ( qword_140366248[3 * v47] )
      {
        if ( (_DWORD)v47 != 4 || (void (__fastcall __noreturn *)(__int64))qword_1403662A8 != PopShutdownHandler )
          goto LABEL_242;
      }
      *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v47) = *(_OWORD *)&PoolWithTag->Group;
      qword_140366250[3 * v47] = *(_QWORD *)&PoolWithTag[4].Group;
      word_140366245[12 * v47] = 0;
      byte_140366247[24 * v47] = 0;
      v49 = 0LL;
      v50 = 0;
      if ( !(_DWORD)v47 )
      {
        v50 = 2;
        v58 = (PopSimulate & 8) == 0;
        v49 = (char *)&PopCapabilities + 3;
LABEL_213:
        if ( !v58 )
          v49 = 0LL;
        goto LABEL_187;
      }
      v51 = v47 - 1;
      if ( !v51 )
      {
        v50 = 3;
        v58 = (PopSimulate & 0x40) == 0;
        v49 = (char *)&PopCapabilities + 4;
        goto LABEL_213;
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        v50 = 4;
        v58 = (PopSimulate & 0x20) == 0;
        v49 = (char *)&PopCapabilities + 5;
        goto LABEL_213;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        v50 = 5;
        v58 = (PopSimulate & 0x2000) == 0;
        v49 = (char *)&PopCapabilities + 6;
        goto LABEL_213;
      }
      v54 = v53 - 1;
      if ( !v54 )
      {
        v49 = (char *)&PopCapabilities + 7;
        goto LABEL_187;
      }
      if ( v54 == 2 )
      {
        v50 = 4;
        v58 = (PopSimulate & 0x2000) == 0;
        v49 = &unk_140366311;
        goto LABEL_213;
      }
LABEL_187:
      if ( (byte_140366244[8 * v48] != 0 ? v50 : 0) > (int)qword_140366340 )
        LODWORD(qword_140366340) = byte_140366244[8 * v48] != 0 ? v50 : 0;
      if ( v49 && *v49 != 1 )
      {
        *v49 = 1;
        PopResetCurrentPolicies();
      }
LABEL_67:
      v29 = v89;
LABEL_68:
      if ( !Src || !v16 )
      {
LABEL_72:
        IsAppContainerOrIdentifyLevelContext = 0;
        InputBuffer = v114;
        goto LABEL_73;
      }
      if ( Length >= Size )
      {
        memmove((void *)v16, Src, Size);
        goto LABEL_72;
      }
      IsAppContainerOrIdentifyLevelContext = -1073741789;
      InputBuffer = v112;
LABEL_73:
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( Size_4 )
        ExFreePoolWithTag(Src, 0x206D654Du);
      if ( v29 )
        PopReleasePolicyLock();
      if ( PoolWithTag && PoolWithTag != InputBuffer && PoolWithTag != (_PROCESSOR_NUMBER *)v117 )
        ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
      return IsAppContainerOrIdentifyLevelContext;
    case 7:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      Src = &PpmProcessorDriverDispatchTable;
      Size = 248;
      goto LABEL_67;
    case 8:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      v63 = PopPolicy;
      goto LABEL_254;
    case 9:
      if ( PoolWithTag )
      {
        if ( v13 < 0x18 )
          goto LABEL_252;
        IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(v14, PoolWithTag);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_113;
        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
        InputBuffer = v108;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_113;
      }
      else if ( !v16 )
      {
        goto LABEL_242;
      }
      Src = &PopAdminPolicy;
      Size = 24;
      goto LABEL_67;
    case 10:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( !v13 )
        goto LABEL_252;
      KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      PopAcquirePolicyLock();
      LOBYTE(v64) = 1;
      LOBYTE(v65) = PoolWithTag->Group;
      IsAppContainerOrIdentifyLevelContext = PopEnableHiberFile(v65, v64);
      PopReleasePolicyLock();
      KeSetEvent(&PopTransitionLock, 0, 0);
      goto LABEL_102;
    case 11:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(v116, v10, KeGetCurrentPrcb()->Group, &Size);
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      v29 = v89;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_73;
      Src = v116;
      goto LABEL_68;
    case 12:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      LODWORD(v116[0]) = 0;
      HIDWORD(v116[0]) = dword_140365704;
      LODWORD(v116[1]) = dword_14036570C - dword_140365708;
      BYTE4(v116[1]) = PopCoolingMode;
      Src = v116;
      Size = 16;
      goto LABEL_67;
    case 13:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 32:
    case 33:
    case 34:
    case 49:
    case 52:
    case 53:
    case 54:
    case 79:
    case 80:
    case 81:
    case 82:
      goto LABEL_255;
    case 14:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      v43 = &qword_140365828;
      goto LABEL_151;
    case 15:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      v43 = &qword_140365830;
      goto LABEL_151;
    case 16:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      if ( dword_140353750 )
        LODWORD(v116[0]) |= 1u;
      if ( PopPowerRequestAttributes[0] )
        LODWORD(v116[0]) |= 2u;
      Src = v116;
      Size = 4;
      goto LABEL_67;
    case 17:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 < 0x10 )
        goto LABEL_252;
      if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)&PoolWithTag->Group )
        goto LABEL_242;
      PopPowerStateNotifyHandler = *(_OWORD *)&PoolWithTag->Group;
      goto LABEL_67;
    case 23:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(&P, &v104);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      Src = P;
      Size = v104;
      goto LABEL_67;
    case 24:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 < 8 )
        goto LABEL_252;
      v41 = PopLogSleepDisabled(*(_DWORD *)PoolWithTag, *(_DWORD *)&PoolWithTag[1], 0LL, 0LL);
      goto LABEL_135;
    case 25:
      if ( !PoolWithTag )
        goto LABEL_242;
      if ( v16 )
        goto LABEL_242;
      if ( v15 )
        goto LABEL_242;
      if ( v13 < 0x1C )
        goto LABEL_242;
      v67 = (POWER_INFORMATION_LEVEL)PoolWithTag[6];
      v96 = v67;
      if ( v67 == SystemPowerPolicyAc )
        goto LABEL_242;
      LODWORD(v105) = PoolWithTag[5];
      if ( (unsigned int)v105 > 2 )
        goto LABEL_242;
      if ( *PoolWithTag != 1 )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741736;
        goto LABEL_113;
      }
      v68 = v67 + 28;
      v69 = -1;
      if ( v68 >= 0x1C )
        v69 = v68;
      Size = v69;
      IsAppContainerOrIdentifyLevelContext = v68 < 0x1C ? 0xC0000095 : 0;
      if ( v68 < 0x1C )
        goto LABEL_113;
      if ( v13 < v69 )
      {
        InputBuffer = v110;
        goto LABEL_242;
      }
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      v41 = PopSetPowerSettingValue((LPCGUID)(psz + 2), ProcessSessionId, (int)v105, v96, (void *)(psz + 14));
      InputBuffer = v111;
      goto LABEL_135;
    case 28:
      PopSuspendResumePdc(1LL);
      PopHiberBootForceMonitorOff = 1;
      SettingNotificationName = PoPowerOffMonitor();
      goto LABEL_112;
    case 29:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      Size = 4;
      v46 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
      Src = v46;
      if ( !v46 )
        goto LABEL_342;
      Size_4 = 1;
      *v46 = PopConsoleDisplayState;
      goto LABEL_67;
    case 30:
    case 31:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 < 8 )
        goto LABEL_252;
      if ( (_DWORD)v11 == 30 )
        PopDiagTraceAppPowerMessage(PoolWithTag);
      else
        PopDiagTraceAppPowerMessageEnd(PoolWithTag);
      goto LABEL_67;
    case 35:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      if ( (_BYTE)v10 )
        PopReleasePolicyLock();
      v71 = 0;
      if ( !v100 )
        v71 = v99;
      LOBYTE(v89) = v71;
      v72 = v71;
      Size = 0;
      IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Size);
      if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
        goto LABEL_358;
      v73 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x206D654Du);
      Src = v73;
      if ( !v73 )
        goto LABEL_342;
      Size_4 = 1;
      IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(v73, &Size);
LABEL_358:
      v29 = v89;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_73;
      v29 = v72;
      Size_6 = v72;
      goto LABEL_68;
    case 36:
      if ( !v16 )
        goto LABEL_242;
      if ( !(_DWORD)dword_140365B20 || !qword_140365B18 )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741275;
        goto LABEL_113;
      }
      Size = dword_140365B20 + 8;
      v74 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_140365B20 + 8), 0x206D654Du);
      v75 = v74;
      if ( !v74 )
      {
LABEL_342:
        IsAppContainerOrIdentifyLevelContext = -1073741670;
        goto LABEL_113;
      }
      Src = v74;
      Size_4 = 1;
      memmove(v74 + 2, qword_140365B18, (unsigned int)dword_140365B20);
      *v75 = (unsigned int)dword_140365B20 >> 4;
      goto LABEL_67;
    case 37:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( Size_5 != 1 )
        goto LABEL_337;
      if ( v13 >= 4 )
      {
        IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(&PoolWithTag[1].Group, v13 - 4, 0LL);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
          IsAppContainerOrIdentifyLevelContext = 0;
      }
      else
      {
        IsAppContainerOrIdentifyLevelContext = -1073741811;
      }
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      PopDiagTraceServiceNotification(PoolWithTag);
      goto LABEL_67;
    case 38:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 == 6 )
      {
        v35 = PpmSetSimulatedLoad((__int64)PoolWithTag);
        goto LABEL_101;
      }
      if ( v13 != 4 )
        goto LABEL_372;
      v35 = PpmClearSimulatedLoad(PoolWithTag);
      goto LABEL_101;
    case 39:
      if ( !PoolWithTag || v16 || v13 != 24 )
        goto LABEL_242;
      v76 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
      if ( !v76 )
        goto LABEL_342;
      *(_OWORD *)v76 = *(_OWORD *)&PoolWithTag->Group;
      v76[2] = *(_QWORD *)&PoolWithTag[4].Group;
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)&PopShutdownNotificationCallback,
              (signed __int64)v76,
              0LL) )
        goto LABEL_119;
      ExFreePoolWithTag(v76, 0x206D654Du);
      IsAppContainerOrIdentifyLevelContext = -1073741823;
      goto LABEL_244;
    case 40:
      if ( !PoolWithTag || v13 != 4 || v16 )
        goto LABEL_242;
      Length_4 = *PoolWithTag != 0;
      PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4u, &Length_4);
      goto LABEL_67;
    case 41:
      if ( PoolWithTag || !v16 || v15 != 64 )
        goto LABEL_242;
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      v55 = PopEsState;
      PopReleaseRwLock((ULONG_PTR)&PopEsLock);
      LOBYTE(v116[6]) = v55 == 1;
      LOBYTE(v116[7]) = TtmpEnabled == 1;
      if ( TtmpEnabled == 1 )
      {
        IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_113;
      }
      PopAcquirePolicyLock();
      LODWORD(v116[2]) = 0;
      v116[0] = &PopNoMoreInput;
      v116[1] = &PopHiberBootForceMonitorOff;
      LODWORD(v116[3]) = byte_1403661B1 != 0;
      HIDWORD(v116[3]) = dword_1403661AC;
      HIDWORD(v116[2]) = dword_1403661CC;
      v116[4] = qword_1403661D0;
      HIDWORD(v116[6]) = HIDWORD(qword_1403661D8);
      v116[5] = __PAIR64__(dword_1403661E0, qword_1403661D8);
      BYTE1(v116[6]) = PopLidOpened;
      Src = v116;
      Size = 64;
      v56 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", v56);
      PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
      PopReleasePolicyLock();
      goto LABEL_119;
    case 42:
      if ( !PoolWithTag || v13 != 16 || v16 )
        goto LABEL_242;
      if ( HIBYTE(PoolWithTag[3].Group) && LOBYTE(PoolWithTag[3].Group) )
      {
        if ( PopPlatformAoAc )
          PoSetCsSessionGoal();
        PopSetDisplayStatus(*(_DWORD *)&PoolWithTag[1]);
        PopUpdateConsoleDisplayState(*(_DWORD *)&PoolWithTag[1]);
      }
      if ( PoolWithTag[3].Number )
      {
        if ( LOBYTE(PoolWithTag[3].Group) )
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &PoolWithTag[1], 4u, 0LL, 0LL, 0, 0);
        if ( PoolWithTag[3].Number )
          PopDiagTraceSessionDisplayStateChange(
            *(_DWORD *)&PoolWithTag[1] == 0,
            (int)*PoolWithTag,
            LOBYTE(PoolWithTag[3].Group),
            *(_DWORD *)&PoolWithTag[2]);
      }
      goto LABEL_67;
    case 43:
    case 72:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 != 40 || v15 != 8 )
        goto LABEL_252;
      LOBYTE(v10) = (_DWORD)v11 == 72;
      Info = PopPowerRequestCreateInfo(PoolWithTag, v10, v116);
      goto LABEL_149;
    case 44:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 != 24 )
        goto LABEL_252;
      v41 = PopPowerRequestActionInfo(PoolWithTag);
      goto LABEL_135;
    case 45:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Size);
      goto LABEL_424;
    case 46:
      if ( !PoolWithTag )
        goto LABEL_242;
      if ( v13 < 2 )
        goto LABEL_242;
      if ( !v16 )
        goto LABEL_242;
      Group = PoolWithTag->Group;
      if ( Group >= KeQueryActiveGroupCount() )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(v116, v45, Group, &Size);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      Src = v116;
      goto LABEL_67;
    case 47:
      if ( !PoolWithTag || v13 != 16 )
        goto LABEL_242;
      v83 = PopUmpoSendLegacyEvent(PoolWithTag);
      IsAppContainerOrIdentifyLevelContext = v83;
      if ( v83 >= 0 || v83 == -1073741536 )
        goto LABEL_67;
      goto LABEL_113;
    case 48:
      if ( !(_BYTE)KdDebuggerEnabled )
        goto LABEL_337;
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 == 16 )
      {
        v35 = PpmParkApplyForcedMask(PoolWithTag);
        goto LABEL_101;
      }
      if ( v13 != 2 )
        goto LABEL_372;
      v35 = PpmParkClearForcedMask(PoolWithTag);
      goto LABEL_101;
    case 50:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      PowerRequestListInfo = ExGetWakeTimerList(&Src, &Size);
LABEL_424:
      IsAppContainerOrIdentifyLevelContext = PowerRequestListInfo;
      if ( PowerRequestListInfo < 0 )
        goto LABEL_113;
      Size_4 = 1;
      goto LABEL_67;
    case 51:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 < 4 )
        goto LABEL_252;
      KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      PopAcquirePolicyLock();
      v66 = PopSetHiberFileSize(*(_DWORD *)PoolWithTag, v106);
      goto LABEL_305;
    case 55:
      if ( !(_BYTE)KdDebuggerEnabled )
        goto LABEL_337;
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 == 8 )
      {
        v35 = PpmSetSimulatedIdle((__int64)PoolWithTag);
      }
      else
      {
        if ( v13 != 4 )
        {
LABEL_372:
          IsAppContainerOrIdentifyLevelContext = -1073741811;
          goto LABEL_102;
        }
        v35 = PpmClearSimulatedIdle(PoolWithTag);
      }
      goto LABEL_101;
    case 56:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 != 8 || v15 != 4 )
        goto LABEL_252;
      IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(
                                               (int)*PoolWithTag,
                                               *(_DWORD *)&PoolWithTag[1],
                                               (unsigned int *)v116);
      v29 = v89;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_73;
      Src = v116;
      Size = 4;
      goto LABEL_68;
    case 57:
      if ( !ExVerifySuite(PhoneNT) )
      {
LABEL_255:
        IsAppContainerOrIdentifyLevelContext = -1073741822;
        goto LABEL_113;
      }
      if ( !PoolWithTag || v13 != 1 || v16 )
        goto LABEL_242;
      LOBYTE(v79) = PoolWithTag->Group;
      v41 = PopUserPresentOverride(v79);
LABEL_135:
      IsAppContainerOrIdentifyLevelContext = v41;
      v36 = v41 < 0;
      goto LABEL_103;
    case 58:
      if ( !v16 )
        goto LABEL_242;
      if ( InputBuffer && v13 != 20 || v15 != 8 )
        goto LABEL_252;
      SettingNotificationName = PopGetSettingNotificationName(PoolWithTag, v16);
      goto LABEL_112;
    case 59:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 != 16 || v15 < 4 )
        goto LABEL_252;
      SettingNotificationName = PopGetSettingValue(PoolWithTag, v16, v15);
      goto LABEL_112;
    case 60:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 < 8 )
        goto LABEL_252;
      PopEnforceResiliencyScenarios(PoolWithTag);
      goto LABEL_67;
    case 61:
      if ( !PoolWithTag || v13 != 8 || !v16 || v15 != 8 )
        goto LABEL_242;
      v57 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      PopSessionInputChange(v57, psz, v16);
      goto LABEL_67;
    case 62:
      if ( !PoolWithTag || v13 != 2 || !v16 || v15 != 8 )
        goto LABEL_242;
      v59 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PopSessionConnectionChange(v59, psz, v16);
      v61 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      if ( xmmword_14038D4E0 )
      {
        LOBYTE(v60) = *((_BYTE *)psz + 1);
        LOBYTE(v62) = *(_BYTE *)psz;
        xmmword_14038D4E0(v61, v60, v62);
      }
      goto LABEL_67;
    case 63:
      if ( PoolWithTag || v16 )
        goto LABEL_242;
      v77 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", v77);
      PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
      PopFreeSessionState(v77);
      if ( TtmpEnabled == 1 )
        TtmCleanupCurrentSession();
      goto LABEL_119;
    case 64:
      if ( !PoolWithTag || v13 != 8 || v16 )
        goto LABEL_242;
      v78 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      PopSessionWinlogonNotification(v78, psz);
      goto LABEL_67;
    case 65:
      if ( PsIsCurrentThreadInServerSilo() )
        goto LABEL_280;
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v116);
      if ( BYTE2(v116[2]) )
        PopReadHiberbootPolicy((char *)&v116[2] + 2);
      v40 = (char *)&v116[2] + 2;
      goto LABEL_125;
    case 66:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      IsDevicePotentialDripsConstraint = PopPlatformAoAc;
      goto LABEL_124;
    case 67:
      if ( !PoolWithTag || v13 != 128 || v16 && v15 != 184 )
        goto LABEL_242;
      SettingNotificationName = PopPdcInvocation(PoolWithTag, v16);
      goto LABEL_112;
    case 68:
      if ( !PoolWithTag || v13 != 8 || v16 || v15 )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = 0;
      if ( PopPlatformAoAc )
      {
        if ( LOBYTE(PoolWithTag->Group) )
        {
          v84 = PoSetCsSessionGoal();
          IsAppContainerOrIdentifyLevelContext = v84;
          if ( (!v84 || v84 == 259)
            && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
            && !PopConsoleDisplayState )
          {
            PopDiagTraceMonitorOnWithLidClosed(*(_DWORD *)&PoolWithTag[1]);
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
      goto LABEL_113;
    case 69:
      if ( PoolWithTag || v16 )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings();
      byte_140366314 = PopPlatformAoAc;
      goto LABEL_113;
    case 70:
      PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      goto LABEL_67;
    case 71:
      if ( !PoolWithTag || v13 != 8 || v16 && v15 )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = 0;
      if ( !xmmword_14038D4F0 )
        goto LABEL_113;
      LOBYTE(v10) = PoolWithTag[1].Group;
      LOBYTE(v11) = HIBYTE(PoolWithTag[1].Group);
      LOBYTE(v8) = PoolWithTag[1].Number;
      SettingNotificationName = xmmword_14038D4F0(*(_DWORD *)PoolWithTag, v10, v11, v8);
      goto LABEL_112;
    case 73:
    case 88:
      if ( PoolWithTag || v16 )
        goto LABEL_242;
      v85 = 23LL;
      if ( (_DWORD)v11 != 88 )
        v85 = 11LL;
      PopScreenOff(v85);
      IsAppContainerOrIdentifyLevelContext = 0;
      goto LABEL_113;
    case 74:
      if ( Size_5 )
        goto LABEL_337;
      if ( !PoolWithTag || v13 != 16 || v16 || v15 )
        goto LABEL_242;
      SettingNotificationName = PopPdcCsDeviceNotification(PoolWithTag);
LABEL_112:
      IsAppContainerOrIdentifyLevelContext = SettingNotificationName;
      goto LABEL_113;
    case 75:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      v38 = PopPlatformRole;
      if ( !PopPlatformRole )
      {
        v38 = _InterlockedCompareExchange(&PopPlatformRole, (dword_140365910 != 0) + 1, 0);
        if ( !v38 )
          v38 = (dword_140365910 != 0) + 1;
      }
      LODWORD(v116[0]) = v38;
      Size = 4;
      goto LABEL_118;
    case 76:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      LODWORD(v116[0]) = qword_140365CA8;
      v116[1] = qword_140365E40;
      v116[2] = qword_140365E48;
      v29 = v89;
      if ( !PopSleepStats )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        goto LABEL_73;
      }
      Src = v116;
      Size = 24;
      goto LABEL_68;
    case 77:
      if ( PoolWithTag || v16 )
        goto LABEL_242;
      v86 = PopErrataReportingIncorrectLidState;
      if ( TtmpEnabled == 1 )
      {
        v87 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        TtmNotifySessionDisplayBurst(v87);
LABEL_119:
        PoolWithTag = (_PROCESSOR_NUMBER *)psz;
      }
      else
      {
        v88 = 0;
        if ( !PopLidOpened )
          v88 = PopConsoleExternalDisplayConnected == 0;
        if ( !v88 )
          PopEventCalloutDispatch(10, 6LL);
        if ( !v86 )
        {
          LOBYTE(v11) = v88;
          PopDiagTraceDisplayBurstWin32kCallout(v14, v10, v11);
        }
      }
      goto LABEL_67;
    case 78:
      if ( Size_5 != 1 )
      {
LABEL_337:
        IsAppContainerOrIdentifyLevelContext = -1073741790;
        goto LABEL_113;
      }
      if ( v16 || v15 )
        goto LABEL_242;
      if ( PoolWithTag )
      {
        if ( v13 != 4 )
          goto LABEL_242;
        PpmSetExitLatencySamplingPercentage((int *)PoolWithTag);
      }
      else
      {
        PpmClearExitLatencySamplingPercentage();
      }
      goto LABEL_67;
    case 83:
      if ( PoolWithTag || !v16 )
        goto LABEL_242;
      PopBatteryUpdateCurrentState();
LABEL_66:
      PopCurrentPowerState(v116);
      Src = v116;
      Size = 32;
      goto LABEL_67;
    case 84:
      if ( !PoolWithTag || v16 )
        goto LABEL_242;
      if ( v13 < 0x10 || v13 < 2 * (unsigned int)PoolWithTag[3].Group + 14 )
        goto LABEL_252;
      v41 = PopThermalProcessUsermodeEvent(PoolWithTag);
      goto LABEL_135;
    case 85:
      v80 = (unsigned int)PoolWithTag[2];
      v81 = *(_QWORD *)&PoolWithTag->Group;
      if ( LOBYTE(PoolWithTag[3].Group) )
        PoSetPowerRequestInternal(v81, v80);
      else
        PoClearPowerRequestInternal(v81, v80);
      goto LABEL_67;
    case 86:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(&PoolWithTag->Group, v13, 0LL);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(PoolWithTag, v116);
      InputBuffer = v109;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      Src = v116;
      Size = 52;
      goto LABEL_67;
    case 87:
      if ( !PoolWithTag )
        goto LABEL_242;
      if ( v13 < 8 )
        goto LABEL_242;
      v34 = *PoolWithTag;
      if ( *(_DWORD *)PoolWithTag >= 42 )
        goto LABEL_242;
      if ( (unsigned int)(*(_DWORD *)&v34 - 9) <= 8 )
      {
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, Size_5) && !PopCapabilityCheck(L"terminalPowerManagement") )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741727;
          goto LABEL_113;
        }
        v35 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64))TtmDispatchApi)(
                v34,
                (_DWORD)PoolWithTag,
                v13,
                (_DWORD)v16,
                v15,
                (__int64)&Src,
                (__int64)&Size,
                (__int64)&Size_4);
      }
      else
      {
        v35 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64))PopPowerInformationInternal)(
                v34,
                (_DWORD)PoolWithTag,
                v13,
                (_DWORD)v16,
                (__int64)&Src,
                (__int64)&Size,
                (__int64)&Size_4);
      }
LABEL_101:
      IsAppContainerOrIdentifyLevelContext = v35;
LABEL_102:
      v36 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_103:
      if ( v36 )
        goto LABEL_113;
      goto LABEL_67;
    case 89:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 < 4 )
        goto LABEL_252;
      KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      PopAcquirePolicyLock();
      v66 = PopSetHiberFileType(*(_DWORD *)PoolWithTag, v106);
LABEL_305:
      IsAppContainerOrIdentifyLevelContext = v66;
      PopReleasePolicyLock();
      KeSetEvent(&PopTransitionLock, 0, 0);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_113;
      v43 = (__int64 *)v106;
      goto LABEL_151;
    case 90:
      if ( !PoolWithTag || v13 < 4 || v16 )
        goto LABEL_242;
      PopUpdatePowerButtonHoldState(*PoolWithTag != 0);
      goto LABEL_67;
    case 91:
      if ( !PopPlatformAoAc )
      {
LABEL_280:
        IsAppContainerOrIdentifyLevelContext = -1073741637;
        goto LABEL_113;
      }
      if ( !PoolWithTag || v13 != 336 || !v16 )
        goto LABEL_242;
      IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(PoolWithTag);
LABEL_124:
      LOBYTE(v116[0]) = IsDevicePotentialDripsConstraint;
      v40 = (char *)v116;
LABEL_125:
      Src = v40;
      Size = 1;
      goto LABEL_67;
    case 92:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 != 12 || v15 != 8 )
        goto LABEL_252;
      Info = PopEtEnergyTrackerCreate(PoolWithTag, v116);
LABEL_149:
      IsAppContainerOrIdentifyLevelContext = Info;
      if ( Info < 0 )
        goto LABEL_113;
      v43 = v116;
LABEL_151:
      Src = v43;
      Size = 8;
      goto LABEL_67;
    case 93:
      if ( !PoolWithTag || !v16 )
        goto LABEL_242;
      if ( v13 != 8 || v15 < 0xC )
        goto LABEL_252;
      v41 = PopEtEnergyTrackerQuery(*(void **)&PoolWithTag->Group, (__int64)v16, v15);
      goto LABEL_135;
    case 94:
      if ( !PoolWithTag || v16 || v15 )
        goto LABEL_242;
      if ( v13 != 32 )
        goto LABEL_252;
      LOBYTE(v10) = Size_5;
      v41 = PopBlackBoxUpdate(PoolWithTag, v10);
      goto LABEL_135;
    default:
      goto LABEL_242;
  }
}
