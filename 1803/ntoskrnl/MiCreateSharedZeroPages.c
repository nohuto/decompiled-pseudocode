/*
 * XREFs of MiCreateSharedZeroPages @ 0x1400A2810
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIsAddressGlobal @ 0x140113970 (MiIsAddressGlobal.c)
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r14
  __int64 v4; // rdi
  int *v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int16 v7; // bx
  unsigned int v8; // esi
  int v9; // eax
  __int64 ClusterPage; // rax
  __int64 PageChain; // rdx
  ULONG_PTR *v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r11
  unsigned __int64 v19; // r11
  _KPROCESS *v20; // rcx
  _QWORD *CloneAddress; // rax
  unsigned __int64 Address; // rax
  unsigned __int64 v23; // rax
  char v24; // al
  _QWORD *v25; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  int v31; // esi
  __int64 v32; // rax
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rbp
  int v38; // esi
  __int64 DemandZeroPte; // rax
  int v40; // r8d
  unsigned int v41; // r15d
  __int64 ContainingPageTable; // rax
  __int64 v43; // r9
  __int64 v44; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v47; // esi
  char v48; // al
  int v49; // r12d
  unsigned __int8 v50; // cl
  __int64 v51; // rax
  char v52; // cl
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r8
  unsigned int v55; // [rsp+40h] [rbp-88h]
  int v56; // [rsp+44h] [rbp-84h] BYREF
  int v57; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp-78h]
  __int64 v59; // [rsp+58h] [rbp-70h]
  __int64 v60; // [rsp+68h] [rbp-60h]
  _QWORD *v61; // [rsp+70h] [rbp-58h]
  char v64; // [rsp+E0h] [rbp+18h] BYREF
  int v65; // [rsp+E8h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_QWORD *)a1 + 8);
  v5 = a1;
  v6 = *((_QWORD *)a1 + 2);
  v7 = v6;
  v8 = (*(_DWORD *)v2 >> 5) & 0x1F;
  if ( v4 )
  {
    v9 = *(_DWORD *)(v4 + 48);
    if ( (v9 & 0x4000) == 0 && (v9 & 0x20000) != 0 )
    {
      ClusterPage = MiGetClusterPage(v4, *((_QWORD *)a1 + 2), *a2, a1[8], a1[9], (__int64)&v64);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          *a2 = 1LL;
          if ( v64 == 1 )
            *v5 |= 4u;
        }
        else
        {
          v6 &= 0xFFFFFFFFFFFF0000uLL;
          *a2 = 16LL;
          *((_QWORD *)v5 + 2) = v6;
          v2 -= 8LL * (v7 >> 12);
        }
        goto LABEL_43;
      }
      *a2 = 1LL;
    }
  }
  if ( !byte_1403CBD9C )
  {
    v12 = &MiSystemPartition;
    goto LABEL_40;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v5 + 1) + 56LL);
  v14 = MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v17 = v14;
  if ( (v14 & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v14, v15, v16, v14) )
  {
    v12 = **(ULONG_PTR ***)(((v18 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    goto LABEL_40;
  }
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    v24 = *(_BYTE *)(v13 + 184) & 7;
    if ( v24 == 4 )
    {
      v25 = &unk_1403CB5C0;
    }
    else
    {
      if ( v24 != 1 )
        goto LABEL_40;
      Process = KeGetCurrentThread()->ApcState.Process;
      v27 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v27 )
        goto LABEL_40;
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        goto LABEL_40;
      v25 = (_QWORD *)(v27 + 2944);
      if ( !v25 )
        goto LABEL_40;
    }
    v28 = (_QWORD *)v25[2];
    while ( v28 )
    {
      v16 = v28[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v6 >= v16 + v28[4] )
      {
        v28 = (_QWORD *)v28[1];
      }
      else
      {
        if ( v6 >= v16 )
        {
          v23 = v28[6] & 0xFFFFFFFFFFFFFFF8uLL;
          goto LABEL_38;
        }
        v28 = (_QWORD *)*v28;
      }
    }
    v29 = MiSessionLookupImage(v6, v28, v16, v17);
    if ( v29 )
    {
      v23 = v29 + 80;
LABEL_38:
      if ( *(_QWORD *)v23 )
        v12 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v23 + 60LL) & 0x3FF));
    }
  }
  else if ( (unsigned int)MiIsPrototypePteVadLookup(v17)
         || (v20 = KeGetCurrentThread()->ApcState.Process, !v20[1].Affinity.Bitmap[12])
         || (CloneAddress = MiLocateCloneAddress((__int64)v20, v19)) == 0LL
         || (v12 = *(ULONG_PTR **)(CloneAddress[7] + 24LL)) == 0LL )
  {
    Address = MiLocateAddress(v6);
    if ( Address )
    {
      if ( (*(_DWORD *)(Address + 48) & 0x4000) == 0 )
      {
        v23 = *(_QWORD *)(Address + 72);
        if ( v23 )
          goto LABEL_38;
      }
    }
  }
LABEL_40:
  PageChain = MiGetPageChain((__int64)v12, *(_QWORD *)(*((_QWORD *)v5 + 1) + 56LL), v5[12], v8, 258, -1LL, a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_43:
  v61 = (_QWORD *)*((_QWORD *)v5 + 7);
  v31 = 0;
  if ( v4 )
  {
    v32 = *(unsigned int *)(v4 + 52);
    LODWORD(v32) = v32 & 0x7FFFFFFF;
    if ( (v32 | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 31)) == 0x7FFFFFFFELL )
      v31 = 64;
  }
  v55 = 0;
  for ( i = v6 & 0xFFFFFFFFFFFFF000uLL; v55 < *a2; ++v55 )
  {
    v33 = (volatile signed __int32 *)(PageChain + 24);
    v34 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
    v35 = PageChain;
    if ( v34 == 0xFFFFFFFFFLL )
      v59 = 0LL;
    else
      v59 = 48 * v34 - 0x58000000000LL;
    v60 = (PageChain + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero((PageChain + 0x58000000000LL) / 48);
    v36 = *v5;
    v37 = (*(_DWORD *)v2 >> 5) & 0x1F;
    if ( (_DWORD)v37 == 24 )
      v37 = 1LL;
    v38 = v31 | 0x112;
    v65 = v38;
    if ( (v36 & 4) != 0 || (((_DWORD)v37 - 4) & 0xFFFFFFFD) != 0 )
    {
      v38 |= 0x20u;
      v65 = v38;
    }
    DemandZeroPte = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v38 & 4) != 0 )
    {
      if ( DemandZeroPte )
        DemandZeroPte = DemandZeroPte & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v37);
      else
        DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v37);
    }
    *(_QWORD *)(v35 + 16) = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, 4LL);
    v41 = 1;
    *(_QWORD *)(v35 + 40) |= 0x200000000000000uLL;
    if ( (_DWORD)v37 != 31 )
    {
      if ( (unsigned int)v37 >> 3 == 3 )
      {
        if ( (v37 & 7) != 0 )
          v41 = v40 + 2;
      }
      else
      {
        v41 = (unsigned int)v37 >> 3 != 1;
      }
    }
    *(_WORD *)(v35 + 32) = 1;
    ContainingPageTable = MiGetContainingPageTable(v2);
    *(_QWORD *)(v35 + 40) = v43 ^ (ContainingPageTable ^ v43) & 0xFFFFFFFFFLL;
    v44 = 48 * ContainingPageTable - 0x58000000000LL;
    CurrentThread = KeGetCurrentThread();
    Queue = (unsigned int)CurrentThread[1].Queue;
    if ( (Queue & 0x100) != 0 )
    {
      v47 = (Queue >> 9) & 7;
    }
    else
    {
      v47 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      {
        v48 = 2;
        if ( v47 < 2 )
          v48 = v47;
        LOBYTE(v47) = v48;
      }
    }
    v49 = v65 & 1;
    if ( (v65 & 1) == 0 )
    {
      v56 = v65 & 1;
      while ( _interlockedbittestandset64(v33, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)v33 < 0 );
      }
    }
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)(v44 + 24) < 0 );
    }
    *(_QWORD *)(v44 + 24) ^= (*(_QWORD *)(v44 + 24) ^ (*(_QWORD *)(v44 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = *(_BYTE *)(v35 + 34);
    if ( v50 >> 6 != v41 )
    {
      MiChangePageAttribute(v35, v41, 1LL);
      v50 = *(_BYTE *)(v35 + 34);
    }
    v51 = *(_QWORD *)v33;
    *(_BYTE *)(v35 + 35) ^= (*(_BYTE *)(v35 + 35) ^ v47) & 7;
    v52 = v50 & 0xF8 | 6;
    v31 = v65;
    *(_QWORD *)(v35 + 8) = v2;
    *(_QWORD *)v33 = v51 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v35 + 34) = v52;
    if ( (v31 & 0x20) == 0 )
      *(_BYTE *)(v35 + 34) = v52 | 0x10;
    if ( (v31 & 0x40) != 0 )
      *(_BYTE *)(v35 + 35) |= 0x20u;
    if ( !v49 )
      _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v53 = ((v60 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v37] & 0xFFFF000000000E7FuLL | 0x21;
    }
    else
    {
      if ( v2 >= 0xFFFFF6FB40000000uLL && v2 <= 0xFFFFF6FB7FFFFFFFuLL )
        MiUserPdeOrAbove(v2);
      if ( (unsigned int)MiIsAddressGlobal((__int64)(v2 << 25) >> 16) )
        v53 |= 0x100uLL;
    }
    v54 = (((unsigned __int16)v53 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100 ^ v53) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    *(_QWORD *)v2 = v54;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v2, v54, v54);
    v5 = a1;
    if ( (*a1 & 4) != 0 )
    {
      MiLockAndDecrementShareCount(v35, 0LL);
      if ( v61 )
      {
        if ( (*a1 & 8) == 0 && i == *(_QWORD *)(v61[1] + 16LL * v61[3]) + (v61[4] << 12) )
          MiAdvanceFaultList(v61);
      }
    }
    i += 4096LL;
    v2 += 8LL;
    PageChain = v59;
  }
  return 273LL;
}
