/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x1404C2C70
 * Callers:
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401E9B50 (HvlpRegisterPowerPolicyCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     TtmInit @ 0x1405A7710 (TtmInit.c)
 *     CmpInitializeLazyWriters @ 0x1405A8DA0 (CmpInitializeLazyWriters.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1405A8EC0 (PopIdleInitAoAcDozeS4Timer.c)
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PopInitializePowerSettingCallbacks @ 0x14081F640 (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x14081F71C (PpmInfoRegisterCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     RtlPcToFileName @ 0x140165994 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopEnsureErratumSubscribed @ 0x14022DA34 (PopEnsureErratumSubscribed.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EmClientRuleEvaluate @ 0x140404840 (EmClientRuleEvaluate.c)
 *     PopFindPowerSettingConfiguration @ 0x1404C2204 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1404C2300 (PopStateIsSessionSpecific.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  char *PoolWithTag; // rax
  char *v12; // rbx
  PDEVICE_OBJECT v13; // rax
  GUID v14; // xmm0
  _QWORD *PowerSettingConfiguration; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  NTSTATUS v19; // edi
  _QWORD *v21; // rax
  __int64 *v22; // rax
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  int v24; // [rsp+2Ch] [rbp-DCh]
  UNICODE_STRING v25; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING **v26; // [rsp+40h] [rbp-C8h] BYREF
  PDEVICE_OBJECT v27; // [rsp+48h] [rbp-C0h]
  UNICODE_STRING *v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-B0h]
  _BYTE v30[528]; // [rsp+68h] [rbp-A0h] BYREF

  v27 = DeviceObject;
  v7 = (GUID *)SettingGuid;
  v24 = dword_14034BB2C;
  v8 = 0;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)&v7->Data1 )
      v10 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      *(_QWORD *)&v25.Length = 34078720LL;
      memset(v30, 0, 0x208uLL);
      v25.Buffer = (wchar_t *)v30;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v25) >= 0 )
      {
        v29 = 16;
        v28 = &v25;
        v26 = &v28;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_PO_CONSOLE_STATE_CHANGE_REMAP_RULE, (__int64)&v26, 1, &v23) >= 0 )
        {
          v22 = &PopPrimaryDisplayVisibleStateErratum;
          if ( v23 != 2 )
            v22 = 0LL;
          v9 = (unsigned __int64 *)v22;
        }
      }
    }
  }
  ExAcquireFastMutex(&PopSettingLock);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x74655350u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v13 = v27;
    *((_DWORD *)v12 + 4) = 1952797520;
    v14 = *v7;
    *((_QWORD *)v12 + 10) = Callback;
    *((_QWORD *)v12 + 11) = Context;
    *((_QWORD *)v12 + 12) = v13;
    *(GUID *)(v12 + 52) = v14;
    if ( v9 )
    {
      PopEnsureErratumSubscribed(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, -1);
    if ( PowerSettingConfiguration )
    {
      v16 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v16 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v16 )
        goto LABEL_25;
      v17 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v17 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v17 )
LABEL_25:
        *((_QWORD *)v12 + 9) = PowerSettingConfiguration[v24 + 8];
      v18 = (_QWORD *)PowerSettingConfiguration[3];
      if ( (_QWORD *)*v18 != PowerSettingConfiguration + 2 )
        __fastfail(3u);
      *(_QWORD *)v12 = PowerSettingConfiguration + 2;
      *((_QWORD *)v12 + 1) = v18;
      *v18 = v12;
      PowerSettingConfiguration[3] = v12;
    }
    else
    {
      v21 = (_QWORD *)qword_14034AF48;
      if ( *(__int64 **)qword_14034AF48 != &PopRegisteredPowerSettingCallbacks )
        __fastfail(3u);
      *(_QWORD *)v12 = &PopRegisteredPowerSettingCallbacks;
      *((_QWORD *)v12 + 1) = v21;
      *v21 = v12;
      qword_14034AF48 = (__int64)v12;
    }
    v19 = 0;
    v8 = (unsigned int)PopOsInitPhase >= 3;
    if ( Handle )
      *Handle = v12;
  }
  else
  {
    v19 = -1073741670;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v8 )
    PopSetNotificationWork(0x20u);
  return v19;
}
