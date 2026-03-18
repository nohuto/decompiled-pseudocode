/*
 * XREFs of MiCompletePrivateZeroFault @ 0x1400BC2F0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  int *v5; // r14
  __int64 *v6; // r12
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  __int64 DemandZeroPte; // rax
  __int64 v15; // rcx
  volatile signed __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r10
  volatile signed __int64 v19; // rdx
  signed __int64 v20; // rdi
  signed __int64 v21; // rcx
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // edi
  int v30; // ecx
  char v31; // bp
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r10
  unsigned int v35; // r11d
  unsigned int v36; // r14d
  __int64 ContainingPageTable; // rax
  __int64 v38; // r10
  int v39; // r11d
  __int64 v40; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v43; // ebp
  char v44; // al
  char v45; // al
  unsigned __int8 v46; // r12
  volatile signed __int64 v47; // rax
  int v48; // r15d
  unsigned __int64 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  unsigned int v53; // esi
  __int64 v54; // rbp
  unsigned __int64 v55; // rdi
  unsigned __int8 v56; // r14
  unsigned __int64 v57; // rbx
  int v58; // eax
  unsigned __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdi
  int v63; // ecx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int64 v70; // [rsp+38h] [rbp-90h]
  unsigned __int64 v71; // [rsp+40h] [rbp-88h]
  int v72; // [rsp+48h] [rbp-80h] BYREF
  int v73; // [rsp+4Ch] [rbp-7Ch] BYREF
  __int64 v74; // [rsp+50h] [rbp-78h]
  _QWORD *v75; // [rsp+58h] [rbp-70h]
  _KPROCESS *Process; // [rsp+60h] [rbp-68h]
  __int64 v77; // [rsp+68h] [rbp-60h]
  __int64 v78; // [rsp+70h] [rbp-58h]
  int v80; // [rsp+D8h] [rbp+10h]
  unsigned int v82; // [rsp+E8h] [rbp+20h]

  v4 = (*((_QWORD *)a1 + 1) >> 9) & 0x7FFFFFFFF8LL;
  v75 = (_QWORD *)*((_QWORD *)a1 + 7);
  v5 = a1;
  v6 = (__int64 *)(v4 - 0x98000000000LL);
  v78 = *((_QWORD *)a1 + 6);
  v71 = (unsigned __int64)v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = *((_QWORD *)a1 + 8);
  v8 = 16;
  v77 = ((*((_QWORD *)a1 + 2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82 = 273;
  v80 = 16;
  if ( v7 )
  {
    v9 = *(unsigned __int8 *)(v7 + 34);
    v10 = *(unsigned int *)(v7 + 52);
    LODWORD(v10) = v10 & 0x7FFFFFFF;
    if ( (v10 | (v9 << 31)) == 0x7FFFFFFFELL )
      v8 = 80;
    v80 = v8;
  }
  v70 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(v6);
      if ( !v5[9] )
      {
        DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v5[8]);
        *v6 = DemandZeroPte;
        v11 = DemandZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v6) )
        {
          MiWritePteShadow(v15);
          v12 = 0xFFFFFA8000000000uLL;
        }
      }
      v16 = (volatile signed __int64 *)(a2 + 24);
      v17 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFLL;
      v69 = a2;
      v18 = a2;
      if ( v17 == 0xFFFFFFFFFLL )
        a2 = v13;
      else
        a2 = v12 + 48 * v17;
      v19 = *v16;
      v20 = _InterlockedCompareExchange64(v16, *v16 & 0xFFFFFFF000000000uLL, *v16);
      if ( v19 != v20 )
      {
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64(v16, v20 & 0xFFFFFFF000000000uLL, v20);
        }
        while ( v21 != v20 );
      }
      v22 = (__int64)(v18 - v12) / 48;
      v23 = v5[9] == 0;
      v74 = v22;
      if ( !v23 && !*((_QWORD *)v5 + 9) && (v11 & 0x400) != 0 )
      {
        if ( MiGetPrototypePteDirect(
               v11,
               (unsigned __int128)((__int64)(v18 - v12) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
               0xFFFFFFF000000000uLL,
               v12) )
        {
          MiLockPageAtDpcInline(v24);
          *(_QWORD *)(v69 + 40) = *(_QWORD *)(v69 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
          _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
          v8 = v80;
        }
        else
        {
          v26 = v11 & 0xFFFFFFFFFFFFFBFFuLL;
          v23 = (v11 & 0x3E0) == 0;
          v11 = v25;
          if ( !v23 )
            v11 = v26;
        }
        v27 = (void *)MiMapPageInHyperSpaceWorker(v22, 0LL, 0x80000000LL);
        memset64(v27, v11 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
        LOBYTE(v28) = 17;
        MiUnmapPageInHyperSpaceWorker(v27, v28, 0x80000000LL);
        v8 |= 8u;
        v11 = MiMakeDemandZeroPte(4LL);
      }
      v29 = v5[8];
      v30 = v8 | 0x20;
      if ( (*v5 & 4) == 0 )
        v30 = v8;
      v31 = v30;
      v80 = v30;
      v32 = MI_READ_PTE_LOCK_FREE(v6);
      if ( (v31 & 4) != 0 )
      {
        if ( v32 )
          v32 = ((unsigned __int16)v32 ^ (unsigned __int16)(32 * v29)) & 0x3E0 ^ (unsigned __int64)v32;
        else
          v32 = MiMakeDemandZeroPte(v29);
      }
      v33 = MiTransferSoftwarePte(v32, 0LL, 0LL);
      *(_QWORD *)(v34 + 16) = v33;
      if ( (v31 & 2) != 0 )
      {
        *(_QWORD *)(v34 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v31 & 8) == 0 )
      {
        *(_QWORD *)(v34 + 16) = v33 & 0xFFFFFFFFFC00FFFFuLL;
      }
      v36 = 1;
      if ( v29 != 31 )
      {
        if ( v29 >> 3 == 3 )
        {
          if ( (v29 & 7) != 0 )
            v36 = 2;
        }
        else if ( v29 >> 3 == 1 )
        {
          v36 = v35;
        }
      }
      *(_WORD *)(v34 + 32) = 1;
      ContainingPageTable = MiGetContainingPageTable(v6);
      *(_QWORD *)(v38 + 40) ^= (*(_QWORD *)(v38 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
      v40 = 48 * ContainingPageTable - 0x58000000000LL;
      CurrentThread = KeGetCurrentThread();
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v43 = (Queue >> 9) & 7;
      }
      else
      {
        v43 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v44 = 2;
          if ( v43 < 2 )
            v44 = v43;
          LOBYTE(v43) = v44;
        }
      }
      v45 = v80;
      v46 = 17;
      if ( (v80 & 1) == 0 )
      {
        if ( (v80 & 0x10) != 0 )
        {
          v72 = v39;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) )
            goto LABEL_52;
          do
          {
            do
              KeYieldProcessorEx(&v72);
            while ( *(__int64 *)v16 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) );
        }
        else
        {
          v46 = MiLockPageInline(v38);
        }
        v45 = v80;
        v38 = v69;
      }
LABEL_52:
      if ( (v45 & 0x20) == 0 )
        *(_BYTE *)(v38 + 34) |= 0x10u;
      v73 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v73);
        while ( *(__int64 *)(v40 + 24) < 0 );
      }
      *(_QWORD *)(v40 + 24) ^= (*(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( *(unsigned __int8 *)(v69 + 34) >> 6 != v36 )
        MiChangePageAttribute(v69, v36, 1LL);
      v47 = *v16;
      *(_BYTE *)(v69 + 35) ^= (*(_BYTE *)(v69 + 35) ^ v43) & 7;
      v8 = v80;
      *v16 = v47 & 0xC000000000000000uLL | 1;
      *(_QWORD *)(v69 + 8) = v71;
      *(_BYTE *)(v69 + 34) = *(_BYTE *)(v69 + 34) & 0xF8 | 6;
      if ( (v80 & 0x40) != 0 )
        *(_BYTE *)(v69 + 35) |= 0x20u;
      if ( (v80 & 1) == 0 )
      {
        _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v80 & 0x10) == 0 )
          __writecr8(v46);
      }
      if ( (v80 & 8) != 0 )
        *(_QWORD *)(v69 + 16) = v11;
      v5 = a1;
      v48 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        v53 = a1[8] | 0x80000000;
        v54 = a1[8] & 0x1F;
        v55 = ((v74 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v54] & 0xFFFF000000000E7FuLL | 0x21;
        v49 = v71;
        v56 = word_14036C2A8;
        if ( v71 < 0xFFFFF68000000000uLL || v71 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_95;
        v57 = (__int64)(v71 << 25) >> 16;
        if ( v71 >= 0xFFFFF6FB40000000uLL && v71 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          if ( v71 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v55 = ((v74 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v54] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
          }
          else if ( (a1[8] & 0x4000000) == 0 )
          {
            v55 = ((v74 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v54] & 0x7FFF000000000E7FLL | 0x21;
          }
          if ( (unsigned int)MiUserPdeOrAbove(v71) )
            v55 |= 4uLL;
        }
        if ( v71 <= 0xFFFFF6BFFFFFFF78uLL )
          v55 |= 4uLL;
        if ( v57 < 0xFFFF800000000000uLL )
        {
          v58 = HIBYTE(word_14036C2A8);
          goto LABEL_94;
        }
        if ( byte_14036D700[((v57 >> 39) & 0x1FF) - 256] != 1
          && (v57 < 0xFFFFF68000000000uLL || v57 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          if ( v57 < qword_14036D870 || (v58 = HIBYTE(word_14036C2A8), v57 > qword_14036C5D0) )
            v58 = v56;
LABEL_94:
          if ( v58 )
LABEL_95:
            v55 |= 0x100uLL;
        }
        if ( (v54 & 5) == 4 )
          v55 |= 0x42uLL;
        if ( (v53 & 0x40000000) != 0 )
          v55 &= ~4uLL;
        if ( (v53 & 0x20000000) != 0 )
          v55 ^= ((unsigned __int16)v55 ^ (unsigned __int16)(v56 << 8)) & 0x100;
        if ( (v53 & 0x8000000) != 0 )
          v55 &= ~0x100uLL;
        if ( (v53 & 0x4000000) != 0 )
          v55 |= 0x80uLL;
        v5 = a1;
        v59 = v55 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          *(_QWORD *)v71 = v59;
          if ( (unsigned int)MiPteInShadowRange(v71) )
            MiWritePteShadow(v60);
        }
        else
        {
          if ( (v48 & 8) != 0 && v71 == v77 )
            v61 = (__int64)v75;
          else
            v61 = 0LL;
          if ( (unsigned int)MiAllocateWsle(v78, v71, v69, 0, v59, v61) )
          {
            if ( (*a1 & 0x20) != 0 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
          }
          else
          {
            v62 = 48 * (*(_QWORD *)(v69 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            MiReleaseFreshPage(v69);
            MiLockAndDecrementShareCount(v62, 0LL);
            v63 = v82;
            if ( !v70 )
              v63 = -1073741801;
            v64 = v70 + 1;
            v82 = v63;
            v70 = v64;
            if ( v64 < a3 )
            {
              v65 = a3 - v64;
              v70 = a3;
              do
              {
                v66 = a2;
                v67 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFLL;
                if ( v67 == 0xFFFFFFFFFLL )
                  a2 = 0LL;
                else
                  a2 = 48 * v67 - 0x58000000000LL;
                MiReleaseFreshPage(v66);
                --v65;
              }
              while ( v65 );
            }
          }
          __incgsdword(0x2E9Cu);
        }
        v8 = v80;
        goto LABEL_126;
      }
      v49 = v71;
      *(_QWORD *)v71 = MiMakeTransitionPte(v74, (unsigned int)a1[8]);
      if ( (unsigned int)MiPteInShadowRange(v71) )
        MiWritePteShadow(v50);
      if ( (*a1 & 0x20) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      MiLockAndDecrementShareCount(v69, 0LL);
      if ( v75 )
      {
        v52 = *(_QWORD *)(v75[1] + 16LL * v75[3]) + (v75[4] << 12);
        if ( (__int64)(v71 << 25) >> 16 == v52 )
          MiAdvanceFaultList(v75, v52, v51);
      }
LABEL_126:
      v6 = (__int64 *)(v49 + 8);
      v71 = (unsigned __int64)v6;
      if ( ++v70 >= a3 )
        return v82;
    }
  }
  return 273LL;
}
