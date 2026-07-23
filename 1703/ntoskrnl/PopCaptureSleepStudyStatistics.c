/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1402301D4
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x1406CC0BC (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140072BB0 (PopGetPowerSettingValue.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x140227CF4 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140227D34 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x140228D0C (PpmIdleStartCsVetoAccounting.c)
 *     PpmQueryPlatformStateResidency @ 0x140229004 (PpmQueryPlatformStateResidency.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140229208 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402294AC (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14022BFEC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14022C150 (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14022FD3C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402300FC (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopBatteryUpdateCurrentState @ 0x14057D4B4 (PopBatteryUpdateCurrentState.c)
 *     PopClearConnectedStandbyMarker @ 0x1406C53BC (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1406C567C (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1406C7CDC (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406C7E5C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1406C8244 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1406C89CC (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x1406CC7FC (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1406CC940 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1406CCB2C (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x1406CFD64 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x1406CFD8C (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x1406CFEBC (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1406CFED0 (PopNetIsDisconnectStandbyActive.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140718634 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1407186BC (ExStopRecordingIRTimerExpiries.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(__int64 a1, char a2, __int64 a3)
{
  char v3; // r14
  _QWORD *v4; // rsi
  unsigned int v5; // ebx
  int v7; // ecx
  int v8; // r15d
  __int64 v9; // r12
  __int64 PlatformStateResidency; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+20h] [rbp-50h]
  int v25; // [rsp+30h] [rbp-40h] BYREF
  int v26; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+B0h] [rbp+40h] BYREF
  int v33; // [rsp+B4h] [rbp+44h]
  unsigned int v34; // [rsp+B8h] [rbp+48h] BYREF
  int v35; // [rsp+C8h] [rbp+58h] BYREF

  LOBYTE(v34) = a2;
  v33 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  v5 = 0;
  v32 = 0;
  v25 = 0;
  v26 = 0;
  v35 = 0;
  PopBatteryUpdateCurrentState();
  PopAcquirePolicyLock(v7);
  v8 = DWORD1(xmmword_14034B3C0);
  v9 = MEMORY[0xFFFFF78000000008];
  PlatformStateResidency = PpmQueryPlatformStateResidency(dword_14036E240);
  v11 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v11 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v11 )
  {
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    PpmIdleCaptureCsVetoAccounting(v16, dword_14036E240);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(10LL * *(_QWORD *)(a3 + 16), 10LL * *(_QWORD *)(a3 + 24));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v17) = v3;
    PopDiagTraceCsExitReason(a3, v17);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_14036E240) )
    {
      PopFxLogSocSubsystemBlockingTimes(v18, (unsigned int)dword_14036E240);
      v5 = PopFxLogSocSubsystemMetadata(v19, (unsigned int)dword_14036E240);
    }
    PopClearConnectedStandbyMarker();
    qword_14036E148 = 0LL;
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v30);
    PpmGetPlatformSelectionVetoCounts(dword_14036E240, &v28, &v29);
    qword_14036E150 = v30[1];
    dword_14036E160 = v31;
    qword_14036E158 = v30[0];
    qword_14036E1D0 = v28;
    qword_14036E1D8 = v29;
    qword_14036E148 = v9;
    PopCsConsumption = v8;
    qword_14036E180 = 0LL;
    qword_14036E168 = 0LL;
    qword_14036E170 = 0LL;
    qword_14036E190 = 0LL;
    qword_14036E1A0 = 0LL;
    qword_14036E1B0 = 0LL;
    qword_14036E1C0 = 0LL;
    qword_14036E1C8 = PlatformStateResidency;
    byte_14036E1F8 = 0;
    PopNetIsDisconnectStandbyActive(&v27);
    byte_14036E1EC ^= (byte_14036E1EC ^ (dword_14034BB2C == 0)) & 1;
    LOBYTE(v12) = (byte_14036E1ED ^ PopNetIsCompliantNicPresent()) & 1 ^ byte_14036E1ED;
    if ( (((v27 - 1) & 0xFFFFFFFC) != 0 || v27 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy(v27, v12)
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      LOBYTE(v12) = v12 & 0xFD;
    }
    else
    {
      LOBYTE(v12) = v12 | 2;
    }
    byte_14036E1ED = v12;
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3u, &v32, v21, &v34);
    byte_14036E1ED ^= (byte_14036E1ED ^ (4 * v32)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v13, 3u, &v35, v22, &v34);
    dword_14036E1E0 = v35;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v14, 3u, &v25, v23, &v34);
    dword_14036E1E4 = v25;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v15, 3u, &v26, v24, &v34);
    dword_14036E1E8 = v26;
    _InterlockedExchange64(&qword_14036E200, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_14036E240) )
      v5 = PopFxResetSocSubsystemAccounting((unsigned int)dword_14036E240);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_14036E1F0 = PopAggressiveStandbyEnabledActions;
    dword_14036E1F4 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    PopDiagTraceCsEnterReason();
    PopSetConnectedStandbyMarker();
  }
  PopReleasePolicyLock();
  return v5;
}
