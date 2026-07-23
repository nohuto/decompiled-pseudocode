/*
 * XREFs of PopPowerInformationInternal @ 0x1404C44B4
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     PoLatencySensitivityHint @ 0x140130BD0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14013D0C4 (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x14022A4DC (PopQueryBootSessionStandbyActivationInfo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 *     RtlIsMultiSessionSku @ 0x140560330 (RtlIsMultiSessionSku.c)
 *     PopTransitionCheckpoint @ 0x140576B7C (PopTransitionCheckpoint.c)
 *     PopSetDisplayStatus @ 0x140579DA0 (PopSetDisplayStatus.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 *     PopBroadcastSessionInfo @ 0x1405A8304 (PopBroadcastSessionInfo.c)
 *     PopNetUpdateStandbyRequest @ 0x1405D42D4 (PopNetUpdateStandbyRequest.c)
 *     PopFxPlatformRegisterInterface @ 0x1405D55D4 (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405D5E60 (PopUpdateBackgroundCoolingStatus.c)
 *     PopScreenOff @ 0x1406CB998 (PopScreenOff.c)
 *     PopScreenOn @ 0x1406CB9E0 (PopScreenOn.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1406CFED0 (PopNetIsDisconnectStandbyActive.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1406D4BCC (PopUpdateSmartUserPresencePredictions.c)
 *     TtmNotifySessionPowerStateChange @ 0x1406D9408 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1406D9498 (TtmNotifySessionTerminalInput.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        signed int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  __int64 v8; // rbx
  int v9; // eax
  int BootSessionStandbyActivationInfo; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  _BYTE *PoolWithTag; // rbx
  _BYTE *v16; // rdi
  char IsDisconnectStandbyActive; // al
  char v18; // cl
  int v19; // r8d
  char v20; // dl
  char v21; // cl
  char v22; // cl
  char v23; // cl
  _BYTE *v24; // rax
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rdx
  BOOL v30; // edi
  PVOID v31; // rax
  PVOID v32; // rdi
  _OWORD *v33; // rax
  _OWORD *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // esi
  char v40; // al
  _OWORD *v41; // rax
  _OWORD *v42; // rdi
  __int128 v43; // xmm0
  unsigned __int8 v44; // al
  _QWORD *v45; // r12
  char *v46; // rax
  int v47; // eax
  bool v48; // zf
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  _DWORD *v53; // rcx
  _BYTE *v54; // rcx
  _OWORD *v55; // rax
  char v57; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v58[3]; // [rsp+4Ch] [rbp-4Dh] BYREF
  _DWORD v59[8]; // [rsp+58h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-21h] BYREF
  char *v61; // [rsp+98h] [rbp-1h]
  __int64 v62; // [rsp+A0h] [rbp+7h]

  v8 = a2;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned int)a1 <= 0x1A )
    {
      v9 = 70778885;
      if ( _bittest(&v9, a1) )
        return (unsigned int)-1073741790;
    }
  }
  if ( a1 <= 20 )
  {
    if ( a1 == 20 )
    {
      if ( (_DWORD)a3 == 20 && !a4 )
      {
        LOBYTE(a3) = *(_BYTE *)(a2 + 16);
        TtmNotifySessionTerminalInput(*(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12), a3);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    if ( a1 <= 5 )
    {
      if ( a1 == 5 )
      {
        if ( (unsigned int)a3 < 0xC )
          return (unsigned int)-1073741789;
        if ( !a4 )
        {
          PoLatencySensitivityHint(*(_DWORD *)(a2 + 8));
          return 0;
        }
        return (unsigned int)-1073741811;
      }
      if ( a1 )
      {
        v11 = a1 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
              {
                if ( (unsigned int)a3 >= 8 && a4 )
                {
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
                  if ( PoolWithTag )
                  {
                    *PoolWithTag = PopPlatformAoAc && RtlIsMultiSessionSku();
                    *a5 = PoolWithTag;
                    goto LABEL_22;
                  }
                  return (unsigned int)-1073741670;
                }
                return (unsigned int)-1073741789;
              }
            }
            else
            {
              if ( (unsigned int)a3 < 0x10 )
                return (unsigned int)-1073741789;
              if ( !a4 && (PopSimulate & 1) != 0 )
              {
                PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a2 + 8), 0LL);
                return 0;
              }
            }
            return (unsigned int)-1073741811;
          }
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
        if ( !a4 )
          return (unsigned int)-1073741789;
        v16 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
        if ( !v16 )
          return (unsigned int)-1073741670;
        v48 = PopPlatformAoAc == 0;
        *(_QWORD *)v16 = 0LL;
        if ( v48 )
        {
          BootSessionStandbyActivationInfo = -1073741637;
          goto LABEL_46;
        }
        PopAcquirePolicyLock();
        IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(v58);
        v18 = v16[4];
        v19 = v58[0];
        *(_DWORD *)v16 = v58[0];
        v16[4] ^= ((PopCsDeviceCompliance[0] == 1) ^ v18) & 1;
        v20 = v16[4] ^ (v16[4] ^ (2 * (dword_14038C3AC == 1))) & 2;
        v16[4] = v20;
        v21 = v20 ^ (v20 ^ (4 * (dword_14038C3B0 == 1))) & 4;
        v16[4] = v21;
        v16[4] = v21 ^ (v21 ^ (8 * (dword_14038C3B8 == 1))) & 8;
        v22 = v16[5] ^ (v16[5] ^ (IsDisconnectStandbyActive != 0)) & 1;
        v16[5] = v22;
        if ( (unsigned int)(v19 - 3) <= 1 )
          v23 = v22 | 2;
        else
          v23 = v22 & 0xFD;
        v16[5] = v23;
        PopReleasePolicyLock();
        *a5 = v16;
LABEL_39:
        *a6 = 8;
        goto LABEL_23;
      }
      if ( (unsigned int)a3 < 0x20 || !a4 )
        return (unsigned int)-1073741789;
      v24 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
      v16 = v24;
      if ( !v24 )
        return (unsigned int)-1073741670;
      BootSessionStandbyActivationInfo = PopFxPlatformRegisterInterface(v8, v24);
      if ( BootSessionStandbyActivationInfo < 0 )
      {
LABEL_46:
        ExFreePoolWithTag(v16, 0x206D654Du);
        return (unsigned int)BootSessionStandbyActivationInfo;
      }
      *a5 = v16;
      *a6 = 16;
LABEL_48:
      *a7 = 1;
      return (unsigned int)BootSessionStandbyActivationInfo;
    }
    v25 = (unsigned int)(a1 - 6);
    if ( !(_DWORD)v25 )
    {
      if ( (unsigned int)a3 < 0xC )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      LOBYTE(v25) = *(_BYTE *)(a2 + 8);
      return (unsigned int)PopNetUpdateStandbyRequest(v25);
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      if ( (unsigned int)a3 >= 8 && a4 )
      {
        v33 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
        v34 = v33;
        if ( v33 )
        {
          memset(v33, 0, 0x20uLL);
          *v34 = PopBsdPowerTransitionAtBoot;
          v34[1] = xmmword_14036E678;
          *a5 = v34;
          *a6 = 32;
          goto LABEL_23;
        }
        return (unsigned int)-1073741670;
      }
      return (unsigned int)-1073741789;
    }
    v27 = (unsigned int)(v26 - 1);
    if ( !(_DWORD)v27 )
    {
      if ( (unsigned int)a3 < 8 )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      LOBYTE(v27) = *(_BYTE *)(a2 + 8);
      return (unsigned int)PopUpdateBackgroundCoolingStatus(v27);
    }
    v28 = v27 - 10;
    if ( v28 )
    {
      if ( v28 == 1 && (_DWORD)a3 == 20 && !a4 )
      {
        LOBYTE(a2) = *(_BYTE *)(a2 + 12);
        TtmNotifySessionPowerStateChange(*(unsigned int *)(v8 + 8), a2);
        v30 = *(_BYTE *)(v8 + 12) != 0;
        if ( *(_BYTE *)(v8 + 13) )
        {
          PopSetDisplayStatus(*(_BYTE *)(v8 + 12) != 0, v29);
          PopUpdateConsoleDisplayState(v30);
        }
        PopDiagTraceSessionDisplayStateChange(
          *(_BYTE *)(v8 + 12) == 0,
          *(_DWORD *)(v8 + 8),
          *(unsigned __int8 *)(v8 + 13),
          *(_DWORD *)(v8 + 16));
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    if ( PopPlatformAoAc )
    {
      if ( !a4 )
        return (unsigned int)-1073741789;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x338uLL, 0x206D654Du);
      v32 = v31;
      if ( !v31 )
        return (unsigned int)-1073741670;
      BootSessionStandbyActivationInfo = PopQueryBootSessionStandbyActivationInfo((__int64)v31);
      if ( BootSessionStandbyActivationInfo < 0 )
        return (unsigned int)BootSessionStandbyActivationInfo;
      *a5 = v32;
      *a6 = 824;
      goto LABEL_48;
    }
    return (unsigned int)-1073741637;
  }
  if ( a1 > 26 )
  {
    v49 = a1 - 27;
    if ( !v49 )
    {
      if ( (unsigned int)a3 < 0x10 )
        return (unsigned int)-1073741789;
      if ( !a4 )
      {
        PopTransitionCheckpoint(*(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12));
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    v50 = v49 - 1;
    if ( !v50 )
    {
      if ( (_DWORD)a3 == 12 )
      {
        v58[1] = *(_DWORD *)(a2 + 8);
        PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    v51 = v50 - 1;
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( !v52 )
      {
        if ( (unsigned int)a3 >= 8 && a4 )
        {
          v54 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
          if ( v54 )
          {
            *v54 = PpmPerfVirtualHeterogeneitySupportedAndConfigured;
            *a5 = v54;
LABEL_22:
            *a6 = 1;
LABEL_23:
            *a7 = 1;
            return 0;
          }
          return (unsigned int)-1073741670;
        }
        return (unsigned int)-1073741789;
      }
      if ( v52 == 1 )
      {
        if ( (unsigned int)a3 >= 8 && a4 )
        {
          v53 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
          if ( v53 )
          {
            *v53 = qword_14034B184;
            *a5 = v53;
            *a6 = 4;
            goto LABEL_23;
          }
          return (unsigned int)-1073741670;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741811;
    }
    if ( (unsigned int)a3 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v55 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
    v42 = v55;
    if ( !v55 )
      return (unsigned int)-1073741670;
    memset(v55, 0, 0x30uLL);
    *v42 = PopFirmwareResetReason;
    v42[1] = xmmword_14036E698;
    v43 = xmmword_14036E6A8;
    goto LABEL_107;
  }
  if ( a1 != 26 )
  {
    v35 = a1 - 21;
    if ( !v35 )
    {
      if ( (unsigned int)a3 < 0x60 || !*(_QWORD *)(a2 + 8) && !a4 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a2 + 24) == 412 )
      {
        if ( *(_BYTE *)(a2 + 88) || (v44 = 1, !*(_DWORD *)(a2 + 16)) )
          v44 = 0;
        PopBsdPowerWatchdogArmed = v44;
        if ( v44 )
          PopBsdLastPowerWatchdogStage = *(_DWORD *)(a2 + 32);
      }
      v45 = 0LL;
      if ( a4 )
      {
        v45 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
        if ( !v45 )
          return (unsigned int)-1073741670;
      }
      v46 = PopSetWatchdog(*(char **)(v8 + 8), (unsigned int *)(v8 + 16), *(_BYTE *)(v8 + 88));
      if ( !a4 )
        return 0;
      *v45 = v46;
      *a5 = v45;
      goto LABEL_39;
    }
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( !v37 )
      {
        if ( (_DWORD)a3 == 12 )
        {
          v40 = *(_BYTE *)(a2 + 8);
          PopConsoleExternalDisplayConnected = v40;
          if ( hProvider.LevelPlus1 > 5 )
          {
            v57 = v40;
            v61 = &v57;
            v62 = 1LL;
            TlgWrite(&hProvider, &unk_1402AD241, 0LL, 0LL, 3u, &pData);
          }
          return 0;
        }
        return (unsigned int)-1073741811;
      }
      v38 = v37 - 1;
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          if ( (unsigned int)a3 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a4 )
          {
            if ( *(_BYTE *)(a2 + 8) )
              PopScreenOn();
            else
              PopScreenOff(30LL, a2);
            return 0;
          }
        }
        return (unsigned int)-1073741811;
      }
      if ( (unsigned int)a3 < 0x28 )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      v39 = *(_DWORD *)(a2 + 12);
      if ( !PopVideoHighPrecisionBrightnessEnabled
        && (v39 == -1
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
        || v39 != -1 )
      {
        v59[0] = *(_DWORD *)(v8 + 8);
        v59[1] = *(_DWORD *)(v8 + 12);
        v59[2] = *(_DWORD *)(v8 + 16);
        v59[3] = *(_DWORD *)(v8 + 20);
        v59[4] = *(_DWORD *)(v8 + 24);
        v59[5] = *(_DWORD *)(v8 + 28);
        v59[6] = *(_DWORD *)(v8 + 32);
        v59[7] = *(_DWORD *)(v8 + 36);
        PopBroadcastSessionInfo(4LL, 32LL, v59);
        return 0;
      }
      return (unsigned int)-1073741637;
    }
    if ( (unsigned int)a3 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v41 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
    v42 = v41;
    if ( !v41 )
      return (unsigned int)-1073741670;
    memset(v41, 0, 0x30uLL);
    *v42 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v42[1] = xmmword_14036E648;
    v43 = xmmword_14036E658;
LABEL_107:
    v42[2] = v43;
    *a5 = v42;
    *a6 = 48;
    goto LABEL_23;
  }
  if ( (unsigned int)a3 < 0xC )
    return (unsigned int)-1073741789;
  if ( a4 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v47 = PpmPerfVirtualHeterogeneityDisableRefcount;
  if ( *(_BYTE *)(v8 + 8) )
  {
    if ( PpmPerfVirtualHeterogeneityDisableRefcount == -1 )
    {
      BootSessionStandbyActivationInfo = -1073741675;
    }
    else
    {
      v47 = PpmPerfVirtualHeterogeneityDisableRefcount + 1;
      BootSessionStandbyActivationInfo = 0;
      ++PpmPerfVirtualHeterogeneityDisableRefcount;
    }
    v48 = v47 == 1;
  }
  else
  {
    if ( PpmPerfVirtualHeterogeneityDisableRefcount )
    {
      BootSessionStandbyActivationInfo = 0;
      v47 = --PpmPerfVirtualHeterogeneityDisableRefcount;
    }
    else
    {
      BootSessionStandbyActivationInfo = -1073741637;
    }
    v48 = v47 == 0;
  }
  if ( v48 )
    PpmPerfRecomputeBackgroundPolicy(0LL);
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)BootSessionStandbyActivationInfo;
}
