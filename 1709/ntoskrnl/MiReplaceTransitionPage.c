/*
 * XREFs of MiReplaceTransitionPage @ 0x1400C75F8
 * Callers:
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiReplaceNumaStandbyPage @ 0x1400CB30C (MiReplaceNumaStandbyPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiIsDecayPfn @ 0x14012CFD4 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x14012E8E0 (MiDetermineModifiedPageListHead.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017BD30 (KeMakeKernelDirectoryTableBase.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 */

unsigned __int64 __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // r15d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 v9; // cl
  __int64 v10; // r13
  unsigned __int16 v11; // bx
  int v12; // r12d
  int v13; // eax
  unsigned int PfnPriority; // eax
  unsigned int v15; // ebx
  int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  int IsDecayPfn; // eax
  __int64 v23; // rdx
  int v24; // r10d
  _QWORD *v25; // r8
  __int64 updated; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdx
  volatile signed __int32 *v31; // r8
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 *v36; // r10
  __int64 PteShadow; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r9
  _QWORD *v41; // r10
  unsigned __int64 v42; // r11
  __int64 KernelDirectoryTableBase; // rax
  __int64 v44; // r10
  unsigned __int64 result; // rax
  signed __int32 v46[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v49; // [rsp+90h] [rbp+48h]
  int v50; // [rsp+98h] [rbp+50h]
  __int64 v52; // [rsp+A8h] [rbp+60h]

  v3 = 0xFFFFFF;
  v50 = 0xFFFFFF;
  v6 = (a1 + 0x58000000000LL) / 48;
  v47 = v6;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = (a2 + 0x58000000000LL) / 48;
  v52 = *(_QWORD *)(qword_140388AF0 + 8 * ((v7 >> 40) & 0x3FF));
  v9 = *(_BYTE *)(a1 + 34) & 7;
  v10 = *(_QWORD *)(v52 + 8LL * v9 + 4088);
  if ( v9 == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v6, 1LL) << 58);
  else
    v7 = *(_QWORD *)(a2 + 40);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(a1 + 34) >> 6, 1u);
  MiCopyPfnEntry(a2, a1);
  v11 = v7 >> 58;
  *(_QWORD *)(a2 + 40) = ((unsigned __int64)v11 << 58) | *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v6 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v6, a3, 6);
  v12 = 0;
  _InterlockedOr(v46, 0);
  v49 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v13 = *(_DWORD *)(v10 + 8);
  if ( v13 == 2 )
  {
    PfnPriority = MiGetPfnPriority(a1);
    v15 = *(unsigned __int8 *)(a1 + 35);
    v3 = PfnPriority;
    v50 = PfnPriority;
    LockHandle.LockQueue.Next = 0LL;
    v10 = v52 + 8 * (PfnPriority + 4 * (PfnPriority + 72LL));
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
    v49 = (v15 >> 3) & 1;
  }
  else
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v13 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      {
        v10 = v52 + 8 * (v11 + 4 * (v11 + 104LL));
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
      }
      else
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
        v10 = MiDetermineModifiedPageListHead(a2, v52);
      }
      goto LABEL_12;
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
  }
  if ( v3 == 0xFFFFFF )
  {
LABEL_12:
    v16 = 0;
    goto LABEL_13;
  }
  v16 = 1;
LABEL_13:
  v17 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v18 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 = v17 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  MiSetPfnBlink(a2, v18, v16);
  v21 = 0xFFFFFFFFFLL;
  if ( v17 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v10 + 24) = v8;
  }
  else
  {
    v20 = 48 * v17 - 0x58000000000LL;
    if ( v50 != 0xFFFFFF && v49 == 1 )
    {
      IsDecayPfn = MiIsDecayPfn(v17, 1LL, v19, v20);
      if ( IsDecayPfn == (_DWORD)v23 )
      {
        *(_QWORD *)(v20 + 40) ^= v21 & (v8 ^ *(_QWORD *)(v20 + 40));
        goto LABEL_25;
      }
    }
    MiSetPfnBlink(v20, v8, 0);
    v21 = 0xFFFFFFFFFLL;
  }
  v23 = v49;
  v24 = v50;
LABEL_25:
  if ( v18 == v21 )
  {
    *(_QWORD *)(v10 + 16) = v8;
  }
  else
  {
    v25 = (_QWORD *)(48 * v18 - 0x58000000000LL);
    if ( v24 != 0xFFFFFF && (_DWORD)v23 == 1 && (unsigned int)MiIsDecayPfn(v18, v23, v25, v20) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v25[2], v8, v25);
      *(_QWORD *)(v27 + 16) = updated;
    }
    else
    {
      *v25 ^= v21 & (v8 ^ *v25);
    }
  }
  if ( v24 != 0xFFFFFF )
    MiReplaceNumaStandbyPage(a1, a2);
  v28 = v47;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_140388B14 == 1 )
  {
    v29 = v28 & 0x1F;
    LOBYTE(v30) = 1;
    v31 = (volatile signed __int32 *)stru_140388B68.Buffer + (v28 >> 5);
    if ( v29 + 1 <= 0x20 )
    {
      v32 = 1 << v29;
LABEL_43:
      _InterlockedOr(v31, v32);
      goto LABEL_44;
    }
    if ( (v28 & 0x1F) == 0 )
      goto LABEL_42;
    _InterlockedOr(v31++, ((1 << (32 - (v28 & 0x1F))) - 1) << v29);
    v30 = 1LL - (32 - (unsigned int)(v28 & 0x1F));
    if ( v30 >= 0x20 )
    {
      v33 = v30 >> 5;
      v30 += -32LL * (v30 >> 5);
      do
      {
        *v31++ = -1;
        --v33;
      }
      while ( v33 );
    }
    if ( v30 )
    {
LABEL_42:
      v32 = (1 << v30) - 1;
      goto LABEL_43;
    }
  }
LABEL_44:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _InterlockedOr(v46, 0);
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(a1, 0LL, 1);
  v35 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  if ( v35 == v28 )
  {
    v36 = (__int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  }
  else
  {
    v12 = 1;
    v36 = (__int64 *)(MiMapPageInHyperSpaceWorker(v35, 0LL, 0x80000000LL) + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF));
  }
  PteShadow = *v36;
  if ( (unsigned __int64)v36 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v36 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v36, *v36);
  v38 = MiUpdateTransitionPteFrame(PteShadow, v8, v34);
  *v41 = v38;
  if ( (unsigned __int64)v41 >= v42 )
  {
    v39 = v40;
    if ( (unsigned __int64)v41 <= v40 )
      MiWritePteShadow(v41, v38);
  }
  if ( v12 == 1 )
  {
    LOBYTE(v39) = 17;
    MiUnmapPageInHyperSpaceWorker(v41, v39, 0x80000000LL);
    v41 = (_QWORD *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (((unsigned int)MiGetSystemRegionType((unsigned __int64)v41) - 5) & 0xFFFFFFF7) == 0 )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v8 << 12);
    *(_QWORD *)(v44 - 1048) = KernelDirectoryTableBase;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v49 == 1 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  result = 0xFC3FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return result;
}
