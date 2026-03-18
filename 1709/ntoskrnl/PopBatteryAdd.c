/*
 * XREFs of PopBatteryAdd @ 0x1406FE010
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1406FEC60 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x14070B334 (PopCadTriggerDriverLoad.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140365910 == 1 )
  {
    PopAcquirePolicyLock();
    if ( byte_14036631E != 1 )
    {
      byte_14036631E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140365918 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
