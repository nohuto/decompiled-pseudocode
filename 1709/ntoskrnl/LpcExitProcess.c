/*
 * XREFs of LpcExitProcess @ 0x1404FCC90
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1404FCCD4 (AlpcpCleanupProcessViews.c)
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
