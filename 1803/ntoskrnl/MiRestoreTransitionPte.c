/*
 * XREFs of MiRestoreTransitionPte @ 0x140053D40
 * Callers:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x140266478 (MiReuseStandbyPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x140053CF0 (MI_IS_RESET_PTE.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiGetTopLevelPfn @ 0x1400D5C50 (MiGetTopLevelPfn.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // r15
  _QWORD *v4; // rbx
  int IsPfnFileOnly; // r13d
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdi
  int v16; // r9d
  __int64 v17; // rbp
  __int64 v18; // r14
  int v19; // eax
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v22; // rbx
  _QWORD *MmInternal; // r14
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rcx
  _QWORD *PrototypePteDirect; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 < 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
        && MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        v8 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
        *(_QWORD *)(BugCheckParameter2 + 16) = MiUpdatePageFileHighInPte(v8, 0LL);
        if ( MiPteInShadowRange(BugCheckParameter2 + 16) )
          MiWritePteShadow(BugCheckParameter2 + 16, v9);
      }
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
    else
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      *(_QWORD *)(BugCheckParameter2 + 8) = v6 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        v10 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
        *(_QWORD *)(BugCheckParameter2 + 16) = MiUpdatePageFileHighInPte(v10, 0LL);
        if ( MiPteInShadowRange(BugCheckParameter2 + 16) )
          MiWritePteShadow(BugCheckParameter2 + 16, v11);
      }
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v13 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v13 + 1467) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v13 + 1488));
    }
    v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v7 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v14 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v7 >> 40) & 0x3FF));
  v15 = MiTransferSoftwarePte(*(_QWORD *)(BugCheckParameter2 + 16), 0LL, 0LL, 4LL);
  if ( v4 )
  {
    v17 = 0LL;
  }
  else
  {
    v18 = v7 & 0xFFFFFFFFFLL;
    v17 = 48 * v18 - 0x58000000000LL;
    v19 = *(unsigned __int8 *)(v17 + 34) >> 6;
    if ( !v19 || v19 == 3 )
    {
      v16 = 12;
    }
    else if ( v19 == 2 )
    {
      v16 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v18, v16 | 0xA0000000, v16 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = ValidPte;
    MmInternal = CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
          v25 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          MmInternal[1543] = v25,
          !UltraMapping) )
    {
      v25 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                                  + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                               - 0x98000000000LL);
    }
    *v25 = v22;
    if ( MiPteInShadowRange((unsigned __int64)v25) )
      MiWritePteShadow(v26, v22);
    v2 = a2;
    v4 = (_QWORD *)(v27 + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  *v4 = v15;
  if ( MiPteInShadowRange((unsigned __int64)v4) )
    MiWritePteShadow(v28, v15);
  if ( v17 )
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, 0x11u, 0x80000000);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16));
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, v30, 3LL);
  }
  if ( v17 )
  {
    MiLockNestedPageAtDpcInline(v17);
    MiDecrementShareCount(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( IsPfnFileOnly != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (v2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14
                                                      + 4LL * (unsigned int)MiGetPfnPriority(BugCheckParameter2)
                                                      + 4216));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( ListEntry )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_1403CBF40;
        KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CBF40);
        v31 = (unsigned __int64)ListEntry;
        if ( !ListEntry )
          goto LABEL_54;
        v32 = (__int64)ListEntry[2].Next & 0xFFF;
        if ( ((__int64)ListEntry[2].Next & 0xFFF) != 0 )
        {
          ListEntry[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v31 + 32) += 8LL;
          v32 = *(_QWORD *)(v31 + 32) & 0xFFFLL;
        }
        if ( v32 < 0xC00 )
        {
          if ( v32 )
            v31 = 0LL;
          else
            *(_QWORD *)(v31 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_54:
          v31 = (unsigned int)dword_1403CBF28;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v31 = (unsigned int)dword_1403CBF28;
      }
      if ( v31 )
        KeInsertQueueDpc(&stru_1403CC0C8, 0LL, 0LL);
    }
  }
}
