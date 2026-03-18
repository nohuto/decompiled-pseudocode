/*
 * XREFs of IopDecrementVpbRefCount @ 0x140085A10
 * Callers:
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  unsigned int v5; // edi
  volatile signed __int64 **v6; // rbx
  __int64 v7; // rax
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
    else if ( _InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4) )
    {
      KxWaitForLockOwnerShip(v4);
    }
    v5 = --*(_DWORD *)(a1 + 28);
    v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
      goto LABEL_8;
    }
    _m_prefetchw(v6);
    v7 = (__int64)*v6;
    if ( !*v6 )
    {
      if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        return v5;
      }
      v7 = KxWaitForLockChainValid(v6);
    }
    *v6 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
    goto LABEL_8;
  }
  return (unsigned int)--*(_DWORD *)(a1 + 28);
}
