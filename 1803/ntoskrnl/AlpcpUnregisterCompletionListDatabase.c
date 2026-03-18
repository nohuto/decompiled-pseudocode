/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x140748C68
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140748648 (AlpcpFreeCompletionList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpUnregisterCompletionListDatabase(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 *v5; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v4 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 *)a1[1], (__int64 *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  --dword_1403AD248;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase, v4, v2, v3);
  return KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
