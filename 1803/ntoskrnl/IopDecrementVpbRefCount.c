/*
 * XREFs of IopDecrementVpbRefCount @ 0x1401069A0
 * Callers:
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rdi
  volatile __int64 *v5; // rsi
  _QWORD *v6; // rdx
  unsigned int v7; // edi
  volatile signed __int64 **v8; // rbx
  __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
    v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v4, v5);
    }
    else
    {
      v6 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
      if ( v6 )
        KxWaitForLockOwnerShip((__int64)v4, v6);
    }
    v7 = --*(_DWORD *)(a1 + 28);
    v8 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v8, retaddr);
      goto LABEL_8;
    }
    _m_prefetchw(v8);
    v9 = (__int64)*v8;
    if ( !*v8 )
    {
      if ( v8 == (volatile signed __int64 **)_InterlockedCompareExchange64(v8[1], 0LL, (signed __int64)v8) )
      {
LABEL_8:
        KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
        __writecr8(CurrentIrql);
        return v7;
      }
      v9 = KxWaitForLockChainValid((__int64 *)v8);
    }
    *v8 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
    goto LABEL_8;
  }
  return (unsigned int)--*(_DWORD *)(a1 + 28);
}
