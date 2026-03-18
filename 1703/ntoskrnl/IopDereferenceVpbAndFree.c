/*
 * XREFs of IopDereferenceVpbAndFree @ 0x14012B810
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // rdi
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  _QWORD *v5; // rdx
  bool v6; // zf
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)v4, v5);
  }
  v6 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v6 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
  }
  else
  {
    _m_prefetchw(v7);
    v8 = (__int64)*v7;
    if ( !*v7 )
    {
      if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
        goto LABEL_8;
      v8 = KxWaitForLockChainValid((__int64 *)v7);
    }
    *v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_8:
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
