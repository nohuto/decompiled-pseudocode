/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x14011D5F0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x14011D590 (ExpFindEmptyEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rsi
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14
  char v10; // al
  _QWORD *v11; // rdx
  char v12; // al
  _QWORD *v13; // rdx
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v6 = v5 + 4;
    if ( v5 + 4 < v5 || 16 * (unsigned __int64)v6 > 0xFFFFFFFF )
      return;
    v7 = 16 * v6;
  }
  else
  {
    v5 = 0;
    v6 = 3;
    v7 = 48;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
  _enable();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x61546552u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v5], 0, 16LL * (v6 - v5));
    a2->LockQueue.Next = 0LL;
    a2->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
    v14 = 2;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v10 = KiFastAcquireQueuedSpinLockInstrumented(a2, a1 + 96, &v14);
    }
    else
    {
      v10 = 0;
      v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)a2);
      if ( v11 )
      {
        KxWaitForLockOwnerShipWithIrql((__int64)a2, v11, &v14);
        v10 = 1;
      }
    }
    if ( v10 )
    {
      _disable();
      __writecr8(v14);
    }
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(v9, v2, 16LL * v5);
      v9[2] = v6;
      *(_QWORD *)(a1 + 16) = v9;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      _enable();
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      _enable();
      ExFreePoolWithTag(v9, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  v15 = 2;
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = v5;
  a2->LockQueue.Next = 0LL;
  a2->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v12 = KiFastAcquireQueuedSpinLockInstrumented(a2, a1 + 96, &v15);
  }
  else
  {
    v12 = 0;
    v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)a2);
    if ( v13 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)a2, v13, &v15);
      v12 = 1;
    }
  }
  if ( v12 )
  {
    _disable();
    __writecr8(v15);
  }
}
