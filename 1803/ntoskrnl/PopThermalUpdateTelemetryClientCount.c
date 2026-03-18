/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1401719D0
 * Callers:
 *     PopThermalZoneAdd @ 0x140626F60 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x140627198 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14075E88C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14075EA38 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
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
