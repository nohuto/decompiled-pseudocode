/*
 * XREFs of MiFlushHyperSpace @ 0x1400B9164
 * Callers:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheForAttributeChange @ 0x1400CF57C (MiFlushCacheForAttributeChange.c)
 *     MiAllocateHyperSpace @ 0x1401406F0 (MiAllocateHyperSpace.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
  MiInsertTbFlushEntry((__int64)&v3, v1, 64LL, 0);
  result = MiFlushTbList(&v3);
  CurrentPrcb->HyperPte = (void *)v1;
  return result;
}
