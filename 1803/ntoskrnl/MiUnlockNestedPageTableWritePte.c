/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x14003DFCC
 * Callers:
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiShouldLockPteDirectly @ 0x14003E0E8 (MiShouldLockPteDirectly.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  volatile __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2;
  v6 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( v5 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
  }
  else if ( (unsigned int)MiShouldLockPteDirectly(a1, v5) )
  {
    _InterlockedExchange64(v5, a3);
    if ( MiPteInShadowRange((unsigned __int64)v5) )
      MiWritePteShadow(v7, a3);
    v5 = 0LL;
  }
  else if ( (a3 & 1) != 0 )
  {
    MiWriteValidPteNewProtection(v5, a3);
  }
  else
  {
    *v5 = a3;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
      MiWritePteShadow(v9, a3);
  }
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  if ( v5 )
    return MiUnlockPageTableInternal(a1, v5);
  return result;
}
