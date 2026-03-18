/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x14076B854
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x14075EEA8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x14076B8C4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x14076B988 (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
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
