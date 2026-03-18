/*
 * XREFs of PopThermalZoneRemove @ 0x140700820
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     PopThermalStandbyNotify @ 0x140243B00 (PopThermalStandbyNotify.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140243DD4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalStandbyState @ 0x140247110 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1402479E4 (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1402481F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x14024836C (PopTraceZoneCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14070003C (PopThermalUpdatePassiveTimeTracking.c)
 *     PopUpdateOverThrottledCount @ 0x1407009C0 (PopUpdateOverThrottledCount.c)
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
    --dword_140365204;
    PopTraceZoneCr3Mitigated(dword_140365208, a1);
    if ( !dword_140365204 )
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
