/*
 * XREFs of PopDiagTraceControlCallback @ 0x1405254B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     TraceLoggingProviderEnabled @ 0x14006F0C4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140073770 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1400775EC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceFxRundown @ 0x140077664 (PopDiagTraceFxRundown.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PopThermalTraceRundownEvents @ 0x1400D20A8 (PopThermalTraceRundownEvents.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     ExTraceTimerResolution @ 0x14048C1D0 (ExTraceTimerResolution.c)
 *     PopDiagTracePowerSetting @ 0x14051D330 (PopDiagTracePowerSetting.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopCurrentPowerState @ 0x1405222E4 (PopCurrentPowerState.c)
 *     PopDiagTracePowerRequestCreate @ 0x1405243F0 (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1405271DC (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownThermalRequests @ 0x14052726C (PopRundownThermalRequests.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140527324 (PopDiagTracePlatformRoleRundown.c)
 *     PopLoggingInformation @ 0x140583E58 (PopLoggingInformation.c)
 *     PopMeasureEnergyChange @ 0x140764728 (PopMeasureEnergyChange.c)
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
  __int64 *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // r15
  _DWORD *v10; // rax
  int v11; // ebx
  PVOID v12; // r15
  char *v13; // r13
  unsigned int v14; // r12d
  char *v15; // r15
  ULONG v16; // ebx
  REGHANDLE v17; // rbx
  __int64 *v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rcx
  ULONG Size; // r13d
  __int64 v25; // rax
  char *v26; // rbx
  __int64 v27; // r15
  ULONG v28; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v29; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v31; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v32; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-BCh]
  unsigned int v34; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG v42; // [rsp+70h] [rbp-90h] BYREF
  ULONG v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int Ptr_low; // [rsp+7Ch] [rbp-84h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  BOOL v47; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h] BYREF
  int v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v57[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+100h] [rbp+0h] BYREF
  int *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+120h] [rbp+20h] BYREF
  int *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+140h] [rbp+40h] BYREF
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  __int16 *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  __int16 *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  int *v77; // [rsp+1C0h] [rbp+C0h]
  __int64 v78; // [rsp+1C8h] [rbp+C8h]
  __int64 *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1D8h] [rbp+D8h]
  __int64 *v81; // [rsp+1E0h] [rbp+E0h]
  __int64 v82; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *v83; // [rsp+1F0h] [rbp+F0h]
  __int64 v84; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v85; // [rsp+200h] [rbp+100h]
  __int64 v86; // [rsp+208h] [rbp+108h]
  __int16 *v87; // [rsp+210h] [rbp+110h]
  __int64 v88; // [rsp+218h] [rbp+118h]
  __int16 *v89; // [rsp+220h] [rbp+120h]
  __int64 v90; // [rsp+228h] [rbp+128h]
  int *v91; // [rsp+230h] [rbp+130h]
  __int64 v92; // [rsp+238h] [rbp+138h]
  unsigned int *v93; // [rsp+240h] [rbp+140h]
  __int64 v94; // [rsp+248h] [rbp+148h]
  unsigned int *v95; // [rsp+250h] [rbp+150h]
  __int64 v96; // [rsp+258h] [rbp+158h]
  ULONG *v97; // [rsp+260h] [rbp+160h]
  __int64 v98; // [rsp+268h] [rbp+168h]
  ULONG *v99; // [rsp+270h] [rbp+170h]
  __int64 v100; // [rsp+278h] [rbp+178h]
  __int64 *v101; // [rsp+280h] [rbp+180h]
  __int64 v102; // [rsp+288h] [rbp+188h]
  int *v103; // [rsp+290h] [rbp+190h]
  __int64 v104; // [rsp+298h] [rbp+198h]
  int *p_Ptr_low; // [rsp+2A0h] [rbp+1A0h]
  __int64 v106; // [rsp+2A8h] [rbp+1A8h]
  int *v107; // [rsp+2B0h] [rbp+1B0h]
  __int64 v108; // [rsp+2B8h] [rbp+1B8h]

  if ( ControlCode == 2 )
  {
    if ( CallbackContext != &pCallbackContext )
    {
      ExTraceTimerResolution(SourceId);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      *(_QWORD *)&UserData.Size = 4LL;
      v47 = dword_1403AAA2C == 0;
      UserData.Ptr = (ULONGLONG)&v47;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v8 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v9 = dword_1403AAA2C;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &PopPowerSettings );
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      PopAcquirePolicyLock();
      v11 = PopLoggingInformation(&P, &v34);
      PopReleasePolicyLock();
      v12 = P;
      if ( v11 >= 0 )
      {
        v13 = (char *)P + 4;
        v33 = *(_DWORD *)P;
        v14 = 0;
        if ( v33 )
        {
          v15 = (char *)P + v34;
          do
          {
            if ( v13 >= v15 )
              break;
            v16 = *((_DWORD *)v13 + 3) + 16;
            UserData.Ptr = (ULONGLONG)v13;
            UserData.Size = v16;
            UserData.Reserved = 0;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v14;
            v13 += v16;
          }
          while ( v14 < v33 );
          v12 = P;
        }
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      PopDiagTraceFxRundown();
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock();
      if ( PopDiagHandleRegistered )
      {
        v17 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
        {
          *(_QWORD *)&v59.Size = 4LL;
          v59.Ptr = (ULONGLONG)&PopNetStandbyState;
          v61 = 4LL;
          v60 = &PopNetStandbyReason;
          EtwWrite(v17, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &v59);
        }
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
        {
          v25 = 0LL;
          v28 = 0;
          do
          {
            *(_QWORD *)&v62.Size = 4LL;
            v62.Ptr = (ULONGLONG)&v28;
            v64 = 4LL;
            v63 = &PopCsDeviceCompliance[v25];
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &v62);
            v25 = v28 + 1;
            v28 = v25;
          }
          while ( (unsigned int)v25 < 5 );
        }
      }
      PopReleasePolicyLock();
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN) )
      {
        v26 = (char *)&unk_140861C20;
        v27 = 42LL;
        do
        {
          v65.Ptr = (ULONGLONG)(v26 - 32);
          *(_QWORD *)&v65.Size = 4LL;
          v66 = v26 - 16;
          v67 = 4LL;
          v68 = v26;
          v69 = 8LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &v65);
          v26 += 48;
          --v27;
        }
        while ( v27 );
      }
      v18 = &PopPowerEventLock;
      goto LABEL_29;
    }
    if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
    {
      memset(v57, 0, sizeof(v57));
      if ( TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) )
      {
        if ( byte_1403A960C )
        {
          PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
          if ( dword_1403A95D0 != 1 && (unsigned int)(dword_1403A95D0 - 4) > 1 )
          {
            v18 = &PopTelemetryOsState;
LABEL_29:
            PopReleaseRwLock((ULONG_PTR)v18);
            return;
          }
          v19 = (KiQueryUnbiasedInterruptTime() - qword_1403A95E8) / 0x2710uLL;
          v20 = v19 - qword_1403A95F8;
          v21 = (MEMORY[0xFFFFF78000000008] - qword_1403A95E0) / 0x2710uLL;
          qword_1403A95F8 = v19;
          v22 = v21 - qword_1403A95F0;
          qword_1403A95F0 = v21;
          v23 = v22;
          if ( v20 <= v22 )
            v23 = v20;
          v48 = v23;
          LODWORD(P) = ++dword_1403A9600;
          v36 = dword_1403A95D0;
          v37 = dword_1403A95D4;
          v33 = dword_1403A9604;
          v34 = dword_1403A9608;
          PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
          PopCurrentPowerState(v57);
          Size = v57[0].Size;
          v28 = 0;
          if ( v57[0].Size )
            v28 = 100 * v57[0].Reserved / v57[0].Size;
          PopMeasureEnergyChange(&v55, &OsStateChangeEnergyCounter);
          v49 = qword_1403A95D8;
          if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
          {
            v29 = 5;
            v30 = 1;
            v50 = v22;
            v38 = MEMORY[0xFFFFF780000002C4];
            v51 = v48;
            v31 = v36;
            v32 = v37;
            v39 = (int)P;
            v40 = v33;
            v41 = v34;
            v43 = v28;
            v54 = v56;
            v44 = v55;
            Ptr_low = LOBYTE(v57[0].Ptr);
            v46 = BYTE3(v57[0].Ptr);
            v71 = &v29;
            v73 = &v30;
            v75 = &v50;
            v77 = &v38;
            v79 = &v49;
            v81 = (__int64 *)&v51;
            v83 = &v52;
            v85 = &v53;
            v87 = &v31;
            v89 = &v32;
            v91 = &v39;
            v93 = &v40;
            v95 = &v41;
            v97 = &v42;
            v99 = &v43;
            v101 = &v54;
            v103 = &v44;
            v52 = v21;
            v53 = v19;
            v42 = Size;
            v72 = 2LL;
            v74 = 2LL;
            v76 = 8LL;
            v78 = 4LL;
            v80 = 8LL;
            v82 = 8LL;
            v84 = 8LL;
            v86 = 8LL;
            v88 = 2LL;
            v90 = 2LL;
            v92 = 4LL;
            v94 = 4LL;
            v96 = 4LL;
            v98 = 4LL;
            v100 = 4LL;
            v102 = 8LL;
            v104 = 4LL;
            v106 = 4LL;
            p_Ptr_low = &Ptr_low;
            v107 = &v46;
            v108 = 4LL;
            TlgWrite(&pCallbackContext, &unk_14030B1B1, 0LL, 0LL, 0x15u, &pData);
          }
        }
      }
    }
  }
}
