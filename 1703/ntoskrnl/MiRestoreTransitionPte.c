/*
 * XREFs of MiRestoreTransitionPte @ 0x140104D70
 * Callers:
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x14021FCFC (MiReuseStandbyPage.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiGetTopLevelPfn @ 0x140079090 (MiGetTopLevelPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x140104D20 (MI_IS_RESET_PTE.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiRestoreTransitionPte(__int64 a1, char a2)
{
  int IsPfnFileOnly; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 TopLevelPfn; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rsi
  int v20; // eax
  unsigned __int64 ValidPte; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // rbp
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r11d
  __int64 *PrototypePteDirect; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  IsPfnFileOnly = MiIsPfnFileOnly(a1);
  MiClearPfnImageVerified(a1, 12);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 < 0 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(a1 + 16)
        && MI_IS_RESET_PTE(*(_QWORD *)(a1 + 16)) )
      {
        v6 = MI_READ_PTE_LOCK_FREE(a1 + 16);
        *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(v6, 0LL);
        if ( (unsigned int)MiPteInShadowRange(a1 + 16) )
          MiWritePteShadow(a1 + 16);
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
      if ( MI_IS_RESET_PTE(*(_QWORD *)(a1 + 16)) )
      {
        v7 = MI_READ_PTE_LOCK_FREE(a1 + 16);
        *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(v7, 0LL);
        if ( (unsigned int)MiPteInShadowRange(a1 + 16) )
          MiWritePteShadow(a1 + 16);
      }
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
      v9 = *(_QWORD *)TopLevelPfn;
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v9 + 1475) & 0xC0) == 0x80 )
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 1496));
    }
    v10 = *(_QWORD *)(a1 + 40);
    if ( (v10 & 0xFFFFFFFFFLL) == (a1 + 0x58000000000LL) / 48 )
    {
      v11 = MiVaToPfn((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) - 1088);
      *(_QWORD *)(a1 + 40) = v10 ^ (v11 ^ v10) & 0xFFFFFFFFFLL;
      v12 = 48 * v11 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v12);
      *(_QWORD *)(v12 + 24) ^= (((*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v12 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v13 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v14 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), 0LL, 0LL);
  v17 = v16 & 0xFFFFFFFFFLL;
  v18 = v14;
  v19 = 48 * v17 - 0x58000000000LL;
  v20 = *(unsigned __int8 *)(v19 + 34) >> 6;
  if ( !v20 || v20 == 3 )
  {
    v15 = 12;
  }
  else if ( v20 == 2 )
  {
    v15 = 28;
  }
  ValidPte = MiMakeValidPte(0LL, v17, v15 | 0xA0000000);
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                              + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                           - 0x98000000000LL);
  *v23 = ValidPte;
  if ( (unsigned int)MiPteInShadowRange(v23) )
    MiWritePteShadow(v24);
  v26 = (__int64 *)(v25 + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF));
  *v26 = v18;
  if ( (unsigned int)MiPteInShadowRange(v26) )
    MiWritePteShadow(v27);
  v29 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v30 = (_QWORD *)((((v28 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v30 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v30) )
    MiWritePteShadow(v32);
  if ( v35 == 64 )
  {
    MiFlushHyperSpace();
    v35 = 0;
  }
  KeGetCurrentPrcb()->HyperPte = (void *)(v29 | v35);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), v31, v33, v34);
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, (__int64)PrototypePteDirect, v37, 3);
  }
  MiLockNestedPageAtDpcInline(v19);
  MiDecrementShareCount(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( IsPfnFileOnly != 1 )
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(a1 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 4LL * (unsigned int)MiGetPfnPriority(a1) + 4024));
      *(_BYTE *)(a1 + 35) &= 0xF8u;
      if ( P )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_14036CA80;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_14036CA80);
        v38 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_47;
        v39 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((a1 + 0x58000000000LL) / 48);
          *(_QWORD *)(v38 + 32) += 8LL;
          v39 = *(_QWORD *)(v38 + 32) & 0xFFFLL;
        }
        if ( v39 < 0xC00 )
        {
          if ( v39 )
            v38 = 0LL;
          else
            *(_QWORD *)(v38 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_47:
          v38 = (unsigned int)dword_14036CA68;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v38 = (unsigned int)dword_14036CA68;
      }
      if ( v38 )
        KeInsertQueueDpc(&stru_14036CC08, 0LL, 0LL);
    }
  }
}
