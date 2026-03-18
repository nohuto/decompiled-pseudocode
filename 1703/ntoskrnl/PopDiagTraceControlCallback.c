/*
 * XREFs of PopDiagTraceControlCallback @ 0x1404537A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140034DD8 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceFxRundown @ 0x140034E50 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140034FA8 (PopThermalTraceRundownEvents.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14006FB40 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140453A20 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownThermalRequests @ 0x140453AB0 (PopRundownThermalRequests.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140453B68 (PopDiagTracePlatformRoleRundown.c)
 *     PopLoggingInformation @ 0x140453E50 (PopLoggingInformation.c)
 *     ExTraceTimerResolution @ 0x140453F58 (ExTraceTimerResolution.c)
 *     PopDiagTracePowerSetting @ 0x1404C53F0 (PopDiagTracePowerSetting.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 *     PopTransitionTelemetryOsState @ 0x1405B9204 (PopTransitionTelemetryOsState.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        struct _TlgProvider_t *CallbackContext)
{
  __int64 v7; // rcx
  __int64 *i; // rbx
  __int64 v9; // rcx
  PVOID *v10; // rbx
  __int64 v11; // rsi
  unsigned int *v12; // rax
  int v13; // ebx
  PVOID v14; // rsi
  unsigned int v15; // r15d
  char *v16; // r14
  unsigned int v17; // r12d
  char *v18; // r13
  ULONG v19; // ebx
  char v20; // si
  REGHANDLE v21; // rbx
  __int64 v22; // rax
  int v23; // [rsp+30h] [rbp-61h] BYREF
  BOOL v24; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned int v25; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+58h] [rbp-39h] BYREF
  int *v29; // [rsp+68h] [rbp-29h]
  __int64 v30; // [rsp+70h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+78h] [rbp-19h] BYREF
  int *v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h]

  if ( (_DWORD)ControlCode == 2 )
  {
    if ( CallbackContext == &hProvider )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5LL);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0LL);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
      {
        LOBYTE(v7) = 1;
        PopDiagTracePowerRequestCreate(v7, i);
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v24 = dword_14034BB2C == 0;
      UserData.Ptr = (ULONGLONG)&v24;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v10 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v11 = dword_14034BB2C;
        do
        {
          v12 = (unsigned int *)v10[v11 + 8];
          if ( v12 )
          {
            LOBYTE(v9) = 1;
            PopDiagTracePowerSetting(v9, v10 + 4, v12[1], v12 + 3);
          }
          v10 = (PVOID *)*v10;
        }
        while ( v10 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      PopAcquirePolicyLock();
      v13 = PopLoggingInformation(&P, &v25);
      PopReleasePolicyLock();
      v14 = P;
      if ( v13 >= 0 )
      {
        v15 = *(_DWORD *)P;
        v16 = (char *)P + 4;
        v17 = 0;
        if ( *(_DWORD *)P )
        {
          v18 = (char *)P + v25;
          do
          {
            if ( v16 >= v18 )
              break;
            v19 = *((_DWORD *)v16 + 3);
            UserData.Reserved = 0;
            v19 += 16;
            UserData.Size = v19;
            UserData.Ptr = (ULONGLONG)v16;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v17;
            v16 += v19;
          }
          while ( v17 < v15 );
        }
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock();
      v20 = PopDiagHandleRegistered;
      if ( PopDiagHandleRegistered )
      {
        v21 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v31.Size = 4LL;
          v31.Ptr = (ULONGLONG)&PopNetStandbyState;
          v33 = 4LL;
          v32 = &PopNetStandbyReason;
          EtwWrite(v21, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v31);
          v21 = PopDiagHandle;
          v20 = PopDiagHandleRegistered;
        }
        if ( v20 && EtwEventEnabled(v21, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v22 = 0LL;
          v23 = 0;
          while ( 1 )
          {
            *(_QWORD *)&v28.Size = 4LL;
            v28.Ptr = (ULONGLONG)&v23;
            v30 = 4LL;
            v29 = &PopCsDeviceCompliance[v22];
            EtwWrite(v21, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v28);
            v22 = (unsigned int)(v23 + 1);
            v23 = v22;
            if ( (unsigned int)v22 >= 5 )
              break;
            v21 = PopDiagHandle;
          }
        }
      }
      PopReleasePolicyLock();
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
    }
  }
}
