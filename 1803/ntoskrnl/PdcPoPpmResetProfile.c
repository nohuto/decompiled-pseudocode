/*
 * XREFs of PdcPoPpmResetProfile @ 0x140764B90
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x14064A9B4 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14076ED30 (PpmDisableProfile.c)
 */

void __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  __int64 v3; // rdx

  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1, v3);
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      PpmDisableProfile();
    }
  }
}
