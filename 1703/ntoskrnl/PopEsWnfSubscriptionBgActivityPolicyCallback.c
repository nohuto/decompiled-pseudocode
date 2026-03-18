/*
 * XREFs of PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406D0150
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExQueryWnfStateData @ 0x140457810 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x140582B1C (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionBgActivityPolicyCallback(__int64 a1)
{
  char v1; // di
  int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, (__int64)&v5, (__int64)&v3, v4) >= 0 && v3 <= 2 )
  {
    v1 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    if ( PopEsBgActivityLimited )
    {
      if ( !v3 )
      {
        v1 = 1;
        PopEsBgActivityLimited = 0;
      }
    }
    else if ( v3 == 1 )
    {
      v1 = 1;
      PopEsBgActivityLimited = 1;
    }
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    if ( v1 )
      PopEsWorkItemSchedule(4);
  }
  return 0LL;
}
