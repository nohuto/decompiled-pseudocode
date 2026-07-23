/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x1404781A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14047BEE8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1405851A8 (CmpArmDelayDerefKCBWorker.c)
 */

__int64 CmpDelayDerefKCBWorker()
{
  char v0; // r14
  unsigned int v1; // ebp
  _QWORD *v2; // rax
  __int64 v3; // rcx
  ULONG_PTR v4; // rdi
  unsigned __int8 v5; // bl
  signed __int32 v6; // eax
  __int64 v7; // rsi
  char v8; // bl
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rcx
  __int64 result; // rax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  CmpLockRegistry();
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v2 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      goto LABEL_15;
    if ( v1 >= CmpDelayDerefKCBLimit )
      break;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || (v3 = *(_QWORD *)CmpDelayDerefKCBListHead,
          *(_QWORD *)(*(_QWORD *)CmpDelayDerefKCBListHead + 8LL) != CmpDelayDerefKCBListHead) )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v4 = (ULONG_PTR)(v2 - 27);
    *(_QWORD *)(v3 + 8) = &CmpDelayDerefKCBListHead;
    v2[1] = v2;
    *v2 = v2;
    _InterlockedOr(v14, 0);
    *((_BYTE *)v2 - 160) &= ~1u;
    v5 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended((__int64)&CmpDelayDerefKCBLock, v6);
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
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v9);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
  }
  if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
  {
LABEL_15:
    CmpDelayDerefKCBWorkItemActive = 0;
    goto LABEL_16;
  }
  v0 = 1;
LABEL_16:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  result = CmpUnlockRegistry(v12);
  if ( v0 )
    return CmpArmDelayDerefKCBWorker();
  return result;
}
