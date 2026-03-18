/*
 * XREFs of MiReplaceLockedPage @ 0x14021670C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiCanPageMove @ 0x14007507C (MiCanPageMove.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  __int64 Page; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int8 v17; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return 0LL;
  v17 = 17;
  v8 = (*(_QWORD *)(a2 + 40) >> 36) & 3LL;
  v9 = MiPageToNode((a2 + 0x58000000000LL) / 48, 0LL);
  Page = MiGetPage(
           *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)),
           (v9 << byte_14036C1B9) | ((_DWORD)v8 << byte_14036C1BA) | (unsigned int)((a2 + 0x58000000000LL) / 48) & dword_14036C1F8,
           0);
  if ( Page == -1 )
    return 0LL;
  v11 = 48 * Page - 0x58000000000LL;
  v12 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v17);
  if ( !v12 )
  {
LABEL_8:
    MiReleaseFreshPage(v11);
    return 0LL;
  }
  v13 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v11, a3, v13, a4) )
  {
    MiUnlockProtoPoolPage(v12, v17);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v12, v17);
  *(_QWORD *)(a2 + 16) = 0LL;
  MiSetFreshPfnFromFreeList(a2, v15, v16);
  MiReleaseFreshPage(a2);
  return 1LL;
}
