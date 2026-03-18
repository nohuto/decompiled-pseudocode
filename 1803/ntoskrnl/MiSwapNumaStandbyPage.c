/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1402664E8
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 * Callees:
 *     MiCanPageMove @ 0x14000318C (MiCanPageMove.c)
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MiIsDecayPfn @ 0x140003B48 (MiIsDecayPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140070A08 (KeMakeKernelDirectoryTableBase.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401500F4 (MiUnlinkNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiInsertNumaStandbyPage @ 0x140265A28 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x140266478 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // r12d
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned int v8; // r10d
  __int64 v9; // r11
  unsigned __int8 *v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  int v13; // edx
  __int64 v14; // r11
  int v15; // r15d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // r12
  ULONG_PTR *v19; // r15
  ULONG_PTR v20; // r13
  __int64 v21; // rbx
  __int64 v22; // r10
  __int64 v23; // r11
  ULONG_PTR v25; // r9
  unsigned __int64 v26; // rdx
  volatile signed __int32 *v27; // r8
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned __int64 *v33; // r9
  __int64 v34; // r10
  __int64 updated; // rax
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // r10
  unsigned __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r14
  __int64 KernelDirectoryTableBase; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // r10
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // r10
  char v53; // di
  char v54; // al
  char v55; // r8
  signed __int32 v56[8]; // [rsp+0h] [rbp-80h] BYREF
  int v57; // [rsp+20h] [rbp-60h]
  unsigned __int64 v58; // [rsp+28h] [rbp-58h]
  int v59; // [rsp+30h] [rbp-50h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-28h]
  int v63; // [rsp+60h] [rbp-20h]
  __int64 v64; // [rsp+68h] [rbp-18h]
  __int64 v65; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v66; // [rsp+78h] [rbp-8h]
  int v67; // [rsp+C0h] [rbp+40h]

  v4 = a2;
  v5 = a1;
  v6 = MmNumberOfChannels;
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = 0;
  v9 = 1984LL * a2;
  v10 = 0LL;
  v67 = 0;
  v11 = *(_QWORD *)(v7 + 40);
  v59 = MmNumberOfChannels;
  v12 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v11 >> 40) & 0x3FF));
  v13 = 0;
  v65 = v12;
  v57 = 0;
  v14 = *(_QWORD *)(v12 + 16) + v9;
  v64 = v14;
  v15 = *(_DWORD *)(v14 + 1888) & 1;
  v63 = v15;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v10 = (unsigned __int8 *)(v14 + 1914);
    if ( v15 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v6 = 1;
        v67 = a3;
        v59 = 1;
        v8 = a3;
        v10 = 0LL;
      }
      else if ( (a4 & 8) != 0 )
      {
        v10 = (unsigned __int8 *)(v14 + 1918);
      }
    }
    else
    {
      if ( v11 >> 58 == v4 )
        return v5;
      v13 = a3;
      v57 = a3;
    }
  }
  v66 = &v10[v6];
  while ( 1 )
  {
    if ( v10 )
    {
      if ( v15 )
      {
        v8 = *v10;
        v67 = v8;
        if ( *(_QWORD *)(v7 + 40) >> 58 == v4 && v8 == ((*(_QWORD *)(v7 + 40) >> 36) & 3) )
          return v5;
      }
      else
      {
        v67 = v13;
        v8 = v13;
        v13 = v13 + 1 < v6 ? v13 + 1 : 0;
        v57 = v13;
      }
    }
    v16 = v12 + 2368;
    v58 = v12 + 2368;
    v62 = v12 + 2688;
    if ( v12 + 2368 < (unsigned __int64)(v12 + 2688) )
      break;
LABEL_28:
    if ( ++v10 >= v66 )
      return v5;
    v6 = v59;
    v15 = v63;
    v4 = a2;
  }
  v17 = v62;
  v18 = (unsigned __int64 *)(v12 + 2400);
  v19 = (ULONG_PTR *)(v14 + 192LL * v8 + 864);
  while ( *v19 == 0xFFFFFFFFFLL )
  {
LABEL_26:
    v16 += 40LL;
    v18 += 5;
    v19 += 3;
    v58 = v16;
    if ( v16 >= v17 )
    {
      v13 = v57;
      v8 = v67;
      v14 = v64;
      v12 = v65;
      goto LABEL_28;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v18;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v18);
  v20 = *v19;
  if ( *v19 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_25:
    __writecr8((unsigned __int8)CurrentIrql);
    v17 = v62;
    goto LABEL_26;
  }
  v21 = 48 * v20 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    goto LABEL_30;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiLockPageAtDpcInline(48 * v20 - 0x58000000000LL);
  if ( (*(_BYTE *)(v21 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 -= 5;
    v16 = v58 - 40;
    v19 -= 3;
    goto LABEL_25;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v18;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v18);
  if ( v20 != *v19 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 -= 5;
    v16 = v58 - 40;
    v19 -= 3;
    goto LABEL_25;
  }
LABEL_30:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_34;
  }
  if ( (unsigned int)MiCanPageMove(48 * v20 - 0x58000000000LL) )
  {
    if ( dword_1403CBDAC == 1 )
    {
      v25 = v20 & 0x1F;
      LOBYTE(v26) = 1;
      v27 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v20 >> 5));
      if ( v25 + 1 > 0x20 )
      {
        if ( (v20 & 0x1F) != 0 )
        {
          _InterlockedOr(v27++, ((1 << (32 - (v20 & 0x1F))) - 1) << v25);
          v26 = 1LL - (32 - (unsigned int)(v20 & 0x1F));
          if ( v26 >= 0x20 )
          {
            v29 = v26 >> 5;
            v26 += -32LL * (v26 >> 5);
            do
            {
              *v27++ = -1;
              --v29;
            }
            while ( v29 );
          }
          if ( !v26 )
            goto LABEL_46;
        }
        v28 = (1 << v26) - 1;
      }
      else
      {
        v28 = 1 << v25;
      }
      _InterlockedOr(v27, v28);
    }
LABEL_46:
    v30 = v23 & *(_QWORD *)v21;
    v31 = v23 & *(_QWORD *)(v21 + 24);
    if ( (*(_BYTE *)(v21 + 35) & 8) != 0 )
    {
      if ( MiIsDecayPfn(v31) )
      {
        updated = MiUpdateTransitionPteFrame(v33[2]);
        *(_QWORD *)(v36 + 16) = updated;
      }
      else
      {
        *v33 = v34 | *v33 & 0xFFFFFFF000000000uLL;
      }
      if ( MiIsDecayPfn(v32) )
        *(_QWORD *)(v37 + 40) = v38 | *(_QWORD *)(v37 + 40) & 0xFFFFFFF000000000uLL;
      else
        MiSetPfnBlink(v37, v5, 0);
      v39 = v58;
    }
    else
    {
      v39 = v58;
      if ( v31 == v23 )
        *(_QWORD *)(v58 + 16) = v5;
      else
        *(_QWORD *)(v22 + 48 * v31) = v23 & v5 | *(_QWORD *)(v22 + 48 * v31) & 0xFFFFFFF000000000uLL;
      if ( v30 == v23 )
        *(_QWORD *)(v39 + 24) = v5;
      else
        MiSetPfnBlink(v22 + 48 * v30, v5, 0);
    }
    MiUnlinkNumaStandbyPage(48 * v20 - 0x58000000000LL);
    MiFinalizePageAttribute(v7, *(unsigned __int8 *)(v21 + 34) >> 6, 1u);
    MiCopyPfnEntry(v7, 48 * v20 - 0x58000000000LL);
    MiInsertNumaStandbyPage(v40);
    _InterlockedOr(v56, 0);
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v7 + 31)) & 0xF) != 0 )
      MiSetPfnTbFlushStamp(v7, KiTbFlushTimeStamp, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v42 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL;
    if ( v42 == v20 )
    {
      *(_QWORD *)(v7 + 40) = v5 & 0xFFFFFFFFFLL | *(_QWORD *)(v7 + 40) & 0xFFFFFFF000000000uLL;
      KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v5 << 12);
      *(_QWORD *)((v44 | 0x8000000000000000uLL) - 1048) = KernelDirectoryTableBase;
      v45 = *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL;
    }
    else
    {
      v45 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v41)
          + 8LL * ((*(_DWORD *)(v21 + 8) >> 3) & 0x1FF);
    }
    v46 = MI_READ_PTE_LOCK_FREE(v45);
    v47 = MiUpdateTransitionPteFrame(v46);
    *v48 = v47;
    if ( MiPteInShadowRange((unsigned __int64)v48) )
      MiWritePteShadow(v50, v49, v51);
    if ( v42 != v20 )
      MiUnmapPageInHyperSpaceWorker(v52, 0x11u, 0x80000000);
    MiCopyPage(v5, v20, 0LL, 6);
    _InterlockedOr(v56, 0);
    v53 = KiTbFlushTimeStamp;
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v7 + 31)) & 0xF) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v39 + 32);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v39 + 32));
      MiSetPfnTbFlushStamp(v7, v53, 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(v21 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v21 + 34) &= 0xC7u;
    *(_BYTE *)(v21 + 35) &= ~0x20u;
    _InterlockedOr(v56, 0);
    MiSetPfnTbFlushStamp(48 * v20 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
    *(_QWORD *)v21 = 0LL;
    MiSetPfnBlink(48 * v20 - 0x58000000000LL, 0LL, 1);
    v54 = *(_BYTE *)(v21 + 34) & 0xF8 | 5;
    *(_QWORD *)(v21 + 16) = ZeroPte;
    *(_BYTE *)(v21 + 34) = v54;
    MiSetFreshPfnFromFreeList(48 * v20 - 0x58000000000LL);
    v55 = *(_BYTE *)(v21 + 35);
    *(_QWORD *)(v21 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    *(_BYTE *)(v21 + 35) = v55 & 0xF7;
    *(_BYTE *)(v21 + 35) &= 0xF8u;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    return v20;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v20 - 0x58000000000LL);
  *(_QWORD *)v21 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v7);
  v5 = v20;
LABEL_34:
  __writecr8((unsigned __int8)CurrentIrql);
  return v5;
}
