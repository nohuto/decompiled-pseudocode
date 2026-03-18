/*
 * XREFs of MiTradeTransitionPage @ 0x140002F48
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 * Callees:
 *     MiCanPageMove @ 0x14000318C (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiTradeTransitionPage(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  unsigned __int64 v6; // r10
  int v9; // r11d
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rdi
  int v15; // eax
  __int64 Page; // rax
  __int64 v17; // r14
  __int64 v18; // rbp
  unsigned __int8 v19; // r12
  int IsPfnInline; // eax
  unsigned int v21; // r10d
  unsigned int v22; // edi

  v6 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_3:
    __writecr8(v6);
    return 0LL;
  }
  if ( !(unsigned int)((__int64 (*)(void))MiCanPageMove)() )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  v11 = (a1 + 0x58000000000LL) / 48;
  if ( v9 == -1 )
  {
    v14 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v15 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL);
    v12 = 128LL;
    v13 = (v15 << byte_1403CB699) | v11 & dword_1403CB6D8 | ((_DWORD)v14 << byte_1403CB69A);
    if ( (a5 & 0x3000000) != 0 )
      v12 = 65664LL;
  }
  else
  {
    v12 = 48LL;
    v13 = v11 & dword_1403CB6D8 | v9 & ~dword_1403CB6D8;
  }
  Page = MiGetPage(v10, v13, v12);
  v17 = Page;
  if ( Page == -1 )
    return 1LL;
  v18 = 48 * Page - 0x58000000000LL;
  v19 = MiLockPageInline(a1);
  if ( v18 == a1 )
  {
    v17 = -1LL;
    goto LABEL_23;
  }
  IsPfnInline = MiIsPfnInline((a1 + 0x58000000000LL) / 48);
  v21 = 0;
  if ( !IsPfnInline
    || (unsigned int)MiIsPfnFileOnly(a1) == 1
    || *(_WORD *)(a1 + 32) != (_WORD)v21
    || v10 != *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiCanPageMove(a1) )
  {
    v22 = v21;
    goto LABEL_21;
  }
  v22 = v21 + 2;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - (v21 + 2)) > (unsigned __int8)(v21 + 2) )
  {
LABEL_21:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v19);
    MiReleaseFreshPage(v18);
    return v22;
  }
  MiReplaceTransitionPage(a1, v18, a3);
LABEL_23:
  *(_QWORD *)(a1 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList(a1 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v19);
  if ( a6 )
    *a6 = v17;
  return 3LL;
}
