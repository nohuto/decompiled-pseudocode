/*
 * XREFs of ExCreateHandleTable @ 0x14042B7E4
 * Callers:
 *     RtlpInitializeHandleTableForAtomTable @ 0x14042B70C (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x14042B980 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x14049CA68 (ObInitProcess.c)
 *     AlpcpInitSystem @ 0x1405D0188 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406B1460 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140824944 (PspInitializeJobStructures.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v5 = result;
  if ( result )
  {
    if ( v3 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
      v6 = (_QWORD *)qword_1407ACF98;
      v7 = (_QWORD *)(v5 + 24);
      if ( *(__int64 **)qword_1407ACF98 != &HandleTableListHead )
        __fastfail(3u);
      *v7 = &HandleTableListHead;
      *(_QWORD *)(v5 + 32) = v6;
      *v6 = v7;
      qword_1407ACF98 = v5 + 24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v8 = (_QWORD *)(result + 24);
      v8[1] = v8;
      *v8 = v8;
    }
    return v5;
  }
  return result;
}
