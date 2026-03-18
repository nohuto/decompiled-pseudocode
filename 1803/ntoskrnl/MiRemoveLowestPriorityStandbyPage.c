/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x14014FC20
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x14014FB3C (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MiIsDecayPfn @ 0x140003B48 (MiIsDecayPfn.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDeleteParentDecayNode @ 0x1400B77E4 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1400B7878 (MiRemoveDecayClusterTimer.c)
 *     MiDecreaseAvailablePages @ 0x1400D5664 (MiDecreaseAvailablePages.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401500F4 (MiUnlinkNumaStandbyPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x14026B788 (MiGetAvailablePagesExcludeSlists.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rsi
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  volatile signed __int32 *v11; // r8
  unsigned __int64 v12; // r11
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r11
  __int64 updated; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r11
  __int64 v30; // r9
  int v31; // esi
  __int64 v32; // rax
  char v33; // al
  char v34; // r8
  ULONG_PTR AvailablePagesExcludeSlists; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp+8h]

  v3 = (_QWORD *)(a1 + 2368);
  v37 = a1 + 2368 + 40LL * a2;
  if ( a1 + 2368 >= v37 )
    return -1LL;
  v5 = a1 + 2368 + 40LL * a2;
  v6 = (unsigned __int64 *)(a1 + 2400);
  v7 = 0xFFFFFFFFFLL;
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_21:
    v3 += 5;
    v6 += 5;
    if ( (unsigned __int64)v3 >= v5 )
      return -1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Lock = v6;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v6);
  v9 = v3[2];
  if ( v9 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_20:
    __writecr8(CurrentIrql);
    v5 = v37;
    goto LABEL_21;
  }
  v10 = 48 * v9 - 0x58000000000LL;
  if ( MiIsDecayPfn(v3[2]) )
  {
    v13 = 48 * v9 - 0x58000000000LL;
    v7 = v9;
    v9 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v10 + 16);
    v10 = v12 + 48 * v9;
    if ( v9 == v7 )
    {
      MiUnlinkPageFromList(v13, 1uLL);
      *(_BYTE *)(v13 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v13);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_19:
      v3 -= 5;
      v7 = 0xFFFFFFFFFLL;
      v6 -= 5;
      goto LABEL_20;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    goto LABEL_24;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiLockPageAtDpcInline(v10);
  if ( (*(_BYTE *)(v10 + 34) & 7) != 2
    || *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != a1 )
  {
LABEL_18:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_19;
  }
  LockHandle.LockQueue.Lock = v6;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v6);
  v14 = v3[2];
  if ( v13 )
  {
    if ( v7 != v14 )
    {
LABEL_17:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_18;
    }
    v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v13 + 16);
  }
  if ( v9 != v14 )
    goto LABEL_17;
  v12 = 0xFFFFFA8000000000uLL;
LABEL_24:
  if ( !*v3 )
  {
    AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists(a1);
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, AvailablePagesExcludeSlists, 0LL);
  }
  --*v3;
  if ( dword_1403CBDAC == 1 )
  {
    v16 = v9 & 0x1F;
    LOBYTE(v17) = 1;
    v11 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v9 >> 5));
    if ( v16 + 1 <= 0x20 )
    {
      v18 = 1 << v16;
      goto LABEL_34;
    }
    if ( (v9 & 0x1F) == 0 )
      goto LABEL_33;
    _InterlockedOr(v11++, ((1 << (32 - (v9 & 0x1F))) - 1) << v16);
    v17 = 1LL - (32 - (unsigned int)(v9 & 0x1F));
    if ( v17 >= 0x20 )
    {
      v19 = v17 >> 5;
      v17 += -32LL * (v17 >> 5);
      do
      {
        *v11++ = -1;
        --v19;
      }
      while ( v19 );
    }
    if ( v17 )
    {
LABEL_33:
      v18 = (1 << v17) - 1;
LABEL_34:
      _InterlockedOr(v11, v18);
    }
  }
  v20 = *(_QWORD *)v10 & 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFLL;
  v22 = 0;
  if ( (*(_BYTE *)(v10 + 35) & 8) != 0 )
  {
    if ( MiIsDecayPfn(*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFLL) && v23 == v24 )
    {
      MiDeleteParentDecayNode(v10);
      v22 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(v25 + 48 * v24 + 16), v23);
      *(_QWORD *)(v27 + 16) = updated;
      MiSetPfnBlink(v29 + 48 * v28, v30, 0);
      v22 = 1;
    }
  }
  else
  {
    v3[2] = v20;
    if ( v20 == 0xFFFFFFFFFLL )
      v3[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(v12 + 48 * v20, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(v10, v20, v11, v21);
  if ( v22 == 1 )
    *(_BYTE *)(v10 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v31 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a3);
  *(_QWORD *)(v10 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v10, 0);
  v32 = 4288LL;
  if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 )
    v32 = 4992LL;
  _InterlockedDecrement64((volatile signed __int64 *)(v32 + a1));
  *(_QWORD *)(v10 + 40) &= ~0x200000000000000uLL;
  v33 = *(_BYTE *)(v10 + 34) & 0xC7;
  *(_QWORD *)v10 = 0LL;
  *(_BYTE *)(v10 + 34) = v33;
  *(_BYTE *)(v10 + 35) &= ~0x20u;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
  *(_QWORD *)(v10 + 16) = ZeroPte;
  MiSetFreshPfnFromFreeList(v10);
  if ( (v34 & 1) != 0 )
    *(_QWORD *)(v10 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v10 + 16), 4294967293LL);
  if ( !v31 )
  {
    MiReturnFreeZeroPage(v10, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v9;
}
