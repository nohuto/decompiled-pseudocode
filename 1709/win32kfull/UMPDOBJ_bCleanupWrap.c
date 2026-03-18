/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C00B8F50
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00B8AE0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00B9FFC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
