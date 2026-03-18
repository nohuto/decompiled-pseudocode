/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x1406D01E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExQueryWnfStateData @ 0x140457810 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x140582B1C (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 4;
  if ( (int)ExQueryWnfStateData(a1, (__int64)&v5, (__int64)v4, &v3) >= 0 )
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
