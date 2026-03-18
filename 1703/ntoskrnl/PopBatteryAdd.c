/*
 * XREFs of PopBatteryAdd @ 0x1406CA1F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x1406CAD44 (PopBatteryWaitTag.c)
 *     PopCadTriggerDriverLoad @ 0x1406D5724 (PopCadTriggerDriverLoad.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_14034B390 == 1 )
  {
    PopAcquirePolicyLock();
    if ( byte_14034BC9E != 1 )
    {
      byte_14034BC9E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
    PopCadTriggerDriverLoad(1LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_14034B398 = 1;
  PopBatteryWaitTag(a1);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
