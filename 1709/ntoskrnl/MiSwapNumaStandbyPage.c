/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1401365D0
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1401353D0 (MiPruneStandbyPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiCanPageMove @ 0x1400CB2A0 (MiCanPageMove.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiIsDecayPfn @ 0x14012CFD4 (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x140136450 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x140136F30 (MiInsertNumaStandbyPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017BD30 (KeMakeKernelDirectoryTableBase.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiReuseStandbyPage @ 0x14022B5FC (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v5; // r12
  unsigned int v8; // r15d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned __int64 v11; // r9
  _QWORD *v12; // r13
  unsigned int v13; // r8d
  unsigned __int8 *v14; // rax
  __int64 v15; // rsi
  int v16; // r14d
  unsigned __int8 *v18; // r9
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // r15
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rsi
  ULONG_PTR *v25; // r14
  unsigned __int8 CurrentIrql; // r13
  _QWORD *v27; // rdx
  ULONG_PTR v28; // r12
  __int64 v29; // rdi
  __int64 v30; // r14
  ULONG_PTR v31; // r10
  unsigned __int64 v32; // r9
  volatile signed __int32 *v33; // r8
  unsigned int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // r10
  unsigned __int64 v37; // rcx
  _QWORD *v38; // r8
  unsigned __int64 v39; // r10
  __int64 v40; // r11
  __int64 updated; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r11
  __int64 v45; // r9
  signed __int64 v46; // rdx
  signed __int64 v47; // r8
  signed __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // rcx
  __int64 Next; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rsi
  int v54; // r8d
  int v55; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v57; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v59; // r10
  unsigned __int64 *v60; // rcx
  unsigned __int64 v61; // r11
  __int64 *v62; // r10
  __int64 PteShadow; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // r10
  unsigned __int64 v66; // r11
  unsigned __int64 HyperPte; // r14
  unsigned int v68; // esi
  unsigned __int64 v69; // r14
  _QWORD *v70; // r10
  struct _KPRCB *v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // esi
  __int64 v74; // r14
  unsigned __int64 v75; // rcx
  char v76; // al
  unsigned __int64 v77; // r8
  signed __int32 v78[8]; // [rsp+0h] [rbp-69h] BYREF
  unsigned int v79; // [rsp+20h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v81; // [rsp+40h] [rbp-29h]
  unsigned __int8 *v82; // [rsp+48h] [rbp-21h]
  int v83; // [rsp+50h] [rbp-19h]
  _QWORD *v84; // [rsp+58h] [rbp-11h]
  int v85; // [rsp+60h] [rbp-9h]
  __int64 v86; // [rsp+68h] [rbp-1h]
  _QWORD *v87; // [rsp+70h] [rbp+7h]
  unsigned __int8 *v88; // [rsp+78h] [rbp+Fh]
  __int64 v89; // [rsp+80h] [rbp+17h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = a2;
  v8 = MmNumberOfChannels;
  v9 = 48 * a1 - 0x58000000000LL;
  v79 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(v9 + 40);
  v86 = v9;
  v82 = 0LL;
  v81 = 0;
  v83 = MmNumberOfChannels;
  v12 = *(_QWORD **)(qword_140388AF0 + 8 * ((v11 >> 40) & 0x3FF));
  v13 = 0;
  v87 = v12;
  v14 = 0LL;
  v15 = v12[2] + 8256 * v5;
  v89 = v15;
  v16 = *(_DWORD *)(v15 + 8160) & 1;
  v85 = v16;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v14 = (unsigned __int8 *)(v15 + 8185);
    v82 = (unsigned __int8 *)(v15 + 8185);
    if ( v16 )
    {
      if ( (a4 & 0x10) != 0 )
      {
        v8 = 1;
        v79 = a3;
        v83 = 1;
        v13 = a3;
        v14 = 0LL;
        v82 = 0LL;
      }
      else if ( (a4 & 8) != 0 )
      {
        v14 = (unsigned __int8 *)(v15 + 8189);
        v82 = (unsigned __int8 *)(v15 + 8189);
      }
    }
    else
    {
      if ( v11 >> 58 == (_DWORD)v5 )
        return a1;
      v14 = v82;
      v10 = a3;
      v81 = a3;
    }
  }
  v18 = &v14[v8];
  v88 = v18;
  while ( 1 )
  {
    if ( v14 )
    {
      if ( v16 )
      {
        v13 = *v14;
        v20 = *(_QWORD *)(v9 + 40);
        v79 = v13;
        if ( v20 >> 58 == (_DWORD)v5 && v13 == ((v20 >> 36) & 3) )
          return a1;
      }
      else
      {
        v19 = v10 + 1;
        v79 = v10;
        v13 = v10;
        v10 = 0;
        if ( v19 < v8 )
          v10 = v19;
        v81 = v10;
      }
    }
    v21 = v12 + 288;
    v22 = v15 + 192LL * v13;
    v84 = v12 + 328;
    if ( v12 + 288 < v12 + 328 )
      break;
LABEL_35:
    v14 = v82 + 1;
    v82 = v14;
    if ( v14 >= v18 )
      return a1;
    v9 = v86;
    v15 = v89;
    v16 = v85;
    v8 = v83;
  }
  v23 = (unsigned __int64)v84;
  v24 = v12 + 292;
  v25 = (ULONG_PTR *)(v22 + 7136);
  while ( *v25 == 0xFFFFFFFFFLL )
  {
LABEL_33:
    v21 += 5;
    v24 += 5;
    v25 += 3;
    if ( (unsigned __int64)v21 >= v23 )
    {
      v10 = v81;
      v13 = v79;
      v12 = v87;
      v18 = v88;
      LODWORD(v5) = a2;
      goto LABEL_35;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Lock = v24;
  LockHandle.LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v24);
  }
  else
  {
    v27 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v24, (__int64)&LockHandle);
    if ( v27 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v27);
  }
  v28 = *v25;
  if ( *v25 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_32:
    __writecr8(CurrentIrql);
    v23 = (unsigned __int64)v84;
    goto LABEL_33;
  }
  v29 = 48 * v28 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
    goto LABEL_37;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiLockPageAtDpcInline(48 * v28 - 0x58000000000LL);
  if ( (*(_BYTE *)(v29 + 34) & 7) != 2 )
  {
LABEL_31:
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 -= 5;
    v24 -= 5;
    v25 -= 3;
    goto LABEL_32;
  }
  LockHandle.LockQueue.Lock = v24;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v24);
  if ( v28 != *v25 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_31;
  }
LABEL_37:
  v30 = v86;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return a1;
  }
  if ( !(unsigned int)MiCanPageMove(48 * v28 - 0x58000000000LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiReuseStandbyPage(48 * v28 - 0x58000000000LL);
    *(_QWORD *)v29 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage(v30);
    __writecr8(CurrentIrql);
    return v28;
  }
  if ( dword_140388B14 == 1 )
  {
    v31 = v28 & 0x1F;
    LOBYTE(v32) = 1;
    v33 = (volatile signed __int32 *)stru_140388B68.Buffer + (v28 >> 5);
    if ( v31 + 1 <= 0x20 )
    {
      v34 = 1 << v31;
      goto LABEL_51;
    }
    if ( (v28 & 0x1F) == 0 )
      goto LABEL_50;
    _InterlockedOr(v33++, ((1 << (32 - (v28 & 0x1F))) - 1) << v31);
    v32 = 1LL - (32 - (unsigned int)(v28 & 0x1F));
    if ( v32 >= 0x20 )
    {
      v35 = v32 >> 5;
      v32 += -32LL * (v32 >> 5);
      do
      {
        *v33++ = -1;
        --v35;
      }
      while ( v35 );
    }
    if ( v32 )
    {
LABEL_50:
      v34 = (1 << v32) - 1;
LABEL_51:
      _InterlockedOr(v33, v34);
    }
  }
  v36 = *(_QWORD *)v29 & 0xFFFFFFFFFLL;
  v37 = *(_QWORD *)(v29 + 24) & 0xFFFFFFFFFLL;
  if ( (*(_BYTE *)(v29 + 35) & 8) != 0 )
  {
    if ( MiIsDecayPfn(v37) )
    {
      updated = MiUpdateTransitionPteFrame(v38[2], a1, v38);
      *(_QWORD *)(v42 + 16) = updated;
    }
    else
    {
      *v38 ^= v40 & (a1 ^ *v38);
    }
    if ( MiIsDecayPfn(v39) )
      *(_QWORD *)(v43 + 40) ^= v44 & (a1 ^ *(_QWORD *)(v43 + 40));
    else
      MiSetPfnBlink(v43, a1, 0);
  }
  else
  {
    if ( v37 == 0xFFFFFFFFFLL )
      v21[2] = a1;
    else
      *(_QWORD *)(48 * v37 - 0x58000000000LL) ^= (a1 ^ *(_QWORD *)(48 * v37 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    if ( v36 == 0xFFFFFFFFFLL )
    {
      v21[3] = a1;
    }
    else
    {
      v45 = 48 * v36 - 0x58000000000LL;
      v46 = *(_QWORD *)(v45 + 24);
      v47 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v45 + 24),
              a1 & 0xFFFFFFFFFLL | v46 & 0xFFFFFFF000000000uLL,
              v46);
      if ( v46 != v47 )
      {
        do
        {
          v48 = v47;
          v47 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v45 + 24),
                  a1 & 0xFFFFFFFFFLL | v47 & 0xFFFFFFF000000000uLL,
                  v47);
        }
        while ( v48 != v47 );
      }
    }
  }
  MiUnlinkNumaStandbyPage(48 * v28 - 0x58000000000LL);
  v49 = *(unsigned __int8 *)(v29 + 34) >> 6;
  if ( *(unsigned __int8 *)(v30 + 34) >> 6 != v49 )
    MiChangePageAttribute(v30, v49, 1);
  MiSetPfnTbFlushStamp(v30, 0LL, 1);
  MiCopyPfnEntry(v30, 48 * v28 - 0x58000000000LL);
  MiInsertNumaStandbyPage(v50);
  _InterlockedOr(v78, 0);
  if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (unsigned __int8)HIBYTE(*(_QWORD *)(v30 + 24))) & 0xF) != 0 )
    *(_QWORD *)(v30 + 24) ^= (*(_QWORD *)(v30 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
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
        goto LABEL_77;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_77;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_77:
  v52 = *(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL;
  if ( v52 == v28 )
  {
    v53 = *(_QWORD *)(v29 + 8) | 0x8000000000000000uLL;
    MiVaToPfn(v53 - 1088);
    *(_QWORD *)(v30 + 40) ^= (a1 ^ *(_QWORD *)(v30 + 40)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v53 - 1048) = KeMakeKernelDirectoryTableBase(a1 << 12);
  }
  v54 = 4;
  v55 = *(unsigned __int8 *)(48 * v52 - 0x58000000000LL + 34) >> 6;
  if ( !v55 || v55 == 3 )
  {
    v54 = 12;
  }
  else if ( v55 == 2 )
  {
    v54 = 28;
  }
  ValidPte = MiMakeValidPte(0LL, v52, v54 | 0xA0000000);
  CurrentPrcb = KeGetCurrentPrcb();
  v59 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
      + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v60 = (unsigned __int64 *)(((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v60 = ValidPte;
  v61 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v60 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v60 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v60, ValidPte);
  v62 = (__int64 *)(v59 + 8LL * ((*(_DWORD *)(v29 + 8) >> 3) & 0x1FF));
  PteShadow = *v62;
  if ( (unsigned __int64)v62 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v62 <= v61 )
    PteShadow = MiReadPteShadow(v62, *v62);
  v64 = MiUpdateTransitionPteFrame(PteShadow, a1, v57);
  *(_QWORD *)v65 = v64;
  if ( v65 >= 0xFFFFF6FB7DBED000uLL && v65 <= v66 )
    MiWritePteShadow(v65, v64);
  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  v68 = (HyperPte & 0xFFF) + 1;
  v69 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v70 = (_QWORD *)(((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v70 = 0LL;
  if ( (unsigned __int64)v70 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v70 <= v66 )
    MiWritePteShadow(v70, 0LL);
  if ( v68 == 64 )
    MiFlushHyperSpace();
  v71 = KeGetCurrentPrcb();
  v72 = 0LL;
  if ( v68 != 64 )
    v72 = v68;
  v71->HyperPte = (void *)(v69 | v72);
  MiCopyPage(a1, v28, 0LL, 6);
  _InterlockedOr(v78, 0);
  v73 = KiTbFlushTimeStamp;
  v74 = v86;
  if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v86 + 31)) & 0xF) != 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v21 + 4;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v21 + 4);
    *(_QWORD *)(v74 + 24) ^= (*(_QWORD *)(v74 + 24) ^ ((unsigned __int64)v73 << 56)) & 0xF00000000000000LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v29 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v29 + 34) &= 0xC7u;
  *(_BYTE *)(v29 + 35) &= ~0x20u;
  _InterlockedOr(v78, 0);
  v75 = *(_QWORD *)(v29 + 24) & 0xF0FFFFF000000000uLL | ((unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56);
  *(_QWORD *)v29 = 0LL;
  v76 = *(_BYTE *)(v29 + 34);
  *(_QWORD *)(v29 + 24) = v75;
  *(_QWORD *)(v29 + 16) = 0LL;
  *(_BYTE *)(v29 + 34) = v76 & 0xF8 | 5;
  MiSetFreshPfnFromFreeList(48 * v28 - 0x58000000000LL);
  *(_BYTE *)(v29 + 35) &= ~8u;
  *(_QWORD *)(v29 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(v29 + 35) &= 0xF8u;
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), v77);
  __writecr8(CurrentIrql);
  return v28;
}
