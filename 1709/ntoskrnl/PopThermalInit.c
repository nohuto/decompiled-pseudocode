/*
 * XREFs of PopThermalInit @ 0x140851B9C
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1405E53BC (PopInitializeTimer.c)
 */

__int64 PopThermalInit()
{
  unsigned int v0; // ebx
  _BYTE *v1; // rcx
  __int64 result; // rax
  unsigned int v3; // kr00_4

  LOBYTE(PopSystemThermalInfo) = 1;
  v0 = 0;
  qword_1403655E8 = 0LL;
  PopThermalLock = 0LL;
  qword_140366418 = 0LL;
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
