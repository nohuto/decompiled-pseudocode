/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140168740
 * Callers:
 *     PopThermalZoneAdd @ 0x1405D6970 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x1405D6C98 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406C69DC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406C6B88 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
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
