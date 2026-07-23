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
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-A9h]
  __int64 v29; // [rsp+28h] [rbp-A9h]
  __int64 v30; // [rsp+28h] [rbp-A9h]
  __int64 v31; // [rsp+28h] [rbp-A9h]
  __int64 v32; // [rsp+28h] [rbp-A9h]
  __int64 v33; // [rsp+28h] [rbp-A9h]
  int v34; // [rsp+38h] [rbp-99h] BYREF
  int v35; // [rsp+3Ch] [rbp-95h] BYREF
  int v36; // [rsp+40h] [rbp-91h] BYREF
  int v37; // [rsp+44h] [rbp-8Dh] BYREF
  __int64 v38; // [rsp+48h] [rbp-89h] BYREF
  __int64 v39; // [rsp+50h] [rbp-81h] BYREF
  __int64 v40; // [rsp+58h] [rbp-79h] BYREF
  __int64 v41; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v42[3]; // [rsp+68h] [rbp-69h] BYREF
  int v43; // [rsp+80h] [rbp-51h]
  _BYTE v44[8]; // [rsp+88h] [rbp-49h] BYREF
  int v45; // [rsp+90h] [rbp-41h]
  int v46; // [rsp+94h] [rbp-3Dh]
  _BYTE v47[128]; // [rsp+A8h] [rbp-29h] BYREF
  int v48; // [rsp+138h] [rbp+67h] BYREF
  int v49; // [rsp+13Ch] [rbp+6Bh]
  unsigned int v50; // [rsp+140h] [rbp+6Fh] BYREF
  int v51; // [rsp+150h] [rbp+7Fh] BYREF

  LOBYTE(v50) = a2;
  v49 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  IsHibernateSupported = 0;
  v48 = 0;
  v6 = 0;
  v37 = 0;
  v36 = 0;
  v34 = 0;
  v35 = 0;
  v51 = 0;
  PopBatteryUpdateCurrentState();
  PopAcquirePolicyLock(v8);
  PopCurrentPowerState(v44);
  v9 = MEMORY[0xFFFFF78000000008];
  v10 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v10 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v10 )
  {
    PopDiagIdleWakeAccountingStop();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v39 = a3;
    PopDirectedDripsNotify(5LL, &v39);
    PpmIdleCaptureCsVetoAccounting(v22, dword_1403CDB00);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v23, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v24) = v3;
    PopDiagTraceCsExitReason(a3, v24);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_1403CDB00) )
    {
      PopFxLogSocSubsystemBlockingTimes(v25, (unsigned int)dword_1403CDB00);
      v6 = PopFxLogSocSubsystemMetadata(v26, (unsigned int)dword_1403CDB00);
    }
    PopStatsNotifyPowerRequestCsState(v25, 0LL);
    PopClearConnectedStandbyMarker();
    qword_1403CD9C8 = 0LL;
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v42);
    PpmGetPlatformSelectionVetoCounts(dword_1403CDB00, &v40, &v41);
    PopCsConsumption = v46;
    qword_1403CD9D0 = v42[1];
    dword_1403CD9E0 = v43;
    qword_1403CD9D8 = v42[0];
    qword_1403CDA48 = v42[2];
    qword_1403CDA50 = v40;
    qword_1403CDA58 = v41;
    dword_1403CDA7C = v45;
    qword_1403CD9C8 = v9;
    qword_1403CDA00 = 0LL;
    qword_1403CD9E8 = 0LL;
    qword_1403CD9F0 = 0LL;
    qword_1403CDA10 = 0LL;
    qword_1403CDA20 = 0LL;
    qword_1403CDA30 = 0LL;
    qword_1403CDA40 = 0LL;
    byte_1403CDA78 = 0;
    PopNetIsDisconnectStandbyActive(&v38);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_1403CDA6C = (dword_1403AAA2C == 0) | byte_1403CDA6C & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v12 = (unsigned int)v38;
    LOBYTE(v13) = byte_1403CDA6D ^ (byte_1403CDA6D ^ IsCompliantNicPresent) & 1;
    if ( ((((_DWORD)v38 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v38 == 2)
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
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3u, &v48, v28, &v50);
    byte_1403CDA6D ^= (byte_1403CDA6D ^ (4 * v48)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v15, 3u, &v51, v29, &v50);
    dword_1403CDA60 = v51;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v16, 3u, &v34, v30, &v50);
    dword_1403CDA64 = v34;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v17, 3u, &v35, v31, &v50);
    dword_1403CDA68 = v35;
    v6 = PopFilterCapabilities(&PopCapabilities, v47);
    if ( v6 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v47);
    byte_1403CDA80 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v18, 3u, &v36, v32, &v50);
    dword_1403CDA84 = v36;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v19, 3u, &v37, v33, &v50);
    dword_1403CDA88 = v37;
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
    v39 = 0LL;
    PopDirectedDripsNotify(4LL, &v39);
    PopDiagIdleWakeAccountingStart();
  }
  PopReleasePolicyLock();
  return (unsigned int)v6;
}
