/*
 * XREFs of MiRestoreTransitionPte @ 0x1400352D0
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x14022B5FC (MiReuseStandbyPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MI_IS_RESET_PTE @ 0x14005BFC0 (MI_IS_RESET_PTE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiGetTopLevelPfn @ 0x1400E6BD0 (MiGetTopLevelPfn.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 */

void __fastcall MiRestoreTransitionPte(__int64 a1, char a2)
{
  int IsPfnFileOnly; // r13d
  __int64 v5; // rax
  _QWORD *v6; // r9
  __int64 *v7; // r9
  __int64 PteShadow; // rax
  __int64 updated; // rax
  __int64 *v10; // r9
  __int64 v11; // r8
  __int64 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r11
  __int64 v25; // r11
  __int64 v26; // rbx
  __int64 v27; // rdi
  int v28; // eax
  __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r10
  __int64 *v33; // rcx
  unsigned __int64 v34; // r10
  unsigned __int64 HyperPte; // r14
  int v36; // ebp
  unsigned __int64 v37; // r14
  unsigned int v38; // ebp
  _QWORD *v39; // r10
  struct _KPRCB *v40; // rcx
  __int64 v41; // rax
  _QWORD *PrototypePteDirect; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v49; // [rsp+70h] [rbp+8h] BYREF

  IsPfnFileOnly = MiIsPfnFileOnly(a1);
  MiClearPfnImageVerified(a1, 12LL);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 < 0 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(a1 + 16)
        && (unsigned int)MI_IS_RESET_PTE(*v6) )
      {
        PteShadow = *v7;
        if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v7, *v7);
        updated = MiUpdatePageFileHighInPte(PteShadow, 0LL);
        *v10 = updated;
        if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v10, updated);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v5 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 16) & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(a1 + 16)) )
      {
        v13 = *v12;
        if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
          v13 = MiReadPteShadow(v12, *v12);
        v14 = MiUpdatePageFileHighInPte(v13, 0LL);
        *v12 = v14;
        if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v12, v14);
      }
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, v11, v12);
      v16 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v16 + 1475) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v16 + 1496));
    }
    v17 = *(_QWORD *)(a1 + 40);
    if ( (v17 & 0xFFFFFFFFFLL) == (a1 + 0x58000000000LL) / 48 )
    {
      v18 = MiVaToPfn((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) - 1088);
      *(_QWORD *)(a1 + 40) = v17 ^ (v18 ^ v17) & 0xFFFFFFFFFLL;
      v19 = 48 * v18 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v19);
      *(_QWORD *)(v19 + 24) ^= ((*(_QWORD *)(v19 + 24) + 1LL) ^ *(_QWORD *)(v19 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v20 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v21 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), 0LL, 0LL, 4LL);
  v25 = v24 & 0xFFFFFFFFFLL;
  v26 = v21;
  v27 = 48 * v25 - 0x58000000000LL;
  v28 = *(unsigned __int8 *)(v27 + 34) >> 6;
  if ( !v28 || v28 == 3 )
  {
    v23 = 12;
  }
  else if ( v28 == 2 )
  {
    v23 = v22 + 28;
  }
  ValidPte = MiMakeValidPte(0LL, v25, v23 | 0xA0000000);
  CurrentPrcb = KeGetCurrentPrcb();
  v31 = 0xFFFFF68000000000uLL;
  v32 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
      + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v33 = (__int64 *)(((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v33 = ValidPte;
  if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v33, ValidPte);
  v34 = v32 + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  *(_QWORD *)v34 = v26;
  if ( v34 >= 0xFFFFF6FB7DBED000uLL && v34 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v34, v26);
  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  v36 = HyperPte & 0xFFF;
  v37 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v38 = v36 + 1;
  v39 = (_QWORD *)(v31 + ((v34 >> 9) & 0x7FFFFFFFF8LL));
  *v39 = 0LL;
  if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v39, 0LL);
  if ( v38 == 64 )
    MiFlushHyperSpace();
  v40 = KeGetCurrentPrcb();
  v41 = 0LL;
  if ( v38 != 64 )
    v41 = v38;
  v40->HyperPte = (void *)(v37 | v41);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v43, 3LL);
  }
  v49 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v49);
    while ( *(__int64 *)(v27 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v27 + 34) & 7) != 6 )
    MiBadShareCount(v27);
  v44 = *(_QWORD *)(v27 + 24);
  *(_QWORD *)(v27 + 24) = v44 ^ (((v44 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v44) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v44 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v27);
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( IsPfnFileOnly != 1 )
  {
    *(_QWORD *)(a1 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 35) &= 0xF8u;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
        v45 = 5LL;
      else
        v45 = *(_BYTE *)(a1 + 35) & 7;
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 4 * v45 + 4152));
      *(_BYTE *)(a1 + 35) &= 0xF8u;
      if ( ListEntry )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_140388C80;
        KxAcquireQueuedSpinLock(&LockHandle);
        v46 = (unsigned __int64)ListEntry;
        if ( !ListEntry )
          goto LABEL_69;
        v47 = (__int64)ListEntry[2].Next & 0xFFF;
        if ( ((__int64)ListEntry[2].Next & 0xFFF) != 0 )
        {
          ListEntry[2].Next->Next = (_SLIST_ENTRY *)((a1 + 0x58000000000LL) / 48);
          *(_QWORD *)(v46 + 32) += 8LL;
          v47 = *(_QWORD *)(v46 + 32) & 0xFFFLL;
        }
        if ( v47 < 0xC00 )
        {
          if ( v47 )
            v46 = 0LL;
          else
            *(_QWORD *)(v46 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_69:
          v46 = (unsigned int)dword_140388C68;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v46 = (unsigned int)dword_140388C68;
      }
      if ( v46 )
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    }
  }
}
