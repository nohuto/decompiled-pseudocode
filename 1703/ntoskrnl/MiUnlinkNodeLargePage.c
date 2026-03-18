/*
 * XREFs of MiUnlinkNodeLargePage @ 0x1401291F0
 * Callers:
 *     MiGetFreeZeroLargePage @ 0x140128E70 (MiGetFreeZeroLargePage.c)
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginLargePageAccessor @ 0x14012981C (MiBeginLargePageAccessor.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rsi
  unsigned __int8 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rbx
  __int64 **v19; // rax
  __int64 v20; // rsi
  int v21; // edi
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  bool v23; // zf
  _QWORD *v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a4;
  v7 = *(_QWORD *)(a1 + 48) + 2184LL * a3;
  v8 = a2;
  while ( 1 )
  {
    v9 = 4 * (a5 + 4 * v8);
    if ( (_DWORD)v6 == 4 )
    {
      v10 = (unsigned __int8 *)(v7 + 2165);
      v11 = v7 + 2165 + (unsigned int)MmNumberOfChannels;
      while ( 1 )
      {
        v12 = *v10;
        if ( *(_QWORD *)(v7 + 16 * (v12 + v9 + 3)) != v7 + 16 * (v12 + v9 + 3)
          || *(_QWORD *)(v7 + 16 * (v12 + v9 + 11)) != v7 + 16 * (v12 + v9 + 11) )
        {
          break;
        }
        if ( ++v10 == (unsigned __int8 *)v11 )
          return 0LL;
      }
      v23 = v10 == (unsigned __int8 *)v11;
    }
    else
    {
      LODWORD(v12) = v6;
      if ( *(_QWORD *)(v7 + 16 * (v9 + v6 + 3)) != v7 + 16 * (v9 + v6 + 3) )
        goto LABEL_9;
      v23 = *(_QWORD *)(v7 + 16 * (v9 + v6 + 11)) == v7 + 16 * (v9 + v6 + 11);
    }
    if ( v23 )
      return 0LL;
LABEL_9:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 2176);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7 + 2176);
    }
    else
    {
      v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v7 + 2176), (__int64)&LockHandle);
      if ( v15 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v15);
    }
    v16 = 16 * (v9 + (unsigned int)v12);
    v17 = (__int64 *)(v16 + v7 + 48);
    if ( (__int64 *)*v17 != v17 || (v17 = (__int64 *)(v16 + v7 + 176), (__int64 *)*v17 != v17) )
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17[1] + 24), 0x3FuLL) )
        break;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(CurrentIrql);
  }
  v18 = v17[1];
  v19 = *(__int64 ***)(v18 + 8);
  if ( *(__int64 **)v18 != v17 || *v19 != (__int64 *)v18 )
    __fastfail(3u);
  v20 = v17[1];
  v17[1] = (__int64)v19;
  *v19 = v17;
  if ( a6 )
  {
    v24 = (_QWORD *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      __fastfail(3u);
    *(_QWORD *)(v18 + 8) = v17;
    *(_QWORD *)v18 = v24;
    v24[1] = v18;
    *v17 = v18;
    if ( !(unsigned int)MiBeginLargePageAccessor(a6, v18) )
      v20 = 0LL;
    v21 = 1;
  }
  else
  {
    v21 = MiUnlinkNodeLargePageHelper(v7, v18, (unsigned int)v8, (unsigned int)v12);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_21;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_35;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_35:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_21:
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v21 )
  {
    MiInsertLargePageInFreeOrZeroList(v18, v8, 1);
    v20 = 0LL;
  }
  __writecr8(CurrentIrql);
  return v20;
}
