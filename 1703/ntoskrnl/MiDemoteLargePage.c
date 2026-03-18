/*
 * XREFs of MiDemoteLargePage @ 0x14015B698
 * Callers:
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiMarkPageActive @ 0x14010A760 (MiMarkPageActive.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDemoteLargePage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 ValidPte; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-31h]
  __int64 v19; // [rsp+40h] [rbp-29h]
  __int64 v20[15]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int8 v21; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+6Fh]
  unsigned __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = a2;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v24 = MI_READ_PTE_LOCK_FREE(v3);
  v20[4] = 4LL;
  v20[6] = 0LL;
  v20[2] = 0LL;
  v20[1] = (__int64)&MiSystemPartition;
  v20[3] = 0LL;
  v20[0] = 0xFFFFFFFFFLL;
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL;
  result = MiGetPageTablePages((__int64)v20, a1, 1uLL);
  if ( (_DWORD)result )
  {
    v6 = v20[0];
    v17 = v20[0];
    *(_QWORD *)v20[0] = 0LL;
    v7 = (v6 + 0x58000000000LL) / 48;
    v23 = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
    v19 = MiMapPageInHyperSpaceWorker(v7, &v21, 0x80000000);
    v8 = (_QWORD *)v19;
    v9 = (__int64)(v3 << 25) >> 16;
    ValidPte = MiMakeValidPte(v9, v4, -1610612732);
    v23 = ValidPte;
    do
    {
      *v8 = ValidPte;
      if ( (unsigned int)MiPteInShadowRange(v8) )
        MiWritePteShadow(v12);
      ++v8;
      ValidPte = (v11 ^ ((v11 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v11;
      v23 = ValidPte;
    }
    while ( ((unsigned __int16)v8 & 0xFFF) != 0 );
    v23 = MiMakeValidPte(v3, v4, -1476395004);
    MiInitializePfnForOtherProcess(v7, v3, -1LL, 0);
    *(_QWORD *)(v17 + 40) ^= (v18 ^ *(_QWORD *)(v17 + 40)) & 0xFFFFFFFFFLL;
    MiLockPageAtDpcInline(v17);
    *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiMarkPageActive(v20[0]);
    v13 = v7 & 0xFFFFFFFFFLL;
    v23 = (v13 << 12) | v23 & 0xFFFF000000000FFFuLL;
    MI_INTERLOCKED_EXCHANGE_PTE(v3, v23, v14);
    v15 = 48 * v4 - 0x58000000000LL;
    v16 = 512LL;
    do
    {
      MiLockPageAtDpcInline(v15);
      *(_QWORD *)(v15 + 40) = v13 | *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 += 48LL;
      --v16;
    }
    while ( v16 );
    MiUnmapPageInHyperSpaceWorker(v19, v21);
    MiInsertTbFlushEntry(v22, a1 & 0xFFFFFFFFFFE00000uLL, 1LL, 1);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v4, 0x200uLL, 0, 1);
    MiInsertTbFlushEntry(v22, v9, 1LL, 0);
    return 1LL;
  }
  return result;
}
