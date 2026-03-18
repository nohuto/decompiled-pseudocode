/*
 * XREFs of MiReuseStandbyPage @ 0x14021FCFC
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 */

_BOOL8 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  BOOL v2; // ebx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = MiUnlinkPageFromList(a1, 0);
  MiRestoreTransitionPte(a1, 0);
  v3 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 16) = 0LL;
  LOBYTE(v4) = v3 & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = v4;
  MiSetFreshPfnFromFreeList(a1, v4, v5);
  return v2;
}
