/*
 * XREFs of NdisAcquireReadWriteLock @ 0x1C0019D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C0019E58 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C0019E90 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005A574 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005A61C (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  unsigned __int16 v5; // di
  unsigned int *p_RefCount; // rdx
  KIRQL v7; // al
  bool v8; // cc
  unsigned int Number; // eax
  unsigned __int64 v10; // r8
  unsigned int *v11; // rdx

  if ( !fWrite )
  {
    v5 = 2;
    LockState->LockState = 0;
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        if ( !(unsigned int)ndisAcquireReadLockSharedRefCnt(&Lock->SpinLock) )
          goto LABEL_6;
        goto LABEL_5;
      }
      p_RefCount = (unsigned int *)&Lock->16 + KeGetPcr()->Prcb.Number;
    }
    else
    {
      p_RefCount = &Lock->RefCount[KeGetPcr()->Prcb.Number].RefCount;
    }
    ndisAcquireReadLockPerCpuRefCnt(&Lock->SpinLock, p_RefCount);
LABEL_5:
    v5 = 3;
LABEL_6:
    LockState->LockState = v5;
    return;
  }
  LockState->LockState = 1;
  if ( Lock->Context == KeGetCurrentThread() )
  {
    LockState->LockState = 2;
  }
  else if ( ndisMaxNumberOfProcessors > 0x100 )
  {
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( (unsigned int)ndisAcquireWriteLockSharedRefCnt(Lock) )
    {
      v5 = 4;
      goto LABEL_6;
    }
    LockState->LockState = 5;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&Lock->SpinLock);
    v8 = ndisMaxNumberOfProcessors <= 0x40;
    LockState->OldIrql = v7;
    Number = KeGetPcr()->Prcb.Number;
    if ( v8 )
    {
      v10 = 16LL;
      v11 = &Lock->RefCount[Number].RefCount;
    }
    else
    {
      v10 = 4LL;
      v11 = (unsigned int *)&Lock->16 + Number;
    }
    ndisAcquireWriteLockPerCpuRefCnt(Lock, v11, v10);
    LockState->LockState = 4;
    Lock->Context = KeGetCurrentThread();
  }
}
