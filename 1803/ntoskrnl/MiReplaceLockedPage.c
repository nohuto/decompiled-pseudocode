/*
 * XREFs of MiReplaceLockedPage @ 0x14025B7C8
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiCanPageMove @ 0x14000318C (MiCanPageMove.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  __int64 Page; // rax
  __int64 v11; // rbx
  ULONG_PTR v12; // rdi
  unsigned int v13; // eax
  int active; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int8 v19; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return 0LL;
  v19 = 17;
  v8 = (*(_QWORD *)(a2 + 40) >> 36) & 3LL;
  v9 = MiPageToNode((__int64)(a2 + 0x58000000000LL) / 48, 0);
  Page = MiGetPage(
           *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)),
           (v9 << byte_1403CB699) | ((_DWORD)v8 << byte_1403CB69A) | (unsigned int)((__int64)(a2 + 0x58000000000LL) / 48) & dword_1403CB6D8,
           0);
  if ( Page == -1 )
    return 0LL;
  v11 = 48 * Page - 0x58000000000LL;
  v12 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v19);
  if ( !v12 )
  {
LABEL_8:
    MiReleaseFreshPage(v11);
    return 0LL;
  }
  v13 = MiTbFlushType(a1);
  active = MiTradeActivePage(a2, v11, a3, v13, a4);
  LOBYTE(v17) = v19;
  if ( !active )
  {
    MiUnlockProtoPoolPage(v12, v17, v15, v16);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v12, v17, v15, v16);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetFreshPfnFromFreeList(a2);
  MiReleaseFreshPage(a2);
  return 1LL;
}
