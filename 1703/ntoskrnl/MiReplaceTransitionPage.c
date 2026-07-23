/*
 * XREFs of MiReplaceTransitionPage @ 0x1400750E8
 * Callers:
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiDetermineModifiedPageListHead @ 0x140073B9C (MiDetermineModifiedPageListHead.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiReplaceNumaStandbyPage @ 0x140075CB4 (MiReplaceNumaStandbyPage.c)
 *     MiIsDecayPfn @ 0x140075F20 (MiIsDecayPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017C610 (KeMakeKernelDirectoryTableBase.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 v9; // cl
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  int v12; // r12d
  int v13; // eax
  unsigned int PfnPriority; // eax
  unsigned int v15; // r12d
  _KSPIN_LOCK_QUEUE *v16; // r8
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // r11
  int v24; // r10d
  _QWORD *v25; // r8
  __int64 updated; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  volatile signed __int32 *v30; // r8
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ebx
  unsigned __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r10
  __int64 KernelDirectoryTableBase; // rax
  __int64 v43; // r10
  unsigned __int64 result; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v47; // [rsp+90h] [rbp+48h]
  __int64 v48; // [rsp+98h] [rbp+50h]
  unsigned __int64 v50; // [rsp+A8h] [rbp+60h]

  v3 = 0xFFFFFF;
  v47 = 0xFFFFFF;
  v6 = (a1 + 0x58000000000LL) / 48;
  v50 = v6;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = (a2 + 0x58000000000LL) / 48;
  v48 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v7 >> 40) & 0x3FF));
  v9 = *(_BYTE *)(a1 + 34) & 7;
  v10 = *(_QWORD *)(v48 + 8LL * v9 + 3960);
  if ( v9 == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v6, 1LL) << 58);
  else
    v7 = *(_QWORD *)(a2 + 40);
  v11 = v7 >> 58;
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(a1 + 34) >> 6, 1LL);
  MiCopyPfnEntry(a2, a1);
  *(_QWORD *)(a2 + 40) = ((unsigned __int64)(unsigned __int16)v11 << 58) | *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v6 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v6, a3, 6LL);
  _InterlockedOr(v45, 0);
  v12 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v13 = *(_DWORD *)(v10 + 8);
  if ( v13 == 2 )
  {
    PfnPriority = MiGetPfnPriority(a1);
    v15 = *(unsigned __int8 *)(a1 + 35);
    v3 = PfnPriority;
    v47 = PfnPriority;
    LockHandle.LockQueue.Next = v16;
    v10 = v48 + 8 * (PfnPriority + 4 * (PfnPriority + 68LL));
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock(&LockHandle);
    v12 = (v15 >> 3) & 1;
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v13 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      {
        v10 = v48 + 40 * ((unsigned __int16)v11 + 80LL);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock(&LockHandle);
      }
      else
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock(&LockHandle);
        v10 = MiDetermineModifiedPageListHead(a2, v48);
      }
      goto LABEL_12;
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock(&LockHandle);
  }
  if ( v3 == 0xFFFFFF )
  {
LABEL_12:
    v17 = 0LL;
    goto LABEL_13;
  }
  v17 = 1LL;
LABEL_13:
  v18 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v19 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v18 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  MiSetPfnBlink(a2, v19, v17);
  v22 = 0xFFFFFFFFFLL;
  v23 = 0xFFFFFA8000000000uLL;
  if ( v18 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v10 + 24) = v8;
  }
  else
  {
    v21 = 48 * v18 - 0x58000000000LL;
    if ( v47 != 0xFFFFFF && v12 == 1 && (unsigned int)MiIsDecayPfn(v18, 0xFFFFFFFFFLL, v20, v21) == 1 )
    {
      *(_QWORD *)(v21 + 40) ^= v22 & (*(_QWORD *)(v21 + 40) ^ v8);
      goto LABEL_25;
    }
    MiSetPfnBlink(v21, v8, 0LL);
    v22 = 0xFFFFFFFFFLL;
    v23 = 0xFFFFFA8000000000uLL;
  }
  v24 = v47;
LABEL_25:
  if ( v19 == v22 )
  {
    *(_QWORD *)(v10 + 16) = v8;
  }
  else
  {
    v25 = (_QWORD *)(v23 + 48 * v19);
    if ( v24 != 0xFFFFFF && v12 == 1 && (unsigned int)MiIsDecayPfn(v19, v22, v25, v21) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v25[2], v8);
      *(_QWORD *)(v27 + 16) = updated;
    }
    else
    {
      *v25 ^= v22 & (v8 ^ *v25);
    }
  }
  if ( v24 != 0xFFFFFF )
    MiReplaceNumaStandbyPage(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_14036C91C == 1 )
  {
    v28 = v50 & 0x1F;
    LOBYTE(v29) = 1;
    v30 = (volatile signed __int32 *)stru_14036C970.Buffer + (v50 >> 5);
    if ( v28 + 1 <= 0x20 )
    {
      v31 = 1 << v28;
LABEL_43:
      _InterlockedOr(v30, v31);
      goto LABEL_44;
    }
    if ( (v50 & 0x1F) == 0 )
      goto LABEL_42;
    _InterlockedOr(v30++, ((1 << (32 - (v50 & 0x1F))) - 1) << v28);
    v29 = 1LL - (32 - (unsigned int)(v50 & 0x1F));
    if ( v29 >= 0x20 )
    {
      v32 = v29 >> 5;
      v29 += -32LL * (v29 >> 5);
      do
      {
        *v30++ = -1;
        --v32;
      }
      while ( v32 );
    }
    if ( v29 )
    {
LABEL_42:
      v31 = (1 << v29) - 1;
      goto LABEL_43;
    }
  }
LABEL_44:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _InterlockedOr(v45, 0);
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(a1, 0LL, 1LL);
  v33 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  if ( v33 == v50 )
  {
    v34 = 0;
    v35 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v34 = 1;
    v35 = MiMapPageInHyperSpaceWorker(v33, 0LL, 0x80000000LL) + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  }
  v36 = MI_READ_PTE_LOCK_FREE(v35);
  v37 = MiUpdateTransitionPteFrame(v36, v8);
  *v38 = v37;
  if ( (unsigned int)MiPteInShadowRange(v38) )
    MiWritePteShadow(v40);
  if ( v34 == 1 )
  {
    LOBYTE(v39) = 17;
    MiUnmapPageInHyperSpaceWorker(v41, v39, 0x80000000LL);
    v41 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (((unsigned int)MiGetSystemRegionType(v41) - 5) & 0xFFFFFFF7) == 0 )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v8 << 12);
    *(_QWORD *)(v43 - 1048) = KernelDirectoryTableBase;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 == 1 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  result = 0xFC3FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return result;
}
