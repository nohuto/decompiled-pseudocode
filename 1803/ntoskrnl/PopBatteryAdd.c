/*
 * XREFs of PopBatteryAdd @ 0x140763890
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140764464 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x14076E904 (PopCadTriggerDriverLoad.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_1403AA270 == 1 )
  {
    PopAcquirePolicyLock();
    if ( byte_1403AAB7E != 1 )
    {
      byte_1403AAB7E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_1403AA278 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
