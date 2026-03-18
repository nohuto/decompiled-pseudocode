/*
 * XREFs of MiObtainTransitionPage @ 0x140074E48
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiCanPageMove @ 0x14007507C (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiObtainTransitionPage(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned __int8 v5; // r10
  int v8; // r11d
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 Page; // rax
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22; // r12
  unsigned int v23; // edi

  v5 = a2;
  if ( *(_WORD *)(a1 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_3:
    __writecr8(v5);
    return 0LL;
  }
  if ( !(unsigned int)((__int64 (*)(void))MiCanPageMove)() )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v5);
  v10 = (a1 + 0x58000000000LL) / 48;
  if ( v8 == -1 )
  {
    v14 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v15 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0LL);
    v11 = 32LL;
    v13 = v15 << byte_14036C1B9;
    v12 = v10 & dword_14036C1F8 | ((_DWORD)v14 << byte_14036C1BA);
  }
  else
  {
    v11 = 16LL;
    v12 = v8 & ~dword_14036C1F8;
    v13 = v10 & dword_14036C1F8;
  }
  Page = MiGetPage(v9, v13 | (unsigned int)v12, v11);
  v17 = Page;
  if ( Page == -1 )
    return 1LL;
  v18 = 48 * Page - 0x58000000000LL;
  v22 = MiLockPageInline(a1);
  if ( v18 == a1 )
  {
    v17 = -1LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)MiIsPfnInline((a1 + 0x58000000000LL) / 48, v19, v20, v21)
    || (unsigned int)MiIsPfnFileOnly(a1) == 1
    || *(_WORD *)(a1 + 32)
    || v9 != *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiCanPageMove(a1) )
  {
    v23 = 0;
    goto LABEL_20;
  }
  v23 = 2;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) > 2u )
  {
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v22);
    MiReleaseFreshPage(v18);
    return v23;
  }
  MiReplaceTransitionPage(a1, v18, a3);
LABEL_22:
  *(_QWORD *)(a1 + 16) = 0LL;
  MiSetOriginalPtePfnFromFreeList(a1 + 16, v19, v20);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v22);
  if ( a5 )
    *a5 = v17;
  return 3LL;
}
