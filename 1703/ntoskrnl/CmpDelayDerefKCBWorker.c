/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x140490BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14044CCA8 (CmpArmDelayDerefKCBWorker.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14048D310 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpDelayDerefKCBWorker(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 *v2; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int8 v5; // bl
  signed __int32 v6; // eax
  __int64 v7; // rsi
  char v8; // bl
  PRTL_BALANCED_NODE v9; // rax
  PRTL_BALANCED_NODE v10; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  CmpLockRegistry(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v2 = (__int64 *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      goto LABEL_15;
    if ( v1 >= CmpDelayDerefKCBLimit )
      break;
    v3 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v3 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v4 = (ULONG_PTR)(v2 - 27);
    *(_QWORD *)(v3 + 8) = &CmpDelayDerefKCBListHead;
    v2[1] = (__int64)v2;
    *v2 = (__int64)v2;
    _InterlockedOr(v13, 0);
    *((_BYTE *)v2 - 160) &= ~1u;
    v5 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v6);
    __writecr8(v5);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    v7 = *(_QWORD *)(v4 + 24);
    v8 = *(_BYTE *)(v7 + 4112);
    CmpDereferenceKeyControlBlock(v4);
    if ( v8 == 1 )
      CmpDoQueueLateUnloadWorker(v7);
    ++v1;
    v9 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0);
    v10 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, (__int64)v9);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
  }
  if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
LABEL_15:
    CmpDelayDerefKCBWorkItemActive = 0;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  result = CmpUnlockRegistry();
  if ( v2 != &CmpDelayDerefKCBListHead )
    return CmpArmDelayDerefKCBWorker();
  return result;
}
