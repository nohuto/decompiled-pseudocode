/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140243DD4
 * Callers:
 *     PopAssociateThermalRequest @ 0x1406F6D24 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406F70BC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406F7268 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneAdd @ 0x1407006D0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[1] = -1LL;
      v2[0] = 0LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
