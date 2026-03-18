/*
 * XREFs of ExpRemoveHandleTable @ 0x1405477A8
 * Callers:
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     ObKillProcess @ 0x1404F8400 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x140547520 (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140747D60 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
  v5 = (__int64 *)(a1 + 24);
  v6 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 || (v7 = (__int64 *)v5[1], (__int64 *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock, v6, v3, v4);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v5[1] = (__int64)v5;
  *v5 = (__int64)v5;
  return result;
}
