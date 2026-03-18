/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x1400AA270
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x1400C4D40 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiInsertNumaStandbyPage @ 0x1400AA4D4 (MiInsertNumaStandbyPage.c)
 *     MiIncreaseAvailablePages @ 0x1400B6F40 (MiIncreaseAvailablePages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

void __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (unsigned int)MiIsPfnFileOnly(a2) == 1 )
    goto LABEL_9;
  if ( !a1 )
    goto LABEL_9;
  v7 = *(unsigned __int8 *)(a2 + 35);
  if ( (v7 & 0x10) != 0 )
    goto LABEL_9;
  if ( (v7 & 0x40) != 0 )
    goto LABEL_9;
  v9 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
  if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) != v9 )
    goto LABEL_9;
  LOBYTE(v7) = v7 & 7;
  if ( (unsigned __int8)v7 >= 5u )
    goto LABEL_9;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 2408);
  v10 = ((unsigned __int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)v8) >> 64) >> 63)
      + ((__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)v8) >> 64) >> 3);
  KxAcquireQueuedSpinLock(&LockHandle);
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_9:
    MiPfnReferenceCountIsZero(a2, v6, v7);
    return;
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 4096));
  else
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 4800));
  MiIncreaseAvailablePages(v9, 1LL);
  _InterlockedOr(v15, 0);
  v11 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v11 & 0xF8 | 2;
  v12 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(a1 + 16);
  v13 = 0xFFFFFFFFFLL;
  v14 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v10 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (v14 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFFFFFLL;
  if ( v12 == v10 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4LL);
  else
    *(_QWORD *)(48 * v14 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v14 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) ^= v13 & (v6 ^ *(_QWORD *)(a1 + 40));
  MiInsertNumaStandbyPage(a2);
  ++*(_QWORD *)(v9 + 2376);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
