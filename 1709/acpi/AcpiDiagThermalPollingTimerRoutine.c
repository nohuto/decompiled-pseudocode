/*
 * XREFs of AcpiDiagThermalPollingTimerRoutine @ 0x1C0040C10
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x1C0040B64 (AcpiDiagRequeueThermalPollingTimer.c)
 *     ACPIThermalRereadTemperature @ 0x1C0058EF0 (ACPIThermalRereadTemperature.c)
 */

void AcpiDiagThermalPollingTimerRoutine()
{
  KIRQL v0; // al
  __int64 *v1; // rbx
  KIRQL v2; // di

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v1 = (__int64 *)AcpiThermalZoneList;
  v2 = v0;
  while ( v1 != &AcpiThermalZoneList )
  {
    ACPIThermalRereadTemperature(v1 - 26);
    v1 = (__int64 *)*v1;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  AcpiDiagRequeueThermalPollingTimer();
}
