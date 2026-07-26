/*
 * XREFs of ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005AE80
 * Callers:
 *     NdisReleaseReadWriteLock @ 0x1C0010550 (NdisReleaseReadWriteLock.c)
 *     ndisReleaseReadWriteLockX @ 0x1C005B980 (ndisReleaseReadWriteLockX.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseReadLockSharedRefCnt(PKSPIN_LOCK SpinLock)
{
  __int64 v3; // rcx
  char *v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rax

  KeAcquireSpinLockAtDpcLevel(SpinLock + 2);
  if ( (*((_DWORD *)SpinLock + 6))-- == 1 )
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  KeReleaseSpinLockFromDpcLevel(SpinLock + 2);
  v3 = 0LL;
  v4 = (char *)ndisRWLocksOwnedByThread + 520 * KeGetPcr()->Prcb.Number;
  v5 = *((_DWORD *)v4 + 128);
  if ( v5 )
  {
    while ( SpinLock != *(PKSPIN_LOCK *)&v4[8 * v3] )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v5 )
        return;
    }
    v6 = v5 - 1;
    *((_DWORD *)v4 + 128) = v6;
    *(_QWORD *)&v4[8 * v3] = *(_QWORD *)&v4[8 * v6];
  }
}
