/*
 * XREFs of PdcPoResiliencyClient @ 0x1406FF380
 * Callers:
 *     <none>
 * Callees:
 *     PpmQueryTime @ 0x140092B40 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x14023B644 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxPauseDeviceAccounting @ 0x14023E5D8 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14023F008 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402435E8 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140243650 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140248A1C (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     PopCancelDripsWatchdog @ 0x14070A52C (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x14070B03C (PopSetDripsWatchdog.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, unsigned __int8 a2)
{
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  LARGE_INTEGER Time; // rax
  char v8; // cl
  int v10; // [rsp+30h] [rbp+8h] BYREF

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
  PopAccumulateNonActivatedCpuTime(a2, &qword_140389C28, &qword_140389C30);
  Time = PpmQueryTime();
  v6 = 0;
  if ( a2 )
  {
    qword_140389BF8 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopSetDripsWatchdog();
    v8 = 1;
  }
  else
  {
    qword_140389C00 += Time.QuadPart - qword_140389BF8;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxPauseDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(0);
    PopUpdateNonAttributedCpuTimeReference(1);
    PopCancelDripsWatchdog();
    v8 = 0;
  }
  PpmDisableHighPerfRequestDeferredExpiration(v8);
LABEL_17:
  PopReleasePolicyLock();
  return v6;
}
