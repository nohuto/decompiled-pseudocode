/*
 * XREFs of ExpRemoveHandleTable @ 0x140432F5C
 * Callers:
 *     RtlDestroyAtomTable @ 0x140431100 (RtlDestroyAtomTable.c)
 *     ObInitProcess @ 0x14049CA68 (ObInitProcess.c)
 *     ObKillProcess @ 0x1404EDAA0 (ObKillProcess.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406B1460 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
  v3 = *(_QWORD **)(a1 + 32);
  v4 = (_QWORD *)(a1 + 24);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v3 != v4 )
    __fastfail(3u);
  *v3 = v5;
  *(_QWORD *)(v5 + 8) = v3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v4[1] = v4;
  *v4 = v4;
  return result;
}
