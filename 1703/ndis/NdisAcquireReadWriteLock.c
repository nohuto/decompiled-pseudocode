/*
 * XREFs of NdisAcquireReadWriteLock @ 0x1C0010130
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C0010238 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C0010270 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005AD34 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005ADDC (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  unsigned int *v5; // rdx
  unsigned __int16 v6; // ax
  KIRQL v7; // al
  bool v8; // cc
  unsigned int Number; // eax
  unsigned __int64 v10; // r8
  unsigned int *p_RefCount; // rdx

  if ( fWrite )
  {
    LockState->LockState = 1;
    if ( Lock->Context == KeGetCurrentThread() )
    {
      LockState->LockState = 2;
    }
    else if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      LockState->OldIrql = KfRaiseIrql(2u);
      if ( !(unsigned int)ndisAcquireWriteLockSharedRefCnt(Lock) )
      {
        v6 = 5;
        goto LABEL_5;
      }
      LockState->LockState = 4;
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
        p_RefCount = &Lock->RefCount[Number].RefCount;
      }
      else
      {
        v10 = 4LL;
        p_RefCount = (unsigned int *)&Lock->16 + Number;
      }
      ndisAcquireWriteLockPerCpuRefCnt(Lock, p_RefCount, v10);
      LockState->LockState = 4;
      Lock->Context = KeGetCurrentThread();
    }
  }
  else
  {
    LockState->LockState = 0;
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors <= 0x40 )
    {
      v5 = &Lock->RefCount[KeGetPcr()->Prcb.Number].RefCount;
LABEL_4:
      ndisAcquireReadLockPerCpuRefCnt(&Lock->SpinLock, v5);
      v6 = 3;
LABEL_5:
      LockState->LockState = v6;
      return;
    }
    if ( ndisMaxNumberOfProcessors <= 0x100 )
    {
      v5 = (unsigned int *)&Lock->16 + KeGetPcr()->Prcb.Number;
      goto LABEL_4;
    }
    LockState->LockState = ((unsigned int)ndisAcquireReadLockSharedRefCnt(&Lock->SpinLock) != 0) + 2;
  }
}
