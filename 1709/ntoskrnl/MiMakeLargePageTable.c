/*
 * XREFs of MiMakeLargePageTable @ 0x1400C46E8
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiDemotePfnListChain @ 0x14022E394 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(
        unsigned __int64 a1,
        char a2,
        unsigned __int64 *a3,
        unsigned int a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned int v10; // r10d
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  _BOOL8 v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v21; // rbx
  __int64 result; // rax
  __int64 ContainingPageTable; // [rsp+20h] [rbp-38h]

  v6 = a5;
  v8 = a1;
  if ( (*(_DWORD *)(a5 + 52) & 0x80u) == 0 || a4 - 1 > 1 )
    return 0LL;
  if ( a1 == a3[2 * a4] )
  {
    v9 = *a3;
    v10 = a4;
    while ( (v9 & 0xFFF) == 0 )
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( !--v10 )
        goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  if ( v8 == a3[2 * a4 + 1] )
  {
    v11 = a3[1];
    v12 = a4;
    while ( ((v11 + 8) & 0xFFF) == 0 )
    {
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( !--v12 )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v13 = a4 != 2;
  v14 = *(_QWORD **)(a5 + 8 * v13);
  if ( !v14 )
  {
    if ( a4 == 2 )
      return 0LL;
    MiDemotePfnListChain(a5, a4 != 2, a3);
    v14 = *(_QWORD **)(a5 + 8 * v13);
    if ( !v14 )
      return 0LL;
  }
  *(_QWORD *)(a5 + 8 * v13) = *v14;
  v15 = (__int64)(v14 + 0xB000000000LL) / 48;
  ContainingPageTable = MiGetContainingPageTable(v8);
  v17 = v16 + 48 * ContainingPageTable;
  MiLockPageAtDpcInline(v17);
  *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = MiLargePageSizes[v13];
  if ( v18 )
  {
    v19 = MiLargePageSizes[v13];
    do
    {
      *v14 = 0LL;
      MiInitializePfnForOtherProcess(v15++, v8, ContainingPageTable, 3600);
      v14 += 6;
      --v19;
    }
    while ( v19 );
    v6 = a5;
  }
  ValidPte = MiMakeValidPte(v8, v15 - v18, -2080374780);
  if ( (a2 & 1) != 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v8);
    v21 = 1LL;
    do
    {
      v8 = (__int64)(v8 << 25) >> 16;
      MiInsertTbFlushEntry(a6, v8, v21, 0);
      v21 <<= 9;
    }
    while ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL );
  }
  else
  {
    *(_QWORD *)v8 = ValidPte;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v8, ValidPte);
  }
  result = 1LL;
  *(_QWORD *)(v6 + 40) += MiLargePageSizes[v13];
  return result;
}
