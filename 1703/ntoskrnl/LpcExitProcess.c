/*
 * XREFs of LpcExitProcess @ 0x140498C20
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140018950 (PsReturnProcessPagedPoolQuota.c)
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
