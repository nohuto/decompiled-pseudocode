/*
 * XREFs of MiActOnPte @ 0x140050360
 * Callers:
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiUpdatePageTableUseCount @ 0x14003C610 (MiUpdatePageTableUseCount.c)
 *     MiCheckUserVirtualAddress @ 0x14003E2E0 (MiCheckUserVirtualAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiUpdateWsleAge @ 0x14004F124 (MiUpdateWsleAge.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MI_IS_RESET_PTE @ 0x140053CF0 (MI_IS_RESET_PTE.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiGetVaAge @ 0x14012A280 (MiGetVaAge.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiSharedVaToPartition @ 0x1401528B0 (MiSharedVaToPartition.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiMakePageFilePte @ 0x1401A65FC (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8)
{
  unsigned int v8; // ebp
  _QWORD *v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  _KPROCESS *Process; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  ULONG_PTR v16; // rdi
  __int64 v17; // rax
  ULONG_PTR v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  unsigned __int8 updated; // al
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // r8
  char v28; // cl
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // al
  int v43; // eax
  ULONG_PTR v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // ebp
  char v52; // di
  __int64 PageFilePte; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int16 *v64; // [rsp+28h] [rbp-40h]
  int v66; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  v9 = a4;
  v10 = a3;
  v11 = (unsigned __int64)a4;
  *a8 = 0LL;
  if ( !a4 )
    v11 = a3;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v64 = &Process[1].IdealNode[12];
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v11);
      v63 = v14;
      v15 = v14;
      if ( (v14 & 1) == 0 )
        break;
      if ( !v9 )
      {
        v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63);
        if ( !(unsigned int)MiIsPfnInline((v19 >> 12) & 0xFFFFFFFFFLL) )
          return 3221226548LL;
        v16 = 48 * v20 - 0x58000000000LL;
        v22 = *(_QWORD *)(v16 + 8);
        if ( v22 < 0 )
        {
          if ( MiLocateCloneAddress(Process, v21 | v22) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        MiLockPageAtDpcInline(v16);
        if ( (*(_BYTE *)(a1 + 48) & 7) != 6 || !MiRotatedToFrameBuffer(v10) )
        {
LABEL_28:
          if ( a5 == 2 )
          {
            updated = MiUpdatePfnPriority(v16);
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v26 = (__int64)v64;
            if ( updated != 0xFF && !v9 )
              MiUpdateWsleAge((__int64)v64, v10, updated, v25);
            v27 = *(_QWORD *)(v16 + 8);
            if ( v27 >= 0 && !v9 )
              MiDemoteCombinedPte(v26, v10, v27 | 0x8000000000000000uLL);
            return 0LL;
          }
          v28 = *(_BYTE *)(v16 + 34);
          if ( (v28 & 8) == 0 )
          {
            v29 = v28 & 0x10;
            if ( a5 == 1 )
            {
              if ( v29 || !v9 && (v15 & 0x42) != 0 )
                v8 = -1073740748;
              if ( !v29 && (*(_DWORD *)(v16 + 16) & 4) == 0 )
                *(_BYTE *)(v16 + 34) = v28 | 0x10;
              if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v16 + 16)) )
              {
                v30 = MI_READ_PTE_LOCK_FREE(v16 + 16);
                *(_QWORD *)(v16 + 16) = MiUpdatePageFileHighInPte(v30, 0LL);
                if ( MiPteInShadowRange(v16 + 16) )
                  MiWritePteShadow(v16 + 16, v31);
              }
              else
              {
                v8 = -1073740748;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return v8;
            }
            else
            {
              if ( v29 )
                *(_BYTE *)(v16 + 34) = v28 & 0xEF;
              v32 = MiCapturePageFileInfoInline(v16 + 16, 1LL);
              *a8 = v32;
              if ( v32 )
                *a7 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v16 + 40) >> 40) & 0x3FFLL));
              *(_QWORD *)(v16 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v16 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              if ( MiPteInShadowRange(v16 + 16) )
                MiWritePteShadow(v16 + 16, v33);
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v9 || (v63 & 0x42) == 0 )
                return 0LL;
              MiWriteValidPteNewProtection(v10, v63 & 0xFFFFFFFFFFFFFF9DuLL);
              v34 = (__int64)(v10 << 25) >> 16;
              if ( (unsigned __int8)MiGetVaAge(v35, v34, v36, v37) < 7u )
              {
                LOBYTE(v38) = 1;
                MiSetVaAge(v64, v34, v38);
              }
              return 3221225505LL;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 3221226548LL;
      }
      v16 = MiLockLeafPage(v9, 0LL);
      if ( v16 )
      {
        v63 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
        LOBYTE(v15) = v63;
        if ( (v63 & 1) != 0 )
          goto LABEL_28;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v14 & 0x400) != 0 )
      return 0LL;
    if ( (v14 & 0x800) == 0 )
      break;
    if ( v9 )
      v17 = MiLockLeafPage(v9, 0LL);
    else
      v17 = MiLockTransitionLeafPage(v10);
    v18 = v17;
    if ( v17 )
    {
      if ( !v9 || (v63 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9), (v63 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v18);
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v39 = *(_BYTE *)(v18 + 34);
        if ( (v39 & 7) == 2 )
        {
          if ( a5 == 1 )
          {
            if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v18 + 16)) )
            {
              v40 = MI_READ_PTE_LOCK_FREE(v18 + 16);
              *(_QWORD *)(v18 + 16) = MiUpdatePageFileHighInPte(v40, 0LL);
              if ( MiPteInShadowRange(v18 + 16) )
                MiWritePteShadow(v18 + 16, v41);
            }
            else
            {
              v8 = -1073740748;
            }
            if ( (*(_DWORD *)(v18 + 16) & 4) == 0 )
            {
              v42 = *(_BYTE *)(v18 + 34) | 0x10;
              *(_BYTE *)(v18 + 34) = v42;
              if ( *(_WORD *)(v18 + 32) )
              {
                *(_BYTE *)(v18 + 34) = v42 & 0xF8 | 3;
              }
              else
              {
                v43 = MiUnlinkPageFromList(v18);
                v44 = v18;
                if ( !v43 )
                {
                  MiDiscardTransitionPte(v18);
                  goto LABEL_72;
                }
                v45 = 8;
LABEL_94:
                MiInsertPageInList(v44, v45);
              }
            }
          }
          else if ( (v39 & 0x28) == 0 )
          {
            v46 = MiCapturePageFileInfoInline(v18 + 16, 1LL);
            *a8 = v46;
            if ( v46 )
              *a7 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
            *(_QWORD *)(v18 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            if ( MiPteInShadowRange(v18 + 16) )
              MiWritePteShadow(v18 + 16, v47);
          }
        }
        else if ( (v39 & 7) == 3 )
        {
          if ( a5 == 1 )
          {
LABEL_72:
            v8 = -1073740748;
          }
          else if ( (v39 & 8) == 0 && !a5 && (v39 & 0x20) == 0 )
          {
            v48 = v39 & 0xEF;
            *(_BYTE *)(v18 + 34) = v48;
            if ( *(_WORD *)(v18 + 32) )
              *(_BYTE *)(v18 + 34) = v48 & 0xF8 | 2;
            else
              MiUnlinkPageFromList(v18);
            v49 = MiCapturePageFileInfoInline(v18 + 16, 1LL);
            *a8 = v49;
            if ( v49 )
              *a7 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
            v63 = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v18 + 16) = v63;
            if ( MiPteInShadowRange(v18 + 16) )
              MiWritePteShadow(v18 + 16, v50);
            if ( !*(_WORD *)(v18 + 32) )
            {
              v45 = 4;
              v44 = v18;
              goto LABEL_94;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v8;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v51 = a5;
  if ( a5 != 2 )
  {
    if ( !v14 )
    {
      if ( !v9 && !a5 && !MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v66, a1) )
      {
        v52 = v66;
        if ( v66 != 24 )
        {
          MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
          PageFilePte = MiMakePageFilePte(1LL);
          v54 = v10;
          v63 = (32LL * (v52 & 0x1F)) | PageFilePte & 0xFFFFFFFFFFFFFC1FuLL;
          *(_QWORD *)v10 = v63;
          goto LABEL_128;
        }
      }
      return 3221226548LL;
    }
    v55 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
    if ( v9 )
    {
      if ( a2 == 1 )
      {
        v55 = MiSharedVaToPartition(&Process[1].IdealNode[12], (__int64)(v10 << 25) >> 16, v9);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 || (v56 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v55 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
      }
      else
      {
        v55 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v56 + 60LL) & 0x3FF));
      }
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
    {
      if ( v51 == 1 )
        return 3221226548LL;
      v60 = MiCapturePageFileInfoInline(&v63, 1LL);
      *a8 = v60;
      if ( v60 )
      {
        *a7 = v55;
        if ( !v9 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
          v9 = (_QWORD *)v10;
        }
        v54 = (unsigned __int64)v9;
        *v9 = v63;
        goto LABEL_128;
      }
    }
    else
    {
      if ( v51 == 1 )
      {
        if ( !(unsigned int)MI_IS_RESET_PTE(v15) )
          return 3221226548LL;
        v57 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63);
        v63 = MiUpdatePageFileHighInPte(v57, 0LL);
        if ( MiPteInShadowRange((unsigned __int64)&v63) )
          MiWritePteShadow(&v63, v58);
        if ( v9 )
          v10 = (unsigned __int64)v9;
        v54 = v10;
        *(_QWORD *)v10 = v63;
      }
      else
      {
        if ( (v15 & 2) != 0 )
        {
          MiReleasePageFileSpace(v55, v15, 1LL);
          v15 &= ~2uLL;
        }
        v59 = MiUpdatePageFileHighInPte(v15, 1LL);
        v63 = v59;
        if ( v9 )
          v10 = (unsigned __int64)v9;
        v54 = v10;
        *(_QWORD *)v10 = v59;
      }
LABEL_128:
      if ( MiPteInShadowRange(v54) )
        MiWritePteShadow(v62, v61);
    }
  }
  return 0LL;
}
