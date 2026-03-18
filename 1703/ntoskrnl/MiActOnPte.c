/*
 * XREFs of MiActOnPte @ 0x14007B8E8
 * Callers:
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiSharedVaToPartition @ 0x1400739A4 (MiSharedVaToPartition.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x14007C120 (MiCheckUserVirtualAddress.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MiUpdateWsleAge @ 0x14007C37C (MiUpdateWsleAge.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiUpdatePageTableUseCount @ 0x1400A56C0 (MiUpdatePageTableUseCount.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x140100990 (MiGetVaAge.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MI_IS_RESET_PTE @ 0x140104D20 (MI_IS_RESET_PTE.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        _QWORD *a4,
        int a5,
        unsigned int a6,
        ULONG_PTR **a7,
        __int64 *a8)
{
  _KPROCESS *Process; // r13
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // r15d
  ULONG_PTR v18; // rdi
  unsigned int v19; // r11d
  __int64 v20; // rax
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // r8
  char updated; // al
  __int64 v33; // r8
  unsigned __int16 *v34; // r12
  __int64 v35; // r8
  char v36; // cl
  unsigned int v37; // esi
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 *v41; // r9
  __int64 v42; // rcx
  int v43; // r10d
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // al
  int v50; // r14d
  _DWORD *v51; // r10
  __int16 v52; // r11
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 *v55; // r10
  __int64 v56; // rcx
  int v57; // eax
  ULONG_PTR v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  char v63; // al
  unsigned __int64 *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // r15d
  unsigned __int64 v68; // rdx
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  ULONG_PTR *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int16 *v77; // [rsp+28h] [rbp-8h]
  int v79; // [rsp+88h] [rbp+58h] BYREF

  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v77 = &Process[1].IdealNode[12];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = a4;
      if ( !a4 )
        v12 = (_QWORD *)a3;
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v16 = v13;
      v76 = v13;
      if ( (v13 & 1) == 0 )
        break;
      v17 = a5;
      if ( !a4 )
      {
        v22 = MI_GET_PAGE_FRAME_FROM_PTE(&v76);
        if ( !(unsigned int)MiIsPfnInline(v22, v23, v24, v22) )
          return 3221226548LL;
        v18 = 48 * v26 - 0x58000000000LL;
        v29 = *(_QWORD *)(v18 + 8);
        if ( v29 < 0 )
        {
          if ( MiLocateCloneAddress(Process, v27 | v29, v25, v26) )
            return 3221226548LL;
        }
        else
        {
          if ( v17 == 1 )
            return 3221226548LL;
          if ( !v17 )
            return 274LL;
        }
        MiLockPageAtDpcInline(v18);
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 )
        {
          v30 = MiRotatedToFrameBuffer(a3);
          v19 = 0;
          if ( v30 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return 3221226548LL;
          }
        }
        else
        {
          v19 = 0;
        }
LABEL_29:
        if ( v17 == 2 )
        {
          v31 = v19;
          LOBYTE(v31) = a4 == 0LL;
          updated = MiUpdatePfnPriority(v18, a6, v31);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v34 = v77;
          if ( updated != -1 && !a4 )
          {
            LOBYTE(v33) = updated;
            MiUpdateWsleAge(v77, a3, v33);
          }
          v35 = *(_QWORD *)(v18 + 8);
          if ( v35 >= 0 && !a4 )
            MiDemoteCombinedPte(v34, a3, v35 | 0x8000000000000000uLL);
          return 0LL;
        }
        v36 = *(_BYTE *)(v18 + 34);
        if ( (v36 & 8) != 0 )
        {
          v37 = -1073740748;
        }
        else
        {
          if ( v17 != 1 )
          {
            if ( (v36 & 0x10) != 0 )
              *(_BYTE *)(v18 + 34) = v36 & 0xEF;
            v44 = MiCapturePageFileInfoInline((_QWORD *)(v18 + 16), 1, 1);
            *a8 = v44;
            if ( v44 )
              *a7 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
            *(_QWORD *)(v18 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (unsigned int)MiPteInShadowRange(v18 + 16) )
              MiWritePteShadow(v45);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( a4 || (v76 & 0x42) == 0 )
              return 0LL;
            MiWriteValidPteNewProtection(a3, v76 & 0xFFFFFFFFFFFFFF9DuLL);
            v46 = (__int64)(a3 << 25) >> 16;
            if ( (unsigned __int8)MiGetVaAge(v47, v46) < 7u )
            {
              LOBYTE(v48) = 1;
              MiSetVaAge(v77, v46, v48);
            }
            return 3221225505LL;
          }
          if ( (v36 & 0x10) == 0 && (*(_DWORD *)(v18 + 16) & 4) == 0 )
            *(_BYTE *)(v18 + 34) = v36 | 0x10;
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v18 + 16)) )
          {
            v39 = MI_READ_PTE_LOCK_FREE(v38);
            v40 = MiUpdatePageFileHighInPte(v39, 0LL);
            *v41 = v40;
            if ( (unsigned int)MiPteInShadowRange(v41) )
              MiWritePteShadow(v42);
          }
          else
          {
            v43 = -1073740748;
          }
          v37 = v43;
        }
LABEL_94:
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v37;
      }
      v18 = MiLockLeafPage(a4, 0LL);
      if ( v18 )
      {
        v76 = MI_READ_PTE_LOCK_FREE(a4);
        if ( (v76 & 1) != 0 )
          goto LABEL_29;
LABEL_17:
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v13 & 0x400) != 0 )
      return 0LL;
    if ( (v13 & 0x800) == 0 )
      break;
    if ( a4 )
      v20 = MiLockLeafPage(a4, 0LL);
    else
      v20 = MiLockTransitionLeafPage(a3, 0LL);
    v21 = 0;
    v18 = v20;
    if ( v20 )
    {
      if ( a4 )
      {
        v76 = MI_READ_PTE_LOCK_FREE(a4);
        if ( (v76 & 1) != 0 )
          goto LABEL_17;
      }
      if ( a5 == 2 )
      {
        MiUpdatePfnPriority(v18, a6, 1LL);
        v37 = 0;
        goto LABEL_94;
      }
      v49 = *(_BYTE *)(v18 + 34);
      v50 = v21;
      if ( (v49 & 7) == 2 )
      {
        if ( a5 != 1 )
        {
          if ( (v49 & 0x28) == 0 )
          {
            v60 = (unsigned __int64 *)(v18 + 16);
            v61 = MiCapturePageFileInfoInline((_QWORD *)(v18 + 16), 1, 1);
            *a8 = v61;
            if ( v61 )
              *a7 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
            v76 = MiUpdatePageFileHighInPte(*v60, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            *v60 = v76;
            if ( (unsigned int)MiPteInShadowRange(v18 + 16) )
              MiWritePteShadow(v62);
          }
          goto LABEL_93;
        }
        if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v18 + 16)) )
        {
          v53 = MI_READ_PTE_LOCK_FREE(v51);
          v54 = MiUpdatePageFileHighInPte(v53, 0LL);
          *v55 = v54;
          if ( (unsigned int)MiPteInShadowRange(v55) )
            MiWritePteShadow(v56);
        }
        else
        {
          v50 = -1073740748;
        }
        if ( (*v51 & 4) != 0 )
        {
LABEL_93:
          v37 = v50;
          goto LABEL_94;
        }
        *(_BYTE *)(v18 + 34) |= 0x10u;
        if ( *(_WORD *)(v18 + 32) != v52 )
        {
          *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 3;
          goto LABEL_93;
        }
        v57 = MiUnlinkPageFromList(v18);
        v58 = v18;
        if ( !v57 )
        {
          MiDiscardTransitionPte(v18);
          v50 = -1073740748;
          goto LABEL_93;
        }
        v59 = 8LL;
      }
      else
      {
        if ( (v49 & 7) != 3 )
          goto LABEL_93;
        if ( a5 == 1 )
        {
          v50 = -1073740748;
          goto LABEL_93;
        }
        if ( (v49 & 8) != 0 || a5 || (v49 & 0x20) != 0 )
          goto LABEL_93;
        v63 = v49 & 0xEF;
        *(_BYTE *)(v18 + 34) = v63;
        if ( *(_WORD *)(v18 + 32) == (_WORD)v21 )
          MiUnlinkPageFromList(v18);
        else
          *(_BYTE *)(v18 + 34) = v63 & 0xF8 | 2;
        v64 = (unsigned __int64 *)(v18 + 16);
        v65 = MiCapturePageFileInfoInline((_QWORD *)(v18 + 16), 1, 1);
        *a8 = v65;
        if ( v65 )
          *a7 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
        v76 = MiUpdatePageFileHighInPte(*v64, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        *v64 = v76;
        if ( (unsigned int)MiPteInShadowRange(v18 + 16) )
          MiWritePteShadow(v66);
        if ( *(_WORD *)(v18 + 32) )
          goto LABEL_93;
        v59 = 4LL;
        v58 = v18;
      }
      MiInsertPageInList(v58, v59);
      goto LABEL_93;
    }
  }
  v67 = a5;
  if ( a5 != 2 )
  {
    if ( !v13 )
    {
      if ( !a4 && !a5 && !MiCheckUserVirtualAddress((__int64)(a3 << 25) >> 16, &v79, a1, 1LL) && v79 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(a3 << 25) >> 16, 1LL);
        v68 = (32LL * (v79 & 0x1F)) | MiMakePageFilePte(1LL) & 0xFFFFFFFFFFFFFC1FuLL;
        v76 = v68;
        goto LABEL_102;
      }
      return 3221226548LL;
    }
    v70 = qword_14036C8F8;
    v71 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
    if ( a4 )
    {
      if ( a2 == 1 )
      {
        v71 = MiSharedVaToPartition((__int64)&Process[1].IdealNode[12], (__int64)(a3 << 25) >> 16, (__int64)a4);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x8000) != 0 || (v72 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v71 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(Process[1].SecurePid));
      }
      else
      {
        v71 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)v72 + 60LL) & 0x3FF));
      }
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v16, v70, v14, v15) )
    {
      if ( v67 == 1 )
        return 3221226548LL;
      v74 = MiCapturePageFileInfoInline(&v76, 1, 0);
      *a8 = v74;
      if ( v74 )
      {
        *a7 = v71;
        if ( !a4 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
          a4 = (_QWORD *)a3;
        }
        v69 = a4;
        *a4 = v76;
        goto LABEL_127;
      }
    }
    else
    {
      if ( v67 == 1 )
      {
        if ( !(unsigned int)MI_IS_RESET_PTE(v16) )
          return 3221226548LL;
        v73 = MI_READ_PTE_LOCK_FREE(&v76);
        v76 = MiUpdatePageFileHighInPte(v73, 0LL);
        if ( (unsigned int)MiPteInShadowRange(&v76) )
          MiWritePteShadow(&v76);
        v68 = v76;
      }
      else
      {
        if ( (v16 & 2) != 0 )
        {
          MiReleasePageFileSpace(v71, v16, 1LL);
          v16 &= ~2uLL;
        }
        v68 = MiUpdatePageFileHighInPte(v16, 1LL);
        v76 = v68;
      }
      if ( a4 )
        a3 = (ULONG_PTR)a4;
LABEL_102:
      *(_QWORD *)a3 = v68;
      v69 = (_QWORD *)a3;
LABEL_127:
      if ( (unsigned int)MiPteInShadowRange(v69) )
        MiWritePteShadow(v75);
    }
  }
  return 0LL;
}
