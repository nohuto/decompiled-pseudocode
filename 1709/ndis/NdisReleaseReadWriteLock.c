/*
 * XREFs of NdisReleaseReadWriteLock @ 0x1C001B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005A6C0 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  unsigned int Number; // eax
  __int64 v5; // rcx
  KIRQL OldIrql; // cl

  switch ( LockState->LockState )
  {
    case 3u:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(&Lock->SpinLock);
      }
      else
      {
        Number = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors > 0x40 )
          v5 = 4LL * Number;
        else
          v5 = 16LL * Number;
        --*(_DWORD *)&Lock->RefCount[0].cacheLine[v5];
      }
      OldIrql = LockState->OldIrql;
      LockState->LockState = 255;
      if ( OldIrql < 2u )
        KeLowerIrql(OldIrql);
      break;
    case 4u:
      LockState->LockState = 255;
      Lock->Context = 0LL;
      KeReleaseSpinLock(&Lock->SpinLock, LockState->OldIrql);
      break;
    case 5u:
      Lock->Context = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&Lock->16);
      LockState->LockState = 255;
      break;
  }
}
