/*
 * XREFs of MiAllocateCombineProto @ 0x140078CA0
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiInsertNewCombineBlocks @ 0x140134E24 (MiInsertNewCombineBlocks.c)
 *     MiGetCrossPartitionCharges @ 0x14021DFB0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14021E85C (MiReturnCrossPartitionCharges.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(_QWORD *a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 v8; // rax
  _DWORD *v9; // rsi
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v11; // ett
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 result; // rax
  unsigned int v16; // eax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 *v19; // rax
  __int64 inserted; // rdi
  _QWORD *v21; // rcx
  char *PoolWithTag; // rax
  void *v23; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-48h]
  unsigned int v26; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  if ( a2 )
  {
    v8 = 2 * (a2 & 0xF);
    v9 = &a1[v8 + 13];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&a1[v8 + 13], CurrentIrql);
    }
    else
    {
      _m_prefetchw(v9);
      v11 = *v9 & 0x7FFFFFFF;
      if ( v11 != _InterlockedCompareExchange(v9, v11 + 1, v11) )
        ExpWaitForSpinLockSharedAndAcquire(v9, CurrentIrql);
    }
    v25 = a2;
    v26 = a3;
    v12 = a1[2 * (a2 & 0xF) + 12];
    if ( v12 )
    {
      do
      {
        v13 = *(_QWORD *)(v12 + 24);
        if ( a2 > v13 )
        {
          v14 = 1;
        }
        else if ( a2 >= v13 )
        {
          v16 = *(_DWORD *)(v12 + 40);
          if ( a3 > v16 )
          {
            v14 = 1;
          }
          else if ( a3 < v16 )
          {
            v14 = -1;
          }
          else
          {
            v14 = 0;
          }
        }
        else
        {
          v14 = -1;
        }
        if ( v14 < 0 )
        {
          v12 = *(_QWORD *)v12;
        }
        else
        {
          if ( v14 <= 0 )
            break;
          v12 = *(_QWORD *)(v12 + 8);
        }
      }
      while ( v12 );
      if ( v12 )
      {
        v17 = *(_QWORD *)(v12 + 32);
        if ( v17 )
        {
          while ( 1 )
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v17 + 1, v17);
            if ( v18 == v17 )
              break;
            if ( !v17 )
              goto LABEL_43;
          }
          ExReleaseSpinLockSharedFromDpcLevel(v9);
          __writecr8(CurrentIrql);
          result = v12;
          goto LABEL_26;
        }
LABEL_43:
        a4 = 0;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
    }
    else
    {
      _InterlockedAnd(v9, 0xBFFFFFFF);
      _InterlockedDecrement(v9);
    }
    __writecr8(CurrentIrql);
    if ( a4 && (a1 != (_QWORD *)&unk_14036C718 || (unsigned int)MiGetCrossPartitionCharges(*a1, 2LL, 1LL, 1LL)) )
    {
      KeAcquireInStackQueuedSpinLock(a1 + 11, &LockHandle);
      v19 = a1 + 9;
      if ( (__int64 *)*v19 == v19 )
      {
        inserted = 0LL;
      }
      else
      {
        inserted = *v19;
        v21 = *(_QWORD **)*v19;
        if ( *(__int64 **)(*v19 + 8) != v19 || v21[1] != inserted )
          __fastfail(3u);
        *v19 = (__int64)v21;
        v21[1] = v19;
        ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( inserted )
        goto LABEL_33;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
      v23 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 2) = 1;
        *((_QWORD *)PoolWithTag + 2) = a1;
        inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 56);
        if ( inserted )
        {
LABEL_33:
          _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 95, 1u);
          *(_QWORD *)(inserted + 32) = 1LL;
          result = inserted;
          *(_DWORD *)(inserted + 40) = a3;
LABEL_26:
          _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 96, 1u);
          return result;
        }
        ExFreePoolWithTag(v23, 0);
      }
      if ( a1 == (_QWORD *)&unk_14036C718 )
        MiReturnCrossPartitionCharges(*a1, 2LL, 1LL, 1LL);
    }
    return 0LL;
  }
  return 0LL;
}
