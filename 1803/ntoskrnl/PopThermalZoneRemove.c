/*
 * XREFs of PopThermalZoneRemove @ 0x140763260
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14014DB20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401719D0 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x140278DDC (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x14027D8B0 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x14027DD94 (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x14027E464 (PopTraceZoneCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1405EA674 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x140763400 (PopUpdateOverThrottledCount.c)
 */

void __fastcall PopThermalZoneRemove(__int64 a1)
{
  void *v2; // rcx

  *(_BYTE *)(a1 + 66) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 448), Executive, 0, 0, 0LL);
  PopThermalUpdatePassiveTimeTracking(a1 + 504, *(_BYTE *)(a1 + 80));
  PopTraceThermalZonePassiveHistogram(a1);
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), 0LL);
    PopAcquirePolicyLock();
    --dword_1403A9CA4;
    PopTraceZoneCr3Mitigated(dword_1403A9CA8, a1);
    if ( !dword_1403A9CA4 )
    {
      PopTraceCr3Mitigated();
      if ( HIBYTE(PopSystemThermalInfo) == 1 )
      {
        PopThermalStandbyNotify(0);
        HIBYTE(PopSystemThermalInfo) = 0;
      }
    }
    PopReleasePolicyLock();
  }
  if ( *(_BYTE *)(a1 + 73) )
    PopUpdateOverThrottledCount(a1);
  KeDisableTimer2(a1 + 296, 1, 1, 0LL);
  *(_BYTE *)(a1 + 65) |= 0x80u;
  if ( !--PopThermalZoneCount )
  {
    PopAcquirePolicyLock();
    if ( BYTE13(PopCapabilities) )
    {
      BYTE13(PopCapabilities) = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(0);
  v2 = *(void **)(a1 + 864);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
