/*
 * XREFs of MiPfnShareCountIsZero @ 0x14004F450
 * Callers:
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     MiReduceShareCount @ 0x14022A8BC (MiReduceShareCount.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140051F60 (MiInsertProtectedStandbyPage.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r11
  unsigned int v5; // r13d
  __int64 v6; // r9
  __int64 v7; // r9
  unsigned __int64 v8; // r15
  char v9; // bp
  int v10; // eax
  __int64 v11; // rbp
  unsigned int v12; // edi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 *v17; // rcx
  __int64 v18; // r15
  __int64 PteShadow; // rax
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 TransitionPte; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r11
  unsigned __int64 HyperPte; // rbp
  int v26; // ebx
  unsigned __int64 v27; // rbp
  _QWORD *v28; // r10
  struct _KPRCB *v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  char v32; // al
  char v33; // al
  char v35; // al
  __int64 v36; // r9
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // [rsp+60h] [rbp+8h] BYREF
  __int64 v43; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v5 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v7 = v6 & 0xFFFFFFFFFLL;
    v8 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v9 = 4;
    v10 = *(unsigned __int8 *)(48 * v7 - 0x58000000000LL + 34) >> 6;
    if ( !v10 || v10 == 3 )
    {
      v9 = 12;
    }
    else if ( v10 == 2 )
    {
      v9 = 28;
    }
    v11 = v9 & 0x1F;
    v12 = 0;
    v13 = (v7 << 12) | MmProtectToPteMask[v11] & 0xFFFF000000000E7FuLL | 0x121;
    if ( (v11 & 5) == 4 )
      v13 = (v7 << 12) | MmProtectToPteMask[v11] & 0xFFFF000000000E7FuLL | 0x163;
    v14 = (((unsigned __int16)v13 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v13) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v17 = (unsigned __int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v17 = v14;
    if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= v4 )
      MiWritePteShadow(v17, v14);
    v18 = (v8 >> 3) & 0x1FF;
    PteShadow = *(_QWORD *)(v16 + 8 * v18);
    v20 = v16 + 8 * v18;
    if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= v4 )
      PteShadow = MiReadPteShadow(v20, PteShadow);
    v43 = PteShadow;
    v21 = MI_GET_PAGE_FRAME_FROM_PTE(&v43);
    TransitionPte = MiMakeTransitionPte(v21, v5);
    v43 = TransitionPte;
    *(_QWORD *)v23 = TransitionPte;
    if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= v24 )
      MiWritePteShadow(v23, TransitionPte);
    HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
    v26 = (HyperPte & 0xFFF) + 1;
    v27 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v28 = (_QWORD *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v28 = 0LL;
    if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= v24 )
      MiWritePteShadow(v28, 0LL);
    if ( v26 == 64 )
      MiFlushHyperSpace();
    v29 = KeGetCurrentPrcb();
    if ( v26 != 64 )
      v12 = v26;
    v29->HyperPte = (void *)(v27 | v12);
  }
  v30 = (*(_WORD *)(a1 + 32))-- == 1;
  v31 = *(_QWORD *)(a1 + 24);
  if ( v30 )
  {
    if ( (v31 & 0x4000000000000000LL) != 0 )
    {
      v35 = *(_BYTE *)(a1 + 35);
      if ( (v35 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v35 & 0xEF;
      v36 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
      v42 = *(_QWORD *)(a1 + 16);
      v37 = v42;
      if ( (v42 & 0x400) == 0 && ((v42 & 4) != 0 || (v42 & 2) != 0) )
      {
        if ( (unsigned __int64)&v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v42 <= 0xFFFFF6FB7DBED7F8uLL )
          v37 = MiReadPteShadow(&v42, v42);
        if ( v37 )
          MiReleasePageFileInfo(v36, v37, 0LL);
      }
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2LL);
      return 4LL;
    }
    else
    {
      v38 = *(_BYTE *)(a1 + 34);
      if ( (v38 & 0x10) != 0 )
      {
        v39 = a1;
        v40 = 136LL;
        if ( a2 != 1 )
          v40 = 8LL;
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v38 & 0xF8 | 2;
        if ( a2 > 1 )
        {
          v41 = *(_BYTE *)(a1 + 35);
          if ( (v41 & 8) == 0 && (v41 & 7u) < 5 )
          {
            MiInsertProtectedStandbyPage(a2, a1);
            return 4LL;
          }
        }
        v40 = 4LL;
        v39 = a1;
      }
      MiInsertPageInList(v39, v40);
      return 4LL;
    }
  }
  else
  {
    if ( (v31 & 0x4000000000000000LL) != 0 )
    {
      *(_BYTE *)(a1 + 34) |= 7u;
    }
    else
    {
      v32 = *(_BYTE *)(a1 + 34);
      if ( (v32 & 0x10) != 0 )
        v33 = v32 & 0xF8 | 3;
      else
        v33 = v32 & 0xF8 | 2;
      *(_BYTE *)(a1 + 34) = v33;
    }
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 659LL) = 1;
    }
    return 3LL;
  }
}
