/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x140244A94
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x1400B16E8 (PopGetPowerSettingValue.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x14023AC64 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x14023ACA4 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x14023BB50 (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x14023C0B8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14023C35C (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14023F3B4 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14023F518 (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14024457C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140244980 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopGetEnergyCounter @ 0x1405AD408 (PopGetEnergyCounter.c)
 *     PopClearConnectedStandbyMarker @ 0x1406F4F18 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1406F57C0 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1406F86FC (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406F8878 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1406F8C60 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1406F93E8 (PopFxResetSocSubsystemAccounting.c)
 *     PopBatteryUpdateCurrentState @ 0x1406FEBF8 (PopBatteryUpdateCurrentState.c)
 *     PopDiagTraceCsConsumption @ 0x140702624 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x140702768 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1407029B8 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x1407079DC (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x140707A00 (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x140707AD8 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140707AEC (PopNetIsDisconnectStandbyActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14070C3A4 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140757E38 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140757EC0 (ExStopRecordingIRTimerExpiries.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(__int64 a1, char a2, __int64 a3)
{
  char v3; // r14
  _QWORD *v4; // rsi
  unsigned int v5; // ebx
  int v7; // ecx
  __int64 v8; // r15
  __int64 v9; // rax
  char IsCompliantNicPresent; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-49h]
  __int64 v26; // [rsp+20h] [rbp-49h]
  __int64 v27; // [rsp+20h] [rbp-49h]
  __int64 v28; // [rsp+20h] [rbp-49h]
  int v29; // [rsp+30h] [rbp-39h] BYREF
  int v30; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-31h] BYREF
  __int64 v32; // [rsp+40h] [rbp-29h] BYREF
  __int64 v33; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v34[3]; // [rsp+50h] [rbp-19h] BYREF
  int v35; // [rsp+68h] [rbp-1h]
  _BYTE v36[8]; // [rsp+70h] [rbp+7h] BYREF
  int v37; // [rsp+78h] [rbp+Fh]
  int v38; // [rsp+7Ch] [rbp+13h]
  int v39; // [rsp+D0h] [rbp+67h] BYREF
  int v40; // [rsp+D4h] [rbp+6Bh]
  unsigned int v41; // [rsp+D8h] [rbp+6Fh] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh] BYREF

  LOBYTE(v41) = a2;
  v40 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  v5 = 0;
  v39 = 0;
  v29 = 0;
  v30 = 0;
  v42 = 0;
  PopBatteryUpdateCurrentState();
  PopAcquirePolicyLock(v7);
  PopCurrentPowerState(v36);
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v9 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v9 )
  {
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    PpmIdleCaptureCsVetoAccounting(v19, dword_140389CC0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v20, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v21) = v3;
    PopDiagTraceCsExitReason(a3, v21);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140389CC0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v22, (unsigned int)dword_140389CC0);
      v5 = PopFxLogSocSubsystemMetadata(v23, (unsigned int)dword_140389CC0);
    }
    PopStatsNotifyPowerRequestCsState(v22, 0LL);
    PopClearConnectedStandbyMarker();
    qword_140389BC8 = 0LL;
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v34);
    PpmGetPlatformSelectionVetoCounts(dword_140389CC0, &v32, &v33);
    PopCsConsumption = v38;
    qword_140389BD0 = v34[1];
    dword_140389BE0 = v35;
    qword_140389BD8 = v34[0];
    qword_140389C48 = v34[2];
    qword_140389C50 = v32;
    qword_140389C58 = v33;
    dword_140389C7C = v37;
    qword_140389BC8 = v8;
    qword_140389C00 = 0LL;
    qword_140389BE8 = 0LL;
    qword_140389BF0 = 0LL;
    qword_140389C10 = 0LL;
    qword_140389C20 = 0LL;
    qword_140389C30 = 0LL;
    qword_140389C40 = 0LL;
    byte_140389C78 = 0;
    PopNetIsDisconnectStandbyActive(&v31);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140389C6C = (dword_1403661AC == 0) | byte_140389C6C & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v11 = v31;
    LOBYTE(v12) = (byte_140389C6D ^ IsCompliantNicPresent) & 1 ^ byte_140389C6D;
    if ( (((v31 - 1) & 0xFFFFFFFC) != 0 || v31 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy(v12)
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      v13 = v12 & 0xFD;
    }
    else
    {
      v13 = v12 | 2;
    }
    byte_140389C6D = v13;
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v11, 3u, &v39, v25, &v41);
    byte_140389C6D ^= (byte_140389C6D ^ (4 * v39)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v14, 3u, &v42, v26, &v41);
    dword_140389C60 = v42;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v15, 3u, &v29, v27, &v41);
    dword_140389C64 = v29;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v16, 3u, &v30, v28, &v41);
    dword_140389C68 = v30;
    _InterlockedExchange64(&qword_140389C80, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140389CC0) )
      v5 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140389CC0);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140389C70 = PopAggressiveStandbyEnabledActions;
    dword_140389C74 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    PopDiagTraceCsEnterReason();
    PopSetConnectedStandbyMarker();
    LOBYTE(v17) = 1;
    PopStatsNotifyPowerRequestCsState(v18, v17);
  }
  PopReleasePolicyLock();
  return v5;
}
