/*
 * XREFs of MiDeletePteList @ 0x140028C70
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400B8750 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 *     MiReduceShareCount @ 0x1402653B8 (MiReduceShareCount.c)
 */

__int64 __fastcall MiDeletePteList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v8; // r14
  __int64 result; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r14
  char v28; // bp
  __int64 ContainingPageTable; // r12
  __int64 v30; // rbx
  int v31; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 *v37; // rdx
  __int64 v38; // r9
  unsigned int PageFileReservationOffset; // eax
  unsigned __int16 v40; // dx
  unsigned int v41; // esi
  bool v42; // zf
  __int64 v43; // rdx
  __int64 v44; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-80h]
  __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  int v47; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v48; // [rsp+3Ch] [rbp-6Ch]
  int v49; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50; // [rsp+48h] [rbp-60h]
  unsigned __int64 v51; // [rsp+50h] [rbp-58h]
  __int64 v52; // [rsp+58h] [rbp-50h]
  __int64 v53; // [rsp+60h] [rbp-48h]
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]
  unsigned int v55; // [rsp+B0h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 12);
  v5 = 0LL;
  v55 = 0;
  v6 = a4;
  v50 = -1LL;
  v8 = a2;
  v48 = v4;
  result = MiFlushTbList(a1);
  v46 = 0LL;
  v45 = 0;
  if ( v4 )
  {
    result = a1 + 24;
    v53 = a1 + 24;
    v11 = 0xFFFFF6FB7DBED000uLL;
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    v13 = 0xFFFFFA8000000000uLL;
    do
    {
      v14 = *(_QWORD *)result;
      v15 = (v14 & 0x3FF) + 1;
      v16 = v14 & 0xFFFFFFFFFFFFF000uLL;
      v52 = v15;
      v51 = v16;
      do
      {
        v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v54 = v17;
        v18 = *(_QWORD *)v17;
        if ( v17 >= v11
          && v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v16 >> 9, v18, v15, 0xFFFFF6FB7DBED7F8uLL)
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v15 )
          {
            v19 = *(_QWORD *)(v15 + 8 * ((v17 >> 3) & 0x1FF));
            v15 = v18 | 0x20;
            if ( (v19 & 0x20) == 0 )
              v15 = v18;
            v18 = v15;
            if ( (v19 & 0x42) != 0 )
              v18 = v15 | 0x42;
          }
        }
        v20 = v18 & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v44 = v20;
        if ( (unsigned __int64)&v44 >= v11
          && (unsigned __int64)&v44 <= v12
          && (unsigned int)MiPteHasShadow(&v44, v20, v15, v12)
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v15 )
          {
            v21 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)&v44 >> 3) & 0x1FF));
            v15 = v20 | 0x20;
            if ( (v21 & 0x20) == 0 )
              v15 = v20;
            v20 = v15;
            if ( (v21 & 0x42) != 0 )
              v20 = v15 | 0x42;
          }
        }
        v22 = v13 + 48 * ((v20 >> 12) & 0xFFFFFFFFFLL);
        v23 = *(_QWORD *)(v22 + 40);
        v24 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v23 >> 40) & 0x3FF));
        if ( (v23 & 0x200000000000000LL) != 0 )
        {
          v25 = *(_QWORD *)(v22 + 8);
          v26 = v25 >> 63;
          v27 = v25 | 0x8000000000000000uLL;
          v28 = v26 ^ 1;
          ContainingPageTable = MiGetContainingPageTable(v17);
          v30 = 0LL;
          MiLockPageAtDpcInline(v22);
          if ( (v44 & 0x42) != 0 )
            v30 = MiCaptureDirtyBitToPfn(v22);
          MiDecrementShareCount(v22);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v30 )
            MiReleasePageFileInfo(v24, v30, 1LL);
          if ( v28 == 1 )
          {
            v31 = MiDecrementCombinedPte(a2 + 1280, v27);
          }
          else
          {
            CloneAddress = MiLocateCloneAddress(a2, v27);
            v31 = MiDecrementCloneBlockReference(CloneAddress, v33);
          }
          v6 = a4;
          if ( v31 == 3 )
          {
            ++*(_QWORD *)(a4 + 8);
            v34 = a3;
            v17 = v54;
            v8 = a2;
            v44 = a3;
          }
          else
          {
            if ( v31 == 5 )
              ++*(_QWORD *)(a4 + 16);
            v17 = v54;
            v34 = a3;
            v8 = a2;
            v44 = a3;
          }
        }
        else
        {
          v47 = 0;
          ContainingPageTable = v23 & 0xFFFFFFFFFLL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v47);
            while ( *(__int64 *)(v22 + 24) < 0 );
          }
          v35 = *(_QWORD *)(v22 + 16);
          *(_QWORD *)(v22 + 24) |= 0x4000000000000000uLL;
          v36 = *(_QWORD *)(v22 + 24);
          if ( (v35 & 2) != 0
            && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v24, v22 + 16, v15, v35)
            && *(_WORD *)(v22 + 32) == 1
            && a3 )
          {
            v46 = v38;
            *v37 = v38 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          if ( (*(_BYTE *)(v22 + 34) & 7) != 6 )
            MiBadShareCount(v22);
          *(_QWORD *)(v22 + 24) = v36 ^ (((v36 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v36) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v36 & 0x3FFFFFFFFFFFFFFFLL) == 1 && (unsigned int)MiPfnShareCountIsZero(v22) == 3 )
            ++*(_QWORD *)(v6 + 8);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v44 = a3;
          if ( v46 )
          {
            PageFileReservationOffset = MiGetPageFileReservationOffset(&v46, v46);
            v44 = MiTransferSoftwarePte(a3, *(_QWORD *)(v24 + 8LL * (v40 >> 12) + 6880), PageFileReservationOffset, 2LL);
            v46 = 0LL;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v34 = v44;
        }
        *(_QWORD *)v17 = v34;
        v11 = 0xFFFFF6FB7DBED000uLL;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v17, v34);
        if ( ContainingPageTable == v50 )
        {
          v13 = 0xFFFFFA8000000000uLL;
        }
        else
        {
          if ( v5 )
          {
            MiLockPageAtDpcInline(v5);
            MiReduceShareCount(v5, v55);
            _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v55 = 0;
            v11 = 0xFFFFF6FB7DBED000uLL;
          }
          v13 = 0xFFFFFA8000000000uLL;
          v5 = 48 * ContainingPageTable - 0x58000000000LL;
          v50 = ContainingPageTable;
        }
        v41 = v55 + 1;
        v16 = v51 + 4096;
        ++v55;
        v42 = v52-- == 1;
        v51 += 4096LL;
        v12 = 0xFFFFF6FB7DBED7F8uLL;
      }
      while ( !v42 );
      result = v53 + 8;
      ++v45;
      v53 += 8LL;
    }
    while ( v45 < v48 );
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
      *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ v43) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v43 )
        MiPfnShareCountIsZero(v5);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
