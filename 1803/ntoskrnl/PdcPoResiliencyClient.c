/*
 * XREFs of PdcPoResiliencyClient @ 0x140764CE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x1400D3EE0 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140272B38 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxPauseDeviceAccounting @ 0x14027593C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140276378 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14027A65C (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14027A6C4 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x14027EAA4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsNotify @ 0x140761720 (PopDirectedDripsNotify.c)
 *     PopCancelDripsWatchdog @ 0x14076DCD4 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x14076E758 (PopSetDripsWatchdog.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, unsigned __int8 a2)
{
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  LARGE_INTEGER Time; // rax
  char v8; // si
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

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
        goto LABEL_17;
      }
      v6 = 0;
      if ( !PopDeepIoCoalescingEnabled )
        goto LABEL_17;
    }
    else
    {
      v6 = 0;
      if ( PopDeepIoCoalescingEnabled )
        goto LABEL_17;
    }
    PopPdcIoCoalescing = a2;
    PopCheckResiliencyScenarios();
    goto LABEL_17;
  }
  v10 = a2;
  PopPdcIdleResiliency = a2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v10);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(a2, &qword_1403CDA28, &qword_1403CDA30);
  Time = PpmQueryTime();
  v6 = 0;
  if ( a2 )
  {
    qword_1403CD9F8 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    v8 = 1;
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopSetDripsWatchdog();
  }
  else
  {
    qword_1403CDA00 += Time.QuadPart - qword_1403CD9F8;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxPauseDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(0);
    PopUpdateNonAttributedCpuTimeReference(1);
    PopCancelDripsWatchdog();
    v8 = 0;
  }
  PpmDisableHighPerfRequestDeferredExpiration(v8);
  v11 = a2;
  PopDirectedDripsNotify(3, (__int64)&v11);
LABEL_17:
  PopReleasePolicyLock();
  return v6;
}
