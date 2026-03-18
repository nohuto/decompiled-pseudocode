/*
 * XREFs of MiCompletePrivateZeroFault @ 0x140014310
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiFreePageChain @ 0x140152870 (MiFreePageChain.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 v6; // r13
  int *v7; // r12
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r10d
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ebp
  __int64 v19; // rsi
  unsigned int v20; // r15d
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rbp
  unsigned __int64 v34; // r9
  __int64 DemandZeroPte; // rbx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  volatile signed __int64 *v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  volatile signed __int64 v43; // rdx
  signed __int64 v44; // rdi
  signed __int64 v45; // rcx
  __int64 v46; // rdi
  bool v47; // zf
  __int64 v48; // r8
  void *v49; // rdi
  __int64 v50; // rdx
  unsigned int v51; // edi
  int v52; // ecx
  __int64 v53; // rax
  char v54; // r10
  __int64 v55; // rax
  unsigned int v56; // r8d
  unsigned int v57; // r12d
  __int64 ContainingPageTable; // rax
  char v59; // r9
  int v60; // r10d
  __int64 v61; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v64; // ebp
  char v65; // al
  unsigned __int8 v66; // cl
  volatile signed __int64 v67; // rax
  char v68; // cl
  int v69; // edi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r9
  unsigned __int64 v74; // rdx
  unsigned int v75; // edi
  __int64 v76; // rbx
  __int64 v77; // r8
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdi
  unsigned __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdi
  unsigned __int64 v87; // rdi
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  char v91; // di
  int v93; // [rsp+40h] [rbp-D8h]
  unsigned int v94; // [rsp+44h] [rbp-D4h]
  BOOL v95; // [rsp+48h] [rbp-D0h]
  int v96; // [rsp+4Ch] [rbp-CCh] BYREF
  int v97; // [rsp+50h] [rbp-C8h] BYREF
  int v98; // [rsp+54h] [rbp-C4h]
  int v99; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v100; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+68h] [rbp-B0h]
  _KPROCESS *Process; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+78h] [rbp-A0h]
  __int64 v104; // [rsp+88h] [rbp-90h]
  __int64 v105; // [rsp+90h] [rbp-88h]
  __int64 v106; // [rsp+98h] [rbp-80h]
  __int64 v107; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v108; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v109; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v110; // [rsp+B8h] [rbp-60h]
  __int64 v111; // [rsp+C0h] [rbp-58h]
  __int64 v114; // [rsp+128h] [rbp+10h]
  unsigned __int8 v116; // [rsp+138h] [rbp+20h]

  v3 = a3;
  v4 = *((_QWORD *)a1 + 7);
  v5 = a2;
  v6 = (*((_QWORD *)a1 + 2) >> 9) & 0x7FFFFFFFF8LL;
  v104 = v4;
  v7 = a1;
  v8 = (_QWORD *)*((_QWORD *)a1 + 1);
  v9 = v6 - 0x98000000000LL;
  v95 = 0;
  v107 = v8[7];
  v10 = v8[2];
  if ( (v10 & 1) != 0 )
    v95 = *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v11 = v4;
  if ( (*v7 & 8) == 0 )
    v11 = 0LL;
  v106 = v11;
  v12 = (*v8 >> 9) & 0x7FFFFFFFF8LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 16;
  v14 = *((_QWORD *)v7 + 8);
  v15 = 273;
  v105 = v12 - 0x98000000000LL;
  v93 = 16;
  if ( v14 )
  {
    v16 = *(unsigned __int8 *)(v14 + 34);
    v17 = *(unsigned int *)(v14 + 52);
    LODWORD(v17) = v17 & 0x7FFFFFFF;
    if ( (v17 | (v16 << 31)) == 0x7FFFFFFFELL )
      v13 = 80;
    v93 = v13;
  }
  v18 = v7[8];
  if ( (v18 & 2) == 0 || v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
    v18 |= 0x80000000;
  if ( !v7[9] )
    __incgsdword(0x2E9Cu);
  v94 = 0;
  v19 = v18 & 0x1F;
  v20 = 0;
  v21 = MmProtectToPteMask[v19] & 0xFFFF000000000E5EuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v26 = MmProtectToPteMask[v19] & 0xFFFF000000000E5EuLL | 0x121;
  }
  else
  {
    v22 = (__int64)(v9 << 25) >> 16;
    if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v21 = MmProtectToPteMask[v19] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (v18 & 0x4000000) == 0 )
      {
        v21 = MmProtectToPteMask[v19] & 0x7FFF000000000E5ELL | 0x21;
      }
      v23 = MiUserPdeOrAbove(v9, 0xFFFFF6FFFFFFFFFFuLL, 0x140000000uLL, v3);
      v13 = v93;
      v5 = a2;
      v3 = a3;
      if ( v23 )
        v21 |= 4uLL;
    }
    v24 = v21 | 4;
    if ( v9 > 0xFFFFF6BFFFFFFF78uLL )
      v24 = v21;
    if ( v22 >= 0xFFFF800000000000uLL )
    {
      if ( byte_1403CCF90[((v22 >> 39) & 0x1FF) - 256] == 1 )
      {
        v25 = 0;
      }
      else if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v22 < qword_1403CD100 || (v25 = HIBYTE(word_1403CB7D0), v22 > qword_1403CBB70) )
          v25 = (unsigned __int8)word_1403CB7D0;
      }
      else
      {
        v25 = 0;
      }
    }
    else
    {
      v25 = HIBYTE(word_1403CB7D0);
    }
    v26 = v24 | 0x100;
    if ( !v25 )
      v26 = v24;
  }
  if ( v18 < 0 && (v18 & 5) == 4 )
    v26 |= 0x42uLL;
  v27 = v26 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v18 & 0x40000000) == 0 )
    v27 = v26;
  if ( (v18 & 0x20000000) != 0 )
    v27 ^= ((unsigned __int16)v27 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100;
  v28 = v27 & 0xFFFFFFFFFFFFFEFFuLL;
  v29 = v18 & 0x8000000;
  if ( (v18 & 0x8000000) == 0 )
    v28 = v27;
  v30 = v28 | 0x80;
  if ( (v18 & 0x4000000) == 0 )
    v30 = v28;
  v31 = 0LL;
  v103 = 0LL;
  v32 = v30 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v33 = 4LL;
  if ( v3 )
  {
    v34 = 0xFFFFFFF000000000uLL;
    while ( 1 )
    {
      DemandZeroPte = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL
        && v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v29, 0xFFFFF6FB7DBED7F8uLL, 0LL, 0xFFFFFFF000000000uLL)
        && (DemandZeroPte & 1) != 0
        && ((DemandZeroPte & 0x20) == 0 || (DemandZeroPte & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * ((v9 >> 3) & 0x1FF));
          v38 = DemandZeroPte | 0x20;
          if ( (v37 & 0x20) == 0 )
            v38 = DemandZeroPte;
          DemandZeroPte = v38;
          if ( (v37 & 0x42) != 0 )
            DemandZeroPte = v38 | 0x42;
        }
      }
      if ( !v7[9] && !DemandZeroPte )
      {
        v94 = v20 + 1;
        DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v7[8]);
        *(_QWORD *)v9 = DemandZeroPte;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= v39 )
        {
          MiWritePteShadow(v9, DemandZeroPte);
          v31 = 0LL;
          v34 = 0xFFFFFFF000000000uLL;
        }
      }
      v40 = (volatile signed __int64 *)(v5 + 24);
      v41 = v5;
      v42 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
      if ( v42 == 0xFFFFFFFFFLL )
        v114 = v31;
      else
        v114 = 48 * v42 - 0x58000000000LL;
      v43 = *v40;
      v44 = _InterlockedCompareExchange64(v40, v34 & *v40, *v40);
      if ( v43 != v44 )
      {
        do
        {
          v45 = v44;
          v44 = _InterlockedCompareExchange64(v40, v34 & v44, v44);
        }
        while ( v45 != v44 );
      }
      v46 = (v5 + 0x58000000000LL) / 48;
      v47 = v7[9] == 0;
      v101 = v46;
      if ( !v47 && !*((_QWORD *)v7 + 9) && (DemandZeroPte & 0x400) != 0 )
      {
        if ( MiGetPrototypePteDirect(DemandZeroPte) )
        {
          MiLockPageAtDpcInline(v41);
          *(_QWORD *)(v41 + 40) = *(_QWORD *)(v41 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
          _InterlockedAnd64(v40, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (DemandZeroPte & 0x3E0) != 0 )
        {
          DemandZeroPte &= ~0x400uLL;
        }
        else
        {
          DemandZeroPte = v48;
        }
        v49 = (void *)MiMapPageInHyperSpaceWorker(v46, 0LL, 0x80000000LL);
        memset64(v49, DemandZeroPte & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
        LOBYTE(v50) = 17;
        MiUnmapPageInHyperSpaceWorker(v49, v50, 0x80000000LL);
        DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v13 = v93 | 8;
      }
      v51 = v7[8];
      v52 = v13 | 0x20;
      if ( (*v7 & 4) == 0 )
        v52 = v13;
      v93 = v52;
      v53 = MI_READ_PTE_LOCK_FREE(v9);
      if ( (v54 & 4) != 0 )
      {
        if ( v53 )
          v53 = ((unsigned __int16)v53 ^ (unsigned __int16)(32 * v51)) & 0x3E0 ^ (unsigned __int64)v53;
        else
          v53 = MiMakeDemandZeroPte(v51);
      }
      v55 = MiTransferSoftwarePte(v53, 0LL, 0LL, 4LL);
      *(_QWORD *)(v41 + 16) = v55;
      if ( (v93 & 2) != 0 )
      {
        *(_QWORD *)(v41 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v93 & 8) == 0 )
      {
        *(_QWORD *)(v41 + 16) = v55 & 0xFFFFFFFFFC00FFFFuLL;
      }
      v57 = 1;
      if ( v51 != 31 )
      {
        if ( v51 >> 3 == 3 )
        {
          if ( (v51 & 7) != 0 )
            v57 = 2;
        }
        else if ( v51 >> 3 == 1 )
        {
          v57 = v56;
        }
      }
      *(_WORD *)(v41 + 32) = 1;
      ContainingPageTable = MiGetContainingPageTable(v9);
      *(_QWORD *)(v41 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(v41 + 40)) & 0xFFFFFFFFFLL;
      v61 = 48 * ContainingPageTable - 0x58000000000LL;
      CurrentThread = KeGetCurrentThread();
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v64 = (Queue >> 9) & 7;
      }
      else
      {
        v64 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v65 = 2;
          if ( v64 < 2 )
            v65 = v64;
          LOBYTE(v64) = v65;
        }
      }
      v116 = 17;
      v98 = v59 & 1;
      if ( (v59 & 1) == 0 )
      {
        if ( (v59 & 0x10) != 0 )
        {
          v96 = v60;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v96);
            while ( *(__int64 *)v40 < 0 );
          }
        }
        else
        {
          v116 = MiLockPageInline(v41);
        }
      }
      v97 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v97);
        while ( *(__int64 *)(v61 + 24) < 0 );
      }
      *(_QWORD *)(v61 + 24) ^= (*(_QWORD *)(v61 + 24) ^ (*(_QWORD *)(v61 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v66 = *(_BYTE *)(v41 + 34);
      if ( v66 >> 6 != v57 )
      {
        MiChangePageAttribute(v41, v57, 1LL);
        v66 = *(_BYTE *)(v41 + 34);
      }
      v67 = *v40;
      *(_BYTE *)(v41 + 35) ^= (*(_BYTE *)(v41 + 35) ^ v64) & 7;
      v68 = v66 & 0xF8 | 6;
      *(_QWORD *)(v41 + 8) = v9;
      *v40 = v67 & 0xC000000000000000uLL | 1;
      *(_BYTE *)(v41 + 34) = v68;
      if ( (v93 & 0x20) == 0 )
        *(_BYTE *)(v41 + 34) = v68 | 0x10;
      if ( (v93 & 0x40) != 0 )
        *(_BYTE *)(v41 + 35) |= 0x20u;
      if ( !v98 )
      {
        _InterlockedAnd64(v40, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v93 & 0x10) == 0 )
          __writecr8(v116);
      }
      if ( (v93 & 8) != 0 )
        *(_QWORD *)(v41 + 16) = DemandZeroPte;
      v7 = a1;
      v69 = *a1;
      if ( (*a1 & 4) != 0 )
        break;
      v32 = (v32 ^ (v101 << 12)) & 0xFFFFFFFFF000LL ^ v32 | 0x20;
      if ( !*((_QWORD *)a1 + 9) )
      {
        if ( v9 != v105 && (v69 & 0x80u) != 0 )
          v32 &= ~0x20uLL;
        if ( !(unsigned int)MiAllocateWsle(v107, v9, v41, 0, v32, v95, v106) )
        {
          v76 = 48 * (*(_QWORD *)(v41 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          MiLockPageAtDpcInline(v41);
          MiCapturePageFileInfoInline(v41 + 16, 1LL);
          *(_QWORD *)(v41 + 16) &= ~2uLL;
          *(_QWORD *)(v41 + 24) |= 0x4000000000000000uLL;
          MiDecrementShareCount(v41);
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiLockAndDecrementShareCount(v76, 0LL);
          v15 = -1073741801;
          MiFreePageChain(v114);
          v20 = v94;
          v33 = 4LL;
          goto LABEL_151;
        }
        if ( (*a1 & 0x40) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
        __incgsdword(0x2E9Cu);
        goto LABEL_148;
      }
      *(_QWORD *)v9 = v32;
      if ( (unsigned int)MiPteInShadowRange(v9) )
        MiWritePteShadow(v72, v32);
LABEL_149:
      v9 += 8LL;
      v5 = v114;
      v29 = v103 + 1;
      v33 = 4LL;
      v20 = v94;
      v34 = 0xFFFFFFF000000000uLL;
      v103 = v29;
      if ( v29 >= a3 )
      {
        v15 = 273;
        goto LABEL_151;
      }
      v31 = 0LL;
    }
    *(_QWORD *)v9 = MiMakeTransitionPte(v101, (unsigned int)a1[8]);
    if ( (unsigned int)MiPteInShadowRange(v9) )
    {
      MiWritePteShadow(v71, v70);
      v69 = *a1;
    }
    if ( (v69 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
    MiLockAndDecrementShareCount(v41, 0LL);
    if ( v104
      && (__int64)(v9 << 25) >> 16 == *(_QWORD *)(*(_QWORD *)(v104 + 8) + 16LL * *(_QWORD *)(v104 + 24))
                                    + (*(_QWORD *)(v104 + 32) << 12)
      && *(_BYTE *)v104 != 5 )
    {
      MiAdvanceFaultList(v104);
    }
LABEL_148:
    v13 = v93;
    goto LABEL_149;
  }
LABEL_151:
  if ( !v7[9] && v20 )
  {
    v73 = 0LL;
    v74 = *((_QWORD *)v7 + 2);
    v75 = 0;
    while ( v74 > 0x7FFFFFFEFFFFLL )
    {
      v29 = 0LL;
      ++v75;
      v74 = (__int64)(v74 << 25) >> 16;
      if ( v75 >= 3 )
        return v15;
    }
    v77 = (*((_QWORD *)v7 + 2) >> 18) & 0x3FFFFFF8LL;
    v78 = *(_QWORD *)(v77 - 0x904C0000000LL);
    v79 = v77 - 0x904C0000000LL;
    if ( (unsigned __int64)(v77 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v79 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v29, v78, v77, 0LL)
      && (v78 & 1) != 0
      && ((v78 & 0x20) == 0 || (v78 & 0x42) == 0) )
    {
      v80 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v80 )
      {
        v81 = *(_QWORD *)(v80 + 8 * ((v79 >> 3) & 0x1FF));
        v82 = v78 | 0x20;
        if ( (v81 & 0x20) == 0 )
          v82 = v78;
        v78 = v82;
        if ( (v81 & 0x42) != 0 )
          v78 = v82 | 0x42;
      }
    }
    v100 = v78;
    if ( (unsigned __int64)&v100 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v100 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v100, v78, v77, v73)
      && (v78 & 1) != 0
      && ((v78 & 0x20) == 0 || (v78 & 0x42) == 0) )
    {
      v83 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v83 )
      {
        v84 = v78 | 0x20;
        v85 = *(_QWORD *)(v83 + 8 * (((unsigned __int64)&v100 >> 3) & 0x1FF));
        if ( (v85 & 0x20) == 0 )
          v84 = v78;
        v78 = v84;
        if ( (v85 & 0x42) != 0 )
          v78 = v84 | 0x42;
      }
    }
    v86 = 48 * ((v78 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v99 = v73;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v99);
      while ( *(__int64 *)(v86 + 24) < 0 );
    }
    *(_QWORD *)(v86 + 16) ^= ((unsigned int)*(_QWORD *)(v86 + 16) ^ ((unsigned int)*(_QWORD *)(v86 + 16)
                                                                   + ((unsigned __int16)v20 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v86 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 <= 1
      && ((__int64)(*(_QWORD *)(v86 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v86 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v108 = (((*(_QWORD *)(v86 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v109 = ((v108 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v110 = ((v109 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v111 = ((v110 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v87 = *(&v107 + v33--);
        v88 = *(_QWORD *)v87;
        if ( v87 >= 0xFFFFF6FB7DBED000uLL
          && v87 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v88 & 1) == 0 )
            return v15;
          if ( (v88 & 0x20) == 0 || (v88 & 0x42) == 0 )
          {
            v89 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v89 )
            {
              v90 = *(_QWORD *)(v89 + 8 * ((v87 >> 3) & 0x1FF));
              v91 = v88 | 0x20;
              if ( (v90 & 0x20) == 0 )
                v91 = v88;
              LOBYTE(v88) = v91;
              if ( (v90 & 0x42) != 0 )
                LOBYTE(v88) = v91 | 0x42;
            }
          }
        }
      }
      while ( (v88 & 1) != 0 && (v88 & 0x80u) == 0LL && v33 );
    }
  }
  return v15;
}
