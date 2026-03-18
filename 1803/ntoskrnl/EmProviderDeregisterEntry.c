/*
 * XREFs of EmProviderDeregisterEntry @ 0x140713AB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EmpProviderDeregisterEntry @ 0x140224230 (EmpProviderDeregisterEntry.c)
 */

char __fastcall EmProviderDeregisterEntry(char *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, v2, v3, v4);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
