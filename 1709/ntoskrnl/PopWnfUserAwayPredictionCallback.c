/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x1406F7C90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x140597570 (ExQueryWnfStateData.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x140707C88 (PopNetUpdateConnectivityRefreshTime.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14070A4AC (PopUpdateSmartUserPresencePredictions.c)
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
