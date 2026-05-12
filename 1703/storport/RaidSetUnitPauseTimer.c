/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C000D344
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C000CC80 (RaidAdapterDeferredRoutine.c)
 *     RaidStallDeviceQueue @ 0x1C000F934 (RaidStallDeviceQueue.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000D1B0 (RaidResumeUnitQueue.c)
 */

void __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  if ( KeSetCoalescableTimer((PKTIMER)(a1 + 792), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 856)) )
  {
    if ( (unsigned int)RaidResumeUnitQueue(a1) )
      RaidRestartIoQueue(a1);
  }
}
