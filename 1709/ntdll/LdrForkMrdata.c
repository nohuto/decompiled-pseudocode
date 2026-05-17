/*
 * XREFs of LdrForkMrdata @ 0x1800D6BD8
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D78C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
  }
}
