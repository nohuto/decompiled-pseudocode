/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14027B24C
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140074EA4 (PopGetPowerSettingValue.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x14027213C (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x14027217C (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1402730A4 (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1402736A8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14027394C (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x140276860 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140276A14 (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14027ACFC (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14027B138 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopIsHibernateSupported @ 0x14051CCB0 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PopCurrentPowerState @ 0x1405222E4 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140611B78 (PopBatteryUpdateCurrentState.c)
 *     PopClearConnectedStandbyMarker @ 0x14075D288 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14075D5FC (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14075FBC0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14075FD3C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140760124 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407608AC (PopFxResetSocSubsystemAccounting.c)
 *     PopDirectedDripsNotify @ 0x140761720 (PopDirectedDripsNotify.c)
 *     PopGetEnergyCounter @ 0x1407646DC (PopGetEnergyCounter.c)
 *     PopDiagIdleWakeAccountingStart @ 0x1407657F8 (PopDiagIdleWakeAccountingStart.c)
 *     PopDiagIdleWakeAccountingStop @ 0x140765870 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagTraceCsConsumption @ 0x1407665A0 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1407666E4 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x140766934 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x14076B81C (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14076B840 (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x14076B910 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14076B924 (PopNetIsDisconnectStandbyActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14076F870 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407BEA8C (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1407BEB14 (ExStopRecordingIRTimerExpiries.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(__int64 a1, char a2, __int64 a3)
{
  char v3; // r15
  _QWORD *v4; // rsi
  char IsHibernateSupported; // r14
  int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  char IsCompliantNicPresent; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+28h] [rbp-A9h]
  __int64 v32; // [rsp+28h] [rbp-A9h]
  __int64 v33; // [rsp+28h] [rbp-A9h]
  __int64 v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+28h] [rbp-A9h]
  __int64 v36; // [rsp+28h] [rbp-A9h]
  int v37; // [rsp+38h] [rbp-99h] BYREF
  int v38; // [rsp+3Ch] [rbp-95h] BYREF
  int v39; // [rsp+40h] [rbp-91h] BYREF
  int v40; // [rsp+44h] [rbp-8Dh] BYREF
  __int64 v41; // [rsp+48h] [rbp-89h] BYREF
  __int64 v42; // [rsp+50h] [rbp-81h] BYREF
  __int64 v43; // [rsp+58h] [rbp-79h] BYREF
  __int64 v44; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v45[3]; // [rsp+68h] [rbp-69h] BYREF
  int v46; // [rsp+80h] [rbp-51h]
  _BYTE v47[8]; // [rsp+88h] [rbp-49h] BYREF
  int v48; // [rsp+90h] [rbp-41h]
  int v49; // [rsp+94h] [rbp-3Dh]
  _BYTE v50[128]; // [rsp+A8h] [rbp-29h] BYREF
  int v51; // [rsp+138h] [rbp+67h] BYREF
  int v52; // [rsp+13Ch] [rbp+6Bh]
  unsigned int v53; // [rsp+140h] [rbp+6Fh] BYREF
  int v54; // [rsp+150h] [rbp+7Fh] BYREF

  LOBYTE(v53) = a2;
  v52 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  IsHibernateSupported = 0;
  v51 = 0;
  v6 = 0;
  v40 = 0;
  v39 = 0;
  v37 = 0;
  v38 = 0;
  v54 = 0;
  PopBatteryUpdateCurrentState();
  PopAcquirePolicyLock(v8);
  PopCurrentPowerState(v47);
  v9 = MEMORY[0xFFFFF78000000008];
  v10 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v10 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v10 )
  {
    PopDiagIdleWakeAccountingStop();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v42 = a3;
    PopDirectedDripsNotify(5LL, &v42);
    PpmIdleCaptureCsVetoAccounting(v25, dword_1403CDB00);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v26, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v27) = v3;
    PopDiagTraceCsExitReason(a3, v27);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_1403CDB00) )
    {
      PopFxLogSocSubsystemBlockingTimes(v28, (unsigned int)dword_1403CDB00);
      v6 = PopFxLogSocSubsystemMetadata(v29, (unsigned int)dword_1403CDB00);
    }
    PopStatsNotifyPowerRequestCsState(v28, 0LL);
    PopClearConnectedStandbyMarker();
    qword_1403CD9C8 = 0LL;
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v45);
    PpmGetPlatformSelectionVetoCounts(dword_1403CDB00, &v43, &v44);
    PopCsConsumption = v49;
    qword_1403CD9D0 = v45[1];
    dword_1403CD9E0 = v46;
    qword_1403CD9D8 = v45[0];
    qword_1403CDA48 = v45[2];
    qword_1403CDA50 = v43;
    qword_1403CDA58 = v44;
    dword_1403CDA7C = v48;
    qword_1403CD9C8 = v9;
    qword_1403CDA00 = 0LL;
    qword_1403CD9E8 = 0LL;
    qword_1403CD9F0 = 0LL;
    qword_1403CDA10 = 0LL;
    qword_1403CDA20 = 0LL;
    qword_1403CDA30 = 0LL;
    qword_1403CDA40 = 0LL;
    byte_1403CDA78 = 0;
    PopNetIsDisconnectStandbyActive(&v41);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_1403CDA6C = (dword_1403AAA2C == 0) | byte_1403CDA6C & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v12 = (unsigned int)v41;
    LOBYTE(v13) = byte_1403CDA6D ^ (byte_1403CDA6D ^ IsCompliantNicPresent) & 1;
    if ( ((((_DWORD)v41 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v41 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy(v13)
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      v14 = v13 & 0xFD;
    }
    else
    {
      v14 = v13 | 2;
    }
    byte_1403CDA6D = v14;
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3u, &v51, v31, &v53);
    byte_1403CDA6D ^= (byte_1403CDA6D ^ (4 * v51)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v15, 3u, &v54, v32, &v53);
    dword_1403CDA60 = v54;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v16, 3u, &v37, v33, &v53);
    dword_1403CDA64 = v37;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v17, 3u, &v38, v34, &v53);
    dword_1403CDA68 = v38;
    v6 = PopFilterCapabilities(&PopCapabilities, v50);
    if ( v6 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v50);
    byte_1403CDA80 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v18, 3u, &v39, v35, &v53);
    dword_1403CDA84 = v39;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v19, 3u, &v40, v36, &v53);
    dword_1403CDA88 = v40;
    _InterlockedExchange64(&qword_1403CDAC0, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_1403CDB00) )
      v6 = PopFxResetSocSubsystemAccounting((unsigned int)dword_1403CDB00);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_1403CDA70 = PopAggressiveStandbyEnabledActions;
    dword_1403CDA74 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    PopDiagTraceCsEnterReason();
    PopSetConnectedStandbyMarker();
    LOBYTE(v20) = 1;
    PopStatsNotifyPowerRequestCsState(v21, v20);
    v42 = 0LL;
    PopDirectedDripsNotify(4LL, &v42);
    PopDiagIdleWakeAccountingStart();
  }
  PopReleasePolicyLock(v23, v22, v24);
  return (unsigned int)v6;
}
