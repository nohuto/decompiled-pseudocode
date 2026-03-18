/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x14075F2E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x14057EA10 (ExQueryWnfStateData.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x14076BB08 (PopNetUpdateConnectivityRefreshTime.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14076C37C (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopWnfUserAwayPredictionCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, &v5, &v4, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 >= 8 )
    {
      PopAcquirePolicyLock();
      PopUpdateSmartUserPresencePredictions(v4, 3LL);
      PopNetUpdateConnectivityRefreshTime(v4);
      PopReleasePolicyLock();
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
