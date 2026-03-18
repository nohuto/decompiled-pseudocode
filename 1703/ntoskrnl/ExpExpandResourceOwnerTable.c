/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x140027C24
 * Callers:
 *     ExpFindEmptyEntry @ 0x140027BC8 (ExpFindEmptyEntry.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rsi
  unsigned int v5; // edi
  unsigned __int64 v6; // rbp
  unsigned int v7; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbp
  char v10; // al
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rdx
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v7 = v5 + 4;
    if ( v5 + 4 < v5 )
      return;
    v6 = 16LL * v7;
    if ( v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 48;
    v7 = 3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
  _enable();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x61546552u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v5], 0, 16LL * (v7 - v5));
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
      v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)a2);
      if ( v11 )
      {
        KxWaitForLockOwnerShipWithIrql(a2, v11, &v14);
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
      v9[2] = v7;
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
    v13 = _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)a2);
    if ( v13 )
    {
      KxWaitForLockOwnerShipWithIrql(a2, v13, &v15);
      v12 = 1;
    }
  }
  if ( v12 )
  {
    _disable();
    __writecr8(v15);
  }
}
