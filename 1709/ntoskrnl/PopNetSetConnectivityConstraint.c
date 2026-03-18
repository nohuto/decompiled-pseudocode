/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x1405B8354
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x1406F76AC (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x140707A84 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140707B50 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140831B60 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
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
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_1403647C8, DelayedWorkQueue);
  if ( PopNetRefreshStartTime )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140364888, DelayedWorkQueue);
  return v2;
}
