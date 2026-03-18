/*
 * XREFs of EmProviderDeregisterEntry @ 0x140683F00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x1401E29F0 (EmpProviderDeregisterEntry.c)
 */

__int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
