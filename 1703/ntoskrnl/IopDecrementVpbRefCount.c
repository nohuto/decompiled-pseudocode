/*
 * XREFs of IopDecrementVpbRefCount @ 0x1400DB890
 * Callers:
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  _QWORD *v5; // rdx
  unsigned int v6; // edi
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
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
    v6 = --*(_DWORD *)(a1 + 28);
    v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
      goto LABEL_8;
    }
    _m_prefetchw(v7);
    v8 = (__int64)*v7;
    if ( !*v7 )
    {
      if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        return v6;
      }
      v8 = KxWaitForLockChainValid(v7);
    }
    *v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
    goto LABEL_8;
  }
  return (unsigned int)--*(_DWORD *)(a1 + 28);
}
