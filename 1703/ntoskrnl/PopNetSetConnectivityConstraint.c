/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x1405A8364
 * Callers:
 *     PopEvaluateAggressiveStandbyActions @ 0x1406C6F18 (PopEvaluateAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x1406CFE14 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1406CFF38 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140155A70 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
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
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_14034A168, DelayedWorkQueue);
  return v2;
}
