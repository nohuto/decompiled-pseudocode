/*
 * XREFs of ExCreateHandleTable @ 0x14045DA4C
 * Callers:
 *     RtlpInitializeHandleTableForAtomTable @ 0x14045B0D8 (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x140506C10 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x14053923C (ObInitProcess.c)
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406DD040 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140855D10 (PspInitializeJobStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x14045FF04 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  char v8; // bl
  _QWORD *v9; // rax

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
      v6 = (_QWORD *)qword_1407F4020;
      v7 = (_QWORD *)(v5 + 24);
      if ( *(__int64 **)qword_1407F4020 != &HandleTableListHead )
        __fastfail(3u);
      *v7 = &HandleTableListHead;
      *(_QWORD *)(v5 + 32) = v6;
      *v6 = v7;
      qword_1407F4020 = v5 + 24;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v9 = (_QWORD *)(result + 24);
      v9[1] = v9;
      *v9 = v9;
    }
    return v5;
  }
  return result;
}
