/*
 * XREFs of MiReplaceTransitionPage @ 0x1400031F8
 * Callers:
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MiReplaceNumaStandbyPage @ 0x14000391C (MiReplaceNumaStandbyPage.c)
 *     MiIsDecayPfn @ 0x140003B48 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x140003B70 (MiDetermineModifiedPageListHead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140070A08 (KeMakeKernelDirectoryTableBase.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 */

char __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 v9; // cl
  __int64 v10; // r15
  unsigned __int16 v11; // bx
  int v12; // r13d
  int v13; // eax
  unsigned int PfnPriority; // eax
  unsigned int v15; // r13d
  _KSPIN_LOCK_QUEUE *v16; // r8
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r11
  int v23; // r10d
  _QWORD *v24; // r8
  __int64 updated; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdx
  volatile signed __int32 *v29; // r8
  unsigned int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ebx
  unsigned __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // r10
  __int64 v38; // rdx
  unsigned __int64 v39; // r10
  __int64 KernelDirectoryTableBase; // rax
  __int64 v41; // r10
  char result; // al
  signed __int32 v43[8]; // [rsp+0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v45; // [rsp+80h] [rbp+40h]
  __int64 v46; // [rsp+88h] [rbp+48h]
  unsigned __int64 v47; // [rsp+98h] [rbp+58h]

  v45 = 0xFFFFFF;
  v6 = (a1 + 0x58000000000LL) / 48;
  v47 = v6;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = (a2 + 0x58000000000LL) / 48;
  v46 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v7 >> 40) & 0x3FF));
  v9 = *(_BYTE *)(a1 + 34) & 7;
  v10 = *(_QWORD *)(v46 + 8LL * v9 + 4152);
  if ( v9 == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v6, 1LL) << 58);
  else
    v7 = *(_QWORD *)(a2 + 40);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(a1 + 34) >> 6, 1LL);
  MiCopyPfnEntry(a2, a1);
  v11 = v7 >> 58;
  *(_QWORD *)(a2 + 40) = ((unsigned __int64)v11 << 58) | *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v6 )
    *(_QWORD *)(a2 + 40) ^= (*(_QWORD *)(a2 + 40) ^ v8) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v6, a3, 6LL);
  _InterlockedOr(v43, 0);
  v12 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v13 = *(_DWORD *)(v10 + 8);
  if ( v13 == 2 )
  {
    PfnPriority = MiGetPfnPriority(a1);
    v15 = *(unsigned __int8 *)(a1 + 35);
    v45 = PfnPriority;
    LockHandle.LockQueue.Next = v16;
    v10 = v46 + 8 * (5LL * PfnPriority + 296);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock(&LockHandle, v10 + 32);
    v12 = (v15 >> 3) & 1;
    goto LABEL_14;
  }
  LockHandle.LockQueue.Next = 0LL;
  if ( v13 == 3 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
      KxAcquireQueuedSpinLock(&LockHandle, v10 + 32);
      v10 = MiDetermineModifiedPageListHead(a2, v46);
      goto LABEL_14;
    }
    v10 = v46 + 8 * (v11 + 4 * (v11 + 106LL));
  }
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
  KxAcquireQueuedSpinLock(&LockHandle, v10 + 32);
LABEL_14:
  v17 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v18 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 = v17 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  MiSetPfnBlink(a2, v18, v45 != 0xFFFFFF);
  v21 = 0xFFFFFFFFFLL;
  v22 = 0xFFFFFA8000000000uLL;
  if ( v17 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v10 + 24) = v8;
  }
  else
  {
    v20 = 48 * v17 - 0x58000000000LL;
    if ( v45 != 0xFFFFFF && v12 == 1 && (unsigned int)MiIsDecayPfn(v17, 0xFFFFFFFFFLL, v19, v20) == 1 )
    {
      *(_QWORD *)(v20 + 40) ^= v21 & (*(_QWORD *)(v20 + 40) ^ v8);
      goto LABEL_22;
    }
    MiSetPfnBlink(v20, v8, 0LL);
    v21 = 0xFFFFFFFFFLL;
    v22 = 0xFFFFFA8000000000uLL;
  }
  v23 = v45;
LABEL_22:
  if ( v18 == v21 )
  {
    *(_QWORD *)(v10 + 16) = v8;
  }
  else
  {
    v24 = (_QWORD *)(v22 + 48 * v18);
    if ( v23 != 0xFFFFFF && v12 == 1 && (unsigned int)MiIsDecayPfn(v18, v21, v24, v20) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v24[2], v8);
      *(_QWORD *)(v26 + 16) = updated;
    }
    else
    {
      *v24 ^= v21 & (v8 ^ *v24);
    }
  }
  if ( v23 != 0xFFFFFF )
    MiReplaceNumaStandbyPage(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_1403CBDAC == 1 )
  {
    v27 = v47 & 0x1F;
    LOBYTE(v28) = 1;
    v29 = (volatile signed __int32 *)(qword_1403CBE08 + 4 * (v47 >> 5));
    if ( v27 + 1 <= 0x20 )
    {
      v30 = 1 << v27;
LABEL_40:
      _InterlockedOr(v29, v30);
      goto LABEL_41;
    }
    if ( (v47 & 0x1F) == 0 )
      goto LABEL_39;
    _InterlockedOr(v29++, ((1 << (32 - (v47 & 0x1F))) - 1) << v27);
    v28 = 1LL - (32 - (unsigned int)(v47 & 0x1F));
    if ( v28 >= 0x20 )
    {
      v31 = v28 >> 5;
      v28 += -32LL * (v28 >> 5);
      do
      {
        *v29++ = -1;
        --v31;
      }
      while ( v31 );
    }
    if ( v28 )
    {
LABEL_39:
      v30 = (1 << v28) - 1;
      goto LABEL_40;
    }
  }
LABEL_41:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _InterlockedOr(v43, 0);
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(a1, 0LL, 1LL);
  v32 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  if ( v32 == v47 )
  {
    v33 = 0;
    v34 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v33 = 1;
    v34 = MiMapPageInHyperSpaceWorker(v32, 0LL, 0x80000000LL) + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  }
  v35 = MI_READ_PTE_LOCK_FREE(v34);
  v36 = MiUpdateTransitionPteFrame(v35, v8);
  *v37 = v36;
  if ( (unsigned int)MiPteInShadowRange(v37) )
    MiWritePteShadow();
  if ( v33 == 1 )
  {
    LOBYTE(v38) = 17;
    MiUnmapPageInHyperSpaceWorker(v39, v38, 0x80000000LL);
    v39 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (((unsigned int)MiGetSystemRegionType(v39) - 5) & 0xFFFFFFF7) == 0 )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v8 << 12);
    *(_QWORD *)(v41 - 1048) = KernelDirectoryTableBase;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 == 1 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  result = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 35) = result;
  return result;
}
