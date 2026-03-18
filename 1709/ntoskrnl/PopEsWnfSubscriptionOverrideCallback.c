/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x140708590
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     ExQueryWnfStateData @ 0x140597570 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x1405C9C98 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, v4, &v3) >= 0 )
  {
    v1 = v4[0];
    if ( v4[0] <= 2 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PopEsMode = v1;
      PopReleaseRwLock((ULONG_PTR)&PopEsLock);
      PopEsWorkItemSchedule(2);
    }
  }
  return 0LL;
}
