/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140135E60
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1401353D0 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x14022B540 (MiPurgePartitionStandby.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiPageAvailableEx @ 0x1400C729C (MiPageAvailableEx.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiDeleteParentDecayNode @ 0x140115354 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1401153E8 (MiRemoveDecayClusterTimer.c)
 *     MiIsDecayPfn @ 0x14012CFD4 (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x140136450 (MiUnlinkNumaStandbyPage.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140230474 (MiGetAvailablePagesExcludeSlists.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, signed __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rsi
  __int64 v7; // r11
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r9
  bool v14; // zf
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  volatile signed __int64 v20; // rdx
  volatile signed __int64 *v21; // r9
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 updated; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // r9
  signed __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 Next; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // edi
  char v36; // al
  ULONG_PTR AvailablePagesExcludeSlists; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v40; // [rsp+90h] [rbp+8h]
  __int16 v41; // [rsp+A0h] [rbp+18h]
  __int64 v42; // [rsp+A8h] [rbp+20h]

  v41 = a3;
  v3 = (_QWORD *)(a1 + 2304);
  v40 = a1 + 2304 + 40LL * a2;
  if ( a1 + 2304 >= v40 )
    return -1LL;
  v5 = a1 + 2304 + 40LL * a2;
  v6 = (unsigned __int64 *)(a1 + 2336);
  v7 = 0xFFFFFFFFFLL;
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_28:
    v3 += 5;
    v6 += 5;
    if ( (unsigned __int64)v3 >= v5 )
      return -1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Lock = v6;
  LockHandle.LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( !v9 )
      goto LABEL_9;
    KxWaitForLockOwnerShip((__int64)&LockHandle, v9);
  }
  v7 = 0xFFFFFFFFFLL;
LABEL_9:
  v10 = v3[2];
  if ( v10 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_27:
    __writecr8(CurrentIrql);
    v5 = v40;
    v7 = 0xFFFFFFFFFLL;
    goto LABEL_28;
  }
  v11 = 48 * v10 - 0x58000000000LL;
  if ( v10 < qword_140388DE0 || v10 >= qword_140388DE0 + 2048 )
  {
    v12 = 0LL;
    v42 = 0xFFFFFFFFFLL;
  }
  else
  {
    v42 = v3[2];
    v12 = 48 * v10 - 0x58000000000LL;
    v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v11 + 16);
    v11 = v13 + 48 * v10;
    if ( v10 == a3 )
    {
      MiUnlinkPageFromList(v12, 1LL);
      *(_BYTE *)(v12 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v12);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_26:
      v3 -= 5;
      v6 -= 5;
      goto LABEL_27;
    }
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    goto LABEL_31;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiLockPageAtDpcInline(v11);
  if ( (*(_BYTE *)(v11 + 34) & 7) != 2
    || *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) != a1 )
  {
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_26;
  }
  LockHandle.LockQueue.Lock = v6;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v6);
  if ( v12 )
  {
    if ( v42 != v3[2] )
    {
LABEL_24:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_25;
    }
    v14 = v10 == MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v12 + 16);
  }
  else
  {
    v14 = v10 == v3[2];
  }
  if ( !v14 )
    goto LABEL_24;
  v7 = 0xFFFFFFFFFLL;
LABEL_31:
  if ( !*v3 )
  {
    AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists(a1);
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, AvailablePagesExcludeSlists, 0LL);
  }
  --*v3;
  if ( dword_140388B14 == 1 )
  {
    v16 = v10 & 0x1F;
    LOBYTE(v17) = 1;
    a3 = (signed __int64)stru_140388B68.Buffer + 4 * (v10 >> 5);
    if ( v16 + 1 <= 0x20 )
    {
      v18 = 1 << v16;
      goto LABEL_41;
    }
    if ( (v10 & 0x1F) == 0 )
      goto LABEL_40;
    _InterlockedOr((volatile signed __int32 *)a3, ((1 << (32 - (v10 & 0x1F))) - 1) << v16);
    a3 += 4LL;
    v17 = 1LL - (32 - (unsigned int)(v10 & 0x1F));
    if ( v17 >= 0x20 )
    {
      v19 = v17 >> 5;
      v17 += -32LL * (v17 >> 5);
      do
      {
        *(_DWORD *)a3 = -1;
        a3 += 4LL;
        --v19;
      }
      while ( v19 );
    }
    if ( v17 )
    {
LABEL_40:
      v18 = (1 << v17) - 1;
LABEL_41:
      _InterlockedOr((volatile signed __int32 *)a3, v18);
    }
  }
  v20 = v7 & *(_QWORD *)v11;
  v21 = (volatile signed __int64 *)(v7 & *(_QWORD *)(v11 + 24));
  v22 = 0;
  if ( (*(_BYTE *)(v11 + 35) & 8) != 0 )
  {
    if ( MiIsDecayPfn(v7 & *(_QWORD *)(v11 + 24)) && v23 == v24 )
    {
      MiDeleteParentDecayNode(v11);
      v22 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(
                  *(_QWORD *)(48 * v24 - 0x58000000000LL + 16),
                  v23,
                  48 * v24 - 0x58000000000LL);
      *(_QWORD *)(v26 + 16) = updated;
      MiSetPfnBlink(v28 + 48 * v27, v29, 0);
      v22 = 1;
    }
  }
  else
  {
    v3[2] = v20;
    if ( v20 == v7 )
    {
      v3[3] = v7;
    }
    else
    {
      v21 = (volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFE8LL);
      v20 = *v21;
      a3 = _InterlockedCompareExchange64(v21, v7 | *v21, *v21);
      if ( v20 != a3 )
      {
        do
        {
          v30 = a3;
          a3 = _InterlockedCompareExchange64(v21, v7 | a3, a3);
        }
        while ( v30 != a3 );
      }
    }
  }
  MiUnlinkNumaStandbyPage(v11, v20, a3, v21);
  if ( v22 == 1 )
    *(_BYTE *)(v11 + 35) &= ~8u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_60;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_60;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_60:
  v33 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 5952));
  if ( v33 == *(_QWORD *)(a1 + 4968) || v33 == *(_QWORD *)(a1 + 4976) )
    MiUpdateAvailableEvents(a1, v31);
  if ( v33 <= 0x420 )
  {
    v34 = *(_QWORD *)(a1 + 5680);
    if ( !v34 || !*(_BYTE *)(v34 + 52) )
      MiObtainFreePages(a1, v31);
    if ( v33 < 0xA0 && v33 + 1 >= 0xA0 && *(_DWORD *)(a1 + 1144) )
      KeSetEvent((PRKEVENT)(a1 + 992), 0, 0);
  }
  v35 = MiPageAvailableEx(a1, v33, v41);
  *(_QWORD *)(v11 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v11, 0);
  if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4224));
  else
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4928));
  *(_QWORD *)(v11 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v11 + 34) &= 0xC7u;
  *(_BYTE *)(v11 + 35) &= ~0x20u;
  v36 = *(_BYTE *)(v11 + 34) & 0xFD;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_BYTE *)(v11 + 34) = v36 | 5;
  MiSetFreshPfnFromFreeList(v11);
  if ( !v35 )
  {
    MiReturnFreeZeroPage(v11, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v10;
}
