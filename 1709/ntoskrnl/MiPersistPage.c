/*
 * XREFs of MiPersistPage @ 0x140223640
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140222DFC (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x140223474 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x140223610 (MiPersistMemory.c)
 */

unsigned __int64 __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v4, 0x80000000);
  MiPersistMemory(v1, 4096LL);
  LOBYTE(v2) = v4;
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000LL);
}
