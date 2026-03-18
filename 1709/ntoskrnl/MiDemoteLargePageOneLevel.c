/*
 * XREFs of MiDemoteLargePageOneLevel @ 0x140145244
 * Callers:
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiDemoteLargePageOneLevel(unsigned __int64 a1, int *a2)
{
  unsigned int v3; // r13d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 PteShadow; // rdi
  __int64 result; // rax
  unsigned int i; // eax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r10
  int v22; // eax
  int v23; // r8d
  __int64 v24; // rbx
  __int64 v25; // r12
  unsigned __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+30h] [rbp-69h]
  unsigned __int64 v31; // [rsp+38h] [rbp-61h] BYREF
  __int64 v32; // [rsp+40h] [rbp-59h]
  __int64 v33; // [rsp+48h] [rbp-51h]
  unsigned __int64 v34; // [rsp+50h] [rbp-49h]
  _QWORD v35[18]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int8 v36; // [rsp+100h] [rbp+67h] BYREF
  int *v37; // [rsp+108h] [rbp+6Fh]
  unsigned int v38; // [rsp+110h] [rbp+77h]
  unsigned __int64 ValidPte; // [rsp+118h] [rbp+7Fh] BYREF

  v37 = a2;
  memset(v35, 0, 0x48uLL);
  v38 = MI_IS_PHYSICAL_ADDRESS(a1);
  v3 = v38;
  v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = 0x200000LL;
  if ( v38 != 1 )
  {
    v6 = v38 - 1;
    do
    {
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  PteShadow = *(_QWORD *)v4;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v4, *(_QWORD *)v4);
  v31 = PteShadow;
  v30 = MI_GET_PAGE_FRAME_FROM_PTE(&v31);
  LODWORD(v35[6]) = 4;
  v35[3] = &MiSystemPartition;
  result = MiGetPageTablePages((__int64)v35, a1, 1uLL);
  if ( (_DWORD)result )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( i > 1 )
        break;
    }
    v10 = v35[2];
    v33 = v35[2];
    *(_QWORD *)v35[2] = 0LL;
    v11 = (v10 + 0x58000000000LL) / 48;
    v12 = (__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v13 = *v12;
    if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      v13 = MiReadPteShadow(v12, *v12);
    ValidPte = v13;
    v14 = MI_GET_PAGE_FRAME_FROM_PTE(&ValidPte);
    v16 = -2147483644;
    v32 = v14;
    v17 = (PteShadow >> 8) & 1;
    if ( v17 && v3 == 1 )
      v16 = -1610612732;
    v34 = (__int64)((v4 << 25) - (v15 << 25)) >> 16;
    ValidPte = MiMakeValidPte(v34, v30, v16);
    v18 = ValidPte;
    v20 = MiMapPageInHyperSpaceWorker(v11, &v36, 0x80000000);
    v21 = v20;
    do
    {
      *(_QWORD *)v21 = v18;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v21, v18);
      v21 += 8LL;
      v18 ^= (v18 ^ ((v18 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      ValidPte = v18;
    }
    while ( (v21 & 0xFFF) != 0 );
    LOBYTE(v19) = v36;
    MiUnmapPageInHyperSpaceWorker(v20, v19, 0x80000000LL);
    v22 = -2080374780;
    if ( v38 == 1 )
      v22 = -2147483644;
    v23 = v22 | 0x20000000;
    if ( !v17 )
      v23 = v22;
    ValidPte = MiMakeValidPte(v4, v30, v23 | 0x8000000u);
    MiInitializePfnForOtherProcess(v11, v4, v32, 2560);
    v24 = v33;
    MiLockPageAtDpcInline(v33);
    *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = v11 & 0xFFFFFFFFFLL;
    ValidPte = (v25 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
    MI_INTERLOCKED_EXCHANGE_PTE(v4);
    v26 = v34;
    v27 = 48 * v30 - 0x58000000000LL;
    v28 = 512LL;
    do
    {
      MiLockPageAtDpcInline(v27);
      v29 = *(_QWORD *)(v27 + 40) & 0xFFFFFFF000000000uLL;
      *(_QWORD *)(v27 + 8) = v26;
      *(_QWORD *)(v27 + 40) = v25 | v29;
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v27 += 48LL;
      v26 += 8LL;
      --v28;
    }
    while ( v28 );
    MiInsertLargeTbFlushEntry(v37, v38, v4);
    if ( v38 == 1 )
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v30, v5 >> 12, 0, 1);
    return 1LL;
  }
  return result;
}
