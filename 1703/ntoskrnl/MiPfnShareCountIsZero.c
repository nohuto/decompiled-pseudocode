/*
 * XREFs of MiPfnShareCountIsZero @ 0x1400C6560
 * Callers:
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1400C8490 (MiDeleteBatch.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiReduceShareCount @ 0x14021F2C8 (MiReduceShareCount.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned int v7; // r13d
  unsigned __int64 v8; // r12
  int v9; // esi
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // r11d
  bool v25; // zf
  __int64 v26; // rax
  char v27; // al
  char v28; // al
  char v30; // al
  unsigned __int64 v31; // rax
  struct _KEVENT *v32; // r9
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 TransitionPte; // [rsp+60h] [rbp+8h] BYREF
  __int64 v37; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v4 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v6 = v5 & 0xFFFFFFFFFLL;
    v7 = v4;
    v8 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v9 = 4;
    v10 = *(unsigned __int8 *)(48 * v6 - 0x58000000000LL + 34) >> 6;
    if ( !v10 || v10 == 3 )
    {
      v9 = 12;
    }
    else if ( v10 == 2 )
    {
      v9 = 28;
    }
    v11 = v9 | 0xA0000000;
    v12 = ((v6 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v11 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
    if ( (v11 & 5) == 4 )
      v12 = ((v6 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v11 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
    if ( (v11 & 0x40000000) != 0 )
      v12 &= ~4uLL;
    if ( (v11 & 0x20000000) != 0 )
      v12 ^= ((unsigned __int16)v12 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100;
    if ( (v11 & 0x8000000) != 0 )
      v12 &= ~0x100uLL;
    if ( (v11 & 0x4000000) != 0 )
      v12 |= 0x80uLL;
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                                + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                             - 0x98000000000LL);
    *v14 = v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( (unsigned int)MiPteInShadowRange(v14) )
      MiWritePteShadow(v15);
    TransitionPte = MI_READ_PTE_LOCK_FREE(v16 + 8 * ((v8 >> 3) & 0x1FF));
    v17 = MI_GET_PAGE_FRAME_FROM_PTE(&TransitionPte);
    TransitionPte = MiMakeTransitionPte(v17, v7);
    *v18 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v18) )
      MiWritePteShadow(v19);
    v21 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v22 = (_QWORD *)((((v20 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v22 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v22) )
      MiWritePteShadow(v23);
    if ( v24 == 64 )
    {
      MiFlushHyperSpace();
      v24 = 0;
    }
    KeGetCurrentPrcb()->HyperPte = (void *)(v21 | v24);
  }
  v25 = (*(_WORD *)(a1 + 32))-- == 1;
  v26 = *(_QWORD *)(a1 + 24);
  if ( v25 )
  {
    if ( (v26 & 0x4000000000000000LL) != 0 )
    {
      v30 = *(_BYTE *)(a1 + 35);
      if ( (v30 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v30 & 0xEF;
      v37 = *(_QWORD *)(a1 + 16);
      if ( (v37 & 0x400) == 0 && ((v37 & 4) != 0 || (v37 & 2) != 0) )
      {
        v31 = MI_READ_PTE_LOCK_FREE(&v37);
        if ( v31 )
          MiReleasePageFileInfo(v32, v31, 0);
      }
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2LL);
      return 4LL;
    }
    else
    {
      v33 = *(_BYTE *)(a1 + 34);
      if ( (v33 & 0x10) != 0 )
      {
        v34 = a1;
        v35 = 136LL;
        if ( a2 != 1 )
          v35 = 8LL;
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v33 & 0xF8 | 2;
        if ( a2 > 1 && (unsigned int)MiGetPfnPriority(a1) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return 4LL;
        }
        v35 = 4LL;
        v34 = a1;
      }
      MiInsertPageInList(v34, v35);
      return 4LL;
    }
  }
  else
  {
    if ( (v26 & 0x4000000000000000LL) != 0 )
    {
      *(_BYTE *)(a1 + 34) |= 7u;
    }
    else
    {
      v27 = *(_BYTE *)(a1 + 34);
      if ( (v27 & 0x10) != 0 )
        v28 = v27 & 0xF8 | 3;
      else
        v28 = v27 & 0xF8 | 2;
      *(_BYTE *)(a1 + 34) = v28;
    }
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(a1 + 16) )
        *(_BYTE *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 706LL) = 1;
    }
    return 3LL;
  }
}
