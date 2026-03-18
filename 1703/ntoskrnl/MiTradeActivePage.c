/*
 * XREFs of MiTradeActivePage @ 0x140027F94
 * Callers:
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v8 = (a2 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x8000) != 0 )
    MiGetPagePrivilege(a1, 0LL, 0LL);
  v9 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE(v9);
  v12 = v10;
  if ( a5 == 2 )
  {
    if ( (v10 & 0x42) != 0 || v11 )
      return 0LL;
  }
  else
  {
    *v9 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiPteInShadowRange(v9) )
      MiWritePteShadow(v14);
    KeFlushSingleTb(a3, a4, a5);
  }
  v15 = *(unsigned __int8 *)(a1 + 34) >> 6;
  MiLockPageAtDpcInline(a1);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v15, 1LL);
  MiCopyPfnEntry(a2, a1);
  MiCopyPage(v8, (a1 + 0x58000000000LL) / 48, 0LL, 6LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_BYTE *)(a1 + 35) &= ~8u;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = (v8 & 0xFFFFFFFFFLL) << 12;
  v17 = v16 | v12 & 0xFFFF000000000FFFuLL;
  if ( a5 == 2 )
  {
    MiWriteValidPteNewPage(v9, v17);
  }
  else
  {
    *v9 = v17;
    if ( (unsigned int)MiPteInShadowRange(v9) )
      MiWritePteShadow(v18);
  }
  KeFlushSingleTb(a3, a4, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v19 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    MiWriteValidPteNewPage(v20, v16 | v19 & 0xFFFF000000000FFFuLL);
  }
  return 1LL;
}
