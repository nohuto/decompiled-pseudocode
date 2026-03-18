/*
 * XREFs of MiFlushHyperSpace @ 0x14000C0C4
 * Callers:
 *     MiAllocateHyperSpace @ 0x14000BC08 (MiAllocateHyperSpace.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14000BC90 (MiDecrementAndInsertStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushCacheForAttributeChange @ 0x140103734 (MiFlushCacheForAttributeChange.c)
 *     MiConfirmPageIsZero @ 0x1401041F0 (MiConfirmPageIsZero.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 * Callees:
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v1; // rbx
  __int64 result; // rax
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
  MiInsertTbFlushEntry(&v3, v1, 64LL, 0LL);
  result = MiFlushTbList(&v3);
  CurrentPrcb->HyperPte = (void *)v1;
  return result;
}
