/*
 * XREFs of MiReplaceLockedPage @ 0x14021FEC0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiCanPageMove @ 0x1400CB2A0 (MiCanPageMove.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  __int64 Page; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int8 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return 0LL;
  v15 = 17;
  v8 = (*(_QWORD *)(a2 + 40) >> 36) & 3LL;
  v9 = MiPageToNode((a2 + 0x58000000000LL) / 48, 0LL);
  Page = MiGetPage(
           *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)),
           (v9 << byte_140388501) | ((_DWORD)v8 << byte_140388502) | (unsigned int)((a2 + 0x58000000000LL) / 48) & dword_140388540,
           0);
  if ( Page == -1 )
    return 0LL;
  v11 = 48 * Page - 0x58000000000LL;
  v12 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v15);
  if ( !v12 )
  {
LABEL_8:
    MiReleaseFreshPage(v11);
    return 0LL;
  }
  v13 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v11, a3, v13, a4) )
  {
    MiUnlockProtoPoolPage(v12, v15);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v12, v15);
  *(_QWORD *)(a2 + 16) = 0LL;
  MiSetFreshPfnFromFreeList(a2);
  MiReleaseFreshPage(a2);
  return 1LL;
}
