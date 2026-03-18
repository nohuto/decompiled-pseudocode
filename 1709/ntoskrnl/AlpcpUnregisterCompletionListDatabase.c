/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x1406DE134
 * Callers:
 *     AlpcpFreeCompletionList @ 0x1406DD928 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  --dword_14036A1A8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  return KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
