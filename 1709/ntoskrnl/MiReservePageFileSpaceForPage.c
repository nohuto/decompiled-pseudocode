/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14005CFD0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MI_IS_RESET_PTE @ 0x14005BFC0 (MI_IS_RESET_PTE.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rsi
  unsigned int v6; // edi
  int v8; // r12d
  unsigned __int64 v9; // r11
  BOOL v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 PteShadow; // rbx
  __int64 v14; // rbx
  __int64 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // r10
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int PageFileReservationOffset; // eax
  _WORD *v26; // rdx
  __int64 v27; // r10
  __int64 v28; // rax
  ULONG_PTR v29; // r11
  __int64 v30; // rbx
  unsigned __int64 v31; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 DemandZeroPte; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v36; // [rsp+88h] [rbp+20h]

  v36 = (_QWORD *)a4;
  v4 = 0;
  v5 = 0LL;
  v6 = a3;
  v8 = a3 & 0x80;
  v9 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v10 = 0;
    if ( v8 )
    {
      v11 = 0LL;
    }
    else
    {
      v12 = MiLockLeafPage((__int64 *)a2, 0LL, a3, a4);
      v9 = 0xFFFFF6FB7DBED000uLL;
      v11 = v12;
      v10 = v12 != 0;
    }
    PteShadow = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
    DemandZeroPte = PteShadow;
    if ( (PteShadow & 1) != 0 )
      break;
    if ( (PteShadow & 0x400) != 0 )
      goto LABEL_76;
    if ( (PteShadow & 0x800) == 0 )
    {
      if ( !PteShadow )
      {
        if ( (v6 & 2) != 0 )
        {
          v18 = 1;
          DemandZeroPte = MiMakeDemandZeroPte((v6 >> 2) & 0x1F);
          v14 = a1;
          v17 = DemandZeroPte;
          goto LABEL_44;
        }
        goto LABEL_76;
      }
      if ( !(unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, a4) || ((PteShadow >> 5) & 0xF) == 0 )
        goto LABEL_76;
LABEL_42:
      v14 = a1;
      goto LABEL_43;
    }
    if ( !v8 )
      goto LABEL_14;
    v11 = MiLockTransitionLeafPage(a2);
    v9 = 0xFFFFF6FB7DBED000uLL;
    if ( v11 )
    {
      v10 = 1;
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
      {
        v20 = a1;
        goto LABEL_80;
      }
LABEL_14:
      v14 = a1;
      if ( *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) == a1 )
      {
        v15 = *(_QWORD *)(v11 + 16);
        v16 = v11 + 16;
        if ( v11 + 16 >= v9 && v16 <= 0xFFFFF6FB7DBED7F8uLL )
          v15 = MiReadPteShadow(v16, *(_QWORD *)(v11 + 16));
        DemandZeroPte = v15;
        if ( !MI_IS_RESET_PTE(v15) || (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
        {
LABEL_43:
          v18 = 0;
LABEL_44:
          if ( (v17 & 2) != 0 )
          {
            v20 = a1;
            if ( (v6 & 1) != 0 )
              *v36 = v17;
            goto LABEL_77;
          }
          if ( !v11 || (*(_BYTE *)(v11 + 34) & 0x28) == 0 )
          {
            if ( (v17 & 4) == 0 )
              goto LABEL_57;
            if ( v11 )
            {
              if ( (v6 & 1) == 0 )
              {
                if ( !*(_WORD *)(v11 + 32) )
                {
                  if ( !MiUnlinkPageFromList(v11, 0LL) )
                  {
                    MiDiscardTransitionPte(v11);
                    goto LABEL_76;
                  }
                  v4 = 1;
                }
                v24 = MiCapturePageFileInfoInline(v11 + 16, 1LL);
                *(_BYTE *)(v11 + 34) |= 0x10u;
                v5 = v24;
LABEL_57:
                if ( (v6 & 1) == 0 )
                {
                  PageFileReservationOffset = MiGetPageFileReservationOffset(v36);
                  v28 = MiTransferSoftwarePte(
                          v27,
                          *(_QWORD *)(v14 + 8LL * ((unsigned __int8)HIBYTE(*v26) >> 4) + 5792),
                          PageFileReservationOffset,
                          2LL);
                  v30 = v28;
                  if ( v11 )
                  {
                    if ( !*(_WORD *)(v11 + 32) && (*(_BYTE *)(v11 + 34) & 0x10) != 0 && !v4 )
                    {
                      MiUnlinkPageFromList(v11, 0LL);
                      v4 = 1;
                    }
                    v31 = v11 + 16;
                    *(_QWORD *)(v11 + 16) = v30;
                    if ( (unsigned __int64)(v11 + 16) >= 0xFFFFF6FB7DBED000uLL && v31 <= 0xFFFFF6FB7DBED7F8uLL )
                      MiWritePteShadow(v31, v30);
                    if ( v4 )
                      MiInsertPageInList(v11, 8);
                  }
                  else
                  {
                    *(_QWORD *)a2 = v28;
                    if ( a2 >= v29 && a2 <= 0xFFFFF6FB7DBED7F8uLL )
                      MiWritePteShadow(a2, v28);
                  }
                  if ( v18 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
                  {
                    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
                    MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
                  }
                }
              }
              v4 = 1;
            }
          }
        }
      }
LABEL_76:
      v20 = a1;
      goto LABEL_77;
    }
  }
  if ( v8 )
  {
    v19 = MI_GET_PFN_FROM_PTE(&DemandZeroPte, a2, a3, a4);
    v11 = v19;
    if ( (v6 & 1) == 0 )
    {
      v10 = 1;
      MiLockPageAtDpcInline(v19);
      v9 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
      goto LABEL_76;
  }
  v20 = a1;
  if ( (*(_DWORD *)v11 & 1) != 0
    && *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) == a1
    && (*(_BYTE *)(v11 + 35) & 8) == 0 )
  {
    v21 = *(_QWORD *)(v11 + 16);
    v22 = v11 + 16;
    if ( v11 + 16 >= v9 && v22 <= 0xFFFFF6FB7DBED7F8uLL )
      v21 = MiReadPteShadow(v22, *(_QWORD *)(v11 + 16));
    DemandZeroPte = v21;
    if ( (unsigned int)MiInvalidPteConforms(v21, a2, a3, v20) )
    {
      if ( !MI_IS_RESET_PTE(v23) || (*(_BYTE *)(v11 + 34) & 0x10) != 0 || v8 && (PteShadow & 0x42) != 0 )
        goto LABEL_42;
    }
  }
LABEL_77:
  if ( !v10 )
    goto LABEL_81;
LABEL_80:
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_81:
  if ( v5 )
    MiReleasePageFileInfo(v20, v5, 1LL);
  return v4;
}
