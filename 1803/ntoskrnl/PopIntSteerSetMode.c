/*
 * XREFs of PopIntSteerSetMode @ 0x14017F220
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14014CB34 (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v3; // eax

  if ( a3 != 4 )
    return 3221225485LL;
  if ( *a2 == 4 )
  {
    v3 = 1;
  }
  else
  {
    PpmIntSteerMode = *a2;
    v3 = 0;
  }
  PpmIntSteerDisabled = v3;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckReInit();
  PpmCheckCustomRun(4);
  return 0LL;
}
