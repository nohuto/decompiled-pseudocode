/*
 * XREFs of IopGetMountFlag @ 0x1400240A0
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else
  {
    v5 = _InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
    if ( v5 )
      KxWaitForLockOwnerShip(v4);
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 && (*(_BYTE *)(v6 + 4) & 1) != 0 )
    v2 = 1;
  v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v7);
  v8 = (__int64)*v7;
  if ( *v7 )
    goto LABEL_12;
  if ( v7 != (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
  {
    v8 = KxWaitForLockChainValid(v7, v5);
LABEL_12:
    *v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_10:
  __writecr8(CurrentIrql);
  return v2;
}
