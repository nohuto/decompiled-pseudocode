/*
 * XREFs of PopPowerInformationInternal @ 0x1404EA1F0
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PoLatencySensitivityHint @ 0x14000DB40 (PoLatencySensitivityHint.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopSetWatchdog @ 0x1400B1A00 (PopSetWatchdog.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PopIsRunningInVm @ 0x14023D330 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x14023D3E4 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140246EBC (PopDiagTraceSessionDisplayStateChange.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 *     PopBootStatGet @ 0x1405AC1B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1405AC38C (PopBootStatSet.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 *     PopUpdateExternalDisplayState @ 0x1405B82B4 (PopUpdateExternalDisplayState.c)
 *     PopEsQueueStateEvaluation @ 0x1405C9C78 (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopBroadcastSessionInfo @ 0x1405E9064 (PopBroadcastSessionInfo.c)
 *     PopFxPlatformRegisterInterface @ 0x1405F1BF8 (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405F2590 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x1406F4ED4 (PopCheckTestsigningEnabled.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 *     PopIsRunningAsLocalSystem @ 0x1406F792C (PopIsRunningAsLocalSystem.c)
 *     PopS0LowPowerIdleInfo @ 0x1406F7A40 (PopS0LowPowerIdleInfo.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 *     PoUserShutdownCancelled @ 0x1406FDA30 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 *     PopScreenOff @ 0x1406FF984 (PopScreenOff.c)
 *     PopScreenOn @ 0x1406FF9CC (PopScreenOn.c)
 *     PopNetUpdateStandbyRequest @ 0x140707D78 (PopNetUpdateStandbyRequest.c)
 *     PopBootStatCheckIntegrity @ 0x140707F20 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140708180 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x140708264 (PopBootStatUnlock.c)
 *     PopSetDisplayStatus @ 0x14070A030 (PopSetDisplayStatus.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14070A4AC (PopUpdateSmartUserPresencePredictions.c)
 *     TtmNotifySessionPowerStateChange @ 0x14070F790 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x14070F820 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140721870 (RtlCapabilityCheckForSingleSessionSku.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        _BYTE *a7)
{
  unsigned __int64 v10; // rdi
  PVOID v11; // r15
  unsigned int BootSessionStandbyActivationInfo; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  __int64 v16; // rcx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  _BYTE *v22; // rbx
  _BYTE *v23; // rax
  PVOID v24; // rax
  PVOID v25; // rdi
  ULONG v26; // edx
  void *v27; // rcx
  _BYTE *v28; // rax
  PVOID v29; // rax
  _BYTE *v30; // rax
  _QWORD *v31; // rax
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  _QWORD *PoolWithTag; // rax
  __int128 v39; // xmm0
  unsigned __int8 v40; // al
  _QWORD *v41; // rdi
  char *v42; // rax
  BOOL v43; // ebx
  PVOID v44; // rax
  PVOID v45; // rdi
  _BYTE *v46; // rax
  int v47; // ebx
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // r14d
  _BYTE *v52; // rax
  int v53; // eax
  bool v54; // zf
  _DWORD *v55; // rcx
  char v56; // bl
  int v57; // eax
  _BYTE *v58; // rax
  BOOLEAN HasCapability; // [rsp+40h] [rbp-78h] BYREF
  _BYTE Buffer[7]; // [rsp+41h] [rbp-77h] BYREF
  _BYTE *v62; // [rsp+48h] [rbp-70h]
  int v63; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+58h] [rbp-60h] BYREF
  _DWORD v65[8]; // [rsp+68h] [rbp-50h] BYREF

  v10 = (int)a1;
  v62 = a7;
  v11 = 0LL;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( a1 == 36 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
LABEL_202:
      if ( PopIsRunningInVm() )
      {
        if ( a3 >= 0xC )
        {
          if ( !a4 )
          {
            v56 = *(_BYTE *)(a2 + 8);
            PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
            PopEsEnabledOnHost = v56;
            PopReleaseRwLock((ULONG_PTR)&PopEsLock);
            PopEsQueueStateEvaluation(0LL);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741637;
    }
    if ( a1 <= 0x28 )
    {
      v13 = 0x10014B80105LL;
      if ( _bittest64(&v13, v10) )
        return (unsigned int)-1073741790;
    }
    if ( (_DWORD)v10 == 29 )
    {
      if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
        return (unsigned int)-1073741790;
      goto LABEL_150;
    }
    if ( ((_DWORD)v10 == 35 || (_DWORD)v10 == 24) && !(unsigned __int8)PopIsRunningAsLocalSystem() )
      return (unsigned int)-1073741790;
    if ( (_DWORD)v10 == 41 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
      {
        if ( (PopSimulate & 1) == 0 || !(unsigned __int8)PopCheckTestsigningEnabled() )
          return (unsigned int)-1073741790;
        if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
          return (unsigned int)-1073741790;
      }
LABEL_185:
      if ( a3 == 12 )
      {
        if ( *(_BYTE *)(a2 + 8) )
          PoUserShutdownInitiated();
        else
          PoUserShutdownCancelled();
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    if ( (_DWORD)v10 == 25 )
    {
      CapabilityName.Buffer = 0LL;
      *(_DWORD *)&CapabilityName.Length = 0;
      v14 = 0x7FFFLL;
      v15 = L"systemManagement";
      while ( *v15 )
      {
        ++v15;
        if ( !--v14 )
          goto LABEL_25;
      }
      CapabilityName.Buffer = L"systemManagement";
      CapabilityName.Length = 2 * (0x7FFF - v14);
      CapabilityName.MaximumLength = CapabilityName.Length + 2;
LABEL_25:
      BootSessionStandbyActivationInfo = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
      if ( (BootSessionStandbyActivationInfo & 0x80000000) != 0 )
        return BootSessionStandbyActivationInfo;
      if ( !HasCapability )
        return (unsigned int)-1073741790;
      goto LABEL_172;
    }
  }
  else if ( a1 <= 0x29 )
  {
    v16 = 0x282010000A0LL;
    if ( _bittest64(&v16, v10) )
      return (unsigned int)-1073741637;
  }
  if ( (int)v10 <= 24 )
  {
    if ( (_DWORD)v10 == 24 )
    {
      if ( a3 < 0x28 )
        return (unsigned int)-1073741789;
      if ( !a4 )
      {
        v47 = *(_DWORD *)(a2 + 12);
        if ( !PopVideoHighPrecisionBrightnessEnabled
          && (v47 == -1
           || (PopVideoHighPrecisionBrightnessEnabled = 1,
               ZwUpdateWnfStateData(
                 &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
                 &PopVideoHighPrecisionBrightnessEnabled,
                 1u,
                 0LL,
                 0LL,
                 0,
                 0),
               PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF),
               !PopVideoHighPrecisionBrightnessEnabled))
          || v47 != -1 )
        {
          v65[0] = *(_DWORD *)(a2 + 8);
          v65[1] = *(_DWORD *)(a2 + 12);
          v65[2] = *(_DWORD *)(a2 + 16);
          v65[3] = *(_DWORD *)(a2 + 20);
          v65[4] = *(_DWORD *)(a2 + 24);
          v65[5] = *(_DWORD *)(a2 + 28);
          v65[6] = *(_DWORD *)(a2 + 32);
          v65[7] = *(_DWORD *)(a2 + 36);
          PopBroadcastSessionInfo(4LL, 32LL, v65);
          return 0;
        }
        return (unsigned int)-1073741637;
      }
      return (unsigned int)-1073741811;
    }
    if ( (int)v10 > 7 )
    {
      v32 = v10 - 8;
      if ( !v32 )
      {
        if ( a3 >= 8 )
        {
          if ( !a4 )
            return (unsigned int)PopUpdateBackgroundCoolingStatus(*(unsigned __int8 *)(a2 + 8));
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      }
      v33 = v32 - 10;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( !v35 )
          {
            if ( a3 == 20 && !a4 )
            {
              TtmNotifySessionTerminalInput(
                *(unsigned int *)(a2 + 8),
                *(unsigned int *)(a2 + 12),
                *(unsigned __int8 *)(a2 + 16));
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 && a3 == 12 )
              {
                PopUpdateExternalDisplayState(*(unsigned __int8 *)(a2 + 8));
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            if ( a3 < 8 || !a4 )
              return (unsigned int)-1073741789;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
            if ( PoolWithTag )
            {
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              PoolWithTag[3] = 0LL;
              PoolWithTag[4] = 0LL;
              PoolWithTag[5] = 0LL;
              *(_OWORD *)PoolWithTag = PopBsdPhysicalPowerButtonInfoAtBoot;
              *((_OWORD *)PoolWithTag + 1) = xmmword_14038D430;
              v39 = xmmword_14038D440;
LABEL_89:
              *((_OWORD *)PoolWithTag + 2) = v39;
              *a5 = PoolWithTag;
              *a6 = 48;
              *a7 = 1;
              return 0;
            }
            return (unsigned int)-1073741670;
          }
          if ( a3 < 0x60 || !*(_QWORD *)(a2 + 8) && !a4 )
            return (unsigned int)-1073741789;
          if ( *(_DWORD *)(a2 + 24) == 412 )
          {
            if ( *(_BYTE *)(a2 + 88) || (v40 = 1, !*(_DWORD *)(a2 + 16)) )
              v40 = 0;
            PopBsdPowerWatchdogArmed = v40;
            if ( v40 )
              PopBsdLastPowerWatchdogStage = *(_DWORD *)(a2 + 32);
          }
          v41 = 0LL;
          if ( a4 )
          {
            v41 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
            if ( !v41 )
              return (unsigned int)-1073741670;
          }
          v42 = PopSetWatchdog(*(char **)(a2 + 8), (unsigned int *)(a2 + 16), *(_BYTE *)(a2 + 88));
          if ( a4 )
          {
            *v41 = v42;
            *a5 = v41;
            *a6 = 8;
            *a7 = 1;
          }
          return 0;
        }
        else
        {
          if ( a3 != 20 || a4 )
            return (unsigned int)-1073741811;
          TtmNotifySessionPowerStateChange(*(unsigned int *)(a2 + 8), *(unsigned __int8 *)(a2 + 12));
          v43 = *(_BYTE *)(a2 + 12) != 0;
          if ( *(_BYTE *)(a2 + 13) )
          {
            PopSetDisplayStatus(*(_BYTE *)(a2 + 12) != 0);
            PopUpdateConsoleDisplayState(v43);
          }
          PopDiagTraceSessionDisplayStateChange(
            *(_BYTE *)(a2 + 12) == 0,
            *(_DWORD *)(a2 + 8),
            *(unsigned __int8 *)(a2 + 13),
            *(_DWORD *)(a2 + 16));
          return 0;
        }
      }
      else
      {
        if ( !PopPlatformAoAc )
          return (unsigned int)-1073741637;
        if ( !a4 )
          return (unsigned int)-1073741789;
        v44 = ExAllocatePoolWithTag(PagedPool, 0x340uLL, 0x206D654Du);
        v45 = v44;
        if ( !v44 )
          return (unsigned int)-1073741670;
        BootSessionStandbyActivationInfo = PopQueryBootSessionStandbyActivationInfo((__int64)v44);
        if ( (BootSessionStandbyActivationInfo & 0x80000000) == 0 )
        {
          v46 = v62;
          *a5 = v45;
          *a6 = 832;
          *v46 = 1;
        }
      }
      return BootSessionStandbyActivationInfo;
    }
    if ( (_DWORD)v10 == 7 )
    {
      if ( a3 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
      if ( v31 )
      {
        *v31 = 0LL;
        v31[1] = 0LL;
        v31[2] = 0LL;
        v31[3] = 0LL;
        *(_OWORD *)v31 = PopBsdPowerTransitionAtBoot;
        *((_OWORD *)v31 + 1) = xmmword_14038D460;
        *a5 = v31;
        *a6 = 32;
        *a7 = 1;
        return 0;
      }
      return (unsigned int)-1073741670;
    }
    if ( (_DWORD)v10 )
    {
      v17 = v10 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          PopVideoInitialized = 1;
          return (unsigned int)ZwUpdateWnfStateData(
                                 &WNF_PO_VIDEO_INITIALIALIZED,
                                 &PopVideoInitialized,
                                 1u,
                                 0LL,
                                 0LL,
                                 0,
                                 0);
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( a3 >= 0x10 )
          {
            if ( !a4 && (PopSimulate & 1) != 0 )
            {
              PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a2 + 8), 0LL);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          return (unsigned int)-1073741789;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            if ( a3 >= 0xC )
            {
              if ( !a4 )
              {
                PoLatencySensitivityHint(*(_DWORD *)(a2 + 8));
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741789;
          }
          if ( v21 == 1 )
          {
            if ( a3 >= 0xC )
            {
              if ( !a4 )
                return (unsigned int)PopNetUpdateStandbyRequest(*(unsigned __int8 *)(a2 + 8));
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741811;
        }
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v22 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
        if ( !v22 )
          return (unsigned int)-1073741670;
        *v22 = PopPlatformAoAc && RtlIsMultiSessionSku();
        v23 = v62;
        *a5 = v22;
        BootSessionStandbyActivationInfo = 0;
        *a6 = 1;
        *v23 = 1;
        return BootSessionStandbyActivationInfo;
      }
      if ( !a4 )
        return (unsigned int)-1073741789;
      v24 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
      v25 = v24;
      if ( !v24 )
        return (unsigned int)-1073741670;
      BootSessionStandbyActivationInfo = PopS0LowPowerIdleInfo(v24);
      if ( (BootSessionStandbyActivationInfo & 0x80000000) == 0 )
      {
        v28 = v62;
        *a5 = v25;
        *a6 = 8;
        *v28 = 1;
        return BootSessionStandbyActivationInfo;
      }
    }
    else
    {
      if ( a3 < 0x20 || !a4 )
        return (unsigned int)-1073741789;
      v29 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
      v25 = v29;
      if ( !v29 )
        return (unsigned int)-1073741670;
      BootSessionStandbyActivationInfo = PopFxPlatformRegisterInterface(a2, v29);
      if ( (BootSessionStandbyActivationInfo & 0x80000000) == 0 )
      {
        v30 = v62;
        *a5 = v25;
        *a6 = 16;
        *v30 = 1;
        return BootSessionStandbyActivationInfo;
      }
    }
    v26 = 544040269;
    v27 = v25;
LABEL_228:
    ExFreePoolWithTag(v27, v26);
    return BootSessionStandbyActivationInfo;
  }
  if ( (int)v10 <= 33 )
  {
    switch ( (_DWORD)v10 )
    {
      case 0x21:
        return (unsigned int)-1073741637;
      case 0x19:
LABEL_172:
        if ( a3 < 0xC )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        if ( *(_BYTE *)(a2 + 8) )
          PopScreenOn();
        else
          PopScreenOff(30LL);
        return 0;
      case 0x1A:
        if ( a3 < 0xC )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v53 = PpmPerfQosDisableRefcount;
        if ( *(_BYTE *)(a2 + 8) )
        {
          if ( PpmPerfQosDisableRefcount == -1 )
          {
            BootSessionStandbyActivationInfo = -1073741675;
            v54 = 0;
          }
          else
          {
            BootSessionStandbyActivationInfo = 0;
            ++PpmPerfQosDisableRefcount;
            v54 = v53 == 0;
          }
        }
        else
        {
          if ( PpmPerfQosDisableRefcount )
          {
            v53 = --PpmPerfQosDisableRefcount;
            BootSessionStandbyActivationInfo = 0;
          }
          else
          {
            BootSessionStandbyActivationInfo = -1073741637;
          }
          v54 = v53 == 0;
        }
        if ( v54 )
          PpmPerfUpdateDomainPolicy(0LL);
        else
          PpmReleaseLock(&PpmPerfPolicyLock);
        return BootSessionStandbyActivationInfo;
      case 0x1B:
        if ( a3 >= 0x10 )
        {
          if ( !a4 )
          {
            PopTransitionCheckpoint(*(unsigned int *)(a2 + 8));
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      case 0x1C:
        if ( a3 == 12 )
        {
          v63 = *(_DWORD *)(a2 + 8);
          PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, &v63);
          return 0;
        }
        return (unsigned int)-1073741811;
      case 0x1D:
LABEL_150:
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
        if ( PoolWithTag )
        {
          *PoolWithTag = 0LL;
          PoolWithTag[1] = 0LL;
          PoolWithTag[2] = 0LL;
          PoolWithTag[3] = 0LL;
          PoolWithTag[4] = 0LL;
          PoolWithTag[5] = 0LL;
          *(_OWORD *)PoolWithTag = PopFirmwareResetReason;
          *((_OWORD *)PoolWithTag + 1) = xmmword_14038D480;
          v39 = xmmword_14038D490;
          goto LABEL_89;
        }
        return (unsigned int)-1073741670;
      case 0x1E:
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v52 = ExAllocatePoolWithTag(PagedPool, 3uLL, 0x206D654Du);
        if ( v52 )
        {
          *(_WORD *)v52 = 0;
          v52[2] = 0;
          *v52 = PpmPerfQosSupportedAndConfigured;
          v52[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
          v52[2] = PpmPerfQosGroupPolicyDisable != 0;
          *a5 = v52;
          *a6 = 3;
          *a7 = 1;
          return 0;
        }
        return (unsigned int)-1073741670;
    }
    if ( (unsigned int)(v10 - 31) > 1 )
      return (unsigned int)-1073741811;
LABEL_137:
    if ( a3 != 24 )
      return (unsigned int)-1073741811;
    if ( a4 )
    {
      v48 = *(_DWORD *)(a2 + 8);
      if ( !v48 )
        return (unsigned int)-1073741811;
      v49 = 4LL * v48;
      v50 = 0;
      v51 = -1;
      if ( v49 <= 0xFFFFFFFF )
        v51 = v49;
      else
        v50 = -1073741675;
      BootSessionStandbyActivationInfo = v50;
      if ( v49 > 0xFFFFFFFF )
        return BootSessionStandbyActivationInfo;
      v11 = ExAllocatePoolWithTag(PagedPool, v51, 0x206D654Du);
      if ( !v11 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v51 = 0;
    }
    switch ( (_DWORD)v10 )
    {
      case 0x1F:
        if ( !*(_DWORD *)(a2 + 8) )
        {
          BootSessionStandbyActivationInfo = -1073741811;
LABEL_226:
          if ( !v11 )
            return BootSessionStandbyActivationInfo;
          v26 = 0;
          v27 = v11;
          goto LABEL_228;
        }
        v57 = PopBootStatGet(a2, v11);
        break;
      case 0x20:
        if ( !*(_DWORD *)(a2 + 8) )
        {
          BootSessionStandbyActivationInfo = -1073741811;
          goto LABEL_226;
        }
        v57 = PopBootStatSet(a2, v11);
        break;
      case 0x22:
        if ( !*(_DWORD *)(a2 + 8) )
        {
          BootSessionStandbyActivationInfo = -1073741811;
          goto LABEL_226;
        }
        v57 = PopBootStatCheckIntegrity(a2);
        break;
      case 0x23:
        v57 = PopBootStatRestoreDefaults();
        break;
      default:
        v57 = PopBootStatUnlock();
        break;
    }
    BootSessionStandbyActivationInfo = v57;
    if ( v57 >= 0 )
    {
      if ( v11 )
      {
        v58 = v62;
        *a5 = v11;
        v11 = 0LL;
        *a6 = v51;
        *v58 = 1;
      }
      BootSessionStandbyActivationInfo = 0;
    }
    goto LABEL_226;
  }
  if ( (int)v10 <= 35 )
    goto LABEL_137;
  switch ( (_DWORD)v10 )
  {
    case '$':
      goto LABEL_202;
    case '%':
      if ( a3 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v55 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
      if ( v55 )
      {
        *v55 = qword_1403657E4;
        *a5 = v55;
        *a6 = 4;
        *a7 = 1;
        return 0;
      }
      return (unsigned int)-1073741670;
    case '&':
      goto LABEL_137;
    case '\'':
      if ( a3 == 12 )
      {
        Buffer[0] = *(_BYTE *)(a2 + 8);
        return (unsigned int)ZwUpdateWnfStateData(&WNF_PO_WAKE_ON_VOICE_STATE, Buffer, 1u, 0LL, 0LL, 0, 0);
      }
      return (unsigned int)-1073741811;
  }
  if ( (_DWORD)v10 != 40 )
  {
    if ( (_DWORD)v10 != 41 )
      return (unsigned int)-1073741811;
    goto LABEL_185;
  }
  if ( a3 != 16 || *(_DWORD *)(a2 + 8) )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a2 + 12) )
    PopDeepSleepSetDisengageReason(7);
  else
    PopDeepSleepClearDisengageReason(7);
  return 0;
}
