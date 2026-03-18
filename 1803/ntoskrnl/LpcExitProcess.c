/*
 * XREFs of LpcExitProcess @ 0x140511A70
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EF7F0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x140511AB4 (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[2].Affinity.Bitmap[12] )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[2].Affinity.Bitmap[12]);
    a1[2].Affinity.Bitmap[12] = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
