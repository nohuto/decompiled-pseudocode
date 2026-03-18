/*
 * XREFs of PopThermalInit @ 0x1408C2A44
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x14064C21C (PopInitializeTimer.c)
 */

__int64 PopThermalInit()
{
  unsigned int v0; // ebx
  _BYTE *v1; // rcx
  __int64 result; // rax
  unsigned int v3; // kr00_4

  LOBYTE(PopSystemThermalInfo) = 1;
  v0 = 0;
  qword_1403A9E68 = 0LL;
  PopThermalLock = 0LL;
  qword_1403A9CE8 = 0LL;
  PopThermalTelemetryLock = 0LL;
  PopInitializeTimer(
    (__int64)&PopThermalTelemetryTimer,
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  if ( PopThermalPollingMode )
    PopThermalPollingWakesAllowed = 1;
  v1 = PopThermalTrackingThresholds;
  do
  {
    v3 = v0;
    result = -858993459 * v0;
    v0 += 100;
    *v1++ = v3 / 0x14;
  }
  while ( v0 < 0x834 );
  return result;
}
