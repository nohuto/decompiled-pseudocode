/*
 * XREFs of PopPowerInformationInternal @ 0x140522340
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopSetWatchdog @ 0x1400754B0 (PopSetWatchdog.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PoLatencySensitivityHint @ 0x140144140 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14015543C (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopIsRunningInVm @ 0x1402747D0 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140274854 (PopQueryBootSessionStandbyActivationInfo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     PoUserShutdownCancelled @ 0x1405EACA0 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 *     PopSetDisplayStatus @ 0x1405EEA80 (PopSetDisplayStatus.c)
 *     PopBootStatSet @ 0x14060EF54 (PopBootStatSet.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 *     PopEsQueueStateEvaluation @ 0x140610D08 (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopBootStatGet @ 0x14064D048 (PopBootStatGet.c)
 *     PopBroadcastSessionInfo @ 0x14064E8EC (PopBroadcastSessionInfo.c)
 *     PopUpdateExternalDisplayState @ 0x1406540E8 (PopUpdateExternalDisplayState.c)
 *     PopFxPlatformRegisterInterface @ 0x140654E68 (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x14065561C (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x14075D244 (PopCheckTestsigningEnabled.c)
 *     PopIsRunningAsLocalSystem @ 0x14075F130 (PopIsRunningAsLocalSystem.c)
 *     PopScreenOff @ 0x14076527C (PopScreenOff.c)
 *     PopScreenOn @ 0x1407652C4 (PopScreenOn.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14076B924 (PopNetIsDisconnectStandbyActive.c)
 *     PopNetUpdateStandbyRequest @ 0x14076BBF8 (PopNetUpdateStandbyRequest.c)
 *     PopBootStatCheckIntegrity @ 0x14076BDB0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x14076C05C (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x14076C140 (PopBootStatUnlock.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14076C37C (PopUpdateSmartUserPresencePredictions.c)
 *     TtmNotifySessionPowerStateChange @ 0x140772FA4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140773034 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140785010 (RtlCapabilityCheckForSingleSessionSku.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  __int64 v8; // rdx
  unsigned __int64 v11; // rdi
  int BootSessionStandbyActivationInfo; // ebx
  __int64 v13; // rcx
  bool v14; // cc
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  _QWORD *v24; // rax
  _BYTE *v25; // rdi
  bool v26; // al
  _BYTE *v27; // rsi
  char IsDisconnectStandbyActive; // al
  char v29; // dl
  char v30; // r8
  int v31; // r9d
  char v32; // dl
  char v33; // cl
  char v34; // dl
  char v35; // al
  char v36; // cl
  char v37; // dl
  char v38; // al
  char v39; // cl
  char v40; // cl
  _BYTE *v41; // rax
  PVOID v42; // rax
  void *v43; // rdi
  _BYTE *v44; // rax
  int v45; // edi
  int v46; // edi
  int v47; // edi
  int v48; // edi
  int v49; // edi
  int v50; // edi
  int v51; // ebx
  _QWORD *PoolWithTag; // rax
  __int128 v53; // xmm0
  _QWORD *v54; // rdi
  char *v55; // rax
  char v56; // al
  __int64 v57; // rdx
  BOOL v58; // ebx
  PVOID v59; // rax
  PVOID v60; // rdi
  _BYTE *v61; // rax
  _BYTE *v62; // rax
  int v63; // eax
  bool v64; // zf
  _BYTE *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // eax
  unsigned __int64 v70; // rcx
  int v71; // eax
  PVOID v72; // r14
  int v73; // eax
  _BYTE *v74; // rax
  _DWORD *v75; // rcx
  char v76; // bl
  BOOLEAN HasCapability; // [rsp+40h] [rbp-41h] BYREF
  _BYTE Buffer[7]; // [rsp+41h] [rbp-40h] BYREF
  _BYTE *v80; // [rsp+48h] [rbp-39h]
  int v81; // [rsp+50h] [rbp-31h] BYREF
  int v82; // [rsp+54h] [rbp-2Dh] BYREF
  UNICODE_STRING CapabilityName; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v84[8]; // [rsp+70h] [rbp-11h] BYREF

  v8 = 0LL;
  v11 = (int)a1;
  v80 = a7;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( a1 == 36 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
      goto LABEL_179;
    }
    if ( a1 <= 0x29 )
    {
      v13 = 0x30014B80105LL;
      if ( _bittest64(&v13, v11) )
        return (unsigned int)-1073741790;
    }
    if ( (_DWORD)v11 == 29 )
    {
      if ( !(unsigned __int8)PspIsContextAdmin() )
        return (unsigned int)-1073741790;
LABEL_157:
      if ( a3 < 8 || !a4 )
        return (unsigned int)-1073741789;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      PoolWithTag[5] = 0LL;
      *(_OWORD *)PoolWithTag = PopFirmwareResetReason;
      *((_OWORD *)PoolWithTag + 1) = xmmword_1403D13D0;
      v53 = xmmword_1403D13E0;
      goto LABEL_112;
    }
    if ( (_DWORD)v11 == 35 || (_DWORD)v11 == 24 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
      v8 = 0LL;
    }
    if ( (_DWORD)v11 == 42 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
      {
        if ( (PopSimulate & 1) == 0 || !(unsigned __int8)PopCheckTestsigningEnabled() )
          return (unsigned int)-1073741790;
        if ( !(unsigned __int8)PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
      goto LABEL_179;
    }
    v14 = (int)v11 <= 25;
    if ( (_DWORD)v11 == 25 )
    {
      CapabilityName.Buffer = 0LL;
      *(_DWORD *)&CapabilityName.Length = 0;
      v15 = 0x7FFFLL;
      v16 = L"systemManagement";
      while ( *v16 )
      {
        ++v16;
        if ( !--v15 )
          goto LABEL_26;
      }
      CapabilityName.Buffer = L"systemManagement";
      CapabilityName.Length = 2 * (0x7FFF - v15);
      CapabilityName.MaximumLength = CapabilityName.Length + 2;
LABEL_26:
      BootSessionStandbyActivationInfo = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
      if ( BootSessionStandbyActivationInfo < 0 )
        return (unsigned int)BootSessionStandbyActivationInfo;
      if ( !HasCapability )
        return (unsigned int)-1073741790;
      goto LABEL_138;
    }
  }
  else
  {
    if ( a1 <= 0x2A )
    {
      v17 = 0x482010000A0LL;
      if ( _bittest64(&v17, v11) )
        return (unsigned int)-1073741637;
    }
    v14 = (int)v11 <= 25;
  }
  if ( v14 )
  {
    if ( (_DWORD)v11 != 25 )
    {
      if ( (int)v11 <= 8 )
      {
        if ( (_DWORD)v11 == 8 )
        {
          if ( a3 >= 8 )
          {
            if ( !a4 )
              return (unsigned int)PopUpdateBackgroundCoolingStatus(*(unsigned __int8 *)(a2 + 8));
            return (unsigned int)-1073741811;
          }
          return (unsigned int)-1073741789;
        }
        if ( !(_DWORD)v11 )
        {
          if ( a3 < 0x20 || !a4 )
            return (unsigned int)-1073741789;
          v42 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
          v43 = v42;
          if ( !v42 )
            return (unsigned int)-1073741670;
          BootSessionStandbyActivationInfo = PopFxPlatformRegisterInterface(a2, v42);
          if ( BootSessionStandbyActivationInfo >= 0 )
          {
            v44 = v80;
            *a5 = v43;
            *a6 = 16;
            *v44 = 1;
          }
          else
          {
            ExFreePoolWithTag(v43, 0x206D654Du);
          }
          return (unsigned int)BootSessionStandbyActivationInfo;
        }
        v18 = v11 - 1;
        if ( !v18 )
        {
          if ( !a4 )
            return (unsigned int)-1073741789;
          v27 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
          if ( !v27 )
            return (unsigned int)-1073741670;
          v64 = PopPlatformAoAc == 0;
          *(_QWORD *)v27 = 0LL;
          if ( v64 )
          {
            BootSessionStandbyActivationInfo = -1073741637;
            ExFreePoolWithTag(v27, 0x206D654Du);
            return (unsigned int)BootSessionStandbyActivationInfo;
          }
          PopAcquirePolicyLock();
          IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(&v81);
          v29 = v27[4];
          v30 = IsDisconnectStandbyActive;
          v31 = v81;
          *(_DWORD *)v27 = v81;
          v32 = (PopCsDeviceCompliance == 1) | v29 & 0xFE;
          v33 = 0;
          v27[4] = v32;
          if ( dword_1403EC814 == 1 )
            v33 = 2;
          v34 = v33 | v32 & 0xFD;
          v35 = 0;
          v36 = v27[5];
          v27[4] = v34;
          if ( dword_1403EC818 == 1 )
            v35 = 4;
          v37 = v35 | v34 & 0xFB;
          v38 = 0;
          v27[4] = v37;
          if ( dword_1403EC820 == 1 )
            v38 = 8;
          v27[4] = v38 | v37 & 0xF7;
          v39 = (v30 != 0) | v36 & 0xFE;
          v27[5] = v39;
          if ( (unsigned int)(v31 - 3) <= 1 )
            v40 = v39 | 2;
          else
            v40 = v39 & 0xFD;
          v27[5] = v40;
          PopReleasePolicyLock();
          v41 = v80;
          *a5 = v27;
          *a6 = 8;
          *v41 = 1;
          return 0;
        }
        v19 = v18 - 1;
        if ( !v19 )
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
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( a3 < 0x10 )
            return (unsigned int)-1073741789;
          if ( a4 || (PopSimulate & 1) == 0 )
            return (unsigned int)-1073741811;
          PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a2 + 8), 0LL);
          return 0;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            if ( a3 < 0xC )
              return (unsigned int)-1073741789;
            if ( a4 )
              return (unsigned int)-1073741811;
            PoLatencySensitivityHint(*(_DWORD *)(a2 + 8));
            return 0;
          }
          v23 = v22 - 1;
          if ( !v23 )
          {
            if ( a3 >= 0xC )
            {
              if ( !a4 )
                return (unsigned int)PopNetUpdateStandbyRequest(*(unsigned __int8 *)(a2 + 8));
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741789;
          }
          if ( v23 != 1 )
            return (unsigned int)-1073741811;
          if ( a3 >= 8 && a4 )
          {
            v24 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
            if ( !v24 )
              return (unsigned int)-1073741670;
            *v24 = 0LL;
            v24[1] = 0LL;
            v24[2] = 0LL;
            v24[3] = 0LL;
            *(_OWORD *)v24 = PopBsdPowerTransitionAtBoot;
            *((_OWORD *)v24 + 1) = xmmword_1403D13B0;
            *a5 = v24;
            *a6 = 32;
            *a7 = 1;
            return 0;
          }
        }
        else if ( a3 >= 8 && a4 )
        {
          v25 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
          if ( v25 )
          {
            v26 = PopPlatformAoAc && RtlIsMultiSessionSku();
            *v25 = v26;
            *a5 = v25;
            *a6 = 1;
            *a7 = 1;
            return 0;
          }
          return (unsigned int)-1073741670;
        }
        return (unsigned int)-1073741789;
      }
      v45 = v11 - 18;
      if ( !v45 )
      {
        if ( PopPlatformAoAc )
        {
          if ( !a4 )
            return (unsigned int)-1073741789;
          v59 = ExAllocatePoolWithTag(PagedPool, 0x390uLL, 0x206D654Du);
          v60 = v59;
          if ( !v59 )
            return (unsigned int)-1073741670;
          BootSessionStandbyActivationInfo = PopQueryBootSessionStandbyActivationInfo((__int64)v59);
          if ( BootSessionStandbyActivationInfo >= 0 )
          {
            v61 = v80;
            *a5 = v60;
            *a6 = 912;
            *v61 = 1;
          }
          return (unsigned int)BootSessionStandbyActivationInfo;
        }
        return (unsigned int)-1073741637;
      }
      v46 = v45 - 1;
      if ( !v46 )
      {
        if ( a3 == 20 && !a4 )
        {
          TtmNotifySessionPowerStateChange(*(unsigned int *)(a2 + 8), *(unsigned __int8 *)(a2 + 12));
          v56 = *(_BYTE *)(a2 + 12);
          v57 = *(unsigned __int8 *)(a2 + 13);
          v58 = v56 != 0;
          if ( (_BYTE)v57 )
          {
            PopSetDisplayStatus(v56 != 0, v57);
            PopUpdateConsoleDisplayState(v58);
            v56 = *(_BYTE *)(a2 + 12);
            LOBYTE(v57) = *(_BYTE *)(a2 + 13);
          }
          PopDiagTraceSessionDisplayStateChange(
            v56 == 0,
            *(_DWORD *)(a2 + 8),
            (unsigned __int8)v57,
            *(_DWORD *)(a2 + 16));
          return 0;
        }
        return (unsigned int)-1073741811;
      }
      v47 = v46 - 1;
      if ( !v47 )
      {
        if ( a3 != 20 || a4 )
          return (unsigned int)-1073741811;
        TtmNotifySessionTerminalInput(
          *(unsigned int *)(a2 + 8),
          *(unsigned int *)(a2 + 12),
          *(unsigned __int8 *)(a2 + 16));
        return 0;
      }
      v48 = v47 - 1;
      if ( !v48 )
      {
        if ( a3 >= 0x60 && (*(_QWORD *)(a2 + 8) || a4) )
        {
          if ( *(_DWORD *)(a2 + 24) == 412 )
          {
            if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 16) )
            {
              PopBsdPowerWatchdogArmed = 0;
            }
            else
            {
              PopBsdLastPowerWatchdogStage = *(_DWORD *)(a2 + 32);
              PopBsdPowerWatchdogArmed = 1;
            }
          }
          v54 = 0LL;
          if ( !a4 || (v54 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du)) != 0LL )
          {
            v55 = PopSetWatchdog(*(char **)(a2 + 8), (unsigned int *)(a2 + 16), *(_BYTE *)(a2 + 88));
            if ( a4 )
            {
              *v54 = v55;
              *a5 = v54;
              *a6 = 8;
              *a7 = 1;
            }
            return 0;
          }
          return (unsigned int)-1073741670;
        }
        return (unsigned int)-1073741789;
      }
      v49 = v48 - 1;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( !v50 )
        {
          if ( a3 != 12 )
            return (unsigned int)-1073741811;
          PopUpdateExternalDisplayState(*(unsigned __int8 *)(a2 + 8));
          return 0;
        }
        if ( v50 != 1 )
          return (unsigned int)-1073741811;
        if ( a3 < 0x28 )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        v51 = *(_DWORD *)(a2 + 12);
        if ( !PopVideoHighPrecisionBrightnessEnabled
          && (v51 == -1
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
          || v51 != -1 )
        {
          v84[0] = *(_DWORD *)(a2 + 8);
          v84[1] = *(_DWORD *)(a2 + 12);
          v84[2] = *(_DWORD *)(a2 + 16);
          v84[3] = *(_DWORD *)(a2 + 20);
          v84[4] = *(_DWORD *)(a2 + 24);
          v84[5] = *(_DWORD *)(a2 + 28);
          v84[6] = *(_DWORD *)(a2 + 32);
          v84[7] = *(_DWORD *)(a2 + 36);
          PopBroadcastSessionInfo(4LL, 32LL, v84);
          return 0;
        }
        return (unsigned int)-1073741637;
      }
      if ( a3 < 8 || !a4 )
        return (unsigned int)-1073741789;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      PoolWithTag[5] = 0LL;
      *(_OWORD *)PoolWithTag = PopBsdPhysicalPowerButtonInfoAtBoot;
      *((_OWORD *)PoolWithTag + 1) = xmmword_1403D1380;
      v53 = xmmword_1403D1390;
LABEL_112:
      *((_OWORD *)PoolWithTag + 2) = v53;
      *a5 = PoolWithTag;
      *a6 = 48;
      *a7 = 1;
      return 0;
    }
LABEL_138:
    if ( a3 >= 0xC )
    {
      if ( !a4 )
      {
        if ( *(_BYTE *)(a2 + 8) )
          PopScreenOn();
        else
          PopScreenOff(30LL, v8);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  if ( (int)v11 > 35 )
  {
LABEL_179:
    if ( (_DWORD)v11 != 36 )
    {
      if ( (_DWORD)v11 != 37 )
      {
        if ( (_DWORD)v11 != 38 )
        {
          if ( (_DWORD)v11 == 39 )
          {
            if ( a3 == 12 )
            {
              Buffer[0] = *(_BYTE *)(a2 + 8);
              return (unsigned int)ZwUpdateWnfStateData(&WNF_PO_WAKE_ON_VOICE_STATE, Buffer, 1u, 0LL, 0LL, 0, 0);
            }
            return (unsigned int)-1073741811;
          }
          if ( (_DWORD)v11 == 40 )
          {
            if ( a3 == 16 && !*(_DWORD *)(a2 + 8) )
            {
              if ( *(_BYTE *)(a2 + 12) )
                PopDeepSleepSetDisengageReason(7);
              else
                PopDeepSleepClearDisengageReason(7);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          if ( (_DWORD)v11 != 41 )
          {
            if ( (_DWORD)v11 == 42 && a3 == 12 )
            {
              if ( *(_BYTE *)(a2 + 8) )
                PoUserShutdownInitiated();
              else
                PoUserShutdownCancelled();
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          if ( a3 != 16 )
            return (unsigned int)-1073741811;
          if ( a4 )
          {
            v65 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
            if ( v65 )
            {
              v66 = *(_QWORD *)(a2 + 8);
              if ( v66
                && (v67 = *(_QWORD *)(*(_QWORD *)(v66 + 312) + 40LL)) != 0
                && (v68 = *(_QWORD *)(v67 + 80)) != 0
                && *(_QWORD *)(v68 + 64) )
              {
                *v65 = 1;
                *a5 = v65;
                *a6 = 1;
                *a7 = 1;
              }
              else
              {
                *v65 = 0;
                *a5 = v65;
                *a6 = 1;
                *a7 = 1;
              }
              return 0;
            }
            return (unsigned int)-1073741670;
          }
          return (unsigned int)-1073741789;
        }
        goto LABEL_206;
      }
      if ( a3 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v75 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
      if ( !v75 )
        return (unsigned int)-1073741670;
      *v75 = qword_1403AA064;
      *a5 = v75;
      *a6 = 4;
      *a7 = 1;
      return 0;
    }
    if ( PopIsRunningInVm() )
    {
      if ( a3 < 0xC )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      v76 = *(_BYTE *)(a2 + 8);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PopEsEnabledOnHost = v76;
      PopReleaseRwLock((ULONG_PTR)&PopEsLock);
      PopEsQueueStateEvaluation(0LL);
      return 0;
    }
    return (unsigned int)-1073741637;
  }
  if ( (int)v11 < 34 )
  {
    switch ( (_DWORD)v11 )
    {
      case 0x1A:
        if ( a3 < 0xC )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        v63 = PpmPerfQosDisableRefcount;
        if ( *(_BYTE *)(a2 + 8) )
        {
          if ( PpmPerfQosDisableRefcount == -1 )
          {
            BootSessionStandbyActivationInfo = -1073741675;
            v64 = 0;
          }
          else
          {
            BootSessionStandbyActivationInfo = 0;
            ++PpmPerfQosDisableRefcount;
            v64 = v63 == 0;
          }
        }
        else
        {
          if ( PpmPerfQosDisableRefcount )
          {
            v63 = --PpmPerfQosDisableRefcount;
            BootSessionStandbyActivationInfo = 0;
          }
          else
          {
            BootSessionStandbyActivationInfo = -1073741637;
          }
          v64 = v63 == 0;
        }
        if ( v64 )
          PpmPerfUpdateDomainPolicy(0LL);
        else
          PpmReleaseLock(&PpmPerfPolicyLock);
        return (unsigned int)BootSessionStandbyActivationInfo;
      case 0x1B:
        if ( a3 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        PopTransitionCheckpoint(*(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12));
        return 0;
      case 0x1C:
        if ( a3 != 12 )
          return (unsigned int)-1073741811;
        v82 = *(_DWORD *)(a2 + 8);
        PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, &v82);
        return 0;
      case 0x1D:
        goto LABEL_157;
      case 0x1E:
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v62 = ExAllocatePoolWithTag(PagedPool, 3uLL, 0x206D654Du);
        if ( !v62 )
          return (unsigned int)-1073741670;
        *(_WORD *)v62 = 0;
        v62[2] = 0;
        *v62 = PpmPerfQosSupportedAndConfigured;
        v62[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
        v62[2] = PpmPerfQosGroupPolicyDisable != 0;
        *a5 = v62;
        *a6 = 3;
        *a7 = 1;
        return 0;
    }
    if ( (int)v11 <= 30 )
      return (unsigned int)-1073741811;
    if ( (int)v11 > 32 )
      return (unsigned int)-1073741637;
  }
LABEL_206:
  if ( a3 != 24 )
    return (unsigned int)-1073741811;
  if ( !a4 )
  {
    v72 = 0LL;
    goto LABEL_217;
  }
  v69 = *(_DWORD *)(a2 + 8);
  if ( !v69 )
    return (unsigned int)-1073741811;
  v70 = 4LL * v69;
  LODWORD(a4) = -1;
  if ( v70 <= 0xFFFFFFFF )
    LODWORD(a4) = 4 * v69;
  v71 = 0;
  if ( v70 > 0xFFFFFFFF )
    v71 = -1073741675;
  BootSessionStandbyActivationInfo = v71;
  if ( v70 <= 0xFFFFFFFF )
  {
    v72 = ExAllocatePoolWithTag(PagedPool, (unsigned int)a4, 0x206D654Du);
    if ( !v72 )
      return (unsigned int)-1073741670;
LABEL_217:
    if ( (_DWORD)v11 == 31 )
    {
      if ( !*(_DWORD *)(a2 + 8) )
      {
        BootSessionStandbyActivationInfo = -1073741811;
        goto LABEL_236;
      }
      v73 = PopBootStatGet(a2, v72);
LABEL_232:
      BootSessionStandbyActivationInfo = v73;
      if ( v73 >= 0 )
      {
        if ( v72 )
        {
          v74 = v80;
          *a5 = v72;
          v72 = 0LL;
          *a6 = a4;
          *v74 = 1;
        }
        BootSessionStandbyActivationInfo = 0;
      }
      goto LABEL_236;
    }
    if ( (_DWORD)v11 == 32 )
    {
      if ( *(_DWORD *)(a2 + 8) )
      {
        v73 = PopBootStatSet(a2, v72);
        goto LABEL_232;
      }
      BootSessionStandbyActivationInfo = -1073741811;
    }
    else
    {
      if ( (_DWORD)v11 != 34 )
      {
        if ( (_DWORD)v11 == 35 )
          v73 = PopBootStatRestoreDefaults();
        else
          v73 = PopBootStatUnlock();
        goto LABEL_232;
      }
      if ( *(_DWORD *)(a2 + 8) )
      {
        v73 = PopBootStatCheckIntegrity(a2);
        goto LABEL_232;
      }
      BootSessionStandbyActivationInfo = -1073741811;
    }
LABEL_236:
    if ( v72 )
      ExFreePoolWithTag(v72, 0);
  }
  return (unsigned int)BootSessionStandbyActivationInfo;
}
