/*
 * XREFs of IopGetMountFlag @ 0x14004BC40
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rcx
  __int64 v5; // rax
  volatile signed __int64 **v6; // rbx
  __int64 v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4) )
  {
    KxWaitForLockOwnerShip(v4);
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 && (*(_BYTE *)(v5 + 4) & 1) != 0 )
    v2 = 1;
  v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v6);
  v7 = (__int64)*v6;
  if ( *v6 )
    goto LABEL_12;
  if ( v6 != (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
  {
    v7 = KxWaitForLockChainValid(v6);
LABEL_12:
    *v6 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
  }
LABEL_10:
  __writecr8(CurrentIrql);
  return v2;
}
