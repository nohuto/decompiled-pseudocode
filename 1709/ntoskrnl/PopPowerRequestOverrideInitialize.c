/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x1405F2540
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404DF408 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400AFF9C (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 *i; // rbx

  PopAcquirePowerRequestPushLock(0);
  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
    PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
