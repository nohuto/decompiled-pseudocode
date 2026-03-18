/*
 * XREFs of MiTradeTransitionPage @ 0x1400CB06C
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 * Callees:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiCanPageMove @ 0x1400CB2A0 (MiCanPageMove.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiTradeTransitionPage(__int64 a1, unsigned __int8 a2, unsigned int *a3, __int64 a4, __int64 *a5)
{
  unsigned __int8 v5; // r10
  int v8; // r11d
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned int v11; // r8d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 Page; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned __int8 v19; // r13
  unsigned int v20; // edi
  __int64 v21; // [rsp+50h] [rbp+8h]

  v5 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_3:
    __writecr8(v5);
    return 0LL;
  }
  if ( !(unsigned int)MiCanPageMove(a1) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v21 = v9;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v5);
  v10 = (a1 + 0x58000000000LL) / 48;
  if ( v8 == -1 )
  {
    v14 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v15 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL);
    v11 = 32;
    v13 = v15 << byte_140388501;
    v12 = v10 & dword_140388540 | ((_DWORD)v14 << byte_140388502);
  }
  else
  {
    v11 = 16;
    v12 = v8 & ~dword_140388540;
    v13 = v10 & dword_140388540;
  }
  Page = MiGetPage(v9, v13 | (unsigned int)v12, v11);
  v17 = Page;
  if ( Page == -1 )
    return 1LL;
  v18 = 48 * Page - 0x58000000000LL;
  v19 = MiLockPageInline(a1);
  if ( v18 == a1 )
  {
    v17 = -1LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)MiIsPfnInline((a1 + 0x58000000000LL) / 48)
    || (unsigned int)MiIsPfnFileOnly(a1) == 1
    || *(_WORD *)(a1 + 32)
    || v21 != *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiCanPageMove(a1) )
  {
    v20 = 0;
    goto LABEL_20;
  }
  v20 = 2;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) > 2u )
  {
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v19);
    MiReleaseFreshPage(v18);
    return v20;
  }
  MiReplaceTransitionPage(a1, v18, a3);
LABEL_22:
  *(_QWORD *)(a1 + 16) = 0LL;
  MiSetOriginalPtePfnFromFreeList(a1 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v19);
  if ( a5 )
    *a5 = v17;
  return 3LL;
}
