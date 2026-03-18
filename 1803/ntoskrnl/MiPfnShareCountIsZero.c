/*
 * XREFs of MiPfnShareCountIsZero @ 0x14002B7A0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiReduceShareCount @ 0x1402653B8 (MiReduceShareCount.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiIsAddressGlobal @ 0x140113970 (MiIsAddressGlobal.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // r12d
  char v5; // di
  unsigned __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 v14; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 UltraMapping; // r10
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // r11
  __int64 v20; // r14
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 TransitionPte; // rax
  __int64 *v29; // r10
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rdx
  bool v32; // zf
  __int64 v33; // rax
  char v34; // al
  char v35; // al
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rdx
  char v44; // al
  unsigned __int64 v45; // [rsp+60h] [rbp+8h] BYREF
  __int64 v46; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v4 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v5 = 4;
    v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v8 = v7 & 0xFFFFFFFFFLL;
    v9 = *(unsigned __int8 *)(48 * v8 - 0x58000000000LL + 34) >> 6;
    if ( !v9 || v9 == 3 )
    {
      v5 = 12;
    }
    else if ( v9 == 2 )
    {
      v5 = 28;
    }
    v10 = v8 << 12;
    v11 = v5 & 0x1F;
    v12 = v10 | MmProtectToPteMask[v11] & 0xFFFF000000000E7FuLL | 0x121;
    if ( (v11 & 5) == 4 )
      v12 = v10 | MmProtectToPteMask[v11] & 0xFFFF000000000E7FuLL | 0x163;
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = v12 & 0xFAFFFFFFFFFFFEFFuLL | ((word_1403CB7D0 & 1 | 0xA000000000000LL) << 8);
    MmInternal = CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
          v18 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          MmInternal[1543] = v18,
          !UltraMapping) )
    {
      v16 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
      UltraMapping = v16 + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v18 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    *v18 = v14;
    v19 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v18, v14);
    v20 = (v6 >> 3) & 0x1FF;
    v21 = *(_QWORD *)(UltraMapping + 8 * v20);
    v22 = UltraMapping + 8 * v20;
    if ( v22 >= 0xFFFFF6FB7DBED000uLL
      && v22 <= v19
      && (unsigned int)MiPteHasShadow(v18, v16, v21, v10)
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v16 )
      {
        v24 = *(_QWORD *)(v16 + 8 * ((v23 >> 3) & 0x1FF));
        v16 = v21 | 0x20;
        if ( (v24 & 0x20) == 0 )
          v16 = v21;
        v21 = v16;
        if ( (v24 & 0x42) != 0 )
          v21 = v16 | 0x42;
      }
    }
    v45 = v21;
    if ( (unsigned __int64)&v45 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v45 <= v19
      && (unsigned int)MiPteHasShadow(&v45, v16, v21, v10)
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v45 >> 3) & 0x1FF));
        v27 = v21 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v27 = v21;
        v21 = v27;
        if ( (v26 & 0x42) != 0 )
          v21 = v27 | 0x42;
      }
    }
    TransitionPte = MiMakeTransitionPte((v21 >> 12) & 0xFFFFFFFFFLL, v4);
    v45 = TransitionPte;
    *v29 = TransitionPte;
    v31 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL )
    {
      v31 = v30;
      if ( (unsigned __int64)v29 <= v30 )
        MiWritePteShadow(v29, TransitionPte);
    }
    LOBYTE(v31) = 17;
    MiUnmapPageInHyperSpaceWorker(v29, v31, 0x80000000LL);
  }
  v32 = (*(_WORD *)(a1 + 32))-- == 1;
  v33 = *(_QWORD *)(a1 + 24);
  if ( v32 )
  {
    if ( (v33 & 0x4000000000000000LL) != 0 )
    {
      v37 = *(_BYTE *)(a1 + 35);
      if ( (v37 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v37 & 0xEF;
      v46 = *(_QWORD *)(a1 + 16);
      if ( (v46 & 0x400) == 0 && ((v46 & 4) != 0 || (v46 & 2) != 0) )
      {
        v38 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46);
        if ( v38 )
          MiReleasePageFileInfo(v39, v38, 0LL);
      }
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
      return 4LL;
    }
    else
    {
      v40 = *(_QWORD *)(a1 + 16);
      v41 = -9LL;
      if ( (v40 & 0x400) != 0 )
        v41 = -2049LL;
      *(_QWORD *)(a1 + 16) = v40 & v41;
      v42 = *(_BYTE *)(a1 + 34);
      if ( (v42 & 0x10) != 0 )
      {
        v43 = 136LL;
        if ( a2 != 1 )
          v43 = 8LL;
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v42 & 0xF8 | 2;
        if ( a2 > 1 )
        {
          v44 = *(_BYTE *)(a1 + 35);
          if ( (v44 & 8) == 0 && (v44 & 7u) < 5 )
          {
            MiInsertProtectedStandbyPage(a2, a1);
            return 4LL;
          }
        }
        v43 = 4LL;
      }
      MiInsertPageInList(a1, v43);
      return 4LL;
    }
  }
  else
  {
    v32 = (v33 & 0x4000000000000000LL) == 0;
    v34 = *(_BYTE *)(a1 + 34);
    if ( v32 )
    {
      if ( (v34 & 0x10) != 0 )
        v35 = v34 & 0xF8 | 3;
      else
        v35 = v34 & 0xF8 | 2;
    }
    else
    {
      v35 = v34 | 7;
    }
    *(_BYTE *)(a1 + 34) = v35;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 659LL) = 1;
    }
    return 3LL;
  }
}
