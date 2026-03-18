/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140051F60
 * Callers:
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

_KSPIN_LOCK_QUEUE *__fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  ULONG_PTR v6; // r14
  char v7; // r8
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  _KSPIN_LOCK_QUEUE *volatile result; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  struct _KEVENT *v14; // rbx
  unsigned __int64 v15; // rbp
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rdx
  unsigned __int64 v20; // r11
  char v21; // al
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  ULONG_PTR v28; // rcx
  __int64 v29; // r8
  signed __int32 v30[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *(_QWORD *)(a2 + 40);
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (v4 & 0x10000000000000LL) != 0 )
    return (_KSPIN_LOCK_QUEUE *)MiPfnReferenceCountIsZero(a2, v6);
  if ( !a1 )
    return (_KSPIN_LOCK_QUEUE *)MiPfnReferenceCountIsZero(a2, v6);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 )
    return (_KSPIN_LOCK_QUEUE *)MiPfnReferenceCountIsZero(a2, v6);
  if ( (v7 & 0x40) != 0 )
    return (_KSPIN_LOCK_QUEUE *)MiPfnReferenceCountIsZero(a2, v6);
  v8 = *(_QWORD *)(qword_140388AF0 + 8 * ((v4 >> 40) & 0x3FF));
  if ( *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) != v8 || (v7 & 7u) >= 5 )
    return (_KSPIN_LOCK_QUEUE *)MiPfnReferenceCountIsZero(a2, v6);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 2536);
  v9 = (a1 + 0x58000000000LL) / 48;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8 + 2536);
  }
  else
  {
    v10 = _InterlockedExchange64((volatile __int64 *)(v8 + 2536), (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return (_KSPIN_LOCK_QUEUE *)MiPfnReferenceCountIsZero(a2, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 4224));
  else
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 4928));
  v12 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 5952));
  if ( v12 <= 0x420 )
  {
    switch ( v12 )
    {
      case 0xA0uLL:
        v13 = 4840LL;
LABEL_25:
        v32.LockQueue.Next = 0LL;
        v32.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4800);
        v14 = (struct _KEVENT *)(v8 + v13);
        KxAcquireQueuedSpinLock(&v32);
        KeSetEvent(v14, 0, 0);
        ++v14[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
        break;
      case 0x420uLL:
        v13 = 4872LL;
        goto LABEL_25;
      case 0x22uLL:
        v13 = 4808LL;
        goto LABEL_25;
    }
  }
  v15 = v12 - 1;
  if ( v15 == *(_QWORD *)(v8 + 4968) || v15 == *(_QWORD *)(v8 + 4976) )
    MiUpdateAvailableEvents(v8, v10);
  _InterlockedOr(v30, 0);
  v16 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v16 & 0xF8 | 2;
  v17 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(a1 + 16);
  v18 = 0xFFFFFFFFFLL;
  v19 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v20 = 0xFFFFFFF000000000uLL;
  *(_QWORD *)a2 ^= (v9 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v19 | *(_QWORD *)(a2 + 24) & 0xFFFFFFF000000000uLL;
  if ( v17 == v9 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4LL);
  else
    *(_QWORD *)(48 * v19 - 0x58000000000LL) ^= (v6 ^ *(_QWORD *)(48 * v19 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) ^= v18 & (v6 ^ *(_QWORD *)(a1 + 40));
  v21 = *(_BYTE *)(a2 + 35);
  if ( (v21 & 8) != 0 )
    v22 = 5;
  else
    v22 = v21 & 7;
  v23 = v22 + 8 * (((*(_QWORD *)(a2 + 40) >> 36) & 3LL) + 43LL * (*(_QWORD *)(a2 + 40) >> 58)) + 297;
  v24 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)) + 16LL);
  v25 = 3 * v23;
  ++*(_QWORD *)(v24 + 24 * v23);
  v26 = v24 + 24 * v23;
  v27 = *(_QWORD *)(v26 + 16);
  if ( v27 == v18 )
  {
    *(_QWORD *)(v26 + 8) = v6;
  }
  else
  {
    v25 = 48 * v27 - 0x58000000000LL;
    v28 = v18 & (*(_QWORD *)v25 ^ (v6 << 28));
    *(_BYTE *)(v25 + 39) = v6;
    *(_QWORD *)v25 = (v6 << 28) ^ v28;
  }
  *(_QWORD *)a2 |= v20;
  *(_WORD *)(a2 + 36) = v27;
  v29 = *(_QWORD *)(a2 + 24) ^ (v27 << 20);
  *(_BYTE *)(a2 + 39) = -1;
  *(_QWORD *)(a2 + 24) ^= v29 & 0xFFFFF000000000LL;
  *(_QWORD *)(v26 + 16) = v6;
  ++*(_QWORD *)(v8 + 2504);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return (_KSPIN_LOCK_QUEUE *)KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  _m_prefetchw(&LockHandle);
  result = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_43;
  result = (_KSPIN_LOCK_QUEUE *volatile)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                          0LL,
                                          (signed __int64)&LockHandle);
  if ( result != (_KSPIN_LOCK_QUEUE *volatile)&LockHandle )
  {
    result = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v25);
LABEL_43:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&result->Lock, 1uLL);
  }
  return result;
}
