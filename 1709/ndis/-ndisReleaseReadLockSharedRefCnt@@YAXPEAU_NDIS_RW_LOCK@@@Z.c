/*
 * XREFs of ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005A6C0
 * Callers:
 *     NdisReleaseReadWriteLock @ 0x1C001B0B0 (NdisReleaseReadWriteLock.c)
 *     ndisReleaseReadWriteLockX @ 0x1C005B4AC (ndisReleaseReadWriteLockX.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseReadLockSharedRefCnt(PKSPIN_LOCK SpinLock)
{
  __int64 v3; // rax
  char *v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rax

  KeAcquireSpinLockAtDpcLevel(SpinLock + 2);
  if ( (*((_DWORD *)SpinLock + 6))-- == 1 )
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  KeReleaseSpinLockFromDpcLevel(SpinLock + 2);
  v3 = 0LL;
  v4 = (char *)ndisRWLocksOwnedByThread + 520 * KeGetPcr()->Prcb.Number;
  v5 = *((_DWORD *)v4 + 128);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = (unsigned int)v3;
      if ( SpinLock == *(PKSPIN_LOCK *)&v4[8 * v3] )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v5 )
        return;
    }
    v7 = v5 - 1;
    *((_DWORD *)v4 + 128) = v7;
    *(_QWORD *)&v4[8 * v6] = *(_QWORD *)&v4[8 * v7];
  }
}
