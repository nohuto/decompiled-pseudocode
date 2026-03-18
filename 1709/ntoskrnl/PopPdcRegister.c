/*
 * XREFs of PopPdcRegister @ 0x1405EC590
 * Callers:
 *     PopPdcInvocation @ 0x1405EC540 (PopPdcInvocation.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPdcRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock();
    PoPdcCallbacks = *(_OWORD *)(a1 + 8);
    xmmword_14038D4C0 = *(_OWORD *)(a1 + 24);
    xmmword_14038D4D0 = *(_OWORD *)(a1 + 40);
    *(_OWORD *)&xmmword_14038D4E0 = *(_OWORD *)(a1 + 56);
    *(_OWORD *)&xmmword_14038D4F0 = *(_OWORD *)(a1 + 72);
    xmmword_14038D500 = *(_OWORD *)(a1 + 88);
    *(_OWORD *)&xmmword_14038D510 = *(_OWORD *)(a1 + 104);
    qword_14038D520 = *(_QWORD *)(a1 + 120);
    *a2 = PdcPoResiliencyClient;
    a2[1] = PdcPoLowPower;
    a2[2] = PdcPoSetPowerAction;
    a2[3] = PdcPoReportButton;
    a2[4] = PdcPoReportLidState;
    a2[5] = PdcPoRecordButton;
    a2[6] = PdcPoVerifyActionPolicy;
    a2[7] = PdcPoVerifyPowerState;
    a2[8] = PopBlockSessionSwitch;
    a2[9] = PopControlMonitor;
    a2[10] = PopNotifyCsStateExited;
    a2[11] = PdcPoCurrentPdcPhase;
    a2[12] = PdcPoIdleScanEnabled;
    a2[13] = PdcPoPerfOverride;
    a2[14] = PdcPoCsEnterExitReason;
    a2[15] = PdcPoSetPowerSettingValue;
    a2[16] = PdcPoPpmRegisterProfiles;
    a2[17] = PdcPoPpmApplyProfile;
    a2[18] = PdcPoPpmResetProfile;
    a2[19] = PdcPoNetworkResiliency;
    a2[20] = PdcPoQueryExpectedStandbyTime;
    a2[21] = PpmQueryDripsResidency;
    a2[22] = PdcPoGetAggressiveStandbyActions;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
