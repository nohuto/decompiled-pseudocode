/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x140053840
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MI_IS_RESET_PTE @ 0x140053CF0 (MI_IS_RESET_PTE.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rsi
  int v8; // r12d
  BOOL v9; // r13d
  ULONG_PTR v10; // r14
  __int64 v11; // rax
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // r9
  unsigned int PageFileReservationOffset; // eax
  _WORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  int v36; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v6 = 0LL;
  v36 = 0;
  v8 = (a3 >> 7) & 1;
  while ( 1 )
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = MiLockLeafPage(a2, 0LL);
      v9 = v10 != 0;
    }
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    v34 = v11;
    DemandZeroPte = v11;
    if ( (v11 & 1) != 0 )
      break;
    if ( (v11 & 0x400) != 0 )
      goto LABEL_72;
    if ( (v11 & 0x800) == 0 )
    {
      if ( v11 )
      {
        v14 = a1;
        if ( !(unsigned int)MiInvalidPteConforms(v11) )
          goto LABEL_73;
        v15 = ((DemandZeroPte >> 5) & 0xF) == 0;
        goto LABEL_41;
      }
      if ( (a3 & 2) != 0 )
      {
        v14 = a1;
        DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
        v34 = DemandZeroPte;
        v36 = 1;
        goto LABEL_42;
      }
      goto LABEL_72;
    }
    if ( !v8 )
      goto LABEL_11;
    v13 = MiLockTransitionLeafPage(a2, 0LL);
    v10 = v13;
    if ( v13 )
    {
      v9 = 1;
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
      {
        v14 = a1;
        goto LABEL_76;
      }
LABEL_11:
      v14 = a1;
      if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != a1 )
        goto LABEL_73;
      v34 = MI_READ_PTE_LOCK_FREE(v10 + 16);
      DemandZeroPte = v34;
      if ( (unsigned int)MI_IS_RESET_PTE(v34) )
      {
        v15 = (*(_BYTE *)(v10 + 34) & 0x10) == 0;
LABEL_41:
        if ( v15 )
          goto LABEL_73;
      }
LABEL_42:
      if ( (DemandZeroPte & 2) != 0 )
      {
        if ( (a3 & 1) != 0 )
          *a4 = DemandZeroPte;
        goto LABEL_73;
      }
      if ( v10 && (*(_BYTE *)(v10 + 34) & 0x28) != 0 )
        goto LABEL_73;
      if ( (DemandZeroPte & 4) != 0 )
      {
        if ( !v10 )
          goto LABEL_73;
        if ( (a3 & 1) == 0 )
        {
          if ( !*(_WORD *)(v10 + 32) )
          {
            if ( !(unsigned int)MiUnlinkPageFromList(v10) )
            {
              MiDiscardTransitionPte(v10);
              goto LABEL_73;
            }
            v4 = 1;
          }
          v6 = MiCapturePageFileInfoInline(v10 + 16, 1LL);
          *(_BYTE *)(v10 + 34) |= 0x10u;
          goto LABEL_55;
        }
      }
      else
      {
LABEL_55:
        if ( (a3 & 1) == 0 )
        {
          PageFileReservationOffset = MiGetPageFileReservationOffset(a4, a4);
          v28 = MiTransferSoftwarePte(
                  DemandZeroPte,
                  *(_QWORD *)(v14 + 8LL * ((unsigned __int8)HIBYTE(*v27) >> 4) + 6880),
                  PageFileReservationOffset,
                  2LL);
          v29 = v28;
          if ( v10 )
          {
            if ( !*(_WORD *)(v10 + 32) && (*(_BYTE *)(v10 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromList(v10);
              v4 = 1;
            }
            *(_QWORD *)(v10 + 16) = v29;
            if ( MiPteInShadowRange(v10 + 16) )
              MiWritePteShadow(v30, v29);
            if ( v4 )
              MiInsertPageInList(v10, 8u);
          }
          else
          {
            *(_QWORD *)a2 = v28;
            if ( MiPteInShadowRange(a2) )
              MiWritePteShadow(v31, v29);
          }
          if ( v36 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
          }
        }
      }
      v4 = 1;
      goto LABEL_73;
    }
  }
  if ( v8 )
  {
    v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (a3 & 1) == 0 )
    {
      v9 = 1;
      MiLockPageAtDpcInline(v10);
    }
    if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
    {
LABEL_72:
      v14 = a1;
      goto LABEL_73;
    }
  }
  v14 = a1;
  if ( (*(_DWORD *)v10 & 1) != 0
    && *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == a1
    && (*(_BYTE *)(v10 + 35) & 8) == 0 )
  {
    DemandZeroPte = *(_QWORD *)(v10 + 16);
    if ( MiPteInShadowRange(v10 + 16)
      && (unsigned int)MiPteHasShadow(v17, v16, v18, v19)
      && (DemandZeroPte & 1) != 0
      && ((DemandZeroPte & 0x20) == 0 || (DemandZeroPte & 0x42) == 0) )
    {
      v21 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 8 * ((v20 >> 3) & 0x1FF));
        v23 = DemandZeroPte | 0x20;
        if ( (v22 & 0x20) == 0 )
          v23 = DemandZeroPte;
        DemandZeroPte = v23;
        if ( (v22 & 0x42) != 0 )
          DemandZeroPte = v23 | 0x42;
      }
    }
    v34 = DemandZeroPte;
    if ( (unsigned int)MiInvalidPteConforms(DemandZeroPte) )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(v24) && (*(_BYTE *)(v10 + 34) & 0x10) == 0 )
      {
        if ( (a3 & 0x80u) == 0 )
          goto LABEL_73;
        v15 = (v25 & 0x42) == 0;
        goto LABEL_41;
      }
      goto LABEL_42;
    }
  }
LABEL_73:
  if ( !v9 )
    goto LABEL_77;
LABEL_76:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_77:
  if ( v6 )
    MiReleasePageFileInfo(v14, v6, 1LL);
  return v4;
}
