/*
 * XREFs of PopPowerRequestPowerSourceSettingCallback @ 0x1405D60C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableSystemToExecutionRequiredPowerRequests @ 0x1406C590C (PopEnableSystemToExecutionRequiredPowerRequests.c)
 */

__int64 __fastcall PopPowerRequestPowerSourceSettingCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  v5 = -1073741811;
  PopAcquirePowerRequestPushLock(1);
  if ( a3 == 4 && a2 && byte_14034BC94 )
  {
    PopPowerRequestSyncedPowerSource = *a2;
    if ( PopPowerRequestSyncedPowerSource )
      v6 = 0LL;
    else
      LOBYTE(v6) = 1;
    PopEnableSystemToExecutionRequiredPowerRequests(v6);
    v5 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return v5;
}
