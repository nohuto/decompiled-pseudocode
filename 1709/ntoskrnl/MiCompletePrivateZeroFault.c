/*
 * XREFs of MiCompletePrivateZeroFault @ 0x140046F90
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiFreePageChain @ 0x14012903C (MiFreePageChain.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r11
  int *v4; // r10
  __int64 v5; // r15
  unsigned __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 PteShadow; // rbx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  volatile signed __int64 *v27; // r14
  __int64 v28; // r13
  __int64 v29; // rax
  volatile signed __int64 v30; // rdx
  signed __int64 v31; // rdi
  signed __int64 v32; // rcx
  __int64 v33; // rdi
  bool v34; // zf
  unsigned __int64 v35; // rax
  void *v36; // rdi
  __int64 v37; // rdx
  __int64 DemandZeroPte; // rax
  unsigned int v39; // edi
  int v40; // ecx
  __int64 v41; // rax
  char v42; // r12
  __int64 v43; // rax
  unsigned int v44; // r12d
  __int64 ContainingPageTable; // rax
  __int64 v46; // r11
  __int64 v47; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v50; // ebp
  char v51; // al
  char v52; // al
  unsigned __int64 v53; // rax
  __int64 *v54; // rbp
  int v55; // eax
  __int64 TransitionPte; // rax
  _DWORD *v57; // r10
  __int64 v58; // rcx
  __int64 v59; // rdi
  int v61; // [rsp+30h] [rbp-98h]
  unsigned int v62; // [rsp+34h] [rbp-94h]
  int v63; // [rsp+38h] [rbp-90h] BYREF
  int v64; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v65; // [rsp+40h] [rbp-88h]
  __int64 v66; // [rsp+48h] [rbp-80h]
  __int64 v67; // [rsp+50h] [rbp-78h]
  _QWORD *v68; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 v70; // [rsp+68h] [rbp-60h]
  __int64 v71; // [rsp+70h] [rbp-58h]
  __int64 v74; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v75; // [rsp+E0h] [rbp+18h]
  unsigned __int8 v76; // [rsp+E8h] [rbp+20h]

  v75 = a3;
  v3 = a2;
  v4 = a1;
  v5 = (*((_QWORD *)a1 + 1) >> 9) & 0x7FFFFFFFF8LL;
  v68 = (_QWORD *)*((_QWORD *)a1 + 7);
  v6 = v5 - 0x98000000000LL;
  v71 = *((_QWORD *)a1 + 6);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 273;
  v8 = *((_QWORD *)a1 + 8);
  v9 = 16;
  v70 = ((*((_QWORD *)a1 + 2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62 = 273;
  if ( v8 )
  {
    v10 = *(unsigned __int8 *)(v8 + 34);
    v11 = *(unsigned int *)(v8 + 52);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    if ( (v11 | (v10 << 31)) == 0x7FFFFFFFELL )
      v9 = 80;
  }
  v12 = v4[8];
  if ( (v12 & 2) == 0 || v6 > 0xFFFFF6BFFFFFFF78uLL || v6 < 0xFFFFF68000000000uLL )
    v12 |= 0x80000000;
  v13 = v12 & 0x1F;
  v14 = MmProtectToPteMask[v13] & 0xFFFF000000000E5EuLL | 0x21;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v19 = MmProtectToPteMask[v13] & 0xFFFF000000000E5EuLL | 0x121;
  }
  else
  {
    v15 = (__int64)(v6 << 25) >> 16;
    if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v14 = MmProtectToPteMask[v13] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (v12 & 0x4000000) == 0 )
      {
        v14 = MmProtectToPteMask[v13] & 0x7FFF000000000E5ELL | 0x21;
      }
      v16 = MiUserPdeOrAbove(v6);
      v4 = a1;
      v3 = a2;
      a3 = v75;
      if ( v16 )
        v14 |= 4uLL;
    }
    v17 = v14 | 4;
    if ( v6 > 0xFFFFF6BFFFFFFF78uLL )
      v17 = v14;
    if ( v15 >= 0xFFFF800000000000uLL )
    {
      if ( byte_1403899D0[((v15 >> 39) & 0x1FF) - 256] == 1 )
      {
        v18 = 0;
      }
      else if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v15 < qword_140389B40 || (v18 = HIBYTE(word_1403885F8), v15 > qword_140388958) )
          v18 = (unsigned __int8)word_1403885F8;
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = HIBYTE(word_1403885F8);
    }
    v19 = v17 | 0x100;
    if ( !v18 )
      v19 = v17;
  }
  if ( v12 < 0 && (v12 & 5) == 4 )
    v19 |= 0x42uLL;
  v20 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v12 & 0x40000000) == 0 )
    v20 = v19;
  if ( (v12 & 0x20000000) != 0 )
    v20 ^= ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100;
  v21 = v20 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v12 & 0x8000000) == 0 )
    v21 = v20;
  v22 = v21 | 0x80;
  if ( (v12 & 0x4000000) == 0 )
    v22 = v21;
  v66 = 0LL;
  v23 = v22 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 )
  {
    while ( 1 )
    {
      PteShadow = *(_QWORD *)v6;
      v25 = 0xFFFFFFF000000000uLL;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
      if ( !v4[9] )
      {
        PteShadow = MiMakeDemandZeroPte((unsigned int)v4[8]);
        *(_QWORD *)v6 = PteShadow;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= v26 )
        {
          MiWritePteShadow(v6, PteShadow);
          v25 = 0xFFFFFFF000000000uLL;
        }
        if ( !v3 )
          goto LABEL_141;
      }
      v27 = (volatile signed __int64 *)(v3 + 24);
      v28 = v3;
      v29 = *(_QWORD *)(v3 + 24) & 0xFFFFFFFFFLL;
      if ( v29 == 0xFFFFFFFFFLL )
        v74 = 0LL;
      else
        v74 = 48 * v29 - 0x58000000000LL;
      v30 = *v27;
      v31 = _InterlockedCompareExchange64(v27, v25 & *v27, *v27);
      if ( v30 != v31 )
      {
        do
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange64(v27, v25 & v31, v31);
        }
        while ( v32 != v31 );
      }
      v33 = (v3 + 0x58000000000LL) / 48;
      v34 = v4[9] == 0;
      v67 = v33;
      if ( !v34 && !*((_QWORD *)v4 + 9) && (PteShadow & 0x400) != 0 )
      {
        if ( MiGetPrototypePteDirect(PteShadow) )
        {
          MiLockPageAtDpcInline(v28);
          *(_QWORD *)(v28 + 40) = *(_QWORD *)(v28 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
          _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v35 = PteShadow & 0xFFFFFFFFFFFFFBFFuLL;
          v34 = (PteShadow & 0x3E0) == 0;
          PteShadow = 0LL;
          if ( !v34 )
            PteShadow = v35;
        }
        v36 = (void *)MiMapPageInHyperSpaceWorker(v33, 0LL, 0x80000000LL);
        memset64(v36, PteShadow & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
        LOBYTE(v37) = 17;
        MiUnmapPageInHyperSpaceWorker(v36, v37, 0x80000000LL);
        DemandZeroPte = MiMakeDemandZeroPte(4LL);
        v4 = a1;
        PteShadow = DemandZeroPte;
        v9 |= 8u;
      }
      v39 = v4[8];
      v40 = v9 | 0x20;
      v41 = *(_QWORD *)v6;
      if ( (*v4 & 4) == 0 )
        v40 = v9;
      v42 = v40;
      v61 = v40;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        v41 = MiReadPteShadow(v6, v41);
      if ( (v42 & 4) != 0 )
      {
        if ( v41 )
          v41 = ((unsigned __int16)v41 ^ (unsigned __int16)(32 * v39)) & 0x3E0 ^ (unsigned __int64)v41;
        else
          v41 = MiMakeDemandZeroPte(v39);
      }
      v43 = MiTransferSoftwarePte(v41, 0LL, 0LL, 4LL);
      *(_QWORD *)(v28 + 16) = v43;
      if ( (v42 & 2) != 0 )
      {
        *(_QWORD *)(v28 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v42 & 8) == 0 )
      {
        *(_QWORD *)(v28 + 16) = v43 & 0xFFFFFFFFFC00FFFFuLL;
      }
      v44 = 1;
      if ( v39 != 31 )
      {
        if ( v39 >> 3 == 3 )
        {
          if ( (v39 & 7) != 0 )
            v44 = 2;
        }
        else
        {
          v44 = v39 >> 3 != 1;
        }
      }
      *(_WORD *)(v28 + 32) = 1;
      ContainingPageTable = MiGetContainingPageTable(v6);
      *(_QWORD *)(v28 + 40) ^= (*(_QWORD *)(v28 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
      v47 = v46 + 48 * ContainingPageTable;
      CurrentThread = KeGetCurrentThread();
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v50 = (Queue >> 9) & 7;
      }
      else
      {
        v50 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v51 = 2;
          if ( v50 < 2 )
            v51 = v50;
          LOBYTE(v50) = v51;
        }
      }
      v76 = 17;
      v65 = v61 & 1;
      v52 = v61;
      if ( (v61 & 1) == 0 )
      {
        if ( (v61 & 0x10) == 0 )
        {
          v76 = MiLockPageInline(v28);
LABEL_98:
          v52 = v61;
          goto LABEL_99;
        }
        v63 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v63);
            while ( *(__int64 *)v27 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) );
          goto LABEL_98;
        }
      }
LABEL_99:
      if ( (v52 & 0x20) == 0 )
        *(_BYTE *)(v28 + 34) |= 0x10u;
      v64 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(__int64 *)(v47 + 24) < 0 );
      }
      *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( *(unsigned __int8 *)(v28 + 34) >> 6 != v44 )
        MiChangePageAttribute(v28, v44, 1LL);
      v9 = v61;
      v53 = *v27 & 0xC000000000000000uLL | 1;
      *(_QWORD *)(v28 + 8) = v6;
      *v27 = v53;
      *(_BYTE *)(v28 + 35) ^= (v50 ^ *(_BYTE *)(v28 + 35)) & 7;
      *(_BYTE *)(v28 + 34) = *(_BYTE *)(v28 + 34) & 0xF8 | 6;
      if ( (v61 & 0x40) != 0 )
        *(_BYTE *)(v28 + 35) |= 0x20u;
      if ( !v65 )
      {
        _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v61 & 0x10) == 0 )
          __writecr8(v76);
      }
      v54 = (__int64 *)(v28 + 16);
      if ( (v61 & 8) != 0 )
        *v54 = PteShadow;
      v4 = a1;
      v55 = *a1;
      if ( (*a1 & 4) != 0 )
      {
        TransitionPte = MiMakeTransitionPte(v67, (unsigned int)a1[8]);
        *(_QWORD *)v6 = TransitionPte;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v6, TransitionPte);
        if ( (*v57 & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
        MiLockAndDecrementShareCount(v28, 0LL);
        if ( v68 )
        {
          if ( (__int64)(v6 << 25) >> 16 == *(_QWORD *)(v68[1] + 16LL * v68[3]) + (v68[4] << 12) )
            MiAdvanceFaultList(v68);
        }
        v4 = a1;
      }
      else
      {
        v23 = (v23 ^ (v67 << 12)) & 0xFFFFFFFFF000LL ^ v23 | 0x20;
        if ( *((_QWORD *)a1 + 9) )
        {
          *(_QWORD *)v6 = v23;
          if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v6, v23);
        }
        else
        {
          v58 = 0LL;
          if ( v6 == v70 )
          {
            if ( (v55 & 8) != 0 )
              v58 = (__int64)v68;
          }
          else if ( (v55 & 0x40) != 0 )
          {
            v23 &= ~0x20uLL;
          }
          if ( !(unsigned int)MiAllocateWsle(v71, v6, v28, 0, v23, v58) )
          {
            v59 = 48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            MiLockPageAtDpcInline(v28);
            MiCapturePageFileInfoInline(v28 + 16, 1LL);
            *v54 &= ~2uLL;
            *v27 |= 0x4000000000000000uLL;
            MiDecrementShareCount(v28);
            _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
            MiLockAndDecrementShareCount(v59, 0LL);
            v7 = v62;
            if ( !v66 )
              v7 = -1073741801;
            v62 = v7;
            MiFreePageChain(v74);
            v4 = a1;
            if ( a1[9] )
              return v7;
            v3 = 0LL;
            goto LABEL_141;
          }
          v4 = a1;
          if ( (*a1 & 0x20) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
          __incgsdword(0x2E9Cu);
        }
      }
      v3 = v74;
LABEL_141:
      v6 += 8LL;
      if ( ++v66 >= v75 )
        return v62;
    }
  }
  return v7;
}
