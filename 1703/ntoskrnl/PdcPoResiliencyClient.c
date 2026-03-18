/*
 * XREFs of PdcPoResiliencyClient @ 0x1406CB3C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x140087060 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402286E4 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxPauseDeviceAccounting @ 0x14022B25C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14022BC4C (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14022F3F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14022F458 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 *     PopCancelDripsWatchdog @ 0x1406D4C44 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x1406D5530 (PopSetDripsWatchdog.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, unsigned __int8 a2)
{
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  LARGE_INTEGER Time; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  PopAcquirePolicyLock();
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v6 = -1073741811;
        goto LABEL_16;
      }
      v6 = 0;
      if ( !PopDeepIoCoalescingEnabled )
        goto LABEL_16;
    }
    else
    {
      v6 = 0;
      if ( PopDeepIoCoalescingEnabled )
        goto LABEL_16;
    }
    PopPdcIoCoalescing = a2;
    PopCheckResiliencyScenarios();
    goto LABEL_16;
  }
  v9 = a2;
  PopPdcIdleResiliency = a2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v9);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(a2, &qword_14036E1A8, &qword_14036E1B0);
  Time = PpmQueryTime();
  v6 = 0;
  if ( a2 )
  {
    qword_14036E178 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopSetDripsWatchdog();
  }
  else
  {
    qword_14036E180 += Time.QuadPart - qword_14036E178;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxPauseDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(0);
    PopUpdateNonAttributedCpuTimeReference(1);
    PopCancelDripsWatchdog();
  }
LABEL_16:
  PopReleasePolicyLock();
  return v6;
}
