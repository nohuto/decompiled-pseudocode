/*
 * XREFs of PopDiagTraceControlCallback @ 0x1404F1610
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxRundown @ 0x14000D120 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14000EDE8 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14000F374 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400B1934 (PopDiagTraceSystemLatencyUpdate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopRundownThermalRequests @ 0x140450F38 (PopRundownThermalRequests.c)
 *     PopLoggingInformation @ 0x140451CD0 (PopLoggingInformation.c)
 *     ExTraceTimerResolution @ 0x1404521F0 (ExTraceTimerResolution.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140452384 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140452414 (PopDiagTracePlatformRoleRundown.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerSetting @ 0x1404E84C0 (PopDiagTracePowerSetting.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404F1EC8 (PopDiagTracePowerRequestCreate.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 */

void __fastcall PopDiagTraceControlCallback(
        __int64 SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        struct _TlgProvider_t *CallbackContext)
{
  __int64 v7; // rcx
  __int64 *i; // rbx
  PVOID *v9; // rbx
  __int64 v10; // rsi
  _DWORD *v11; // rax
  int v12; // ebx
  PVOID v13; // rsi
  unsigned int v14; // r15d
  char *v15; // r14
  unsigned int v16; // r12d
  char *v17; // r13
  ULONG v18; // ebx
  REGHANDLE v19; // rbx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-51h] BYREF
  BOOL v22; // [rsp+34h] [rbp-4Dh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-49h] BYREF
  PVOID P; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+58h] [rbp-29h] BYREF
  int *v27; // [rsp+68h] [rbp-19h]
  __int64 v28; // [rsp+70h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+78h] [rbp-9h] BYREF
  int *v30; // [rsp+88h] [rbp+7h]
  __int64 v31; // [rsp+90h] [rbp+Fh]

  if ( ControlCode == 2 )
  {
    if ( CallbackContext == &pCallbackContext )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5LL);
    }
    else
    {
      ExTraceTimerResolution(SourceId);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
      {
        LOBYTE(v7) = 1;
        PopDiagTracePowerRequestCreate(v7, i);
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v22 = dword_1403661AC == 0;
      UserData.Ptr = (ULONGLONG)&v22;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v9 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v10 = dword_1403661AC;
        do
        {
          v11 = v9[v10 + 8];
          if ( v11 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v9 + 4), v11[1], (__int64)(v11 + 3));
          v9 = (PVOID *)*v9;
        }
        while ( v9 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      PopAcquirePolicyLock();
      v12 = PopLoggingInformation(&P, &v23);
      PopReleasePolicyLock();
      v13 = P;
      if ( v12 >= 0 )
      {
        v14 = *(_DWORD *)P;
        v15 = (char *)P + 4;
        v16 = 0;
        if ( *(_DWORD *)P )
        {
          v17 = (char *)P + v23;
          do
          {
            if ( v15 >= v17 )
              break;
            v18 = *((_DWORD *)v15 + 3);
            UserData.Reserved = 0;
            v18 += 16;
            UserData.Size = v18;
            UserData.Ptr = (ULONGLONG)v15;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v16;
            v15 += v18;
          }
          while ( v16 < v14 );
        }
      }
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock();
      if ( PopDiagHandleRegistered )
      {
        v19 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v26.Size = 4LL;
          v26.Ptr = (ULONGLONG)&PopNetStandbyState;
          v28 = 4LL;
          v27 = &PopNetStandbyReason;
          EtwWrite(v19, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v26);
        }
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v20 = 0LL;
          v21 = 0;
          do
          {
            *(_QWORD *)&v29.Size = 4LL;
            v29.Ptr = (ULONGLONG)&v21;
            v31 = 4LL;
            v30 = &PopCsDeviceCompliance[v20];
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v29);
            v20 = (unsigned int)(v21 + 1);
            v21 = v20;
          }
          while ( (unsigned int)v20 < 5 );
        }
      }
      PopReleasePolicyLock();
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
    }
  }
}
