/*
 * XREFs of MiFlushHyperSpace @ 0x140102EA4
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushCacheForAttributeChange @ 0x1400ED7F4 (MiFlushCacheForAttributeChange.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102A40 (MiDecrementAndInsertStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiAllocateHyperSpace @ 0x1402303F4 (MiAllocateHyperSpace.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v1; // rbx
  _KPROCESS *v2; // rdx
  int v3; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v4; // [rsp+24h] [rbp-D4h]
  __int64 v5; // [rsp+28h] [rbp-D0h]
  __int64 v6; // [rsp+30h] [rbp-C8h]
  __int64 v7; // [rsp+38h] [rbp-C0h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v5 = 20LL;
  v3 = 0;
  v4 = 1;
  v6 = 0LL;
  v7 = 0LL;
  MiInsertTbFlushEntry(&v3, v1, 64LL, 0);
  MiFlushTbList((__int64)&v3, v2);
  CurrentPrcb->HyperPte = (void *)v1;
}
