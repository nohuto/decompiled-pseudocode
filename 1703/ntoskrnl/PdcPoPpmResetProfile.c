/*
 * XREFs of PdcPoPpmResetProfile @ 0x1406CB240
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x1405CD9A8 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x1406D5B18 (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  LONG result; // eax

  result = PpmProfileStatus;
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1);
      return PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      return PpmDisableProfile();
    }
  }
  return result;
}
