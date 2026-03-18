/*
 * XREFs of MiTradeActivePage @ 0x1400CDE24
 * Callers:
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  ULONG_PTR v8; // r14
  BOOL v9; // r9d
  unsigned __int64 *v10; // rsi
  __int64 PteShadow; // rbx
  unsigned __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 *v17; // r9
  __int64 v18; // rax

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v8 = (a2 + 0x58000000000LL) / 48;
  v9 = (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 0, 0LL);
  v10 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v10;
  if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v10);
  if ( a5 == 2 )
  {
    if ( (PteShadow & 0x42) != 0 || v9 )
      return 0LL;
  }
  else
  {
    v13 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    *v10 = v13;
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v13);
    KeFlushSingleTb(a3, a4, a5);
  }
  v14 = *(unsigned __int8 *)(a1 + 34) >> 6;
  MiLockPageAtDpcInline(a1);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v14, 1u);
  MiCopyPfnEntry(a2, a1);
  MiCopyPage(v8, (a1 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a1 + 35) &= ~8u;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = (v8 & 0xFFFFFFFFFLL) << 12;
  v16 = v15 | PteShadow & 0xFFFF000000000FFFuLL;
  if ( a5 == 2 )
  {
    MiWriteValidPteNewPage(v10, v16);
  }
  else
  {
    *v10 = v16;
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v10, v16);
  }
  KeFlushSingleTb(a3, a4, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v17 = (unsigned __int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    v18 = *v17;
    if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      v18 = MiReadPteShadow(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, *v17);
    MiWriteValidPteNewPage(v17, v15 | v18 & 0xFFFF000000000FFFuLL);
  }
  return 1LL;
}
