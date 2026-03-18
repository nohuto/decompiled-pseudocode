/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x1406278B4
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x14075EEA8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x14076B8C4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x14076B988 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x1408A7F78 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // dl
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_1403A8028, DelayedWorkQueue);
  if ( PopNetRefreshStartTime )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_1403A8108, DelayedWorkQueue);
  return v2;
}
