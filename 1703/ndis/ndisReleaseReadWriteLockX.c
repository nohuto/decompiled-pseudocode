/*
 * XREFs of ndisReleaseReadWriteLockX @ 0x1C005B980
 * Callers:
 *     NdisDprReleaseReadWriteLock @ 0x1C005AFE0 (NdisDprReleaseReadWriteLock.c)
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005AE80 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisReleaseReadWriteLockX(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  unsigned int Number; // eax
  __int64 v6; // rdx
  KIRQL v7; // cl

  switch ( *(_WORD *)a2 )
  {
    case 3:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(a1);
      }
      else
      {
        Number = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors > 0x40 )
          v6 = 4LL * Number;
        else
          v6 = 16LL * Number;
        --*(_DWORD *)((char *)a1 + v6 + 16);
      }
      *(_WORD *)a2 = 255;
      if ( !a3 )
      {
        v7 = *(_BYTE *)(a2 + 2);
        if ( v7 < 2u )
          KeLowerIrql(v7);
      }
      break;
    case 4:
      *(_WORD *)a2 = 255;
      a1[1] = 0LL;
      if ( a3 )
        KeReleaseSpinLockFromDpcLevel(a1);
      else
        KeReleaseSpinLock(a1, *(_BYTE *)(a2 + 2));
      break;
    case 5:
      a1[1] = 0LL;
      KeReleaseSpinLockFromDpcLevel(a1 + 2);
      *(_WORD *)a2 = 255;
      break;
  }
}
