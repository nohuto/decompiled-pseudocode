/*
 * XREFs of PopThermalZoneRemove @ 0x1406CBDD0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14013C76C (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140168740 (PopThermalUpdateTelemetryClientCount.c)
 *     PopThermalStandbyNotify @ 0x14022F5D4 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStandbyState @ 0x1402322E4 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1402327AC (PopTraceCr3Mitigated.c)
 *     PopTraceZoneCr3Mitigated @ 0x140232E78 (PopTraceZoneCr3Mitigated.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140578F68 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopUpdateOverThrottledCount @ 0x1406CBF70 (PopUpdateOverThrottledCount.c)
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
    --dword_14034AB24;
    PopTraceZoneCr3Mitigated(dword_14034AB28, a1);
    if ( !dword_14034AB24 )
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
