/*
 * XREFs of PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x14076C4B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExQueryWnfStateData @ 0x14057EA10 (ExQueryWnfStateData.c)
 *     PopEsQueueStateEvaluation @ 0x140610D08 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsWnfSubscriptionBgActivityPolicyCallback(__int64 a1)
{
  char v1; // di
  int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, &v3, v4) >= 0 && v3 <= 2 )
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
      PopEsQueueStateEvaluation(0);
  }
  return 0LL;
}
