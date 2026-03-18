/*
 * XREFs of CmpDelayDerefKCBWorker @ 0x1404A84A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14049BB4C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpArmDelayDerefKCBWorker @ 0x140574F50 (CmpArmDelayDerefKCBWorker.c)
 */

__int64 CmpDelayDerefKCBWorker()
{
  unsigned int v0; // ebp
  char v1; // r14
  _QWORD *v2; // rax
  __int64 v3; // rcx
  ULONG_PTR v4; // rdi
  unsigned __int8 v5; // bl
  signed __int32 v6; // eax
  __int64 v7; // rsi
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v13[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v14[48]; // [rsp+20h] [rbp-68h] BYREF

  v0 = 0;
  v1 = 0;
  CmpAttachToRegistryProcess(v14);
  CmpLockRegistry();
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  while ( 1 )
  {
    v2 = (_QWORD *)CmpDelayDerefKCBListHead;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      goto LABEL_15;
    if ( v0 >= CmpDelayDerefKCBLimit )
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
    _InterlockedOr(v13, 0);
    *((_BYTE *)v2 - 160) &= ~1u;
    v5 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended((__int64)&CmpDelayDerefKCBLock, v6);
    __writecr8(v5);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    v7 = *(_QWORD *)(v4 + 24);
    v8 = *(_BYTE *)(v7 + 2936);
    CmpDereferenceKeyControlBlock(v4);
    if ( v8 == 1 )
      CmpDoQueueLateUnloadWorker(v7);
    ++v0;
    v9 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0);
    v10 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
  }
  if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
  {
LABEL_15:
    CmpDelayDerefKCBWorkItemActive = 0;
    goto LABEL_16;
  }
  v1 = 1;
LABEL_16:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  CmpUnlockRegistry();
  if ( v1 )
    CmpArmDelayDerefKCBWorker();
  return KiUnstackDetachProcess((__int64)v14, 0LL);
}
