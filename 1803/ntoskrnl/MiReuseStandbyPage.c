/*
 * XREFs of MiReuseStandbyPage @ 0x140266478
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // ebx
  char v3; // dl
  char v4; // al
  char v5; // dl

  v2 = MiUnlinkPageFromList(BugCheckParameter2, 0LL);
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  v3 = *(_BYTE *)(BugCheckParameter2 + 34);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  v5 = v3 & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v5 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) = v4 & 0xDF;
  *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
  MiSetFreshPfnFromFreeList(BugCheckParameter2);
  return v2;
}
