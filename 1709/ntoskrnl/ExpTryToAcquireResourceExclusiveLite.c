/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x140285DBC
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x140285AD0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x140080760 (ExpTryAcquireResourceExclusive.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14027E5C8 (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v2; // esi
  int v3; // r15d
  int v4; // ebp
  unsigned __int64 *v6; // rcx
  int v7; // r14d
  char v8; // al
  _QWORD *v9; // rdx
  char v10; // di
  int v11; // ecx
  unsigned int v12; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v15; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0;
  v4 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x63E0u);
  v6 = (unsigned __int64 *)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  v7 = 65537;
  v15 = 2;
  LockHandle.LockQueue.Lock = v6;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v8 = KiFastAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v6, &v15);
  }
  else
  {
    v8 = 0;
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( v9 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v9, &v15);
      v8 = 1;
    }
  }
  if ( v8 )
  {
    _disable();
    __writecr8(v15);
  }
  v10 = ExpTryAcquireResourceExclusive(a1);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v11 | 8;
    if ( v4 )
    {
      v3 = *(_DWORD *)(a1 + 68);
      v2 = 1;
      v7 = 65569;
    }
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v12 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v12;
    if ( v4 )
    {
      v3 = *(_DWORD *)(a1 + 68);
      v2 = v12 >> 3;
      v7 = 65585;
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  if ( v10 )
  {
    __incgsdword(0x63E4u);
    __incgsdword(0x6364u);
  }
  if ( v4 )
    PerfLogExecutiveResourceAcquire(v7, a1, v2, v3);
  return v10;
}
