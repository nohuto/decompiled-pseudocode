/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x140285CC0
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x140285A88 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExpTryUpgradeResource @ 0x140288A8C (ExpTryUpgradeResource.c)
 */

char __fastcall ExpTryConvertSharedToExclusiveLite(__int64 a1)
{
  __int64 CurrentThread; // rdi
  unsigned __int64 *v3; // rcx
  char v4; // al
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  char v7; // si
  unsigned int v8; // eax
  _QWORD *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v12; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 96);
  v12 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v3;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v4 = KiFastAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v3, &v12);
  }
  else
  {
    v4 = 0;
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v3, (__int64)&LockHandle);
    if ( v5 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v5, &v12);
      v4 = 1;
    }
  }
  if ( v4 )
  {
    _disable();
    __writecr8(v12);
  }
  v7 = ExpTryUpgradeResource(a1);
  if ( v7 )
  {
    if ( (CurrentThread & 3) != 0 )
      v8 = 0;
    else
      v8 = *(unsigned __int8 *)(CurrentThread + 649);
    v9 = ExpFindCurrentThread(v6, CurrentThread, (__int64)&LockHandle, 0, 0, v8);
    if ( v9 != (_QWORD *)(a1 + 48) )
    {
      *(_OWORD *)(a1 + 48) = *(_OWORD *)v9;
      *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
      *v9 = 0LL;
      v9[1] = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  return v7;
}
