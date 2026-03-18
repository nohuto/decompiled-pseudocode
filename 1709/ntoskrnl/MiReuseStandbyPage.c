/*
 * XREFs of MiReuseStandbyPage @ 0x14022B5FC
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 */

_BOOL8 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  BOOL v2; // ebx
  char v3; // dl

  v2 = MiUnlinkPageFromList(a1, 0LL);
  MiRestoreTransitionPte(a1, 0);
  v3 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) = v3 & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 16) = 0LL;
  MiSetFreshPfnFromFreeList(a1);
  return v2;
}
