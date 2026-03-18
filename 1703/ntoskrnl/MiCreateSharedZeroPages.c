/*
 * XREFs of MiCreateSharedZeroPages @ 0x1400B79A0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r15
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  int v7; // edi
  int v8; // eax
  __int64 ClusterPage; // rax
  __int64 PageChain; // rdx
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  ULONG_PTR *v13; // r10
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r9
  _KPROCESS *Process; // rcx
  __int64 Address; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  char v21; // al
  _QWORD *v22; // rdx
  _KPROCESS *v23; // rcx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rdx
  unsigned __int64 v26; // r8
  _QWORD *v27; // rax
  int v29; // ebp
  __int64 v30; // rax
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r13
  ULONG_PTR v34; // rsi
  ULONG_PTR v35; // rbx
  unsigned int v36; // r14d
  int v37; // ebp
  __int64 DemandZeroPte; // rax
  __int64 v39; // rax
  unsigned int v40; // r10d
  unsigned int v41; // r11d
  unsigned int v42; // ebp
  __int64 ContainingPageTable; // rax
  int v44; // r10d
  int v45; // r11d
  __int64 v46; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v49; // esi
  char v50; // al
  char v51; // al
  unsigned __int8 v52; // r12
  int v53; // r15d
  int v54; // r14d
  __int64 v55; // rsi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int64 v59; // r14
  int v60; // [rsp+40h] [rbp-88h]
  int v61; // [rsp+44h] [rbp-84h]
  unsigned int v62; // [rsp+48h] [rbp-80h]
  unsigned __int64 v63; // [rsp+50h] [rbp-78h]
  unsigned __int64 v64; // [rsp+58h] [rbp-70h]
  int v65; // [rsp+60h] [rbp-68h] BYREF
  int v66; // [rsp+64h] [rbp-64h] BYREF
  __int64 v67; // [rsp+68h] [rbp-60h]
  ULONG_PTR v68; // [rsp+70h] [rbp-58h]
  _QWORD *v69; // [rsp+78h] [rbp-50h]
  char v72; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int8 v73; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *(_DWORD **)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 8);
  v64 = (unsigned __int64)v2;
  v7 = (*v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v8 = *(_DWORD *)(v4 + 48);
    if ( (v8 & 0x8000) == 0 && (v8 & 0x100000) != 0 )
    {
      ClusterPage = MiGetClusterPage(v4, v6, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 36), (__int64)&v72);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          *a2 = 1LL;
          if ( v72 == 1 )
            *(_DWORD *)v5 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v11 = (unsigned int)v6 >> 12;
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *(_QWORD *)(v5 + 8) = v6;
          v2 -= 2 * (v11 & 0xF);
          v64 = (unsigned __int64)v2;
        }
        goto LABEL_42;
      }
      *a2 = 1LL;
    }
  }
  v12 = *(_QWORD *)(v5 + 24);
  if ( !byte_14036C90C )
  {
    v13 = &MiSystemPartition;
    goto LABEL_39;
  }
  v14 = MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v16 = v14;
  if ( (v14 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v14) )
  {
    v13 = **(ULONG_PTR ***)(((v12 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    goto LABEL_39;
  }
  if ( v6 < 0xFFFF800000000000uLL )
  {
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress((__int64)Process, v12) )
          goto LABEL_39;
      }
    }
    Address = MiLocateAddress(v6);
    if ( !Address )
      goto LABEL_39;
    if ( (*(_DWORD *)(Address + 48) & 0x8000) != 0 )
      goto LABEL_39;
    v19 = *(__int64 **)(Address + 72);
    if ( !v19 )
      goto LABEL_39;
    v20 = *v19;
    goto LABEL_37;
  }
  v21 = *(_BYTE *)(v15 + 192) & 7;
  if ( v21 == 4 )
  {
    v22 = &unk_14036C0F8;
  }
  else
  {
    if ( v21 != 1 )
      goto LABEL_39;
    v23 = KeGetCurrentThread()->ApcState.Process;
    v24 = v23[1].ActiveProcessors.Bitmap[2];
    if ( !v24 )
      goto LABEL_39;
    if ( v23 == PsInitialSystemProcess )
      goto LABEL_39;
    v22 = (_QWORD *)(v24 + 2944);
    if ( !v22 )
      goto LABEL_39;
  }
  v25 = (_QWORD *)v22[2];
  while ( v25 )
  {
    v26 = v25[10] & 0xFFFFFFFFFFFFF000uLL;
    if ( v6 >= v26 + v25[4] )
    {
      v25 = (_QWORD *)v25[1];
    }
    else
    {
      if ( v6 >= v26 )
      {
        v20 = *(_QWORD *)(v25[6] & 0xFFFFFFFFFFFFFFF8uLL);
        goto LABEL_37;
      }
      v25 = (_QWORD *)*v25;
    }
  }
  v27 = MiSessionLookupImage(v6);
  if ( v27 )
  {
    v20 = v27[10];
LABEL_37:
    if ( v20 )
      v13 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v20 + 60) & 0x3FF));
  }
LABEL_39:
  PageChain = MiGetPageChain((_DWORD)v13, *(_QWORD *)(v5 + 48), *(_DWORD *)(v5 + 44), v7, 66, -1LL, (__int64)a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_42:
  v69 = *(_QWORD **)(v5 + 56);
  v29 = 0;
  if ( v4 )
  {
    v30 = *(unsigned int *)(v4 + 52);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    if ( (v30 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
      v29 = 64;
  }
  v62 = 0;
  v63 = v6 & 0xFFFFFFFFFFFFF000uLL;
  if ( *a2 )
  {
    while ( 1 )
    {
      v31 = (volatile signed __int32 *)(PageChain + 24);
      v32 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
      v33 = PageChain;
      if ( v32 == 0xFFFFFFFFFLL )
        v67 = 0LL;
      else
        v67 = 48 * v32 - 0x58000000000LL;
      v34 = (PageChain + 0x58000000000LL) / 48;
      v68 = v34;
      if ( (MiFlags & 0x80u) != 0
        && (*(_BYTE *)(PageChain + 35) & 0x40) == 0
        && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v35 = MiMapPageInHyperSpaceWorker(v34, &v73, 0x80000000LL);
          if ( KeCheckForZeroPage(v35) )
            MiPageNotZero(v35, v34);
          MiUnmapPageInHyperSpaceWorker(v35, v73, 0x80000000LL);
        }
      }
      v36 = (*v2 >> 5) & 0x1F;
      if ( v36 == 24 )
        v36 = 1;
      v37 = v29 | 0x112;
      v60 = v37;
      if ( (*(_DWORD *)v5 & 4) != 0 || ((v36 - 4) & 0xFFFFFFFD) != 0 )
      {
        v37 |= 0x20u;
        v60 = v37;
      }
      DemandZeroPte = MI_READ_PTE_LOCK_FREE(v2);
      if ( (v37 & 4) != 0 )
      {
        if ( DemandZeroPte )
          DemandZeroPte = ((unsigned __int16)DemandZeroPte ^ (unsigned __int16)(32 * v36)) & 0x3E0 ^ (unsigned __int64)DemandZeroPte;
        else
          DemandZeroPte = MiMakeDemandZeroPte(v36);
      }
      v39 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL);
      *(_QWORD *)(v33 + 16) = v39;
      if ( (v37 & 2) != 0 )
      {
        *(_QWORD *)(v33 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v37 & 8) == 0 )
      {
        *(_QWORD *)(v33 + 16) = v39 & 0xFFFFFFFFFC00FFFFuLL;
      }
      v42 = v41;
      if ( v36 != 31 )
      {
        if ( v36 >> 3 == 3 )
        {
          if ( (v36 & 7) != 0 )
            v42 = 2;
        }
        else if ( v36 >> 3 == v41 )
        {
          v42 = v40;
        }
      }
      *(_WORD *)(v33 + 32) = v41;
      ContainingPageTable = MiGetContainingPageTable(v2);
      *(_QWORD *)(v33 + 40) ^= (*(_QWORD *)(v33 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
      v46 = 48 * ContainingPageTable - 0x58000000000LL;
      CurrentThread = KeGetCurrentThread();
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v49 = (Queue >> 9) & 7;
      }
      else
      {
        v49 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v50 = 2;
          if ( v49 < 2 )
            v50 = v49;
          LOBYTE(v49) = v50;
        }
      }
      v51 = v60;
      v52 = 17;
      v53 = v45 & v60;
      v61 = v45 & v60;
      if ( (v45 & v60) != 0 )
        goto LABEL_89;
      if ( (v60 & 0x10) == 0 )
        break;
      v65 = v44;
      if ( _interlockedbittestandset64(v31, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v65);
          while ( (*(_QWORD *)v31 & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64(v31, 0x3FuLL) );
        v53 = 0;
        goto LABEL_88;
      }
LABEL_89:
      if ( (v51 & 0x20) == 0 )
        *(_BYTE *)(v33 + 34) |= 0x10u;
      v66 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v66);
          while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
        v53 = v61;
      }
      *(_QWORD *)(v46 + 24) ^= (*(_QWORD *)(v46 + 24) ^ (*(_QWORD *)(v46 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( *(unsigned __int8 *)(v33 + 34) >> 6 != v42 )
        MiChangePageAttribute(v33, v42, 1LL);
      v29 = v60;
      *(_QWORD *)v31 = *(_QWORD *)v31 & 0xC000000000000000uLL | 1;
      *(_BYTE *)(v33 + 35) ^= (v49 ^ *(_BYTE *)(v33 + 35)) & 7;
      *(_QWORD *)(v33 + 8) = v64;
      *(_BYTE *)(v33 + 34) = *(_BYTE *)(v33 + 34) & 0xF8 | 6;
      if ( (v60 & 0x40) != 0 )
        *(_BYTE *)(v33 + 35) |= 0x20u;
      if ( !v53 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v31, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v60 & 0x10) == 0 )
          __writecr8(v52);
      }
      v54 = v36 | 0x20000000;
      v55 = v54 & 0x1F;
      v56 = ((v68 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v55] & 0xFFFF000000000E7FuLL | 0x21;
      if ( v64 < 0xFFFFF68000000000uLL || v64 > 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_115;
      if ( v64 >= 0xFFFFF6FB40000000uLL && v64 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v64 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v56 = ((v68 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v55] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
        }
        else if ( (v54 & 0x4000000) == 0 )
        {
          v56 = ((v68 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v55] & 0x7FFF000000000E7FLL | 0x21;
        }
        if ( (unsigned int)MiUserPdeOrAbove(v64) )
          v56 |= 4uLL;
      }
      if ( v64 <= 0xFFFFF6BFFFFFFF78uLL )
        v56 |= 4uLL;
      if ( (unsigned int)MiIsAddressGlobal((__int64)(v64 << 25) >> 16) )
LABEL_115:
        v56 |= 0x100uLL;
      if ( v54 < 0 && (v54 & 5) == 4 )
        v56 |= 0x42uLL;
      if ( (v54 & 0x40000000) != 0 )
        v56 &= ~4uLL;
      v57 = ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100 ^ v56;
      if ( (v54 & 0x8000000) != 0 )
        v57 &= ~0x100uLL;
      if ( (v54 & 0x4000000) != 0 )
        v57 |= 0x80uLL;
      *(_QWORD *)v64 = v57 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      if ( (unsigned int)MiPteInShadowRange(v64) )
        MiWritePteShadow(v58);
      v5 = a1;
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        MiLockAndDecrementShareCount(v33, 0LL);
        v59 = v63;
        if ( v69 )
        {
          if ( v63 == *(_QWORD *)(v69[1] + 16LL * v69[3]) + (v69[4] << 12) )
            MiAdvanceFaultList(v69, 2LL * v69[3], v69);
        }
      }
      else
      {
        v59 = v63;
      }
      PageChain = v67;
      v2 = (_DWORD *)(v64 + 8);
      ++v62;
      v63 = v59 + 4096;
      v64 += 8LL;
      if ( (unsigned __int64)v62 >= *a2 )
        return 273LL;
    }
    v52 = MiLockPageInline(v33);
LABEL_88:
    v51 = v60;
    goto LABEL_89;
  }
  return 273LL;
}
