/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140138F10
 * Callers:
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x140138E54 (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x14021FA24 (MiPruneStandbyPages.c)
 * Callees:
 *     MiDeleteParentDecayNode @ 0x14001683C (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1400168C8 (MiRemoveDecayClusterTimer.c)
 *     MiDecreaseAvailablePages @ 0x140075ABC (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiIsDecayPfn @ 0x140075F20 (MiIsDecayPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiReturnFreeZeroPage @ 0x14010AE0C (MiReturnFreeZeroPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401393EC (MiUnlinkNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, __int16 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  signed __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  bool v14; // zf
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 updated; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // r9
  signed __int64 v30; // rcx
  int v31; // edi
  char v32; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp+8h]

  v3 = (_QWORD *)(a1 + 2176);
  v34 = a1 + 2176 + 40LL * a2;
  if ( a1 + 2176 >= v34 )
    return -1LL;
  v5 = a1 + 2176 + 40LL * a2;
  v6 = (unsigned __int64 *)(a1 + 2208);
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_22:
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
  v8 = v3[2];
  if ( v8 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_21:
    __writecr8(CurrentIrql);
    v5 = v34;
    goto LABEL_22;
  }
  v9 = 48 * v8 - 0x58000000000LL;
  if ( MiIsDecayPfn(v3[2]) )
  {
    v12 = 48 * v8 - 0x58000000000LL;
    v13 = v8;
    v8 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v9 + 16);
    v9 = 48 * v8 - 0x58000000000LL;
    if ( v8 == v13 )
    {
      MiUnlinkPageFromList(v12, 1);
      *(_BYTE *)(v12 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v12);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_20:
      v3 -= 5;
      v6 -= 5;
      goto LABEL_21;
    }
  }
  else
  {
    v12 = 0LL;
    v13 = v11;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    goto LABEL_25;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiLockPageAtDpcInline(v9);
  if ( (*(_BYTE *)(v9 + 34) & 7) != 2
    || *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)) != a1 )
  {
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_20;
  }
  LockHandle.LockQueue.Lock = v6;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v6);
  if ( v12 )
  {
    if ( v13 != v3[2] )
    {
LABEL_18:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_19;
    }
    v14 = v8 == MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v12 + 16);
  }
  else
  {
    v14 = v8 == v3[2];
  }
  if ( !v14 )
    goto LABEL_18;
  v11 = 0xFFFFFFFFFLL;
LABEL_25:
  if ( !*v3 )
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, *(_QWORD *)(a1 + 5760), 0LL);
  --*v3;
  if ( dword_14036C91C == 1 )
  {
    v16 = v8 & 0x1F;
    LOBYTE(v17) = 1;
    v10 = (signed __int64)stru_14036C970.Buffer + 4 * (v8 >> 5);
    if ( v16 + 1 <= 0x20 )
    {
      v18 = 1 << v16;
      goto LABEL_35;
    }
    if ( (v8 & 0x1F) == 0 )
      goto LABEL_34;
    _InterlockedOr((volatile signed __int32 *)v10, ((1 << (32 - (v8 & 0x1F))) - 1) << v16);
    v10 += 4LL;
    v17 = 1LL - (32 - (unsigned int)(v8 & 0x1F));
    if ( v17 >= 0x20 )
    {
      v19 = v17 >> 5;
      v17 += -32LL * (v17 >> 5);
      do
      {
        *(_DWORD *)v10 = -1;
        v10 += 4LL;
        --v19;
      }
      while ( v19 );
    }
    if ( v17 )
    {
LABEL_34:
      v18 = (1 << v17) - 1;
LABEL_35:
      _InterlockedOr((volatile signed __int32 *)v10, v18);
    }
  }
  v20 = v11 & *(_QWORD *)v9;
  v21 = 0;
  if ( (*(_BYTE *)(v9 + 35) & 8) != 0 )
  {
    if ( MiIsDecayPfn(v11 & *(_QWORD *)(v9 + 24)) && v22 == v23 )
    {
      MiDeleteParentDecayNode(v9);
      v21 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(48 * v23 - 0x58000000000LL + 16), v22);
      *(_QWORD *)(v25 + 16) = updated;
      MiSetPfnBlink(v27 + 48 * v26, v28, 0);
      v21 = 1;
    }
  }
  else
  {
    v3[2] = v20;
    if ( v20 == v11 )
    {
      v3[3] = v11;
    }
    else
    {
      v29 = 48 * v20 - 0x58000000000LL;
      v20 = *(_QWORD *)(v29 + 24);
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), v11 | v20, v20);
      if ( v20 != v10 )
      {
        do
        {
          v30 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), v11 | v10, v10);
        }
        while ( v30 != v10 );
      }
    }
  }
  MiUnlinkNumaStandbyPage(v9, v20, v10);
  if ( v21 == 1 )
    *(_BYTE *)(v9 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v31 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a3);
  *(_QWORD *)(v9 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v9, 0);
  if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4096));
  else
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4800));
  *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v9 + 34) &= 0xC7u;
  *(_BYTE *)(v9 + 35) &= ~0x20u;
  v32 = *(_BYTE *)(v9 + 34) & 0xFD;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_BYTE *)(v9 + 34) = v32 | 5;
  MiSetFreshPfnFromFreeList(v9);
  if ( !v31 )
  {
    MiReturnFreeZeroPage(v9, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v8;
}
