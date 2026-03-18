/*
 * XREFs of MiDeletePteList @ 0x14004D590
 * Callers:
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011B680 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiReduceShareCount @ 0x14022A8BC (MiReduceShareCount.c)
 */

__int64 *__fastcall MiDeletePteList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 *result; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 *v16; // r12
  __int64 PteShadow; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r10
  unsigned __int64 v21; // rdi
  __int64 v22; // r14
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r15
  char v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // r9
  _QWORD *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned int PageFileReservationOffset; // eax
  unsigned __int16 v40; // dx
  unsigned int v41; // edi
  bool v42; // zf
  __int64 v43; // rdx
  unsigned int v44; // [rsp+20h] [rbp-98h]
  __int64 v45; // [rsp+28h] [rbp-90h] BYREF
  __int64 v46; // [rsp+30h] [rbp-88h] BYREF
  int v47; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v48; // [rsp+3Ch] [rbp-7Ch]
  int v49; // [rsp+40h] [rbp-78h] BYREF
  __int64 v50; // [rsp+48h] [rbp-70h]
  unsigned __int64 v51; // [rsp+50h] [rbp-68h]
  __int64 v52; // [rsp+58h] [rbp-60h]
  __int64 v53; // [rsp+60h] [rbp-58h]
  __int64 v54; // [rsp+68h] [rbp-50h]
  __int64 ContainingPageTable; // [rsp+70h] [rbp-48h]
  unsigned int v56; // [rsp+C0h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 12);
  v5 = 0LL;
  v56 = 0;
  v6 = a4;
  v50 = -1LL;
  v48 = v4;
  result = (__int64 *)MiFlushTbList(a1);
  v46 = 0LL;
  v44 = 0;
  if ( v4 )
  {
    result = (__int64 *)(a1 + 24);
    v53 = a1 + 24;
    v10 = 0xFFFFF68000000000uLL;
    v11 = 0xFFFFF6FB7DBED000uLL;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      v13 = *result;
      v14 = (v13 & 0x3FF) + 1;
      v15 = v13 & 0xFFFFFFFFFFFFF000uLL;
      v52 = v14;
      v51 = v15;
      do
      {
        v16 = (__int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v16;
        if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v16, *v16);
        v18 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v45 = v18;
        v19 = MI_GET_PFN_FROM_PTE(&v45, v12, v11, v10);
        v21 = *(_QWORD *)(v19 + 40);
        v22 = *(_QWORD *)(qword_140388AF0 + 8 * ((v21 >> 40) & 0x3FF));
        v54 = v22;
        if ( (v21 & 0x200000000000000LL) != 0 )
        {
          v23 = *(_QWORD *)(v19 + 8);
          v24 = v23 >> 63;
          v25 = v23 | 0x8000000000000000uLL;
          v26 = v24 ^ 1;
          ContainingPageTable = MiGetContainingPageTable(v16);
          v27 = 0LL;
          MiLockPageAtDpcInline(v19);
          if ( (v18 & 0x42) != 0 )
            v27 = MiCaptureDirtyBitToPfn(v19);
          MiDecrementShareCount(v19);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v27 )
            MiReleasePageFileInfo(v54, v27, 1LL);
          if ( v26 == 1 )
          {
            v30 = MiDecrementCombinedPte(a2 + 1280, v25);
          }
          else
          {
            CloneAddress = MiLocateCloneAddress(a2, v25, v28, v29);
            v30 = MiDecrementCloneBlockReference(CloneAddress, v32);
          }
          v6 = a4;
          if ( v30 == 3 )
          {
            ++*(_QWORD *)(a4 + 8);
            v33 = a3;
            v34 = ContainingPageTable;
            v45 = a3;
          }
          else
          {
            if ( v30 == 5 )
              ++*(_QWORD *)(a4 + 16);
            v34 = ContainingPageTable;
            v33 = a3;
            v45 = a3;
          }
        }
        else
        {
          v47 = 0;
          v34 = v21 & 0xFFFFFFFFFLL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v47);
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
            v20 = 0x3FFFFFFFFFFFFFFFLL;
          }
          v35 = *(_QWORD *)(v19 + 16);
          *(_QWORD *)(v19 + 24) |= 0x4000000000000000uLL;
          if ( (v35 & 2) != 0
            && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v22, v19 + 16)
            && *(_WORD *)(v19 + 32) == 1
            && a3 )
          {
            *v36 &= ~2uLL;
            v46 = v37;
          }
          if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
            MiBadShareCount(v19);
          v38 = *(_QWORD *)(v19 + 24);
          *(_QWORD *)(v19 + 24) = v38 ^ v20 & (((v20 & v38) - 1) ^ v38);
          if ( (v20 & v38) == 1 && (unsigned int)MiPfnShareCountIsZero(v19) == 3 )
            ++*(_QWORD *)(v6 + 8);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v45 = a3;
          if ( v46 )
          {
            PageFileReservationOffset = MiGetPageFileReservationOffset(&v46);
            v45 = MiTransferSoftwarePte(a3, *(_QWORD *)(v22 + 8LL * (v40 >> 12) + 5792), PageFileReservationOffset, 2LL);
            v46 = 0LL;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v33 = v45;
        }
        *v16 = v33;
        if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v16, v33);
        if ( v34 != v50 )
        {
          if ( v5 )
          {
            MiLockPageAtDpcInline(v5);
            MiReduceShareCount(v5, v56);
            _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v56 = 0;
          }
          v5 = 48 * v34 - 0x58000000000LL;
          v50 = v34;
        }
        v41 = v56 + 1;
        v15 = v51 + 4096;
        ++v56;
        v42 = v52-- == 1;
        v51 += 4096LL;
        v12 = 0xFFFFF6FB7DBED7F8uLL;
        v11 = 0xFFFFF6FB7DBED000uLL;
        v10 = 0xFFFFF68000000000uLL;
      }
      while ( !v42 );
      result = (__int64 *)(v53 + 8);
      ++v44;
      v12 = 0xFFFFF6FB7DBED7F8uLL;
      v53 += 8LL;
    }
    while ( v44 < v48 );
    if ( v41 )
    {
      v49 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v5 + 34) & 7) != 6 )
        MiBadShareCount(v5);
      v43 = (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v41;
      result = (__int64 *)(*(_QWORD *)(v5 + 24) ^ (v43 ^ *(_QWORD *)(v5 + 24)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v5 + 24) = result;
      if ( !v43 )
        result = (__int64 *)MiPfnShareCountIsZero(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
