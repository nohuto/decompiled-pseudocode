/*
 * XREFs of PopExecutionRequiredCallback @ 0x1404C7570
 * Callers:
 *     <none>
 * Callees:
 *     PopSystemRequiredPowerRequest @ 0x140070204 (PopSystemRequiredPowerRequest.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopExecutionRequiredPowerRequest @ 0x1404C75C8 (PopExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(char a1, unsigned int a2)
{
  __int64 v4; // rcx

  PopAcquirePowerRequestPushLock(1);
  LOBYTE(v4) = a1;
  PopExecutionRequiredPowerRequest(v4, a2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( !byte_14034BC94 )
    PopSystemRequiredPowerRequest(a1, 2);
  return 0LL;
}
