/*
 * XREFs of MiCreateSharedZeroPages @ 0x14004BDB0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     KeCheckForZeroPage @ 0x140184CB0 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // edi
  int v8; // eax
  __int64 ClusterPage; // rax
  __int64 PageChain; // rdx
  unsigned int v11; // eax
  __int64 v12; // r9
  ULONG_PTR *v13; // r10
  __int64 *v14; // rcx
  __int64 PteShadow; // r8
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  _KPROCESS *v20; // rcx
  __int64 CloneAddress; // rax
  __int64 Address; // rax
  unsigned __int64 v23; // rax
  char v24; // al
  _QWORD *v25; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  int v32; // r14d
  __int64 v33; // rax
  volatile signed __int32 *v34; // rdi
  __int64 v35; // rax
  ULONG_PTR v36; // rsi
  ULONG_PTR v37; // rbx
  unsigned __int64 DemandZeroPte; // rax
  __int64 v39; // r15
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // r11
  unsigned int v43; // ebp
  __int64 ContainingPageTable; // rax
  __int64 v45; // r11
  __int64 v46; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v49; // esi
  char v50; // al
  int v51; // r14d
  __int64 v52; // r10
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rsi
  int v58; // [rsp+40h] [rbp-88h]
  __int64 v59; // [rsp+48h] [rbp-80h]
  unsigned int v60; // [rsp+50h] [rbp-78h]
  unsigned __int64 i; // [rsp+58h] [rbp-70h]
  int v62; // [rsp+60h] [rbp-68h] BYREF
  int v63; // [rsp+64h] [rbp-64h] BYREF
  __int64 v64; // [rsp+68h] [rbp-60h]
  ULONG_PTR v65; // [rsp+70h] [rbp-58h]
  _QWORD *v66; // [rsp+78h] [rbp-50h]
  char v69; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int8 v70; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a1;
  v7 = (*(_DWORD *)v2 >> 5) & 0x1F;
  if ( v3 )
  {
    v8 = *(_DWORD *)(v3 + 48);
    if ( (v8 & 0x8000) == 0 && (v8 & 0x100000) != 0 )
    {
      ClusterPage = MiGetClusterPage(
                      *(_QWORD *)(a1 + 64),
                      *(_QWORD *)(a1 + 8),
                      *(_DWORD *)(a1 + 32),
                      *(_DWORD *)(a1 + 36),
                      (__int64)&v69);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          *a2 = 1LL;
          if ( v69 == 1 )
            *(_DWORD *)v6 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v11 = (unsigned int)v5 >> 12;
          v5 &= 0xFFFFFFFFFFFF0000uLL;
          *(_QWORD *)(v6 + 8) = v5;
          v2 -= 8LL * (v11 & 0xF);
        }
        goto LABEL_46;
      }
      *a2 = 1LL;
    }
  }
  v12 = *(_QWORD *)(v6 + 48);
  if ( !byte_140388B04 )
  {
    v13 = &MiSystemPartition;
    goto LABEL_43;
  }
  v13 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v12 + 172));
  v14 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v14;
  if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v14, *v14);
  if ( (PteShadow & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(PteShadow) )
  {
    v13 = **(ULONG_PTR ***)(((v16 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    goto LABEL_43;
  }
  if ( v5 >= 0xFFFF800000000000uLL )
  {
    v24 = *(_BYTE *)(v12 + 192) & 7;
    if ( v24 == 4 )
    {
      v25 = &unk_140388438;
    }
    else
    {
      if ( v24 != 1 )
        goto LABEL_43;
      Process = KeGetCurrentThread()->ApcState.Process;
      v27 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v27 )
        goto LABEL_43;
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        goto LABEL_43;
      v25 = (_QWORD *)(v27 + 2944);
      if ( !v25 )
        goto LABEL_43;
    }
    v28 = (_QWORD *)v25[2];
    while ( v28 )
    {
      v29 = v28[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v5 >= v29 + v28[4] )
      {
        v28 = (_QWORD *)v28[1];
      }
      else
      {
        if ( v5 >= v29 )
        {
          v23 = v28[6] & 0xFFFFFFFFFFFFFFF8uLL;
          goto LABEL_41;
        }
        v28 = (_QWORD *)*v28;
      }
    }
    v30 = MiSessionLookupImage(v5);
    if ( v30 )
    {
      v23 = v30 + 80;
LABEL_41:
      if ( *(_QWORD *)v23 )
        v13 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v23 + 60LL) & 0x3FF));
    }
  }
  else if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow)
         || (v20 = KeGetCurrentThread()->ApcState.Process, !v20[1].Affinity.Bitmap[12])
         || (CloneAddress = MiLocateCloneAddress(v20, v19, v17, v18)) == 0
         || (v13 = *(ULONG_PTR **)(*(_QWORD *)(CloneAddress + 56) + 24LL)) == 0LL )
  {
    Address = MiLocateAddress(v5);
    if ( Address )
    {
      if ( (*(_DWORD *)(Address + 48) & 0x8000) == 0 )
      {
        v23 = *(_QWORD *)(Address + 72);
        if ( v23 )
          goto LABEL_41;
      }
    }
  }
LABEL_43:
  PageChain = MiGetPageChain((__int64)v13, *(_QWORD *)(v6 + 48), *(_DWORD *)(v6 + 44), v7, 66, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_46:
  v32 = 0;
  v66 = *(_QWORD **)(v6 + 56);
  if ( v3 )
  {
    v33 = *(unsigned int *)(v3 + 52);
    LODWORD(v33) = v33 & 0x7FFFFFFF;
    if ( (v33 | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 31)) == 0x7FFFFFFFELL )
      v32 = 64;
  }
  v60 = 0;
  for ( i = v5 & 0xFFFFFFFFFFFFF000uLL; v60 < *a2; i = v57 + 4096 )
  {
    v34 = (volatile signed __int32 *)(PageChain + 24);
    v35 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v59 = PageChain;
    if ( v35 == 0xFFFFFFFFFLL )
      v64 = 0LL;
    else
      v64 = 48 * v35 - 0x58000000000LL;
    v36 = (PageChain + 0x58000000000LL) / 48;
    v65 = v36;
    if ( (MiFlags & 0x80u) != 0
      && (*(_BYTE *)(PageChain + 35) & 0x40) == 0
      && (++dword_140388C10 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v37 = MiMapPageInHyperSpaceWorker(v36, &v70, 0x80000000LL);
        if ( KeCheckForZeroPage(v37) )
          MiPageNotZero(v37, v36);
        MiUnmapPageInHyperSpaceWorker(v37, v70, 0x80000000LL);
      }
    }
    DemandZeroPte = *(_QWORD *)v2;
    v39 = (*(_QWORD *)v2 >> 5) & 0x1FLL;
    if ( (_DWORD)v39 == 24 )
      v39 = 1LL;
    v40 = v32 | 0x112;
    v58 = v40;
    if ( (*(_DWORD *)v6 & 4) != 0 || (((_DWORD)v39 - 4) & 0xFFFFFFFD) != 0 )
    {
      v40 |= 0x20u;
      v58 = v40;
    }
    if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
      DemandZeroPte = MiReadPteShadow(v2, DemandZeroPte);
    if ( (v40 & 4) != 0 )
    {
      if ( DemandZeroPte )
        DemandZeroPte = DemandZeroPte & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v39);
      else
        DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v39);
    }
    v41 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, 4LL);
    *(_QWORD *)(v42 + 16) = v41;
    *(_QWORD *)(v42 + 40) |= 0x200000000000000uLL;
    if ( (_DWORD)v39 == 31 )
    {
      v43 = 1;
    }
    else if ( (unsigned int)v39 >> 3 == 3 && (v39 & 7) != 0 )
    {
      v43 = 2;
    }
    else
    {
      v43 = (unsigned int)v39 >> 3 != 1;
    }
    *(_WORD *)(v42 + 32) = 1;
    ContainingPageTable = MiGetContainingPageTable(v2);
    *(_QWORD *)(v45 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(v45 + 40)) & 0xFFFFFFFFFLL;
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
    v51 = v40 & 1;
    if ( !v51 )
    {
      v62 = 0;
      if ( _interlockedbittestandset64(v34, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v62);
          while ( *(__int64 *)v34 < 0 );
        }
        while ( _interlockedbittestandset64(v34, 0x3FuLL) );
        v45 = v59;
      }
    }
    if ( (v58 & 0x20) == 0 )
      *(_BYTE *)(v45 + 34) |= 0x10u;
    v63 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v63);
      while ( *(__int64 *)(v46 + 24) < 0 );
    }
    *(_QWORD *)(v46 + 24) ^= (*(_QWORD *)(v46 + 24) ^ (*(_QWORD *)(v46 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v52 = v59;
    if ( *(unsigned __int8 *)(v59 + 34) >> 6 != v43 )
    {
      MiChangePageAttribute(v59, v43, 1LL);
      v52 = v59;
    }
    v53 = *(_QWORD *)v34;
    *(_BYTE *)(v52 + 35) ^= (*(_BYTE *)(v52 + 35) ^ v49) & 7;
    *(_QWORD *)(v52 + 8) = v2;
    *(_QWORD *)v34 = v53 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v52 + 34) = *(_BYTE *)(v52 + 34) & 0xF8 | 6;
    if ( (v58 & 0x40) != 0 )
      *(_BYTE *)(v52 + 35) |= 0x20u;
    if ( !v51 )
      _InterlockedAnd64((volatile signed __int64 *)v34, 0x7FFFFFFFFFFFFFFFuLL);
    v54 = ((v65 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_112;
    if ( v2 >= 0xFFFFF6FB40000000uLL && v2 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v54 = v2 == 0xFFFFF6FB7DBEDF68uLL
          ? ((v65 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : ((v65 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v39] & 0x7FFF000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v2) )
        v54 |= 4uLL;
    }
    v55 = v54 | 4;
    if ( v2 > 0xFFFFF6BFFFFFFF78uLL )
      v55 = v54;
    v54 = v55;
    if ( (unsigned int)MiIsAddressGlobal((__int64)(v2 << 25) >> 16) )
LABEL_112:
      v54 |= 0x100uLL;
    v56 = (((unsigned __int16)v54 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v54) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    *(_QWORD *)v2 = v56;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v2, v56);
    v6 = a1;
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v52, 0LL);
      v57 = i;
      if ( v66 )
      {
        if ( i == *(_QWORD *)(v66[1] + 16LL * v66[3]) + (v66[4] << 12) )
          MiAdvanceFaultList(v66);
      }
    }
    else
    {
      v57 = i;
    }
    v32 = v58;
    v2 += 8LL;
    PageChain = v64;
    ++v60;
  }
  return 273LL;
}
