/*
 * XREFs of MiTradeActivePage @ 0x140162634
 * Callers:
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiTradeActivePage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG_PTR v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  char v18; // al
  char v19; // al
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(BugCheckParameter2 + 32) != 1 )
    return 0LL;
  v8 = (a2 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x8000) != 0 )
    MiGetPagePrivilege(BugCheckParameter2, 0, 0LL);
  v9 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
  v12 = v10;
  if ( a5 == 2 )
  {
    if ( (v10 & 0x42) != 0 || v11 )
      return 0LL;
  }
  else
  {
    *v9 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
      MiWritePteShadow(v15, v14, v16);
    KeFlushSingleTb(a3, a4, a5);
  }
  v17 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  MiLockPageAtDpcInline(BugCheckParameter2);
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v17, 1u);
  MiCopyPfnEntry(a2, BugCheckParameter2);
  MiCopyPage(v8, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 35) = v18 & 0xF7;
  v19 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v19;
  *(_BYTE *)(BugCheckParameter2 + 34) = v19 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = ((v8 & 0xFFFFFFFFFLL) << 12) | v12 & 0xFFFF000000000FFFuLL;
  if ( a5 == 2 )
  {
    MiWriteValidPteNewPage((__int64)v9);
  }
  else
  {
    *v9 = v20;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
      MiWritePteShadow(v21, v20, v22);
  }
  KeFlushSingleTb(a3, a4, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    MiWriteValidPteNewPage(v23);
  }
  return 1LL;
}
