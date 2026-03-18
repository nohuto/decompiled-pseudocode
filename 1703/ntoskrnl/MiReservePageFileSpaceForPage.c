/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1401048E0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MI_IS_RESET_PTE @ 0x140104D20 (MI_IS_RESET_PTE.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(
        struct _KEVENT *a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // rsi
  int v8; // r12d
  BOOL v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v16; // rax
  struct _KEVENT *v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  struct _KEVENT *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int PageFileReservationOffset; // eax
  _WORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  int v36; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v5 = 0LL;
  v8 = a3 & 0x80;
  v36 = 0;
  do
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = MiLockLeafPage(a2, 0);
      v9 = v10 != 0;
    }
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    v34 = v11;
    DemandZeroPte = v11;
    if ( (v11 & 1) != 0 )
    {
      if ( v8 )
      {
        v20 = MI_GET_PFN_FROM_PTE(&v34, v12, v13, v14);
        v10 = v20;
        if ( (a3 & 1) == 0 )
        {
          v9 = 1;
          MiLockPageAtDpcInline(v20);
        }
        if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
          goto LABEL_64;
      }
      v21 = a1;
      if ( !*(_QWORD *)v10 )
        goto LABEL_65;
      if ( *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != a1 )
        goto LABEL_65;
      if ( (*(_BYTE *)(v10 + 35) & 8) != 0 )
        goto LABEL_65;
      v34 = MI_READ_PTE_LOCK_FREE(v10 + 16);
      DemandZeroPte = v34;
      if ( !(unsigned int)MiInvalidPteConforms(v34)
        || (unsigned int)MI_IS_RESET_PTE(v22) && (*(_BYTE *)(v10 + 34) & 0x10) == 0 && (!v8 || (v19 & 0x42) == 0) )
      {
        goto LABEL_65;
      }
      goto LABEL_33;
    }
    if ( (v11 & 0x400) != 0 )
      goto LABEL_64;
    if ( (v11 & 0x800) == 0 )
    {
      if ( v11 )
      {
        if ( !(unsigned int)MiInvalidPteConforms(v11) || ((DemandZeroPte >> 5) & 0xF) == 0 )
          goto LABEL_64;
      }
      else
      {
        if ( (a3 & 2) == 0 )
          goto LABEL_64;
        DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
        v34 = DemandZeroPte;
        v36 = 1;
      }
LABEL_33:
      v17 = a1;
      goto LABEL_34;
    }
    if ( !v8 )
      goto LABEL_11;
    v16 = MiLockTransitionLeafPage(a2, 0LL);
    v10 = v16;
  }
  while ( !v16 );
  v9 = 1;
  if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
  {
    v21 = a1;
    goto LABEL_68;
  }
LABEL_11:
  v17 = a1;
  if ( *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) != a1 )
    goto LABEL_64;
  v34 = MI_READ_PTE_LOCK_FREE(v10 + 16);
  DemandZeroPte = v34;
  if ( (unsigned int)MI_IS_RESET_PTE(v34) )
  {
    if ( (*(_BYTE *)(v10 + 34) & 0x10) == 0 )
      goto LABEL_64;
  }
LABEL_34:
  if ( (DemandZeroPte & 2) == 0 )
  {
    if ( v10 && (*(_BYTE *)(v10 + 34) & 0x28) != 0 )
      goto LABEL_64;
    if ( (DemandZeroPte & 4) == 0 )
      goto LABEL_47;
    if ( v10 )
    {
      if ( (a3 & 1) != 0 )
      {
LABEL_63:
        v4 = 1;
        goto LABEL_64;
      }
      if ( !*(_WORD *)(v10 + 32) )
      {
        if ( !MiUnlinkPageFromList(v10, 0) )
        {
          MiDiscardTransitionPte(v10);
          goto LABEL_64;
        }
        v4 = 1;
      }
      v23 = MiCapturePageFileInfoInline((_QWORD *)(v10 + 16), 1, 0);
      *(_BYTE *)(v10 + 34) |= 0x10u;
      v5 = v23;
      DemandZeroPte = v34;
LABEL_47:
      if ( (a3 & 1) == 0 )
      {
        PageFileReservationOffset = MiGetPageFileReservationOffset(a4, a4, v18, v19);
        v26 = MiTransferSoftwarePte(
                DemandZeroPte,
                *((_QWORD *)&v17[233].Header.WaitListHead.Flink + ((unsigned __int8)HIBYTE(*v25) >> 4)),
                PageFileReservationOffset);
        v27 = v26;
        if ( v10 )
        {
          if ( !*(_WORD *)(v10 + 32) && (*(_BYTE *)(v10 + 34) & 0x10) != 0 && !v4 )
          {
            MiUnlinkPageFromList(v10, 0);
            v4 = 1;
          }
          *(_QWORD *)(v10 + 16) = v27;
          if ( (unsigned int)MiPteInShadowRange(v10 + 16) )
            MiWritePteShadow(v28);
          if ( v4 )
            MiInsertPageInList(v10, 8u);
        }
        else
        {
          *(_QWORD *)a2 = v26;
          if ( (unsigned int)MiPteInShadowRange(a2) )
            MiWritePteShadow(v31);
        }
        if ( v36 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16, 0xFFFFF68000000000uLL, v29, v30);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
        }
      }
      goto LABEL_63;
    }
LABEL_64:
    v21 = a1;
    goto LABEL_65;
  }
  v21 = a1;
  if ( (a3 & 1) != 0 )
    *a4 = DemandZeroPte;
LABEL_65:
  if ( !v9 )
    goto LABEL_69;
LABEL_68:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_69:
  if ( v5 )
    MiReleasePageFileInfo(v21, v5, 1);
  return v4;
}
